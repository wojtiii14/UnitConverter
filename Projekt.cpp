#include <iostream>

using namespace std;

/* Konwerter jednostek
Program konwertujący np. jednostki: wagi, miary, czasu, temperatury lub też waluty.
Na początku użytkownik musi dokonać wyboru dziedziny w jakiej zostanie dokonana konwersja (np: waga, miara, czas), następnie z jakiej jednostki na jaką (np. kilometry na mile).
Wejście: 45km Wyjście: 27,96 mili */

void waga()
{
    char input;

    cout << "Podaj jednostkę wejściową: " << endl;
    cout << "Gram (g)" << endl;
    cout << "Dekagram (d)" << endl;
    cout << "Kilogram (k)" << endl;
    cout << "Tona (t)" << endl;
    cout << "Funt (f)" << endl;
    cout << "Uncja (u)" << endl;

    cin >> input;

    switch(input)
    {
        case 'g':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Dekagram (d)" << endl;
            cout << "Kilogram (k)" << endl;
            cout << "Tona (t)" << endl;
            cout << "Funt (f)" << endl;
            cout << "Uncja (u)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'd':
                {
                    cout << "Podaj ilość gramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " gramow to " << ilosc / 10 << " dekagramow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość gramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " gramow to " << ilosc / 1000 << " kilogramow!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość gramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " gramow to " << ilosc / 1000000 << " ton!" << endl;
                    break;
                }

                case 'f':
                {
                    cout << "Podaj ilość gramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " gramow to " << ilosc * 0.0022;
                    cout << " funtow!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj ilość gramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " gramow to " << ilosc * 0.035;
                    cout << " uncji!" << endl;
                    break;
                }
            }
            break;
        }

        case 'd':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Gram (g)" << endl;
            cout << "Kilogram (k)" << endl;
            cout << "Tona (t)" << endl;
            cout << "Funt (f)" << endl;
            cout << "Uncja (u)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'g':
                {
                    cout << "Podaj ilość dekagramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dekagramow to " << ilosc * 10 << " gramow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość dekagramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dekagramow to " << ilosc / 100 << " kilogramow!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość dekagramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dekagramow to " << ilosc / 100000 << " kilogramow!" << endl;
                    break;
                }

                case 'f':
                {
                    cout << "Podaj ilość dekagramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dekagramow to " << ilosc * 0.022;
                    cout << " funtow!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj ilość dekagramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dekagramow to " << ilosc * 0.35;
                    cout << " uncji!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 'k':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Gram (g)" << endl;
            cout << "Dekagram (d)" << endl;
            cout << "Tona (t)" << endl;
            cout << "Funt (f)" << endl;
            cout << "Uncja (u)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'g':
                {
                    cout << "Podaj ilość kilogramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilogramow to " << ilosc * 1000 << " gramow!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość kilogramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilogramow to " << ilosc * 100 << " dekagramow!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość kilogramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilogramow to " << ilosc / 1000 << " ton!" << endl;
                    break;
                }

                case 'f':
                {
                    cout << "Podaj ilość kilogramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilogramow to " << ilosc * 2.204;
                    cout << " funtow!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj ilość kilogramow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilogramow to " << ilosc * 35.27;
                    cout << " uncji!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 't':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Gram (g)" << endl;
            cout << "Dekagram (d)" << endl;
            cout << "Kilogram (k)" << endl;
            cout << "Funt (f)" << endl;
            cout << "Uncja (u)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'g':
                {
                    cout << "Podaj ilość ton: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " ton to " << ilosc * 1000000 << " gramow!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość ton: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " ton to " << ilosc * 100000 << " dekagramow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość ton: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " ton to " << ilosc * 1000 << " kilogramow!" << endl;
                    break;
                }

                case 'f':
                {
                    cout << "Podaj ilość ton: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " ton to " << ilosc * 2204.62;
                    cout << " funtow!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj ilość ton: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " ton to " << ilosc * 35273.96;
                    cout << " uncji!" << endl;
                    break;
                }
            }
            break;
        }
       

        case 'f':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Gram (g)" << endl;
            cout << "Dekagram (d)" << endl;
            cout << "Kilogram (k)" << endl;
            cout << "Tona (t)" << endl;
            cout << "Uncja (u)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'g':
                {
                    cout << "Podaj ilość funtow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 453.59 << " gramow!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość funtow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 45.359 << " dekagramow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość funtow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 0.45359 << " kilogramow!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość funtow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 0.00045359;
                    cout << " ton!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj ilość funtow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 16;
                    cout << " uncji!" << endl;
                    break;
                }
            }
            break;
        }
       

        case 'u':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Gram (g)" << endl;
            cout << "Dekagram (d)" << endl;
            cout << "Kilogram (k)" << endl;
            cout << "Tona (t)" << endl;
            cout << "Funt (f)" << endl;
            cout << "Uncja (u)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'g':
                {
                    cout << "Podaj ilość uncji: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " uncji to " << ilosc * 28.35 << " gramow!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość uncji: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " uncji to " << ilosc * 2.835 << " dekagramow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość uncji: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " uncji to " << ilosc * 0.02835 << " kilogramow!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość uncji: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " uncji to " << ilosc * 0.00002835;
                    cout << " ton!" << endl;
                    break;
                }

                case 'f':
                {
                    cout << "Podaj ilość uncji: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " uncji to " << ilosc * 0.0625;
                    cout << " funtow!" << endl;
                    break;
                }
            }
            break;
        }
        
    }

}

