#include <iostream>
#include "functions.hpp"
using namespace std;


int slow_selection(int k, vector<int>& v){
  for(int i = 0; i < k-1; ++i){
    int min_id = i;
    for(int j = i+1; j < v.size(); ++j){
      if(v[j] < v[min_id])
        min_id = j;
    }
    swap(i, min_id, v);
    }
    return v[k-1];
}


int main(){
  int times = 100;
  int size = 1000;
  int k = 8;
  vector<int> vec;

  //random number generator
  unsigned seed = 123;
  minstd_rand0 rng(seed);

  double tot_time = 0;
  for(int n = 0; n < times; ++n){
    //Generate the random vector without repetitions
    //generate_vector(size, vec,  rng);//vector random
    //generate_ordered_vector(size, vec,rng, true);//de mayor a menor
    //generate_ordered_vector(size, vec,rng, false);//de menor a mayor
    generate_norepeat_vector(size, vec, rng);

    double tstart = gettime();

    //Search for X in vec
    slow_selection(500,vec);

    //final time
    double tstop = gettime();
    tot_time += tstop-tstart;

  }
  cout << "Time taken = " << tot_time / times << endl;

  return 0;
}
