/*****************************************************+
 * Fecha: 22 de Agosto 2022
 * Autor: David Zárate
 * Tema: Taller Eigen
 * Materia: Introducción a la HPC
 *****************************************************/

#include <iostream>
#include <eigen3/Eigen/Dense>
#include <vector>

int main()
{
    typedef Eigen::Matrix<float, 2, 2> MiMatriz2X2f;
    MiMatriz2X2f mA;
    MiMatriz2X2f mB;
    MiMatriz2X2f mC;

    Eigen::MatrixXd mmA(2,3);
    Eigen::MatrixXd mmB(3,2);
    Eigen::MatrixXd mmC(2,1);

    Eigen::MatrixXd mmA2(3,3);
    Eigen::MatrixXd mmB2(3,3);

    Eigen::MatrixXd mmA3(4,4);
    Eigen::MatrixXd mmB3(4,4);

    Eigen::MatrixXd mmD(1,3);

    //EJERCICIO 1
    std::cout << "=== EJERCICIO 1 ===" << std::endl;
    mA << 4, -2, 1, -7;
    std::cout << "Matriz A\n" << mA << std::endl;

    mB << -1, 2, 6, -5;
    std::cout << "\nMatriz B\n" << mB << std::endl;

    std::cout << "\nResultado 3A-4B\n" << (3*mA)-(4*mB) << std::endl;


    //EJERCICIO 2
    std::cout << "\n\n=== EJERCICIO 2 ===" << std::endl;
    mA << 0, -1, 2, 1;
    std::cout << "Matriz A\n" << mA << std::endl;

    mB << 1, 2, 3, 4;
    std::cout << "\nMatriz B\n" << mB << std::endl;

    std::cout << "\nResultado 2X+4A=3BA\n" << ((3*mB*mA)-(4*mA))/2 << std::endl;


    //EJERCICIO 3
    std::cout << "\n\n=== EJERCICIO 3 ===" << std::endl;
    Eigen::Matrix2d a;
    a << -3, -2, 3, 3;
    std::cout << "Matriz A\n" << a << std::endl;

    Eigen::Matrix2d b;
    b << 5, 9, 3, 4;
    std::cout << "\nMatriz B\n" << b << std::endl;

    Eigen::Matrix2d c;
    c << 1, 1, 0, 0;
    std::cout << "\nMatriz C\n" << c << std::endl;

    Eigen::Matrix2d resultado;
    resultado = a.inverse()*c*b.inverse();

    std::cout << "\nResultado AXBT = C\n" << resultado << std::endl;


    //EJERCICIO 4
    std::cout << "\n\n=== EJERCICIO 4 ===" << std::endl;
    a << 2, 1, -4, -3;
    std::cout << "Matriz A\n" << a << std::endl;

    b << 2, 2, 6, 4;
    std::cout << "\nMatriz B\n" << b << std::endl;

    std::cout << "\nResultado XA=B\n" << b*a.inverse() << std::endl;


    //EJERCICIO 5
    std::cout << "\n\n=== EJERCICIO 5 ===" << std::endl;
    mmA << 3, 0, -1, 0, 2, 1;
    std::cout << "\nMatriz A\n" << mmA << std::endl;

    mmB << 1, 2, 1, 0, 0, 6;
    std::cout << "\nMatriz A\n" << mmB << std::endl;

    c << -2, 0, -2, -5;
    std::cout << "\nMatriz C\n" << c << std::endl;

    std::cout << "\nResultado 2(AB+C)\n" << 2*((mmA*mmB)+c) << std::endl;


    //EJERCICIO 6
    std::cout << "\n\n=== EJERCICIO 6 ===" << std::endl;
    mmA2 << 1, 5, -1, -1, 2, 2, 0, -3, 3;
    std::cout << "\nMatriz A\n" << mmA2 << std::endl;

    mmB2 << -1, -4, 3, 1, -2, -2, -3, 3, -5;
    std::cout << "\nMatriz A\n" << mmB2 << std::endl;

    std::cout << "\nResultado A+3B\n" << mmA2+3*mmB2 << std::endl;


    //EJERCICIO 7
    std::cout << "\n\n=== EJERCICIO 7 ===" << std::endl;
    mmA2 << 2, 7, 3, 3, 9, 4, 1, 5, 3;
    std::cout << "\nMatriz A\n" << mmA2 << std::endl;

    mmB2 << 1, 0, 2, 0, 1, 0, 0, 0, 1;
    std::cout << "\nMatriz A\n" << mmB2 << std::endl;

    std::cout << "\nResultado XA=B\n" << mmB2*mmA2.inverse() << std::endl;


    //EJERCICIO 8
    std::cout << "\n\n=== EJERCICIO 8 ===" << std::endl;
    mmA2 << 1, 1, 1, 6, 5, 4, 13, 10, 8;
    std::cout << "\nMatriz A\n" << mmA2 << std::endl;

    mmB2 << 0, 1, 2, 1, 0, 2, 1, 2, 0;
    std::cout << "\nMatriz A\n" << mmB2 << std::endl;

    std::cout << "\nResultado AX=B\n" << (mmB2.inverse()*mmA2).inverse() << std::endl;


    //EJERCICIO 9
    std::cout << "\n\n=== EJERCICIO 9 ===" << std::endl;
    mA << 3, -1, 0, 2;
    std::cout << "\nMatriz A\n" << mA << std::endl;

    std::cout << "\nResultado ATA-2A\n" << (mA.transpose()*mA)-(2*mA) << std::endl;


    //EJERCICIO 10
    std::cout << "\n\n=== EJERCICIO 10 ===" << std::endl;
    mA << 4, 2, -1, 0;
    std::cout << "\nMatriz A\n" << mA << std::endl;

    std::cout << "\nResultado A^3\n" << mA*mA*mA << std::endl;


    //EJERCICIO 11
    std::cout << "\n\n=== EJERCICIO 11 ===" << std::endl;
    a << 2, 3, 4, 2;
    std::cout << "\nMatriz A\n" << a << std::endl;

    b << 1, 0, 2, 1;
    std::cout << "\nMatriz B\n" << b << std::endl;
    c << 7, 5, 6, 1;
    std::cout << "\nMatriz C\n" << c << std::endl;
    resultado = a.inverse()*c*b.inverse();

    std::cout << "\nResultado AXBT = C\n" << resultado << std::endl;


    //EJERCICIO 12
    std::cout << "\n\n=== EJERCICIO 12 ===" << std::endl;
    mmA << 1, 0, -2, 2, -1, 3;
    std::cout << "\nMatriz A\n" << mmA << std::endl;

    mmB << 2, -3, -2, 0, -1, -2;
    std::cout << "\nMatriz A\n" << mmB << std::endl;

    std::cout << "\nResultado AAT-2AB\n" << (mmA*mmA.transpose())-(2*mmA*mmB) << std::endl;


    //EJERCICIO 13
    std::cout << "\n\n=== EJERCICIO 13 ===" << std::endl;
    mmD << 4, 8, 12;
    std::cout << "\nMatriz A\n" << mmD << std::endl;

    mmB << 3, 2, 0, 1, -1, 0;
    std::cout << "\nMatriz A\n" << mmB << std::endl;

    mmC << 3,-1;
    std::cout << "\nMatriz A\n" << mmC << std::endl;

    std::cout << "\nResultado X=ABC\n" << mmD*mmB*mmC << std::endl;


    //EJERCICIO 14
    std::cout << "\n\n=== EJERCICIO 14 ===" << std::endl;
    mmA2 << 3, 4, 1, -1, -3, 3, 2, 3, 0;
    std::cout << "\nMatriz A\n" << mmA2 << std::endl;

    mmB2 << 3, 9, 7, 1, 11, 7, 7, 5, 7;
    std::cout << "\nMatriz A\n" << mmB2 << std::endl;

    std::cout << "\nResultado ATX=B\n" << (mmB2.inverse()*mmA2.transpose()).inverse() << std::endl;


    //EJERCICIO 15
    std::cout << "\n\n=== EJERCICIO 15 ===" << std::endl;
    mmA2 << 2, 5, 7, 6, 3, 4, 5, -2, -3;
    std::cout << "\nMatriz A\n" << mmA2 << std::endl;

    mmB2 << -1, 1, 0, 0, 1, 1, 1, 0, -1;
    std::cout << "\nMatriz A\n" << mmB2 << std::endl;

    std::cout << "\nResultado XA=B\n" << mmB2*mmA2.inverse() << std::endl;


    //EJERCICIO 16
    std::cout << "\n\n=== EJERCICIO 16 ===" << std::endl;
    mmA3 << 1, 1, 1, 1, 1, 1, -1, -1, 1, -1, 1, -1, 1, -1, -1, 1;
    std::cout << "\nMatriz A\n" << mmA3 << std::endl;

    mmB3 << 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1;
    std::cout << "\nMatriz A\n" << mmB3 << std::endl;

    std::cout << "\nResultado AX=B\n" << (mmB3.inverse()*mmA3).inverse() << std::endl;



    return 0;
}