void miara()
{
    char input;

    cout << "Podaj jednostkę wejściową: " << endl;
    cout << "Metr (m)" << endl;
    cout << "Kilometr (k)" << endl;
    cout << "Stopa (s)" << endl;
    cout << "Cal (c)" << endl;
    cout << "Jard (j)" << endl;
    cout << "Mila (M)" << endl;

    cin >> input;

    switch(input)
    {
        case 'm':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Kilometr (k)" << endl;
            cout << "Stopa (s)" << endl;
            cout << "Cal (c)" << endl;
            cout << "Jard (j)" << endl;
            cout << "Mila (M)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'k':
                {
                    cout << "Podaj ilość metrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " metrow to " << ilosc / 1000 << " kilometrow!" << endl;
                    break;
                }

                case 's':
                {
                    cout << "Podaj ilość metrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " metrow to " << ilosc * 3.28 << " stop!" << endl;
                    break;
                }

                case 'c':
                {
                    cout << "Podaj ilość metrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " metrow to " << ilosc * 39.37 << " cali!" << endl;
                    break;
                }

                case 'j':
                {
                    cout << "Podaj ilość metrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " metrow to " << ilosc * 1.094 << " jardow!" << endl;
                    break;
                }

                case 'M':
                {
                    cout << "Podaj ilość metrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " metrow to " << ilosc * 0.00062 << " mil!" << endl;
                    break;
                }
            }
            break;
        }

        case 'k':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Metr (m)" << endl;
            cout << "Stopa (s)" << endl;
            cout << "Cal (c)" << endl;
            cout << "Jard (j)" << endl;
            cout << "Mila (M)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'm':
                {
                    cout << "Podaj ilość kilometrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilometrow to " << ilosc * 1000 << " metrow!" << endl;
                    break;
                }

                case 's':
                {
                    cout << "Podaj ilość kilometrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilometrow to " << ilosc * 3280.84 << " stop!" << endl;
                    break;
                }

                case 'c':
                {
                    cout << "Podaj ilość kilometrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilometrow to " << ilosc * 39370.08 << " cali!" << endl;
                    break;
                }

                case 'j':
                {
                    cout << "Podaj ilość kilometrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilometrow to " << ilosc * 1094 << " jardow!" << endl;
                    break;
                }

                case 'M':
                {
                    cout << "Podaj ilość kilometrow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " kilometrow to " << ilosc * 0.62 << " mil!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 's':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Metr (m)" << endl;
            cout << "Kilometr (k)" << endl;
            cout << "Cal (c)" << endl;
            cout << "Jard (j)" << endl;
            cout << "Mila (M)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'm':
                {
                    cout << "Podaj ilość stop: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stop to " << ilosc * 0.3048 << " metrow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość stop: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stop to " << ilosc * 0.0003048 << " kilometrow!" << endl;
                    break;
                }

                case 'c':
                {
                    cout << "Podaj ilość stop: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stop to " << ilosc * 12 << " cali!" << endl;
                    break;
                }

                case 'j':
                {
                    cout << "Podaj ilość stop: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stop to " << ilosc * 0.33 << " jardow!" << endl;
                    break;
                }

                case 'M':
                {
                    cout << "Podaj ilość stop: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stop to " << ilosc * 0.00019 << " mil!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 'c':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Metr (m)" << endl;
            cout << "Kilometr (k)" << endl;
            cout << "stopa (s)" << endl;
            cout << "Jard (j)" << endl;
            cout << "Mila (M)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'm':
                {
                    cout << "Podaj ilość cali: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " cali to " << ilosc * 0.0254 << " metrow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość cali: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " cali to " << ilosc * 0.0000254 << " kilometrow!" << endl;
                    break;
                }

                case 's':
                {
                    cout << "Podaj ilość cali: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " cali to " << ilosc * 0.083 << " stop!" << endl;
                    break;
                }

                case 'j':
                {
                    cout << "Podaj ilość cali: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " cali to " << ilosc * 0.028 << " jardow!" << endl;
                    break;
                }

                case 'M':
                {
                    cout << "Podaj ilość cali: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " cali to " << ilosc * 0.0000158 << " mil!" << endl;
                    break;
                }
            }
            break;
        }
       

        case 'j':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Metr (m)" << endl;
            cout << "Kilometr (k)" << endl;
            cout << "stopa (s)" << endl;
            cout << "Cal (c)" << endl;
            cout << "Mila (M)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'm':
                {
                    cout << "Podaj ilość jardow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " jardow to " << ilosc * 0.9144 << " metrow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość jardow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " jardow to " << ilosc * 0.0009144 << " kilometrow!" << endl;
                    break;
                }

                case 's':
                {
                    cout << "Podaj ilość jardow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " jardow to " << ilosc * 3 << " stop!" << endl;
                    break;
                }

                case 'c':
                {
                    cout << "Podaj ilość jardow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " jardow to " << ilosc * 36 << " cali!" << endl;
                    break;
                }

                case 'M':
                {
                    cout << "Podaj ilość jardow: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " jardow to " << ilosc * 0.0005682 << " mil!" << endl;
                    break;
                }
            }
            break;
        }
       

        case 'M':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Metr (m)" << endl;
            cout << "Kilometr (k)" << endl;
            cout << "stopa (s)" << endl;
            cout << "Cal (c)" << endl;
            cout << "Jard (j)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'm':
                {
                    cout << "Podaj ilość mil: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " mil to " << ilosc * 1609 << " metrow!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj ilość mil: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " mil to " << ilosc * 1.609 << " kilometrow!" << endl;
                    break;
                }

                case 's':
                {
                    cout << "Podaj ilość mil: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " mil to " << ilosc * 5280 << " stop!" << endl;
                    break;
                }

                case 'c':
                {
                    cout << "Podaj ilość mil: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " mil to " << ilosc * 63360 << " cali!" << endl;
                    break;
                }

                case 'M':
                {
                    cout << "Podaj ilość mil: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " mil to " << ilosc * 1760 << " jardow!" << endl;
                    break;
                }
            }
            break;
        }
        
    }

}

