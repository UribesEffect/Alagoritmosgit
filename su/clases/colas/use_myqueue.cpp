//#include "mylistqueue.hpp"
#include "myarrayqueue.hpp"

int main() {
  qarray::MyQueue<int> q;

  if(q.empty())
    cout << "Empty queue\n";

  for(int i = 1; i < 10; i++)
    q.push(i);


  cout <<"front: "<< q.get_front() << " back: " << q.get_back() << endl;
  cout << "array: ";
  q.display();


  
  cout << "\n##########################\n";


  for(int i = 1; i < 5; i++)
    cout << "Eliminando " << q.pop() << "\n ";



  cout <<"front: "<< q.get_front() << " back: " << q.get_back() << endl;
  cout << "array: ";
  q.display();



  cout << "\n###########################\n";

  for(int i = 1; i < 4; i++)
    q.push(i);


  cout <<"front: "<< q.get_front() << " back: " << q.get_back() << endl;
  cout << "array: ";
  q.display();



  cout << "\n###########################\n";

  while(!q.empty())
    cout << "Eliminando " << q.pop() << "\n ";
  cout << endl;

  if(q.empty())
    cout << "Empty queue\n";

  // for(int i = 9; i < 25; i++) //9 to 25
  //   q.push(i);
  // cout << q.get_front() << " to " << q.get_back() << endl;
  //
  // while(!q.empty())
  //   cout << q.pop() << " ";
  // cout << endl;


  // q.clear();

  // if(q.empty())
  //   cout << "Empty queue\n";


  return 0;
}
