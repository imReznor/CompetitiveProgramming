
#include <iostream>
#include <cmath>
 
using namespace std;

int subAlg(int a, int b){
    int value = 0;

    while(a > b){
        b++;
        value++;
    }

    return value;
}

int multAlg(int a, int b){
    int value = 0;

    for (int i = 1; i <= 2; i++)
    {
        value += a;
    }
    return value;
    
}

int expAlg(int a, int b){
    int value = 1;

    while(b){
        value *= a;
        b--;
    }
    return value;
}

int factAlg(int n){
    if(n ==  0 || n == 1){
        return 1;
    }else{
        return n * factAlg(n-1);
    }
}

int factAlg2 (int n){
    int value = 1;

    for (int i = 1; i <= n; i++)
    {
        value *= i;
    }
    
    return value;
}

void verifyPrime(int n){
    bool prime = true;
    for (int i = 2; i < n/2 && prime; i++)
    {
        if(n % i == 0)prime = false;
    }

    if (prime) cout << "Es primo" << endl;
    else cout << "No es primo" << endl;
    
}

void esGuay(int number){
    int value = 0;
    bool guay = false;

    for(int i = 1; i < number && guay == false; i++) {
        value += i;
        if(value == number) guay = true;
    }
    
    if(guay) cout << "Guay"<< endl;
    else cout << "No guay"<< endl;

}




int main()
{   
    cout << "Resta de 5 - 1 es " << subAlg(5, 1) << endl;  
    cout << "Multiplicacion de 5 * 2 es " << multAlg(5, 2) << endl;
    cout << expAlg(3, 4) << endl;
    cout<<factAlg(5)<<endl;
    cout<<factAlg2(5)<<endl;
    verifyPrime(7);
    esGuay(6);
}
