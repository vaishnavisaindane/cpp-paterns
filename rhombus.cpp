#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows needed";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
           cout<<" *";
        }
        cout<<endl;
    }

    return 0;
}
