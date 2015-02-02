#ifndef PATH_HPP
#define PATH_HPP
#include "Node.hpp"
class Path{
	public:
		Node* pathParent;
		double sumVar;
		double sumMu;
		Path(){
		//cout << "Path created"<< endl;
		}
		~Path(){
		//cout<<"Kill Path"<<endl;
		}
};

#endif
