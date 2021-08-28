#include <iostream>
#include <string>
#include <cmath>



using namespace std;
 
int main()
{
    double Lado1;
    double Lado2;
    double Lado3;
    double AreaTrianguloEquilatero(double TrianguloEquilatero);
    double AreaTrianguloIsosceles(double lado1,double lado2,double lado3); 
    double AreaTrianguloEscaleno(double ladoA, double ladoB, double ladoC);
 
    cout << "Bertilo Alejandro Muñoz González, Hola soy tu computadora escribe los lados para saber que tipo de triangulo es: \n";
    cout << "\nPrimer lado: "; cin >> Lado1;
    cout << "Segundo lado: "; cin >> Lado2;
    cout << "Tercer lado: "; cin >> Lado3;
    
 
    if (Lado1 == Lado2 && Lado2 == Lado3){
        cout << "Es un triangulo Equilatero \n " << endl;
        
        AreaTrianguloEquilatero(Lado1);

        
    }else if(Lado1 == Lado2 || Lado1 == Lado3 || Lado2 == Lado3){
        cout << "Es un triangulo Isosceles \n" << endl;
        
        AreaTrianguloIsosceles(Lado1,Lado2,Lado3);
        
    }else{
        cout << "Es un triangulo Escaleno \n" << endl;
        
        AreaTrianguloEscaleno(Lado1,Lado2,Lado3);
        
    }
}

void AreaTrianguloEquilatero(double TrianguloEquilatero){
    double areaTrianguloEquilatero;
	
	areaTrianguloEquilatero = (sqrt(3)/4)*pow(TrianguloEquilatero, 2);
    cout << "El area del triangulo es: \n " << areaTrianguloEquilatero << endl;
};

void AreaTrianguloIsosceles(double lado1, double lado2, double lado3){
    double base;
    double ladoigual;
    double areaTrianguloIsosceles;
    
    if (lado1 == lado2){
            ladoigual = lado1;
            base = lado3;
        }else if(lado1 == lado3){
            ladoigual = lado1;
            base = lado2;
        }else{
            ladoigual = lado2;
            base = lado1;
        }
        areaTrianguloIsosceles=((base)*(sqrt(pow(ladoigual,2)-(pow(base,2)/4))))/2;
        
        cout << "El area del triangulo es: \n " << areaTrianguloIsosceles << endl;
        
};

void AreaTrianguloEscaleno(double ladoA, double ladoB, double ladoC){
    double perimetro;
    double areaTrianguloEscaleno;
    
    perimetro = (ladoA + ladoB + ladoC)/2;
    areaTrianguloEscaleno = sqrt(perimetro*(perimetro - ladoA) * (perimetro - ladoB) * (perimetro - ladoC));
        
    cout << "El area del triangulo es: \n " << areaTrianguloEscaleno << endl;
    
};
