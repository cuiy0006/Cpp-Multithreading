#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculate_pi(int terms) 
{
    double sum = 0.0;
    int sign = 1;


    for(int i = 0; i < terms; ++i)
    {
        double term = 1.0/(i * 2 + 1);
        sum += sign * term;
	sign = sign * (-1);
    }

    return sum * 4;
}

int main() 
{
    cout << setprecision(15) << calculate_pi(1E9) << endl;
    return 0;
}
