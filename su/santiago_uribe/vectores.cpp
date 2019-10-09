#include<iostream>
#include<vector>
using namespace std;
int maxSubSum1(constvector<int>& a){
	int maxSum = 0;
	for(int i = 0; i < a.size(); ++i){
		for(int j = i; j < a.size(); ++j){
			int thisSum = 0;

			for(int k = i; k <= j; ++k)
				thisSum += a[k];

			if(thisSum > maxSum)
				maxSum = thisSum;
		}
	}
	return maxSum;
}
int main(){

	int myints[] = {1,2,3,4,5,6,7,8,9,10};

	vector<int> first(myints, myints +
		sizeof(myints) / sizeof(int));
	maxSubSum1(first);
		return 0;
}
