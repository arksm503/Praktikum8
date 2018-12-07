Perkalian dengan Hasil Penjumlahan Berulang (Cara Rekrusif)

int operasi(int a, int b)
Deklarasi fungsi operasi(), nilai a, b dengan tipe data integer

    if(b<=1){       //Jka b kurang dari sama dengan 1
        return a;    //maka kembali ke nilai fungsi a
    }
    else                //Jika tidak,
        cout<<a<<" + ";         //maka print ke layar nilai a +
        return operasi(a,b-1);  // kembali ke nilai fungsi operasi(a,b-1)
                                //nilai b dikurang 1

int main()
Main Program

    int a,b;    //tipe data a, b adalah integer
    cout<<"Masukan A : ";   //Output ke layar
    cin>>a;     //input nilai a
    cout<<"Masukan B : ";   //Output ke layar
    cin>>b;     //input nilai b

    cout<<a<<" x "<<b<<" = ";
    //Print ke layar nila a x nila b =
    cout<<operasi(a,b); //panggil fungsi operasi()

Berikut Flowchartnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal2/flow.png)

Berikut Screenshotnya : <br/>
![alt text](https://raw.githubusercontent.com/arkyana/Praktikum8/master/soal2/ss.png)