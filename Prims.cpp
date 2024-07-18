#include<iostream>
#define N 6
#define INF 99999
using namespace std;
int main(){
    int Graph [N][N]={  {INF,7  ,  8,INF,INF,INF},
                        {7  ,INF,  3,  6,INF,INF},
                        {8  ,  3,INF,  4,  3,INF},
                        {INF,6  ,  4,INF,  2,  5},
                        {INF,INF,  3,  2,INF,  2},
                        {INF,INF,INF,  5,  2,INF}};
    bool Visited[6]={false,false,false,false,false,false};
    Visited[0]=true;
    int cost =0;
    for(int n=0;n<N-1;n++){
        int min=INF;
        int a=-1;
        int b=-1;
        for(int i=0;i<N;i++){
        if(Visited[i]==true){
            for(int j=0;j<N;j++){
                if(min>Graph[i][j] && Visited[j]==false){
                    min =Graph[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        }
        Visited[b]=true;
        cost+=min;
        cout<<"Point "<<a<<" --"<<"cost "<<min<<"--> "<<"Point "<<b<<endl;
    }
    cout<<"Cost of Minimum spanning tree : "<<cost<<endl;
    return 0;
}