void temperatura()
{
    char input;

    cout << "Podaj jednostkę wejściową: " << endl;
    cout << "Celsjusz (c)" << endl;
    cout << "Fahrenheit (f)" << endl;
    cout << "Kelwin (k)" << endl;
    
    cin >> input;

    switch(input)
    {
        case 'c':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Fahrenheit (f)" << endl;
            cout << "Kelwin (k)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'f':
                {
                    cout << "Podaj temperature w stopniach Celsjusza: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stopni Celsjusza to " << ((ilosc * 1.8) + 32) << " stopni Fahrenheita!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj temperature w stopniach Celsjusza: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stopni Celsjusza to " << (ilosc + 273) << " Kelwinow!" << endl;
                    break;
                }
            }
            break;
        }

        case 'f':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Celsjusz (c)" << endl;
            cout << "Kelwin (k)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'c':
                {
                    cout << "Podaj temperature w stopniach Fahrenheita: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stopni Fahrenheita to " << ((ilosc - 32) / 1.8) << " stopni Celsjusza!" << endl;
                    break;
                }

                case 'k':
                {
                    cout << "Podaj temperature w stopniach Fahrenheita: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " stopni Fahrenheita to " << (((ilosc - 32) / 1.8) + 273) << " Kelwinow!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 'k':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Celsjusz (c)" << endl;
            cout << "Fahrenheit (f)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'c':
                {
                    cout << "Podaj temperature w Kelwinach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " Kelwinow to " << (ilosc - 273) << " stopni Celsjusza!" << endl;
                    break;
                }

                case 'f':
                {
                    cout << "Podaj temperature w Kelwinach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " Kelwinow to " << (((ilosc - 273) * 1.8) + 32) << " stopni Fahrenheita!" << endl;
                    break;
                }
            }
            break;
        }
        
    }

}

