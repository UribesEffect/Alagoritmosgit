#include<iostream>
#include<vector>
#include "functions.hpp"
using namespace std;
int maxSubSum1(const vector<int>& a){
	int maxSum = 0;
	for(int i = 0; i < a.size(); ++i){
		for(int j = i; j < a.size(); ++j){
			int thisSum = 0;

			for(int k = i; k <= j; ++k)
				thisSum += a[k];// 2(j-i)+1+1(j-i+)

			if(thisSum > maxSum)
				maxSum = thisSum;
		}
	}
	return maxSum;
}

int maxSubSum2(const vector<int>& a){// ya no hace el tercer for si no que compara de una en el segundo for
	int maxSum = 0;
	for(int i = 0; i < a.size(); ++i){
		int thisSum = 0;
		for(int j = i; j < a.size(); ++j){
			thisSum += a[j];

			if(thisSum > maxSum)
				maxSum = thisSum;
		}
	}
	return maxSum;
}
int main(){
	int times = 100;
	int size = 1000;

	vector<int> vec;

	//random number generator
	unsigned seed = 123;
	minstd_rand0 rng(seed);

	double tot_time = 0;
	for(int n = 0; n < times; ++n){
		//Generate the random vector
		generate_vector2(size, vec,rng);
		//generate_ordered_vector(size, vec,rng, true);//de mayor a menor
		//generate_ordered_vector(size, vec,rng, false);//de menor a mayor


		//get initial time
		double tstart = gettime();


		maxSubSum1(vec);

		//final time
		double tstop = gettime();
		tot_time += tstop-tstart;



	}
	cout << "Time taken = " << tot_time / times << endl;


	return 0;
}
