#include<unordered_map>
#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main(){
	std::unordered_map<int,int> x;
	std::vector<int> y;
	y.push_back(123);
	y.push_back(456);
	y.push_back(789);
	x.insert(std::pair<int,int>(y[0],1));
	x.insert(std::pair<int,int>(y[1],2));
	x.insert(std::pair<int,int>(y[2],3));

//	std::unordered_map<int,std::string>::iterator ptr = x.begin();
	//for(ptr;ptr!=x.end();ptr++){
	for(int i=0;i<x.size();i++){
		std::cout<<x[y[i]]<<std::endl;
//		std::cout<<"hello"<<std::endl;
	}
}

