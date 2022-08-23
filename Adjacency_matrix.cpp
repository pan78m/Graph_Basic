#include<stdio.h>
#include<iostream>
using namespace std;
int a[10][10];
int main(){
  
    freopen("input.txt","r",stdin);
    int edges,node;
    scanf("%d %d",&node,&edges);
    int n1,n2;
    for (int i = 0; i <edges; i++)
    {
         scanf("%d %d",&n1,&n2);
        a[n1][n2]=1;
        a[n2][n1]=1;
    }
    /*
    5
    5 6
    0 1
    0 2
    1 2
    1 3
    1 4
    3 4
    */
    for (int i = 0; i <node; i++)
    {
        for (int j = 0; j <node; j++)
        {
          
             cout<<a[i][j]<<" ";
        }
        printf("\n");
    }
    
    return 0;

}