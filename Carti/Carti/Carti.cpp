#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Carte
{
    unsigned an_publicatie;
    char autor[50];
    char nume[50];
    unsigned nr_pagini;
};

class Biblioteca
{
private:
    unsigned an_publicatie;
    char autor[50];
    char nume[50];
    unsigned nr_pagini;
public:
    Biblioteca(unsigned an, char* autor, char* nume, unsigned pagini)
    {
        an_publicatie = an;
        strcpy_s(this->autor, 50, autor);
        strcpy_s(this->nume, 50, nume);
        nr_pagini = pagini;
    };
    Biblioteca() {}
    unsigned arata_an() { return this->an_publicatie; }
    char* arata_autor() { return this->autor; }
};

int main() {

    Console::WriteLine("Introduceti numarul de carti: ");
    int nr_carti;
    cin >> nr_carti;
    Carte* carti = new Carte[nr_carti];
    for (int i = 0; i < nr_carti; i++) {
        Console::WriteLine("Introduceti numele cartii {0}: ", i + 1);
        char nume[50];
        cin >> nume;
        strcpy_s(carti[i].nume, 50, nume);
        Console::WriteLine("Introduceti numele autorului pentru cartea {0}: ", i + 1);
        char autor[50];
        cin >> autor;
        strcpy_s(carti[i].autor, 50, autor);
        Console::WriteLine("Introduceti anul publicarii pentru cartea {0}: ", i + 1);
        unsigned an;
        cin >> an;
        carti[i].an_publicatie = an;
        Console::WriteLine("Introduceti numarul de pagini pentru cartea {0}: ", i + 1);
        unsigned pagini;
        cin >> pagini;
        carti[i].nr_pagini = pagini;
    }
    Console::WriteLine("Afisam informatiile cartilor: ");
    for (int i = 0; i < nr_carti; i++) {
        cout << carti[i].nume << '\t' << carti[i].autor << '\t' << carti[i].an_publicatie << '\t' << carti[i].nr_pagini << endl;
    }
    Console::ReadKey();
}
