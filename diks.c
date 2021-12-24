#include<stdio.h>
#define INFINITY 9999
#define MAX 100
void dijkstra(int c[MAX][MAX],int n,int startnode);
int main(){
int n;
int c[100][100];
printf("Enter the no. of vertices:");
scanf("%d",&n);
printf("Enter the adjacency matrix:\n");
int i,j,u;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
scanf("%d",&c[i][j]);
}
}
printf("Enter the Starting node:");
scanf("%d",&u);
dijkstra(c,n,u);
return 0;
}
void dijkstra(int c[100][100],int n,int startnode){
int cost[100][100],distance[100],pred[100];
int visitdist[100],count,mindist,nextnode,i,j;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(c[i][j]==0)
cost[i][j]=INFINITY;
else
cost[i][j]=c[i][j];
for(i=0;i<n;i++){
distance[i]=cost[startnode][i];
pred[i]=startnode;
visitdist[i]=0;
}
distance[startnode]=0;
visitdist[startnode]=1;
count = 1;
while(count<n-1){
mindist=INFINITY;
for(i=0;i<n;i++)
if(distance[i]<mindist &&! visitdist[i]){
mindist=distance[i];
nextnode =i;
}
visitdist[nextnode]=1;
for(i=0;i<n;i++)
if(!visitdist[i])
if(mindist+cost[nextnode][i]<distance[i]){
distance[i]=mindist+cost[nextnode][i];
pred[i]=nextnode;
}
count++;
}
for(i=0;i<n;i++)
if(i!=startnode){
printf("\nDistance of node %d=%d",i,distance[i]);
printf("\nPath=%d",i);
j=i;
do{
j=pred[j];
printf("<<-%d",j);
}
while(j!=startnode);
}
}

