#include <iostream>

using namespace std;

class dukkan{
// comment here
protected:
    int id;
    int stok;
public:
    int getId(){ return id; }
    int getStok(){ return stok; }
    void setId(int id){ this->id=id; }
    void setStok(int stok){ this->stok=stok; }
};

class temel_urun : public dukkan{
protected:
    string isim;
    string renk;
public:

    string getRenk(){ return renk; }
    string getIsim(){ return isim; }
    void setIsim(string isim){ this->isim=isim; }
    void setRenk(string renk){ this->renk=renk; }
};

class silah : public dukkan{
protected:
    string name;
    int fiyat;
    string materyal;
    string hasar;
public:
    string getHasar(){ return hasar; }
    int getFiyat(){ return fiyat; }
    string getName(){ return name; }
    string getMateryal(){ return materyal; }
    void setName(string name){ this->name=name; }
    void setHasar(string hasar){ this->hasar=hasar; }
    void setFiyat(int fiyat){ this->fiyat=fiyat; }
    void setMateryal(string materyal){ this->materyal=materyal; }

};

class demir : public temel_urun{

};

class barut : public  temel_urun{

};
class gaz : public temel_urun{

};

class tabanca : public silah{
protected:
    string menzil;
public:
    string getMenzil(){ return menzil;}
    void setMenzil(string menzil){ this->menzil=menzil; }
};

class grenade : public silah{
protected:
    string patlama_suresi;
public:
    string getPatlama_suresi(){ return patlama_suresi;}
    void setPatlama_suresi(string patlama_suresi){ this->patlama_suresi=patlama_suresi; }
};

class knife : public silah{
protected:
    string agirlik;
public:
    string getAgirlik(){ return agirlik; }
    void setAgirlik(string agirlik){ this->agirlik=agirlik; }
};


void swtich(int stoksecenek);

