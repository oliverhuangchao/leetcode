#include <string>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <stack>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <climits>
#include <queue>
#include <float.h>
using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
struct Point {
    int x;
    int y;
    Point() : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}
};

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};

int getLength(ListNode* head){
    int count = 0;
    while(head){
        count++;
        head = head->next;
    }
    return count;
}

void print(const vector<int>& path){
	for(auto each:path)
		cout<<each<<" ";
	cout<<endl;
}

void print(int x[],int l){
    for(int i=0;i<l;i++)
        cout<<x[i]<<" ";
    cout<<endl;
}
void print(string x){
    for(auto each:x)
        cout<<each<<" ";
    cout<<endl;
}

void print(const vector<bool>& path){
    for(auto each:path)
        cout<<each<<" ";
    cout<<endl;
}

void print(const vector<string>& path){
    for(auto each:path)
        cout<<each<<endl;
}

void print(const vector<vector<int>> result){
    for(auto each:result){
        for(auto x:each){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    return;
}

void print(const vector<vector<string>> result){
    for(auto each:result){
        for(auto x:each){
            cout<<x<<'\t';
        }
        cout<<endl;
    }
    return;
}

void print(const vector<vector<bool>> result){
    for(auto each:result){
        for(auto x:each){
            cout<<x<<' ';
        }
        cout<<endl;
    }
    return;
}

void print(ListNode* head){
    if(!head){
        cout<<"list is empty"<<endl;
        return;
    }
    while(head){
        cout<<head->val<<'\t';
        head = head->next;
    }
    cout<<endl;
}


vector<int> getVector(int x[],int len){
    vector<int> nums;
    for(int i=0;i<len;i++){
        nums.push_back(x[i]);
    }
    return nums;
}

vector<string> getVector(string x[],int len){
    vector<string> nums;
    for(int i=0;i<len;i++){
        nums.push_back(x[i]);
    }
    return nums;
}

vector<Point> getPointsVector(int x[],int len){
    vector<Point> result;
    for(int i=0;i<len;i+=2){
        Point tmp(x[i],x[i+1]);
        result.push_back(tmp);
    }
    return result;
}

ListNode* getList(int x[],int l){
    ListNode* head = new ListNode(x[0]);
    ListNode* tmp = head;
    for(int i=1;i<l;i++){
        ListNode* z = new ListNode(x[i]);
        tmp->next = z;
        tmp = tmp->next;
    }
    return head;
}