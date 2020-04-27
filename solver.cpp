#include <iostream>

#include "solver.hpp"

using namespace std;


namespace solver{

    double solve(RealVariable x){
        return 0;
    }
    complex<double> solve(ComplexVariable y){
        return 0;
    }

    RealVariable& operator+(const RealVariable x, const RealVariable y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator+(const RealVariable x, const double y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator+(const double y, const RealVariable x){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator-(const RealVariable x, const double y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator-(const RealVariable x, const RealVariable y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator*(const double y, const RealVariable x){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator/(const RealVariable x, const double y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator^(const RealVariable x, const double y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator==(const RealVariable x, const double y){
        RealVariable nx;
        return nx;
    }
    RealVariable& operator==(const RealVariable x, const RealVariable y){
        RealVariable nx;
        return nx;
    }


    ComplexVariable& operator+(const ComplexVariable x, const ComplexVariable y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator+(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    
    ComplexVariable& operator+(const ComplexVariable x, std::complex<double> y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator+(const double x, complex<double> y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator+(std::complex<double> y, const double x){
         ComplexVariable nx;
        return nx;
    }

    ComplexVariable& operator-(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator-(const ComplexVariable x, const ComplexVariable y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator-(const ComplexVariable x, std::complex<double> y){

    }
    ComplexVariable& operator*(const double y, const ComplexVariable x){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator/(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator^(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator==(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator==(const ComplexVariable x, const ComplexVariable y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable& operator==(const ComplexVariable x, std::complex<double> y){
        ComplexVariable nx;
        return nx;
    }
}




