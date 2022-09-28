#include<stdio.h>
#include<math.h>
void scan(int noq, int qu[10], int st, int ch) 
{
int i,j,s=0; 
for(i=0;i<noq;i++) 
{
if(st < qu[i])
{ 
for(j=i-1; j>= 0;j--) 
 { 
 s=s+abs(st - qu[j]); 
 st = qu[j]; 
 } 
if(ch == 3) 
 { 
 s = s + abs(st - 0); 
 st = 0; 
 } 
for(j = 1;j < noq;j++) 
 { 
 s= s + abs(st - qu[j]); 
 st = qu[j]; 
 } 
 break; 
 } }
printf("\n Total seek time : %d",s); 
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
printf("\n\n\t\t 1. SCAN \n"); 
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
case 1: printf("\n SCAN \n"); 
 printf("\n*****\n"); 
scan(noq,qu,st,ch); 
 break; 
case 2: exit(0); 
} } }
