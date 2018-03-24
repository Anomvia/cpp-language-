#include<iostream>
using namespace std;

 class Demo
  {
    public:
     void showobj()
     {
      cout<<"\n Current Object of showobj="<<this;
      }
      void check()
      {
       cout<<"\n Curent object of check="<<this;
       }
   };
   int main()
   {
    Demo ob1,ob2,ob3;
     ob1.showobj();
     ob2.showobj();
     ob3.showobj();
     ob3.check();
    cout<<endl;
   } 
