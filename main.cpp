// Vector3Homeworks.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Vector3.h"

using namespace std;

int main()
{
    cout << "Vec3():" << endl;
    Vector3<float> vectEmpty = Vector3<float>();
    vectEmpty.show();
    cout << endl;

    cout << "Vec3(1,2,3):" << endl;
    Vector3<int> vectInit = Vector3<int>(1,2,3);
    vectInit.show();
    cout << endl;

    cout << "Vec3(b):" << endl;
    Vector3<int> vectCopy = Vector3<int>(vectInit);
    vectCopy.show();
    cout << endl;

    cout << "Addition: " << endl;
    Vector3<float> vectAdditionA = Vector3<float>(1, 4, 5);
    Vector3<float> vectAdditionB = Vector3<float>(-8, 0, 2);
    Vector3<float> vectAdditionResult = vectAdditionA + vectAdditionB;
    vectAdditionResult.show();
    cout << endl;

    cout << "Normalize:" << endl;
    Vector3<float> vect = Vector3<float>(8.0, 3.0, 4.0);
    vect.Normalize();
    vect.show();
    cout << endl;

    cout << "Distance to B:" << endl;
    Vector3<float> vectDistA = Vector3<float>(4, -5, 12);
    Vector3<float> vectDistB = Vector3<float>(-1, 0, -8);
    cout << vectDistA.distance_to(vectDistB) << endl;
    cout << endl;

    cout << "Dot product:" << endl;
    Vector3<float> vectDotA = Vector3<float>(18, 2, 4);
    Vector3<float> vectDotB = Vector3<float>(-4, 3, 3);
    cout << vectDotA.dot_product(vectDotB) << endl;
    cout << endl;

    cout << "Cross product:" << endl;
    Vector3<float> vectCrossA = Vector3<float>(18, 2, 4);
    Vector3<float> vectCrossB = Vector3<float>(-4, 3, 3);
    vectCrossA.cross_product(vectCrossB).show();
    cout << endl;

    cout << "Angle between:" << endl;
    Vector3<float> vectAngleA = Vector3<float>(18, 2, 4);
    Vector3<float> vectAngleB = Vector3<float>(-4, 3, 3);
    cout << vectAngleA.angle_between(vectAngleB) << endl;
    cout << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
