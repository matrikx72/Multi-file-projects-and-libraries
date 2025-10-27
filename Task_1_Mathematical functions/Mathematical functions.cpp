#include<iostream>
#include"Mat_function.h"

    double add(double num1, double num2)
    {
        return num1 + num2;
    }
    double multiply(double num1, double num2)
    {
        return num1 * num2;
    }
    double subtract(double num1, double num2)
    {
        return num1 - num2;
    }
    double divide(double num1, double num2)        
    {
       
        return  num1 / num2;
    }
    double exponentiation(double num1, int num2)
    {
        double result = 1.0;
        int i;
        for (i = 1; i <= num2; i++) 
        {
            result = result * num1;
        }
        return result;
    
    }


