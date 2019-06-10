#include "graph.hpp"
#include "min_tree.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#define V 10
/*I understand the risks of global variables and making it one letter shoved it 
in my mind to be careful with this since i is the only one letter variable I
use so this sttod out like a sore thumb
*/

void TestMin(int edge[V][V]){
	//Test Mininimum spanning tree with edge graph. 
	primMST(edge);
}

void TestPath(int edge[V][V]){
	//tests to see if a shortest path is working by having to random 
	//numbers being taken from edge. 
	int start, finish;
	
	start = edge[4][1];
	finish = edge[6][1];
	ShortestPath(edge,start,finish);
}

void TestInsert(){
	//Test the insert of nodes into graph. Also calls Prim's algorithim
	//and shortest path. 
 	srand(time(NULL));
	int i;
	Graph *Graphed = CreateGraph(V);
	
	
	int edge[V][V] = {{}};
	
	int total;
	//Test insert node
	for(i = 0; i < V; i++){
		for(int j = 0; j<V; j++){
			edge[i][j] = (rand() % 20);
			InsertNode(Graphed, edge[i][j], edge[j][i]);//Insert paths/nodes in the two random spots.
			total = total + edge[i][j];
		
		}
	}
	cout<<"Total weight of the graph: "<<total<<endl;
	
	cout<<"Press continue to test a path from 4 to 9"<<endl;
	getchar();
	//Call path from randomish values
	TestPath(edge);

	cout<<"Press enter to continue to the Graph."<<endl;
	getchar();
	
	cout<<"Graph:"<<endl;
	for(i = 0; i < V; i++){
		cout<<"\n\tV("<<i+1<<") -> {  ";
		while(Graphed->top[i+1].head != nullptr){
			if(Graphed->top[i+1].head->data<20 && Graphed->top[i+1].head->data>0){  	
				cout<<Graphed->top[i+1].head->data<<"  ";
				
			}
			Graphed->top[i+1].head = Graphed->top[i+1].head->next;
		}
		cout<<"}";
        cout<<endl;
	}

	cout<<"Press enter to continue to Prim's algorthim implementation"<<endl;
	getchar();
	//Call min span tree
	TestMin(edge);
}

void AllTests(){
	TestInsert();		
}