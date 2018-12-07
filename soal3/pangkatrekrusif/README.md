Menghitung Nilai Pangkat dengan Fungsi Rekrusif

int pangkat(int x, int n)
Deklarasi fungsi pangkat(), nilai x, n dengan tipe data integer

    if(n==0){       //Jika n samadengan 0
        return 1;   //maka kembali ke angka 1
    }else           //jika tidak
        return x * pangkat(x, n-1); //maka kembali ke fungsi x
                                    //dikali dengan fungsi pangkat
                                    //dan n dikurang 1

int main()
Main Program

    int x,n;    //tipe data x, n adalah integer
    cout<<"Masukan Bilangan : ";    //Output ke layar
    cin>>x;     //masukan nilai x atau bilangan yg mau dipangkatkan
    cout<<"Masukan Pangkat : ";     //Output ke layar
    cin>>n;     //masukan nilai n atau bilangan pangkatnya

    cout<<x<<"^"<<n<<" = "  //Output ke layar nila x^ nilai n =
    <<pangkat(x,n);     //panggil fungsi pangkat()

Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal3/pangkatrekrusif/flow.png)

Berikut Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal3/pangkatrekrusif/ss.png)