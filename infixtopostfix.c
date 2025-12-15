#include<stdio.h>
#include<string.h>
#define size 10
int top=-1;
char st[size];
void push(char val){
if(top==size-1){
printf("OVERFLOW\n");
return;
}
top++;
st[top]=val;
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
char sTop(){
return st[top];
}
int empty(){
if(top==-1) return 1;
return 0;
}
int priority(char op){
if(op=='^') return 3;
if(op=='*' || op=='/') return 2;
if(op=='+' || op=='-') return 1;
return 0;
}
int main(){
char post[100];char In[100];
scanf("%s",In);
int i=0,n=strlen(In),j=0;
while(i<n){
if((In[i]>='A' && In[i]<='Z') || (In[i]>='a' && In[i]<='z')){

9| P a g e
post[j]=In[i];
j++;
}else if(In[i]=='(') {
push('(');
}else if(In[i]==')'){
while(!empty() && sTop()!='('){
post[j]=sTop();
j++;
pop();
}
pop();
}else{
while(!empty() && priority(sTop())>=priority(In[i])){
post[j]=sTop();
j++;
pop();
}
push(In[i]);
}
i++;
}
while(!empty()){
post[j]=sTop();
j++;
pop();
}
post[j]='\0';
j=0;
while(post[j]!='\0') {
printf("%c",post[j]);
j++;
}
}
