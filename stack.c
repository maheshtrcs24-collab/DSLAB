#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int val){
if(top==size-1){
printf("OVERFLOW\n");
return;
}
top++;
stack[top]=val;
return;
}
void pop(){
if(top==-1){
printf("UNDERFLOW\n");
return;
}
top--;
return;
}
void display(){
int temp=top;
if(temp==-1){
printf("Empty stack\n");
return;
}
printf("STACK\n");
while(temp>=0){
printf("%d\n",stack[temp]);
temp--;
}
}
int main(){
while(1){

6| P a g e
printf("Enter choice\n");
printf("1.push()\n");
printf("2.pop()\n");
printf("3.display()\n");
printf("4.exit\n");
int ip;
int val;
scanf("%d",&ip);
if(ip==1){
printf("Enter value:");
scanf("%d",&val);
push(val);
}
else if(ip==2) pop();
else if(ip==3) display();
else if(ip==4) break;
else printf("Check input\n");

}
}
