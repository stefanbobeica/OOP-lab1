#include <iostream>
#include <string.h>
using namespace std;
class Angajat
{
    int varsta;
    char nume[20];
    char CNP[14];
    int salariu;

public:
    Angajat()
    {
        varsta = 0;
        strcpy(nume, "");
        strcpy(nume, "");
        int salariu = 0;
    }
    Angajat(int v, char *n, char *C, int s)
    {
        varsta = v;
        strcpy(nume, n);
        strcpy(CNP, C);
        salariu = s;
    }
    void afisare()
    {
        cout << "Numele este: " << nume << "." << endl;
        cout << "Varsta este: " << varsta << "." << endl;
        cout << "CNP-ul este: " << CNP << "." << endl;
        cout << "Salariul este:" << salariu << "." << endl;
    }
    void modif(int v, char *n, char *C, int s)
    {
        varsta = v;
        strcpy(nume, n);
        strcpy(CNP, C);
        salariu = s;
    }
    int getVarsta()
    {
        return varsta;
    }
    char *getNume()
    {
        return nume;
    }
    char *getCNP()
    {
        return CNP;
    }
    int getSalariu()
    {
        return salariu;
    }
};
void schimba(Angajat &x, Angajat &y)
{
    Angajat aux;
    aux = x;
    x = y;
    y = aux;
}

int main()
{
    Angajat Dorel(58, "Dorel", "123456789", 2000);
    cout << Dorel.getSalariu() << endl;

    cout << Dorel.getNume() << endl;

    Dorel.modif(69, "Dorelv2", "9999999", 5800);

    Dorel.afisare();

    Angajat Vector[4];

    Vector[0].modif(50, "Andrei", "1234567", 3000);
    Vector[1].modif(51, "Ionut", "1234567", 2000);
    Vector[2].modif(52, "Victor", "1234567", 3000);
    Vector[3].modif(53, "Alex", "1234567", 2500);
    Vector[4].modif(54, "Dan", "1234567", 2000);

    for (int i = 0; i < 5; i++)
        for (int j = i; j < 5; j++)
        {
            if (strcmp(Vector[i].getNume(), Vector[j].getNume()) > 0)

                schimba(Vector[i], Vector[j]);
        }
    cout << endl;
    cout << "Ordonare alfabetica:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << Vector[i].getNume() << endl;
    }
    int maxim = 0;
    for (int i = 0; i < 5; i++)
    {
        if (Vector[i].getSalariu() > maxim)
            maxim = Vector[i].getSalariu();
    }
    cout << endl;
    cout << "Salariul maxim:" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (Vector[i].getSalariu() == maxim)
        {
            cout << Vector[i].getNume() << ": " << Vector[i].getSalariu() << endl;
        }
    }
}