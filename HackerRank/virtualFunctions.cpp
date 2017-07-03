#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
  string name;
  int age;
  // virtual void getdata();
  // virtual void postdata();
}

class Professor: public Person{
public:
  int publicatins, cur_id;
  void getdata(){

  }

  void putdata(){

  }
}

class Student: public Person{
public:
  int marks[6], cur_id;
  void getdata(){

  }

  void putdata(){

  }
}

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
