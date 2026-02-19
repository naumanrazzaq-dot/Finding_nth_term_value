#include <iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter number";
    cin>>num;
    // 1 3 5 7 9...
    for(int i=1; i<=2*num-1;i+=2){
        cout<<i<<endl;
    }
    return 0;
}
