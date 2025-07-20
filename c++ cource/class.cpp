// #include <iostream>
// using namespace std;
// class Employee
// {
// private:
//     int empid;
//     char empname[20];
//     int bsalary;
//     int allowance;

// public:
//     Employee()
//     {
//         bsalary = 1000;
//     }
//     void GetData();
//     void DispData();
// };
// void Employee::GetData()
// {
//     cout << "Enter the employee id: ";
//     cin >> empid;
//     cout << "Enter the employee name: ";
//     cin >> empname;
//     cout << "Enter the employee allowace: ";
//     cin >> allowance;
// }
// void Employee::DispData()
// {
//     cout << endl
//          << empid << "\t" << empname << "\t" << bsalary << "\t" << allowance;
// }
// int main()
// {
//     Employee e[3];
//     cout << "Enter the employee information:" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         e[i].GetData();
//     }
//     cout << endl
//          << "The employee information is:";
//     cout << endl
//          << "EmpID \t Name \t Bsalary \t Allowance";
//     for (int i = 0; i < 3; i++)
//     {
//         e[i].DispData();
//     }
// }


// passing object as function arguments ka example
#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}
