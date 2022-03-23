#include <iostream>

using namespace std;


class ogrencı
{
public:
	string ogrencıAdi, ogrencıSoyadi;
	int ogrencıNumarasi;

	void  ogrencıbılgılerınıgoster();
};

void ogrencı::ogrencıbılgılerınıgoster()
{
	cout << "adı:" << ogrencıAdi << endl;
	cout << "soyadi:" << ogrencıSoyadi << endl;
	cout << "okul numarası:" << ogrencıNumarasi << endl;

}

int main()
{
	ogrencı ogrencı1;
	ogrencı ogrencı2;

	ogrencı1.ogrencıAdi = "Eda";
	ogrencı1.ogrencıSoyadi = "Güneş";
	ogrencı1.ogrencıNumarasi = 457;
	ogrencı1.ogrencıbılgılerınıgoster();

	ogrencı2.ogrencıAdi = "Esma";
	ogrencı2.ogrencıSoyadi = "Toprak";
	ogrencı2.ogrencıNumarasi = 882;
	ogrencı2.ogrencıbılgılerınıgoster();
	

}