#include <bits/stdc++.h>
using namespace std;

class salary{
    int b_salary;
public:
    salary(int a)
    {
        b_salary = a;
    }

    double total(){
        return b_salary + b_salary*.05 + b_salary*.04;
    }
};

int main(){
    int a;
    cout<<"Enter basic salary:";
    cin >>a;
    salary obj(a);
    cout<<obj.total()<<endl;

    return 0;
}
