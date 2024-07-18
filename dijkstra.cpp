#include<iostream>
#include <vector>
#define INF 9999
#define N 9
using namespace std;


void dijkstra(int graph [N][N],int start){
    vector<bool> visited(N, false);
    vector<int> distance(N, INF);
    distance[start]=0;
    visited[start]=true;
    int j=start;
    for(int k=0;k<N-1;k++){
        for(int n=0;n<N;n++){
            if(distance[j]+graph[j][n]<distance[n] && visited[n]==false){
                distance[n]=graph[j][n]+distance[j];
            }
        }
    int v;
    int min =INF;
    for(int m=0;m<N;m++){
        if(distance[m]<min && visited[m]==false){
            min = distance[m];
            v=m;
        }
    }
    j=v;
    visited[j]=true;
    }
    for(int i=0;i<N;i++){
        cout<<start<<"-->"<<i<<" = "<<distance[i]<<endl;
    }
}

int main(){
    int graph[N][N]={   {INF,  4,INF,INF,  8,INF,INF,INF,INF},
                        {  4,INF,  8,INF, 11,INF,INF,INF,INF},
                        {INF,  8,INF,  7,INF,INF,  4,INF,  2},
                        {INF,INF,  7,INF,INF,INF, 14,  9,INF},
                        {  8, 11,INF,INF,INF,  1,INF,INF,  7},
                        {INF,INF,INF,INF,  1,INF,  2,INF,  6},
                        {INF,INF,  4, 14,INF,  2,INF, 10,INF},
                        {INF,INF,INF,  9,INF,INF, 10,INF,INF},
                        {INF,INF,  2,INF,  7,  6,INF,INF,INF}};
    dijkstra(graph,0);
    return 0;
}