#ifndef VERTEX_HPP
#define VERTEX_HPP
#include "Path.hpp"
#include <vector>

using namespace std;

class Vertex{
	public:
		int x;
		int y;
		vector<Path*> orderedPaths;
		Vertex(){
		//cout << "Vertex created"<< endl;
		}
		~Vertex(){
		//cout<<"Kill Vertex"<<endl;
		}
};

#endif
