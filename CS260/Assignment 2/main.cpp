#include <iostream>
#include "Node.cpp"

using std::cout;
using std::endl;
using std::cin;


//test manually constructing a linked-list of nodes
int main()
{
	//cout << "hello?" << endl;
	
	Node node1;
	node1.value = 42;
	
	Node node2;
	node2.value	= 2;
	
	node1.next = &node2;
	
	Node node3;
	cout << "&node2: " << &node2 << "  node2.value: " << node2.value << "  node2.next: " << node2.next << endl;
	cout << "&node3: " << &node3 << "  node3.value: " << node3.value << "  node3.next: " << node3.next << endl << endl;
	
	cout << "node1.next: " << node1.next << "  &(*node1.next) (* and & are basically opposites of each other): " << &(*node1.next) << endl << endl;
	
	cout << "(*node1.next).value: " << (*node1.next).value << "  (node1.next + 1): " << (node1.next + 1) << "  (node1.next - 1): " << (node1.next - 1) << endl << endl;
	cout << "node1.next->value: " << node1.next->value << "  (node1.next + 1): " << (node1.next + 1) << "  (node1.next - 1): " << (node1.next - 1) << endl << endl;
	
	cout << "sizeof(node1) (in bytes): " << sizeof(node1) << "  sizeof((short)node1.value): " << sizeof((short)node1.value) << "  sizeof(node1.next): " << sizeof(node1.next) << endl;
    node3.value = 10;
	
	node2.next = &node3;
	
	cout << "&node1: " << &node1 << "  node1.value: " << node1.value << "  node1.next: " << node1.next << endl;
}