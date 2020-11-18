#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    atomic<bool> ready = false;

    thread t1([&](){
        this_thread::sleep_for(chrono::milliseconds(2000));
        ready = true;
    });


    while(!ready)
    {
        this_thread::sleep_for(chrono::milliseconds(100));
    }

    cout << "ready " << ready << endl;

    t1.join();

    return 0;
}
