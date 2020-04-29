#ifndef _QUEUE_H
#define _QUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#ifndef BUFFER_MAX
#define BUFFER_MAX 256
#endif

#define MSG_LENGTH 20

struct msg_node{
    char message[MSG_LENGTH];
    struct msg_node *prev, *next;
};

struct queue_state{
    struct msg_node *front, *back;
    struct msg_node *buffer;
    int cnt;
};

void init_queue(struct queue_state *state);
void insert(const char message[], struct queue_state *state);
void pop(struct queue_state *state);

int size(const struct queue_state *state);
char* front(const struct queue_state *state);
bool empty(const struct queue_state *state);

#endif
