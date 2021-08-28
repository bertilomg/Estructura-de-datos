#include <iostream>
#include <limits>

using namespace std;

int main()

             {
 
    
    int imin = std::numeric_limits<int>::min();
    int imax = std::numeric_limits<int>::max();
    
    cout << " imin = " << imin << endl;
    cout << " imax = " << imax << "\n";
    cout << " tamanio de int : " << sizeof(int) << endl;

    float fmin = std::numeric_limits<float>::min();
    float fmax = std::numeric_limits<float>::max();
    
    cout << " fmin = " << fmin << endl;
    cout << " fmax = " << fmax << "\n";
    cout << " tamanio de float : " << sizeof(float) << endl;
    
    short int end3();    
    short int simin = numeric_limits<short int>::min();
    short int simax = numeric_limits<short int>::max();
    
    cout << " simin = " << simin << endl;
    cout << " simax = " << simax << "\n";
    cout << " tamanio de short int : " << sizeof(short int) << endl;
    
    bool bmin = numeric_limits<bool>::min();
    bool bmax = numeric_limits<bool>::max();
    
    cout << " bmin = " << bmin << endl;
    cout << " bmax = " << bmax << "\n";
    cout << " tamanio de bool : " << sizeof(bool) << endl;
    
    double dmin = numeric_limits<double>::min();
    double dmax = numeric_limits<double>::max();
    
    cout << " dmin = " << dmin << endl;
    cout << " dmax = " << dmax << "\n";
    cout << " tamanio de double : " << sizeof(double) << endl;
    
    

    return 0;
    
    }
    
