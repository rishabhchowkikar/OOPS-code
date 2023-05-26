#include <iostream>
using namespace std;
class BasicCar
{
public:
    void start()
    {
        cout << "car started" << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void playMusic()
    {
        cout << "music played" << endl;
    }
};

int main()
{
    // BasicCar *ptr;
    AdvanceCar obj;
    // ptr = &obj;
    // ptr->start();
    obj.playMusic();
    obj.start();
    // ptr->playMusic();
    return 0;
}