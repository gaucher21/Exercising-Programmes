# Homework
```
#include<iostream>
using namespace std;
class complex{
    public:
    double real_part;
    double imaginary_part;
    complex(double a,double b){
        real_part=a;
        imaginary_part=b;
    }
    double extract_real_part(){
        return real_part;
    }
    double extract_imaginary_part(){
        return imaginary_part;
    }
    friend complex add(complex c1,complex c2,complex c3){
        c3.real_part = c1.real_part + c2.real_part;
        c3.imaginary_part = c1.imaginary_part + c2.imaginary_part;
        return c3;
    }
    friend complex minus(complex c1,complex c2,complex c3){
        c3.real_part = c1.real_part - c2.real_part;
        c3.imaginary_part = c1.imaginary_part - c2.imaginary_part;
        return c3;
    }
    friend complex multiple(complex c1,complex c2,complex c3){
        c3.real_part = c1.real_part * c2.real_part - c1.imaginary_part * c2.imaginary_part;
        c3.imaginary_part = c1.real_part * c2.imaginary_part + c1.imaginary_part * c2.real_part;
        return c3;
    }
    friend complex divide(complex c1,complex c2,complex c3){
        c3.real_part = (c1.real_part * c2.real_part + c1.imaginary_part * c2.imaginary_part) / 
        (c2.real_part * c2.real_part + c2.imaginary_part * c2.imaginary_part);
        c3.imaginary_part = (c1.imaginary_part * c2.real_part - c1.real_part * c2.imaginary_part) / 
        (c2.real_part * c2.real_part + c2.imaginary_part * c2.imaginary_part);
        return c3;
    }
};
```