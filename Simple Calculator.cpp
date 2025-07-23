#include <iostream>
using namespace std;

int main(){
   
    cout<<"--------------Simple Calculator--------------\n";
    int sum,avg,multi,sub;
    float a,b,div;
    cout<<"\n\t\tEnter the value of A: ";
    cin>>a;
    cout<<"\n\t\tEnter the value of B: ";
    cin>>b;
    sum=a+b;
    sub=a-b;
    avg=(a+b)/2;
    multi=a*b;
    div=a/b;
    cout<<"\n\t\tThe Sum of A and B is: "<<sum;
    cout<<"\n\t\tThe Sub of A and B is: "<<sub;
    cout<<"\n\t\tThe Avg of A and B is: "<<avg;
    cout<<"\n\t\tThe Multi of A and B is: "<<multi;
    cout<<"\n\t\tThe Div of A and B is: "<<div;
    return 0;
   
}