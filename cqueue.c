#include<stdio.h>
#include<string.h>
#define MAX_SIZE 5
int circularQueue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue() {
int element;
if((front == 0 && rear == MAX_SIZE - 1) || (front == rear +
1)) {
printf("Queue Overflow\n");
return;
}
scanf("%d", &element);
if(front == -1) {
front = rear = 0;
} else if(rear == MAX_SIZE - 1) {
rear = 0;
} else {
rear++;
}
circularQueue[rear] = element;
printf("Enqueued\n");
}
void dequeue() {
if(front == -1) {
printf("Queue Empty\n");
return;
}
printf("Dequeued %d\n", circularQueue[front]);
if(front == rear) {
front = rear = -1;
} else if(front == MAX_SIZE - 1) {
front = 0;
} else {
front++;

13| P a g e
}
}
void show() {
if(front == -1) {
printf("Queue Empty\n");
return;
}
int i = front;
while(1) {
printf("%d\n", circularQueue[i]);
if(i == rear) break;
i = (i + 1) % MAX_SIZE;
}
}
int main() {
char command[10];
while(1) {
scanf("%s", command);
if(strcmp(command, "insert") == 0) enqueue();
else if(strcmp(command, "delete") == 0) dequeue();
else if(strcmp(command, "display") == 0) show();
else {
printf("Invalid command\n");
}
}
return 0;
}
