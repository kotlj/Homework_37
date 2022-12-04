
#include <iostream>
#include <complex>
using namespace std;

struct car
{
    double cliarence;
    double engineVolume;
    double enginePower;
    double wheelD;
    string color;
    string transmission;
};

void fill(car *a)
{
    cout << "enter cliarence of car(m):\n";
    cin >> (*a).cliarence;
    cout << "enter engine volume:\n";
    cin >> (*a).engineVolume;
    cout << "enter engine power:\n";
    cin >> (*a).enginePower;
    cout << "enter wheel diameter:\n";
    cin >> (*a).wheelD;
    cout << "enter car color:\n";
    cin >> (*a).color;
    cout << "enter type of transmission:\n";
    cin >> (*a).transmission;
}

void show(car a)
{
    cout << "Car:\nCliarence: " << a.cliarence << "\nEngine volume: " << a.engineVolume << "\nEngine power: " << a.enginePower <<
    "\nWheel deametre: " << a.wheelD << "\nCar color: " << a.color << "\nType of transmission: " << a.transmission << "\n";
}

void find(car a)
{
    int choise = 0;
    cout << "choose value you want to know:\n1 - cliarence;\n2 - engine volume;\n3 - engine power;\n4 - wheel deametre\
    \n5 - color\n6 - type of transmission.\n";
    cin >> choise;
    if (choise == 1)
    {
        cout << a.cliarence;
    }
    else if (choise == 2)
    {
        cout << a.engineVolume;
    }
    else if (choise == 3)
    {
        cout << a.enginePower;
    }
    else if (choise == 4)
    {
        cout << a.wheelD;
    }
    else if (choise == 5)
    {
        cout << a.color;
    }
    else if (choise == 6)
    {
        cout << a.transmission;
    }
    else
    {
        cout << "ERROR: INVELID OPTION\n";
    }
}

int main()
{
    while (true)
    {
        int choise;
        cout << "choose task:\n1 - complex numbers;\n2 - car;\n0 - exit.\n";
        cin >> choise;
        if (choise == 1)
        {
            int Re1;
            int Im1;
            int Re2;
            int Im2;
            cout << "Enter Re1:\n";
            cin >> Re1;
            cout << "Enter Im1:\n";
            cin >> Im1;
            cout << "Enter Re2:\n";
            cin >> Re2;
            cout << "enter Im2:\n";
            cin >> Im2;
            complex< double > z1(Re1, Im1);
            complex< double > z2(Re2, Im2);
            while (true)
            {
                cout << "choose option:\n1 - z1 + z2;\n2 - z1 - z2;\n3 - z1 * z2;\n4 - z1 / z2;\n5 - re-input z\n0 - exit.\n";
                cin >> choise;
                if (choise == 1)
                {
                    cout << z1 + z2 << "\n";
                }
                else if (choise == 2)
                {
                    cout << z1 - z2 << "\n";
                }
                else if (choise == 3)
                {
                    cout << z1 * z2 << "\n";
                }
                else if (choise == 4)
                {
                    cout << z1 / z2 << "\n";
                }
                else if (choise == 5)
                {
                    cout << "Enter Re1:\n";
                    cin >> Re1;
                    cout << "Enter Im1:\n";
                    cin >> Im1;
                    cout << "Enter Re2:\n";
                    cin >> Re2;
                    cout << "enter Im2:\n";
                    cin >> Im2;
                    z1 = (Re1, Im1);
                    z2 = (Re2, Im2);
                }
                else if (choise == 0)
                {
                    choise = 1;
                    break;
                }
                else
                {
                    cout << "ERROR: INVALID OPTION\n";
                }
            }
        }
        else if (choise == 2)
        {
            car a;
            fill(&a);
            while (true)
            {
                cout << "choose option:\n1 - fill car options;\n2 - show;\n3 - find value of option;\n0 - exit.\n";
                cin >> choise;
                if (choise == 1)
                {
                    fill(&a);
                }
                else if (choise == 2)
                {
                    show(a);
                }
                else if (choise == 3)
                {
                    find(a);
                }
                else if (choise == 0)
                {
                    choise = 1;
                    break;
                }
                else
                {
                    cout << "ERROR: INVALID OPTION\n";
                }
            }
        }
        else if (choise == 0)
        {
            break;
        }
        else
        {
            cout << "ERROR: INVALID OPTION";
        }
    }
}