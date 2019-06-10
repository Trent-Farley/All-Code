struct node{

	int data;
	struct node *next;
};
 
// A structure to represent list of vertexes connected to the given vertex.
struct NodeHead{

	struct node *head;
};
 
// A structure to maintain the graph nodes and its connections to other nodes
struct Graph{

	int num;
	struct NodeHead *top; 
};
 
// A function to declare the graph according to the number of nodes.
struct Graph* CreateGraph(int val){

	int i;
	struct Graph *topist = new Graph;
	topist->num = val;
 
	// declare a list for n vertex.
	topist->top = new NodeHead[val+1];
 
	// Assign the head to NULL.
	for(i = 0; i < val+1; i++){

		topist->top[i].head = nullptr;
	}

	return topist;
}
 
// A function to create a new data node.
struct node* NewNode(int value){
	struct node *newnode = new node;
	newnode->data = value;
	newnode->next = nullptr;
	return newnode;
}
 
// A  function to add the edge into the undirected graph, as well as inserting 
//the two new nodes. 
void InsertNode(Graph *graph, int num1, int num2){

	node *newnode1 = NewNode(num1);
	node *newnode2 = NewNode(num2);
	node *temp = new node;
	// Since it is undirected graph, count each edge as two connection.
	// Connection 1, v2 to v1.
	if(graph->top[num2].head == nullptr){

		// If the head is null insert the node to the head.
		graph->top[num2].head = newnode1;
	}

	else{
		// Otherwise, add the node at the beginning.
		newnode1->next = graph->top[num2].head;
		graph->top[num2].head = newnode1;
	}
	// Connection 2, v1 to v2.
	if(graph->top[num2].head == nullptr){

		// If the head is null insert the node to the head.
		graph->top[num1].head = newnode2;
	}
	else{
		// Otherwise, add the node at the beginning.
		newnode2->next = graph->top[num1].head;
		graph->top[num1].head = newnode2;
	}
}