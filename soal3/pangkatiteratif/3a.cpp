#include <iostream>>

using namespace std;

int pangkat(int x, int n)
{
    int hasil=1;
    for(int i=0; i<n; i++){
        hasil=hasil*x;

    }return hasil;

}

int main()
{
    int x,n;
    cout<<"Masukan Bilangan : ";cin>>x;
    cout<<"Masukan Pangkat : ";cin>>n;
    cout<<x<<"^"<<n<<" = "<<pangkat(x,n);

}
