#include "queue.h"

int main(){
    struct queue_state Q;
    init_queue(&Q);
    
    char msg[20];
    strcpy(msg, "a                    ");
    for(int i = 0; i < 5; i++){
        insert(msg, &Q);
        msg[0] = msg[0] + 1;

        printf("size %d, front: %s\n", size(&Q), front(&Q));
    }
    
    for(int i = 0; i < 5; i++){
        printf("size %d, front: %s\n", size(&Q), front(&Q));
        pop(&Q);
    }
        printf("size %d, front: %s\n", size(&Q), front(&Q));
}
