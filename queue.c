#include "queue.h"

void destroy_msg_node(struct msg_node *state){
    free(state);
}

struct msg_node* create_msg_node(const char message[]){
    struct msg_node* new_node = (struct msg_node*) malloc(sizeof(struct queue_state));
    new_node->prev = new_node->next = NULL;
    strcpy(new_node->message, message);
    return new_node;
}

void init_queue(struct queue_state *state){
    state->buffer = state->front = state->back = NULL;
    state->cnt = 0;
}

void insert(const char message[], struct queue_state *state){
    if(empty(state)){
        state->buffer = create_msg_node(message);
        state->front = state->buffer;
        state->back = state->buffer;
    }
    else{
        state->back->next = create_msg_node(message);
        state->back->next->prev = state->back;
        state->back = state->back->next;
    }
    state->cnt++;
}

void pop(struct queue_state *state){
    if(!empty(state)){
        struct msg_node *front_msg = state->front;
        struct msg_node *next_msg = front_msg->next;

        if(next_msg == NULL){
            state->buffer = NULL;
            state->back = NULL;
            state->front = NULL;
        }
        else{
            state->buffer = next_msg;
            state->front = state->buffer;
            next_msg->prev = NULL;
        }
        destroy_msg_node(front_msg);
        state->cnt--;
    }
}

int size(const struct queue_state *state){
    return state->cnt;
}

char* front(const struct queue_state *state){
    return state->front->message;
}

bool empty(const struct queue_state *state){
    return state->cnt == 0;
}

