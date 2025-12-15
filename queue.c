#include<stdio.h>
#include<string.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1, rear = -1;
void enqueue() {
int element;
if(rear == MAX_SIZE - 1) {
printf("Queue Overflow\n");
return;
}
scanf("%d", &element);
if(front == -1) front = 0;
queue[++rear] = element;
printf("Enqueued\n");
}
void dequeue() {
if(front == -1 || front > rear) {
printf("Queue Empty\n");
return;
}
printf("Dequeued %d\n", queue[front++]);
}
void show() {
if(front == -1 || front > rear) {
printf("Queue Empty\n");
return;
}
for(int i = front; i <= rear; i++)
printf("%d\n", queue[i]);
}
int main() {
char command[10];
while(1) {

11| P a g e
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
