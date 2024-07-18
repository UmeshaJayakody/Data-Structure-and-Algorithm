#include <vector>
#include <iostream>
#include <climits>
using namespace std;

struct Edge {
  int u;  
  int v;  
  int w;  
};
struct Graph {
  int V;       
  int E;        
  struct Edge* edge;
};

struct Graph* createGraph(int V, int E) {
  struct Graph* graph = new Graph;
  graph->V = V;  
  graph->E = E; 
  graph->edge = new Edge[E];
  return graph;
}

void printArr(vector<int> array) {
    for (int i=0;i<array.size();i++) {	   
     cout<<0<<"-->"<<i<<" = "<<array[i]<<endl;
  }
}

void BellmanFord(struct Graph* graph, int u) {
  int V = graph->V;
  int E = graph->E;
  vector <int> dist;

  for (int i = 0; i < V; i++){
    dist.push_back(INT_MAX);
  }
  dist[u] = 0;
int flag;
  for (int i = 1; i <= V - 1; i++) {
    if (flag==0){break;}
    flag =0;
    for (int j = 0; j < E; j++) {
      int u = graph->edge[j].u;
      int v = graph->edge[j].v;
      int w = graph->edge[j].w;
      if (dist[u] != INT_MAX && dist[u] + w < dist[v]){
        dist[v] = dist[u] + w;
        flag=1;
        }
    }
  }
  for (int i = 0; i < E; i++) {
    int u = graph->edge[i].u;
    int v = graph->edge[i].v;
    int w = graph->edge[i].w;
    if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
      printf("Graph contains negative weigh cycle");
      return;
    }
}
    printArr(dist);
    
    return;
}

int main() {
  int V = 6;  
  int E = 9;  
  struct Graph* graph = createGraph(V, E);
  graph->edge[0].u = 0;
  graph->edge[0].v = 1;
  graph->edge[0].w = 6;

  graph->edge[1].u = 0;
  graph->edge[1].v = 2;
  graph->edge[1].w = 4;

  graph->edge[2].u = 0;
  graph->edge[2].v = 3;
  graph->edge[2].w = 5;

  graph->edge[3].u = 1;
  graph->edge[3].v = 4;
  graph->edge[3].w = -1;

  graph->edge[4].u = 2;
  graph->edge[4].v = 1;
  graph->edge[4].w = -2;

  graph->edge[5].u = 2;
  graph->edge[5].v = 4;
  graph->edge[5].w = 3;

  graph->edge[6].u = 3;
  graph->edge[6].v = 2;
  graph->edge[6].w = -2;

  graph->edge[7].u = 3;
  graph->edge[7].v = 5;
  graph->edge[7].w = -1;

  graph->edge[8].u = 4;
  graph->edge[8].v = 5;
  graph->edge[8].w = 3;

  BellmanFord(graph, 0);  

  return 0;
}