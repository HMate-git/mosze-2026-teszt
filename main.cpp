#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //N_ELEMENTS van definiálva korábban
    int *b = new int[NELEMENTS]; 
    
    //kettős idézőjelet kéne használni (")
    std::cout << '1-100 ertekek duplazasa'


    //hiányzik a feltétel és az i léptetése a ciklusból
    for (int i = 0;)
    {
        //i+1*2 képlettel duplázná meg 1-100-ig
        b[i] = i * 2;
    }

    //a ciklusfeltétel miatt a for egyszer sem fut le
    for (int i = 0; i; i++)
    {
	//hiányzik a pontosvessző, illetve a szám egyáltalán nincs kiíratva
        std::cout << "Ertek:"
    }  

  
    std::cout << "Atlag szamitasa: " << std::endl;

    // érdemes kezdőértéket megadni, hogy ne szeméttel kezdjen
    int atlag;

    // vessző helyett pontosvesszővel kell elválasztani a deklarációkat a for ciklus fejében
    for (int i = 0; i < N_ELEMENTS, i++)
    {
	//hiányzik pontosvessző
        atlag += b[i]
    }


    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    //a new-val foglalt memóriát fel kell szabadítani
    return 0;
}
