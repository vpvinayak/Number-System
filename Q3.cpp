#include<iostream>
using namespace std;
int main(){
    
    int n1,n2,p1=1,p2=1,num1=0,num2=0,lastdigit1,lastdigit2;
    cin>>n1>>n2;
    while(n1>0){
        lastdigit1 = n1%10;
        num1+= lastdigit1 * p1;
        p1*=2;

        n1/=10;
        
    }
    while(n2>0){
         lastdigit2= n2%10;
        num2+= lastdigit2 * p2;
        p2*=2;

        n2/=10;
    }
    if(num1>num2){
        cout<<num1;
    } else if (num2>num1){
        cout<<num2;
    } else{
        cout<<"both are equal : "<<num1<<endl;
    }
    return 0;
    }