#include <stdio.h>
#include <limits.h>
#include <iostream>
using std::cout;
using std::endl;
#define V 10

//I tried SO hard not to include this, but I have no idea how to print 
//the tree. 
//Find vertex with any min value, from a set of nodes not in the MST. 
int minKey(int key[], bool mstSet[]){

    // Initialize min value/Max
    int min = INT_MAX, min_index;
 
    //find smallest in set
    for (int v = 0; v < V; v++){
        if (mstSet[v] == false && key[v] < min){
        min = key[v], min_index = v;
        }
    }

    return min_index;
}

// A utility function to print the constructed MST stored in parent[]
int printMST(int parent[], int n, int graph[V][V]){

    int total;
    cout<<"Path | Weight"<<endl;
    for (int i = 1; i < V; i++){
        printf("%d - %d    %d \n",  parent[i], i, graph[i][parent[i]]);
        total = total+graph[i][parent[i]];
        
    }
    
    cout<<"Weight: "<<total<<endl<<endl;

    
} 

 
// Function to construct and print MST for a graph represented using adjacency
// matrix representation
void primMST(int graph[V][V]){

    int parent[V]; // Array to store constructed MST
    int key[V]; // used to pick minimum weight edge in cut
    bool set[V]; // Not included yet
 
    // Initialize all keys as INFINITE
    for (int i = 0; i < V; i++){
        key[i] = INT_MAX, set[i] = false;
    }
 
    
    key[0] = 0;
    parent[0] = -1; //root
 
    
    for (int count = 0; count < V; count++){

      
        int new_pick = minKey(key, set);
 
        // Add the picked vertex to the mst
        set[new_pick] = true;
 
        //Update kay and parent of picked vertext. Looks at only the vertices
        //not yet in tree. 
        for (int i = 0; i < V; i++){
 
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[new_pick][i] && set[i] == false && graph[new_pick][i] < key[i]){
                parent[i] = new_pick, key[i] = graph[new_pick][i];

            }
        }
    }
    // print the constructed MST
    printMST(parent, V, graph);
    
}
int ShortestPath(int graph[V][V],int start, int finsih){

    int parent[V];
    int key[V];
    bool set[V]; 
    for (int i = 0; i < V; i++){
        key[i] = INT_MAX, set[i] = false;
    }
    key[0] = 0;

    int new_pick;
    parent[0] = start;
    parent[V] = finsih;

    for (int count = 0; count < V; count++){

      int new_pick = minKey(key, set);
    }    
        // Add the picked vertex to the path
        set[new_pick] = true;
 
    
        for (int i = 0; i < V; i++){
 
            // graph[u][v] is non zero only for adjacent vertices of m
            // mstSet[v] is false for vertices not yet included in MST
            // Update the key only if graph[u][v] is smaller than key[v]
            if (graph[new_pick][i] && set[i] == false && graph[new_pick][i] < key[i]){
                parent[i] = new_pick, key[i] = graph[new_pick][i];

            }
        }
        printMST(parent,V,graph);
        
}


