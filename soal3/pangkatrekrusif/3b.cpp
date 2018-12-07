#include <iostream>

using namespace std;

int pangkat(int x, int n){
    if(n==0){
        return 1;
    }else
        return x * pangkat(x, n-1);
}

int main()
{
    int x,n;
    cout<<"Masukan Bilangan : ";cin>>x;
    cout<<"Masukan Pangkat : ";cin>>n;
    cout<<x<<"^"<<n<<" = "<<pangkat(x,n);

}
