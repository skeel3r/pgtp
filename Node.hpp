#ifndef NODE_HPP
#define NODE_HPP
#include <iostream>
using namespace std;
class Node{
	public:
		double var;
		double mu;
		Node* parent;
		Node(){
		//cout << "Node created"<< endl;
		}
		~Node(){
		//cout<<"Kill Node"<<endl;
		}
};
#endif