int main() {

    //t�rk�e karakterlerin sorun olmas�n� engellemek
    setlocale(LC_ALL, "Turkish");

    //�r�nleri Tan�t�m�

    barut barut1;
    barut1.setId(1);
    barut1.setIsim("Barut");
    barut1.setRenk("Gri");
    barut1.setStok(500);

    gaz gaz1;
    gaz1.setId(2);
    gaz1.setIsim("Gaz");
    gaz1.setRenk("Beyaz");
    gaz1.setStok(2000);

    demir demir1;
    demir1.setIsim("Demir");
    demir1.setId(3);
    demir1.setStok(1000);
    demir1.setRenk("Gri");

    tabanca deagle;
    deagle.setStok(20);
    deagle.setId(4);
    deagle.setFiyat(700);
    deagle.setHasar("249 damage");
    deagle.setMateryal("Demir ve Barut");
    deagle.setMenzil("200 m");
    deagle.setName("Desert Eagle");

    tabanca glock;
    glock.setName("Glock");
    glock.setMateryal("Demir ve Barut");
    glock.setHasar("153 damage");
    glock.setFiyat(200);
    glock.setId(5);
    glock.setStok(17);
    glock.setMenzil("200 m");

    tabanca usp;
    usp.setMenzil("200 m");
    usp.setStok(26);
    usp.setId(6);
    usp.setFiyat(200);
    usp.setHasar("167 damage");
    usp.setMateryal("Demir ve Barut");
    usp.setName("USP-S");

    grenade nade;
    nade.setName("El Bombas�");
    nade.setMateryal("Demir ve Barut");
    nade.setHasar("60 damage");
    nade.setFiyat(400);
    nade.setId(7);
    nade.setStok(37);
    nade.setPatlama_suresi("10 saniye");

    grenade flash;
    flash.setName("Flash Bang");
    flash.setMateryal("Demir ve Gaz");
    flash.setHasar("10");
    flash.setFiyat(200);
    flash.setId(8);
    flash.setStok(40);
    flash.setPatlama_suresi("2 saniye");

    knife nayf;
    nayf.setStok(50);
    nayf.setId(9);
    nayf.setFiyat(150);
    nayf.setHasar("25 damage");
    nayf.setMateryal("Demir");
    nayf.setName("Karambit");
    nayf.setAgirlik("200 Gram");


    knife butterfly;
    butterfly.setStok(70);
    butterfly.setId(10);
    butterfly.setFiyat(270);
    butterfly.setAgirlik("350 Gram");
    butterfly.setHasar("30 damage");
    butterfly.setMateryal("Demir");
    butterfly.setName("Kelebek");

    //giri� paragraf�
    gline2:

    cout << "                         *********************************************************************************"
         << endl;
    cout << "                         *                         Silah D�kkan�na Ho� Geldiniz                          *"
         << endl;
    cout << "                         *********************************************************************************"
         << endl;
    cout << "                         *  Burda d�kan�n�zda bulunan b�t�n e�yalar�n�z�n ne oldu�unu g�rebilirsiniz.    *"
         << endl;
    cout << "                         * Sahip oldu�unuz e�yalar�n�z�n ismini, stok durumunu, a��rl���n�n ne kadar ol- *"
         << endl;
    cout << "                         * du�unu, hangi materyaldan yap�ld���na kadar bir �ok �zelli�ini g�r�nt�l�yebi- *"
         << endl;
    cout << "                         * siniz. Ayr�ca �r�nlerinizin stok bilgilerini g�ncelleyebiilir ve istedi�iniz  *"
         << endl;
    cout << "                         * zaman elinizde bulunan temel �r�nlerle hangi �r�n�n�zden ne kadar �retebilece-*"
         << endl;
    cout << "                         * �inizin de anl�k bilgisini g�ncel olarak alabileceksiniz.                     *"
         << endl;
    cout << "                         *********************************************************************************"
         << endl;
    cout << endl << endl << endl;
    cout << "             1-)�r�n Bilgisi ";
    cout << "             2-)Stok Bilgisi ";
    cout << "             3-)Temel �r�nlerle Neler Yapabilirsiniz" << endl << endl;
    cout << "                         Devam Etmek �stedi�iniz Men�n�n Numaras�n� Giriniz:";

    //devam edebilmesi i�in
    string devam;
    cin >> devam;

    if (devam == "1") {
        gotoline:
        // sayfay� temizliyor
        cout << string(100, '\n');

        cout << "Temel �r�n\t\tTabancalar\t\tBombalar\t\tB��aklar" << endl;
        cout << barut1.getId() << "-)" << barut1.getIsim() << "\t\t";
        cout << deagle.getId() << "-)" << deagle.getName() << "\t\t";
        cout << nade.getId() << "-)" << nade.getName() << "\t\t";
        cout << nayf.getId() << "-)" << nayf.getName() << "\t\t" << endl;
        cout << gaz1.getId() << "-)" << gaz1.getIsim() << "\t\t\t";
        cout << glock.getId() << "-)" << glock.getName() << "\t\t";
        cout << flash.getId() << "-)" << flash.getName() << "\t\t";
        cout << butterfly.getId() << "-)" << butterfly.getName() << "\t\t" << endl;
        cout << demir1.getId() << "-)" << demir1.getIsim() << "\t\t";
        cout << usp.getId() << "-)" << usp.getName() << "\t\t";

        cout << "\n\n\n\n";
        cout << "�r�n hakk�nda bilgi almak i�in �r�n�n ID'sini giriniz, Bir �st Men�ye Gitmek i�in 0'a bas�n�z:";
        int secenek;
        string geridon;
        cin >> secenek;
        if (secenek == 0) {
            cout << string(100, '\n');
            goto gline2;
        }

        cout << string(100, '\n');

        switch (secenek) {
            case 1: {
                goto1:
                cout << "ID: " << barut1.getId() << endl;
                cout << "�sim: " << barut1.getIsim() << endl;
                cout << "Renk: " << barut1.getRenk() << endl;
                cout << "Stok " << barut1.getStok() << " KG" << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                   break;
                } else {
                    cout << string(100, '\n');
                    goto goto1;
                }
            }
            case 2: {
                goto2:
                cout << "ID: " << gaz1.getId() << endl;
                cout << "�sim: " << gaz1.getIsim() << endl;
                cout << "Renk: " << gaz1.getRenk() << endl;
                cout << "Stok " << gaz1.getStok() << " m2" << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto2;
                }
            }
            case 3: {
                goto3:
                cout << "ID: " << demir1.getId() << endl;
                cout << "�sim: " << demir1.getIsim() << endl;
                cout << "Renk: " << demir1.getRenk() << endl;
                cout << "Stok " << demir1.getStok() << " KG" << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto3;
                }
            }
            case 4: {
                goto4:
                cout << "ID: " << deagle.getId() << endl;
                cout << "�sim: " << deagle.getName() << endl;
                cout << "Stok: " << deagle.getStok() << " Adet" << endl;
                cout << "Fiyat: " << deagle.getFiyat() << "$" << endl;
                cout << "Hasar: " << deagle.getHasar() << endl;
                cout << "Menzil: " << deagle.getMenzil() << endl;
                cout << "Materyal: " << deagle.getMateryal() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto4;
                }
            }
            case 5: {
                goto5:
                cout << "ID: " << glock.getId() << endl;
                cout << "�sim: " << glock.getName() << endl;
                cout << "Stok: " << glock.getStok() << " Adet" << endl;
                cout << "Fiyat: " << glock.getFiyat() << "$" << endl;
                cout << "Hasar: " << glock.getHasar() << endl;
                cout << "Menzil: " << glock.getMenzil() << endl;
                cout << "Materyal: " << glock.getMateryal() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto5;
                }
            }
            case 6: {
                goto6:
                cout << "ID: " << usp.getId() << endl;
                cout << "�sim: " << usp.getName() << endl;
                cout << "Stok: " << usp.getStok() << " Adet" << endl;
                cout << "Fiyat: " << usp.getFiyat() << "$" << endl;
                cout << "Hasar: " << usp.getHasar() << endl;
                cout << "Menzil: " << usp.getMenzil() << endl;
                cout << "Materyal: " << usp.getMateryal() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto6;
                }
            }
            case 7: {
                goto7:
                cout << "ID: " << nade.getId() << endl;
                cout << "�sim: " << nade.getName() << endl;
                cout << "Stok: " << nade.getStok() << " Adet" << endl;
                cout << "Fiyat: " << nade.getFiyat() << "$" << endl;
                cout << "Hasar: " << nade.getHasar() << endl;
                cout << "Patlama S�resi: " << nade.getPatlama_suresi() << endl;
                cout << "Materyal: " << nade.getMateryal() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto7;
                }
            }
            case 8: {
                goto8:
                cout << "ID: " << flash.getId() << endl;
                cout << "�sim: " << flash.getName() << endl;
                cout << "Stok: " << flash.getStok() << " Adet" << endl;
                cout << "Fiyat: " << flash.getFiyat() << "$" << endl;
                cout << "Hasar: " << flash.getHasar() << endl;
                cout << "Patlama S�resi: " << flash.getPatlama_suresi() << endl;
                cout << "Materyal: " << flash.getMateryal() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto8;
                }
            }
            case 9: {
                goto9:
                cout << "ID: " << nayf.getId() << endl;
                cout << "�sim: " << nayf.getName() << endl;
                cout << "Stok: " << nayf.getStok() << " Adet" << endl;
                cout << "Fiyat: " << nayf.getFiyat() << "$" << endl;
                cout << "Hasar: " << nayf.getHasar() << endl;
                cout << "Materyal: " << nayf.getMateryal() << endl;
                cout << "A��rl�k: " << nayf.getAgirlik() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto9;
                }
            }
            case 10: {
                goto10:
                cout << "ID: " << butterfly.getId() << endl;
                cout << "�sim: " << butterfly.getName() << endl;
                cout << "Stok: " << butterfly.getStok() << " Adet" << endl;
                cout << "Fiyat: " << butterfly.getFiyat() << "$" << endl;
                cout << "Hasar: " << butterfly.getHasar() << endl;
                cout << "Materyal: " << butterfly.getMateryal() << endl;
                cout << "A��rl�k: " << butterfly.getAgirlik() << endl;
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon;
                if (geridon == "E" || geridon == "e") {
                    goto gotoline;
                }
                if (geridon == "H" || geridon == "h") {
                    break;
                } else {
                    cout << string(100, '\n');
                    goto goto10;
                }
            }
            default: {
                goto gotoline;

            }
        }


    }
    string geridon1;
    int stoksecenek;
    if (devam == "2") {
        gotoline3:

        cout << "\n\n1-)Temel �r�n Stok Bilgisi" << "\n" << "2-)Silahlar�n Stok Say�s�" << endl;
        cout << endl << "Devam Etmek �stedi�iniz Men�y� Se�iniz, Bir �st Men�ye Gitmek i�in 0'a bas�n�z:";
        cin >> stoksecenek;
        cout << string(100, '\n');
        switch (stoksecenek) {
            case 1: {
                cout << "Temel �r�n kategorinizde " << barut1.getStok() << " KG " << barut1.getIsim() << ", "
                     << gaz1.getStok() << " m2 " << gaz1.getIsim() << " ve " << demir1.getStok() << " KG "
                     << demir1.getIsim();
                cout << " bulunmaktad�r\n\n\n";
                gotol1:

                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon1;
                if (geridon1 == "E" || geridon1 == "e") {
                    goto gotoline3;
                }
                if (geridon1 == "H" || geridon1 == "h") {
                        break;
                } else {
                    cout << string(100, '\n');
                    goto gotol1;
                }
            }

            case 2: {
                gotol2:
                cout << "Silah kategorinizde " << deagle.getStok() << " adet " << deagle.getName() << ", "
                     << glock.getStok() << " adet " << glock.getName() << " ve " << usp.getStok() << " Adet "
                     << usp.getName();
                cout << " bulunmaktad�r\n\n\n";
                cout << "\n\n\n" << "Geri D�nmek istiyormusunuz[(E)vet/(H)ay�r]:";
                cin >> geridon1;

                if (geridon1 == "E" || geridon1 == "e") {
                    cout << string(100, '\n');
                    goto gotoline3;
                }
                else if (geridon1 == "H" || geridon1 == "h") {
                    break;
                }
                else {
                   goto gotol2;
                }
            }
            default: {
                goto gline2;
            }
        }

    }
    if (devam == "3") {
        cout << string(100, '\n');
        cout << "1-) " << deagle.getName() << "=" << ((barut1.getStok() / 50) * demir1.getStok() / 30) / 5 << endl;
        cout << "2-) " << glock.getName() << "=" << ((barut1.getStok() / 45) * demir1.getStok() / 27) / 5 << endl;
        cout << "3-) " << usp.getName() << "=" << ((barut1.getStok() / 48) * demir1.getStok() / 28) / 5 << endl;
        cout << "4-) " << nade.getName() << "=" << ((barut1.getStok() / 30) * demir1.getStok() / 40) / 4 << endl;
        cout << "5-) " << flash.getName() << "=" << ((gaz1.getStok() / 42) * demir1.getStok() / 29) / 4 << endl;
        cout << "6-) " << nayf.getName() << "=" << demir1.getStok() / 34 << endl;
        cout << "7-) " << butterfly.getName() << "=" << demir1.getStok() / 40 << endl;

    }
    if(devam<"1" || devam>"3"){
        goto gline2;
    }


}



