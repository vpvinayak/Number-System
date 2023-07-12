#include<iostream>
using namespace std;
int main(){
    int n,ans=0,paritydigit,num=0,lastdigit;
    cin>>n;
    int power=1;
    while(n>0){
        paritydigit= n%2;
        num+= paritydigit*power;
        power*=10;
        n/=2;
    }
    cout<<num<<endl;
    while(num>0){
        lastdigit= num%10;
        if(lastdigit==0){
            ans++;
        }
        num/=10;
    }
    cout<<ans;
    return 0;
}