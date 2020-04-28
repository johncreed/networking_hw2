#include "queue.h"

bool isFULL(struct queue_state state){
    return state.count == BUFFER_MAX;
}
/*
int que_size(){
    return CNT;
}

void insert(char *){}

struct msg peek(){
    return BUFFER[FRONT];
}

void pop(){
    if(que_size() > 0){
        FRONT = (FRONT++) % BUFFER_MAX;
        CNT--;
    }
}
*/
