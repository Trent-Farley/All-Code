/*
THE PLAN: 
Final Project? (Graph):
Create some tests before you start coding...
Implement a graph class with at least:
	a function to add a new node to the graph (addNode(nodeName))
	a function to add a new path between two nodes of the graph (addPath(source, destination))
	a function for a shortest path algorithm (shortestPath(source, destination))
	a function for a minimum spanning tree algorithm (example minSpanTree()).
	Analyze the complexity of all of your graph behaviors

IMPLEMENTATION:
As given by the instructions, I am going to need some functions to addnodes, addpath,
find shortest path and create min spanning tree. Using the idea of a node from the start,
I will only need it to have one direction, since I can have it going anywhere. 
I think im just going to have a top ready, that way  I can find one easily. 

NOTES:
JUNE 6- I found a tutorial online, it had some stuff that I like, but a lot of it was garbage in
		my eyes. I dont think im going to have an addnode and an insert path. I think the best way
		of doing this is to just have an insert that takes a path as well to create that with 
		it. 
		Started on this file, working on the graph itself, I will worry about the MST later
June 7- All of the graph stuff is working, having a minor problem with a random negative number 
		being thrown in. I dont know why, but it appears sometimes and other times there are seg
		faults. 
June 8- I think I fixed the seg faults, but the negative numbers are still appearring so I cheated
		by just having an if statement checking to make sure there are nothing wrong with the data. 
		I think that it is some garbage leftovers from my system, but I can not find the leak. I also
		looked into the implementation of the Prim's Algorithim/More information about it.
		I started on it, almost done but we'll see if the edges work
June 9- Spent almost all day on this, finished MST (Works good?) also cleaned everything up and added
		some more comments to the graph stuff. Spent probably too long having fun with random numbers,
		feeling like im playing whack-a-mole since everytime I crush one, another pops up. I got the 
		majority of them and if it doesn't seg fault tomorrow, itll be perfect.

TIME COMPLEXITY:
	Finding min tree and shortest route are 0(n) and getting all of the data is 0(n). I think this 
	because of the fact you have to go through all of the edges to get to te one/ones that are 
	being looked for. 
*/

#include "tests.cpp"

int main(){
	AllTests();
}