#include <iostream>
#include <vector>
using namespace std;

int main() {

// Creating a vector
    vector<int> v;


// Inserting elements in vector v
    v.push_back(2);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);


    for(int incre = 0; incre < v.size(); incre ++){
        cout << v[incre] << endl;
    }

    cout << endl;
    cout << endl;



// Deleting element from vector v (deleted from last)
    v.pop_back();

    for(int incre = 0; incre < v.size(); incre ++){
        cout << v[incre] << endl;
    }


    cout << endl;




// Updating element in vector v
   v[2] = 9;




// Accessing an element from vector v 
   cout << v.at(2) << endl;





cout << endl;


// Checking size of vector v
  cout << v.size() << endl;    

}