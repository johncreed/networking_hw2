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

struct queue_state{
    int front;
    int back;
    int count;
};

/*struct msg BUFFER[BUFFER_MAX];
int que_size();
void insert(struct msg message);
struct msg peek();
void pop();*/

bool isFULL(struct queue_state state);
#endif
