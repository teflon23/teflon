// ConsoleApplication4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;

int main()
{
	int fib[100] = {};
	cout << "sayi giriniz:";
	int sayi;
	cin >> sayi;
	fib[0] = 1;
	fib[1] = 1;
	if (sayi > 1) {
		for (int i = 2;i < sayi;i++) {

			fib[i] = fib[i - 1] + fib[i - 2];
			



		}
		cout << fib[i] << endl;
        if (sayi > 1) {
        for (int i = 2; i < sayi; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << fib[sayi - 1] << endl;
        }
	}
	else {
		cout << "1" << endl;
	}
	
   
}

// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü

// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