void czas()
{
    char input;

    cout << "Podaj jednostkę wejściową: " << endl;
    cout << "Sekunda (s)" << endl;
    cout << "Minuta (m)" << endl;
    cout << "Godzina (g)" << endl;
    cout << "Dzien (d)" << endl;
    cout << "Tydzien (t)" << endl;
    cout << "Rok (r)" << endl;

    cin >> input;

    switch(input)
    {
        case 's':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Minuta (m)" << endl;
            cout << "Godzina (g)" << endl;
            cout << "Dzien (d)" << endl;
            cout << "Tydzien (t)" << endl;
            cout << "Rok (r)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 'm':
                {
                    cout << "Podaj ilość sekund: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " sekund to " << ilosc / 60 << " minut!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj ilość sekund: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " sekund to " << ilosc / 3600 << " godzin!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość sekund: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " sekund to " << ilosc / 86400 << " dni!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość sekund: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " sekund to " << ilosc / 604800 << " tygodni!" << endl;
                    break;
                }

                case 'r':
                {
                    cout << "Podaj ilość sekund: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " sekund to " << ilosc / 31449600 << " lat!" << endl;
                    break;
                }
            }
            break;
        }

        case 'm':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Sekunda (s)" << endl;
            cout << "Godzina (g)" << endl;
            cout << "Dzien (d)" << endl;
            cout << "Tydzien (t)" << endl;
            cout << "Rok (r)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 's':
                {
                    cout << "Podaj ilość minut: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " minut to " << ilosc * 60 << " sekund!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj ilość minut: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " minut to " << ilosc / 60 << " godzin!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość minut: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " minut to " << ilosc / 1440 << " dni!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość minut: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " minut to " << ilosc / 10080 << " tygodni!" << endl;
                    break;
                }

                case 'r':
                {
                    cout << "Podaj ilość minut: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " minut to " << ilosc / 524160 << " lat!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 'g':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Sekunda (s)" << endl;
            cout << "minuta (m)" << endl;
            cout << "Dzien (d)" << endl;
            cout << "Tydzien (t)" << endl;
            cout << "Rok (r)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 's':
                {
                    cout << "Podaj ilość godzin: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " godzin to " << ilosc * 3600 << " sekund!" << endl;
                    break;
                }

                case 'm':
                {
                    cout << "Podaj ilość godzin: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " godzin to " << ilosc * 60 << " minut!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość godzin: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " godzin to " << ilosc / 24 << " dni!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość godzin: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " godzin to " << ilosc / 168 << " tygodni!" << endl;
                    break;
                }

                case 'r':
                {
                    cout << "Podaj ilość godzin: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " godzin to " << ilosc / 8736 << " lat!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 'd':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Sekunda (s)" << endl;
            cout << "minuta (m)" << endl;
            cout << "Godzina (g)" << endl;
            cout << "Tydzien (t)" << endl;
            cout << "Rok (r)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 's':
                {
                    cout << "Podaj ilość dni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dni to " << ilosc * 86400 << " sekund!" << endl;
                    break;
                }

                case 'm':
                {
                    cout << "Podaj ilość dni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dni to " << ilosc * 1440 << " minut!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj ilość dni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dni to " << ilosc * 24 << " godzin!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość dni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dni to " << ilosc / 7 << " tygodni!" << endl;
                    break;
                }

                case 'r':
                {
                    cout << "Podaj ilość dni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dni to " << ilosc / 365 << " lat!" << endl;
                    break;
                }
            }
            break;
        }
       

        case 't':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Sekunda (s)" << endl;
            cout << "minuta (m)" << endl;
            cout << "Godzina (g)" << endl;
            cout << "Dzien (d)" << endl;
            cout << "Rok (r)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 's':
                {
                    cout << "Podaj ilość tygodni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " tygodni to " << ilosc * 604800 << " sekund!" << endl;
                    break;
                }

                case 'm':
                {
                    cout << "Podaj ilość tygodni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " tygodni to " << ilosc * 10080 << " minut!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj ilość tygodni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " tygodni to " << ilosc * 168 << " godzin!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość tygodni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " tygodni to " << ilosc * 7 << " dni!" << endl;
                    break;
                }

                case 'r':
                {
                    cout << "Podaj ilość tygodni: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " tygodni to " << ilosc / 52 << " lat!" << endl;
                    break;
                }
            }
            break;
        }
       

        case 'r':
        {
            cout << "Podaj jednostkę wyjściową: " << endl;
            cout << "Sekunda (s)" << endl;
            cout << "minuta (m)" << endl;
            cout << "Godzina (g)" << endl;
            cout << "Dzien (d)" << endl;
            cout << "Tydzien (t)" << endl;

            char output;

            cin >> output;

            switch(output)
            {
                case 's':
                {
                    cout << "Podaj ilość lat: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " lat to " << ilosc * 31449600 << " sekund!" << endl;
                    break;
                }

                case 'm':
                {
                    cout << "Podaj ilość lat: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " lat to " << ilosc * 524160 << " minut!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj ilość lat: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " lat to " << ilosc * 8760 << " godzin!" << endl;
                    break;
                }

                case 'd':
                {
                    cout << "Podaj ilość lat: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " lat to " << ilosc * 365 << " dni!" << endl;
                    break;
                }

                case 't':
                {
                    cout << "Podaj ilość lat: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " lat to " << ilosc * 52 << " tygodni!" << endl;
                    break;
                }
            }
            break;
        }
        
    }

}

