#include<stdio.h>
#include<math.h>
void fcfs(int noq, int qu[10], int st)
 { 
int i,s=0; 
for(i=0;i<noq;i++) 
{ 
s=s+abs(st-qu[i]); st=qu[i]; 
 } 
printf("\n Total seek time :%d",s);
 } 

int main()
 { 
 int n,qu[20],st,i,j,t,noq,ch,visit[20]; 
printf("\n Enter the maximum number of cylinders : "); 
scanf("%d",&n); 
printf("enter number of queue elements"); 
scanf("%d",&noq); 
printf("\n Enter the work queue"); 
for(i=0;i<noq;i++) 
 { 
scanf("%d",&qu[i]); 
 visit[i] = 0; 
 }
printf("\n Enter the disk head starting posision: \n"); 
scanf("%d",&st); 
while(1) 
{
printf("\n\n\t\t MENU \n"); 
printf("\n\n\t\t 1. FCFS \n"); 
printf("\n\n\t\t 2. EXIT \n"); 
printf("\nEnter your choice: "); 
scanf("%d",&ch);
if(ch > 2)
{ 
for(i=0;i<noq;i++) 
for(j=i+1;j<noq;j++) 
 if(qu[i]>qu[j]) 
 { 
 t=qu[i]; 
qu[i] = qu[j]; 
 qu[j] = t; 
 } } 
 switch(ch) 
 {
case 1: printf("\n FCFS \n"); 
 printf("\n*****\n"); 
fcfs(noq,qu,st); 
 break; 
case 2: 
break; 
} } }
