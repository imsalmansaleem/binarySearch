#pragma once
# include <iostream>
using namespace std;
# include <vector>
# include <string>
class Node
{
public:
	int data;
	Node * left;
	Node * right;
	//Default constructor is declared
	Node();
	//Int value will passed to node constructor
	Node(int);

};