void waluta()
{
    char input;

    cout << "Podaj walute wejściową: " << endl;
    cout << "PLN (p)" << endl;
    cout << "EURO (e)" << endl;
    cout << "USD (u)" << endl;
    cout << "GBP (g)" << endl;
    
    cin >> input;

    switch(input)
    {
        case 'p':
        {
            cout << "Podaj walute wyjściową: " << endl;
            cout << "EURO (e)" << endl;
            cout << "USD (u)" << endl;
            cout << "GBP (g)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'e':
                {
                    cout << "Podaj kwote w zlotowkach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " zlotych to " << ilosc * 0.22 << " EURO!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj kwote w zlotowkach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " zlotych to " << ilosc * 0.26 << " dolarow!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj kwote w zlotowkach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " zlotych to " << ilosc * 0.19 << " funtow!" << endl;
                    break;
                }
            }
            break;
        }

        case 'e':
        {
            cout << "Podaj walute wyjściową: " << endl;
            cout << "PLN (p)" << endl;
            cout << "USD (u)" << endl;
            cout << "GBP (g)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'p':
                {
                    cout << "Podaj kwote w EURO: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " EURO to " << ilosc * 4.55 << " zlotych!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj kwote w EURO: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " EURO to " << ilosc * 1.19 << " dolarow!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj kwote w EURO: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " EURO to " << ilosc * 0.86 << " funtow!" << endl;
                    break;
                }
            }
            break;
        }
        

        case 'u':
        {
            cout << "Podaj walute wyjściową: " << endl;
            cout << "PLN (p)" << endl;
            cout << "EURO (e)" << endl;
            cout << "GBP (g)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'p':
                {
                    cout << "Podaj kwote w dolarach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dolarow to " << ilosc * 3.82 << " zlotych!" << endl;
                    break;
                }

                case 'e':
                {
                    cout << "Podaj kwote w dolarach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dolarow to " << ilosc * 0.84 << " EURO!" << endl;
                    break;
                }

                case 'g':
                {
                    cout << "Podaj kwote w dolarach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " dolarow to " << ilosc * 0.72 << " funtow!" << endl;
                    break;
                }
            }
            break;
        }

        case 'g':
        {
            cout << "Podaj walute wyjściową: " << endl;
            cout << "PLN (p)" << endl;
            cout << "EURO (e)" << endl;
            cout << "USD (u)" << endl;
            
            char output;

            cin >> output;

            switch(output)
            {
                case 'p':
                {
                    cout << "Podaj kwote w funtach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 5.32 << " zlotych!" << endl;
                    break;
                }

                case 'e':
                {
                    cout << "Podaj kwote w funtach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 1.17 << " EURO!" << endl;
                    break;
                }

                case 'u':
                {
                    cout << "Podaj kwote w funtach: " << endl;
                    double ilosc;
                    cin >> ilosc;
                    cout << ilosc << " funtow to " << ilosc * 1.39 << " dolarow!" << endl;
                    break;
                }
            }
            break;
        }
        
    }

}

int main()
{
    cout << "******** Konwerter jednostek ********" << endl;

    while( 1 == 1)
    {
        cout << "Wybierz typ jednostki: " << endl;
        cout << "Waga (W)" << endl;
        cout << "Miara (M)" << endl;
        cout << "Czas (C)" << endl;
        cout << "Tempeatura (T)" << endl;
        cout << "Waluta (P)" << endl;
        cout << "Opusc program (E)" << endl;

        char type;

        cin >> type;
        switch(type)
        {
            case 'W':
            {
                waga();
                break;
            }

            case 'M':
            {
                miara();
                break;
            }

            case 'C':
            {
                czas();
                break;
            }

            case 'T':
            {
                temperatura();
                break;
            }

            case 'P':
            {
                waluta();
                break;
            }

            case 'E':
            {
                return 0;
            }
        }

        cout << endl << endl;

    }

    return 0;
}