#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //N_ELEMENTS-re javítva NELEMENTS helyett
    int *b = new int[N_ELEMENTS]; 
    
    //(')-t (")-ra javítva illetve std::endl.el befejezve
    std::cout << "1-100 ertekek duplazasa"<< std::endl;


    //ciklus feltétel javítva
    for (int i = 0;i<N_ELEMENTS;i++)
    {
        //Ciklus belső 1-tő kezd nem 0-tól
        b[i] = (i+1) * 2;
    }

    //a ciklusfeltétel javítva működőre
    for (int i = 0; i<N_ELEMENTS; i++)
    {
	//értékek normáisan kiiratva
        std::cout << "Ertek:" << b[i] << std::endl;
    }  

  
    std::cout << "Atlag szamitasa: " << std::endl;

    // kezdőérték megadva szeméttel kezdés kerülve
    int atlag=0;

    // vessző pontosvesszőre javítva
    for (int i = 0; i < N_ELEMENTS; i++)
    {
	//pontosvessző pótolva
        atlag += b[i];
    }


    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    
    //memória felszabdítva
    delete[] b;
    return 0;
}
