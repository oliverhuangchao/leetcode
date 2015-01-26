//#include "easy.h"
#include "mid.h"
#include <time.h>


int main(int argc, char** argv){
	clock_t a1 = clock();
	int *m;
	if(argc>1){
		m = new int[argc-1];
		for(int i=0;i<argc-1;i++)
			m[i] = atoi(argv[i+1]);
	}
//------ main part ------
/*
 // merge two array
 // std::cout<<reverseInteger(m[0])<<std::endl;
	std::vector<int> input;
	int l = argc-1;
	for(int i=0;i<l;i++){
		input.push_back(m[i]);
	}
	int *A = new int[100];
	int B[]={2,5,6};
	A[0]=1;
	A[1]=2;
	A[2]=3;
	mergeTwoArray(A,3,B,3);
*/
/*
// 	return the largest number
	for (int i=0;i<6;i++)
		std::cout<<A[i]<<std::endl;

	std::cout<<largestNumber(input)<<std::endl;
*/

// two sum
/*
	std::vector<int> numbers;
	for(int i=0;i<argc-1;i++)
		numbers.push_back(m[i]);
	std::vector<int> result;
	result = twoSum(numbers,10);
	for(int i=0;i<result.size();i++){
		std::cout<<result[i]<<std::endl;
	}
*/


//------ finish main part ------
	clock_t a2 = clock();
	std::cout<<"cost time isi "<<(double)(a2-a1)/CLOCKS_PER_SEC<<" s"<<std::endl;

}
