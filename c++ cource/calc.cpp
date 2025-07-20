#include<iostream>
using namespace std;

 
int main()
{
   
   int a,q,w;
   cout<<"enter 2 numbers"<<endl;
   cin>>q>>w;
   cout<<"slect the numbeer type of opeersstion u want to perform"<<endl;
   cout<<"1-sum"<<endl;
   cout<<"2-sub"<<endl;
   cout<<"3-multi"<<endl;
   cout<<"4-div"<<endl;
   cin>>a;
   switch (a)
   {
   case 1:
   cout<<"the sum of two num is "<<q+w;
    break;
   case 2:
   cout<<"the sub of two num is "<<q-w;
    break;
   case 3:
   cout<<"the nulti of two num is "<<q*w;
    break;
   case 4:
   cout<<"the div of two num is "<<q/w;
    break;
 
   
   default:
      cout<<"you enter smth wrg";
    break;
   }
   return 0;
}
