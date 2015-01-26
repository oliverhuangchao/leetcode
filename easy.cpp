#include "easy.h"
//-------20
//topic: valid parentheses

bool  validParentheses(std::string x){
	if(x.size()%2 != 0) return false;// be aware that we need to save space and time as possible as we can
	std::stack<char> y;
	std::string::iterator ptr = x.begin();
	while(ptr!=x.end()){
		if(*ptr =='(' || *ptr == '[' || *ptr=='{'){
			y.push(*ptr);
		}
		else{
			if(y.empty()) return false;
			switch(*ptr){
				case ')':
					if(y.top() != '(')
						return false;
					break;
				case ']':
					if(y.top() != '[')
						return false;
					break;
				case '}':
					if(y.top() != '{')
						return false;
					break;
				default:
					break;
			}
			y.pop();
		}
		ptr++;
	}
	if(y.empty()) return true;
	else return false;
}


//------ 88 ------
//------ merge two sorted array together ------
void mergeTwoArray(int *A,int m,int B[],int n){
	int *a = A;
	int *b = B;
	int *p = A+m;
	int *q = A+m;
	int count = 0;
	while(count<m+n){
		if(*a<=*b || b == nullptr){
			*p = *a;
			*a = *q;
			a++;
			p++;
			q++;
			count++;
			continue;
		}
		if(*a>*b || a == nullptr){
			*p = *b;
			b++;
			p++;
			count++;
			continue;
		}
	}
}
//------ 7 ------
//reverse an integer
int reverseInteger(int x){
	std::string y = std::to_string(x);
	std::string m;
	int i,count;
	int size = y.size();
	count = size - 1;
	if(y[0]=='-'){
		i=1;
		m[0]='-';
	}
	else
		i=0;
	for(i;i<size;i++){
		m[i]=y[count];
		count--;
	}
	return atoi(m.c_str());
}

//------ majority element -----
int majorityElement(std::vector<int>& num){
	int size = num.size();
	if(size == 1) return num[0];
	std::sort(num.begin(), num.end(), myCompareFunc);
	int tmp = num[0];
	int count = 1;
	int max = 1;
	for(int i=1;i<size;i++){
		if(num[i] == num[i-1])
			count++;
		else{
			count = 1;
			if(max < count){
				max = count;
				tmp = num[i];
			}
		}
	}
	return tmp;
}



bool myCompareFunc(int x,int y){
	return x>y? true;false;
}


