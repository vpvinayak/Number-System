#include<iostream>
using namespace std;
int main(){
    int n,sum=0,paritydigit, ans=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    int power=1;
    cout<<"sum in decimal number system : "<<sum<<endl;
    while(sum>0){
        paritydigit= sum%2;
        ans+= paritydigit*power;
        power*=10;
        sum/=2;
    }
    cout<<"sum in binary number system : "<<ans<<endl;
    return 0;

}