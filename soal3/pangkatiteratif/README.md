Menghitung Nilai Pangkat dengan Cara Iteratif

int pangkat(int x, int n)
Deklarasi fungsi pangkat(), nilai x, n dengan tipe data integer

    int hasil=1; //hasil sama dengan 1 dengan tipe data integer
    for(int i=0; i<n; i++)
    Perulangan pangkat dimulai dari 0, dengan syarat i lebih kecil dari n

    hasil=hasil*x;  //hasil samadengan hasil dikalikan x

    return hasil;
    Nilai balik fungsi hasil

int main()
Main Program

    int x,n;    //tipe data x, n adalah integer
    cout<<"Masukan Bilangan : ";    //Output ke layar
    cin>>x;     //masukan nilai x atau bilangan yg mau dipangkatkan
    cout<<"Masukan Pangkat : ";     //Output ke layar
    cin>>n;     //masukan nilai n atau bilangan pangkatnya
    cout<<x<<"^"<<n<<" = "  //Output ke layar nila x^ nilai n =
    <<pangkat(x,n);         //panggil fungsi pangkat()

Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal3/pangkatiteratif/flow.png)

Berikut Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal3/pangkatiteratif/ss.png)