#include<stdio.h>
#include<math.h>

void sstf(int noq, int qu[10], int st, int visit[10])
 { 
int min,s=0,p,i; 
while(1)
 { 
 min=999; 
for(i=0;i<noq;i++) 
 if (visit[i] == 0) 
 { 
if(min > abs(st - qu[i])) 
 { 
 min = abs(st-qu[i]); 
 p = i; 
 } 
 } 
if(min == 999) 
 break; 
visit[p]=1;
 s=s + min; 
 st = qu[p];
 } 
printf("\n Total seek time is: %d",s); 
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
printf("\n\n\t\t 1. SSTF \n"); 
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
case 1: printf("\n SSTF \n"); 
 printf("\n*****\n"); 
sstf(noq,qu,st,visit); 
 break; 
case 2: 
break; 
} } }
