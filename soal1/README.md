Bilangan Fibonnaci dengan Fungsi Iteratif

int fibon (int n)
Deklarasi fungsi fibon, nilai n dengan tipe data integer
{
    int a = 1;  //integer nilai a = 1
    int b = 1;  //integer nilai b = 1
    int c = 1;  //integer nilai c = 1

    for (int i = 3; i<=n; i++)
Perulangan fibonanaci dimulai dari suku ke 3, dengan syarat i lebih kecil sama dengan n

    {
        c = b + a;  //c sama dengan b ditambah a
        a = b;      //a sama dengan b
        b = c;      //b sama dengan c
    }
    return c;
Nilai balik fungsi, c didapatkan dari penjumlahan 2 suku sebelumnya

int main()
Main Program

    int n; //tipe data n adalah integer

    cout<< "Masukan Bilangan : ";   //Output ke layar
    cin>>n; //inputkan n atau suku keberapa yg mau ditampilkan
    cout<<fibon(n)<<endl;   //panggil fungsi fibon()


Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal1/flow.png)

Berikut Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal1/ss.png)