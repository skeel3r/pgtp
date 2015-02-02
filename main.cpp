#include "Path.hpp"
#include "Node.hpp"
#include "Vertex.hpp"
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include "CImg.h"
using namespace cimg_library;
using namespace std;



vector< vector<double> > get_map(){
	srand(time(NULL));
	int map_width = 30;
	int map_height = 30;
	vector< vector< double > > map;
	for(int i = 0; i < map_height; i++){
		vector<double> row;
		for(int j = 0; j < map_width; j++){
			double var = rand() % 100;
			var = var/100;
			//cout << endl << var << endl;
			row.push_back(var);
		}
		map.push_back(row);
	}
	for(int t = 0; t < 3; t++){
		int obj_loc_x;
		int obj_loc_y;
		obj_loc_x = rand() % 25;
		obj_loc_x +=4;
		obj_loc_y +=4;
		cout << "X" << obj_loc_x<< endl;
		obj_loc_y = rand() % 25;
		cout << "Y" << obj_loc_y<< endl;
		for(int r = -1; r < 2; r++){
			for(int e = -1; e < 2; e++){
				map[obj_loc_x + e][obj_loc_y + r] = 0;
			}
		}
	}
	for(int d = 0; d < map_height; d++){
		for(int f = 0; f < map_height; f++){
			cout << map[d][f];
		}
		cout << endl;
	}
	return map;
}

vector< vector< Vertex* > > get_vertices(){
	vector< vector< Vertex* > > vertices;
	for(int i = 0; i < 30; i ++){
		vector< Vertex*> row;
		for(int j = 0; j < 30; j++){
			Vertex* vertice = new Vertex;
			vertice->x = j;
			vertice->y = i;
			row.push_back(vertice);	
		}
		vertices.push_back(row);
	}
	return vertices;
}

vector< vector< Node*> > get_nodes(){
	vector< vector< Nodes*> > nodes;
	for(int i = 0; i < 30; i ++){
		vector< Node*> row;
		for(int j = 0; j < 30; j++){
			Node* node = new Node;
			row.push_back(node);
		}
		nodes.push_back(node);
	}
	return nodes; 
}

vector< vector< Node*> > get_neighbors(Node*){
		vector< Node*>  neighbors;
		pair(int, int) coord [4] = {pair(0,1), pair(-1,0), pair(1,0), pair(0,-1)};
		for(int i = 0; i < coord.size(); i++){
			int x = coord[i].first;
			int y = coord[i].second;
			if(x < 0 && y < 0){
				if(x> 30 || y > 30){
					if(nodes[y][x] == 0){
						continue;
					}
				}
			}
			neighbors.push_back(nodes[y][x]);
		}
		return neighbors;
}



vector< vector< Node > > get_paths(vector<vector< Vertex* > >, vector< vector< Node*> >  nodes){
		Node* start;
		start = nodes[0][0];
		while(false){
			get_neighbors();
			for(int i = 0; i < neighbors.size(); i++){
				//path
		}
}


int main(){
	vector< vector < double> > myMap;
	myMap = get_map();
	vector< vector< Node*> > nodes;
	Vertex vertex1;
	vector<vector< Vertex* > > vertices;
	vertices = get_vertices();
	cout<< vertices[0][0];
	vector< vector< Node> > paths;
	paths = get_paths(vertices, nodes);
	return 0;
}

