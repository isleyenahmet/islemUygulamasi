#include <iostream>
#include <cmath> // odev verilen kutuphane

using namespace std;

int main() {

	int flag,secenek;
	double x, y;
	flag = 0;

	cout << "* * * * ISLEM UYGULAMASINA HOS GELDINIZ * * * *\n";
	// Yapilmak istenen iþlemler
	cout << "1. Uslu Sayi Hesaplama\n";
	cout << "2. Karekoklu Sayi Hesaplama\n";
	cout << "3. Mutlak Deger Hesaplamasi\n";
	cout << "4. Kup Kok Hesaplama\n";
	cout << "5. 10 Tabaninda Logaritma Hesaplama\n";
	cout << "6. Cikis \n";
	cout << "* * * * * * * * * * * * * * * * * * * * * * * *\n";

	while (flag == 0) {
		
		cout << "\nYapmak Istediginiz Islemi Giriniz: "; cin >> secenek;

		if (secenek > 0 && secenek < 7) {

			switch (secenek) {

			case 1:
				cout << "Taban Degerini Giriniz: "; cin >> x;
				cout << "Us Degerini Giriniz: "; cin >> y;
				cout << x << "^" << y << " Ifadesinin Cevabi: " << pow(x, y); 
				cout << "\n-----";
				break;

			case 2:
				cout << "Karekokunu Hesaplamak Ýstediginiz Sayiyi Giriniz: "; cin >> x;
				cout << "Girilen Sayinin Karekoku: " << sqrt(x);
				cout << "\n-----";
				break;

			case 3:
				cout << "Mutlak Degerini Hesaplamak Istediginiz Sayiyi Giriniz: "; cin >> x;
				cout << "Girilen Sayinin Mutlak Degeri: " << abs(x);
				cout << "\n-----";
				break;

			case 4:
				cout << "Kup Kokunu Hesaplamak Istediginiz Sayiyi Giriniz: "; cin >> x;
				cout << "Girilen Sayinin Kup Koku: " << cbrt(x);
				cout << "\n-----";
				break;

			case 5:
				cout << "10 Tabaninda Logaritmasini Ogrenmek Istediginiz Sayiyi Giriniz: "; cin >> x;
				cout << "Girilen Sayinin 10 Tabanindaki Logaritmasi: " << log10(x);
				cout << "\n-----";
				break;

			case 6:
				flag = 1;
				cout << "Uygulamadan Cikis Yapiliyor...\n";
				break;
			}
		
		}
		else {
			cout << "Lutfen Gecerli Bir Secenek Giriniz: " << endl;
		}

	}

	return 0;
}
//Ahmet Ýsleyen 230610012 / Bilgisayar Mühendisliði 
