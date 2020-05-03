#include <iostream>

#include "solver.hpp"

using namespace std;


namespace solver{

    double solve(RealVariable x){
        double ans=0; 
        double delta = (x._b*x._b)-(4*x._a*x._c);
        if ( x._a == 0 ){
            ans = (-1*x._c)/x._b;
        }
        else{
            if (delta < 0 ){
                throw runtime_error("There is no real solution");
            }
            else {
                delta = sqrt(delta);
                ans =(-1*x._b + delta)/(2*x._a);   
            }
        }
        ans = (int)(ans*10000)/10000.0;
        return ans;
    }

    complex<double> solve(ComplexVariable y){
        return 0;
    }

    RealVariable operator+(const RealVariable x, const RealVariable y){
        return RealVariable(x._a + y._a, x._b + y._b, x._c + y._c);
    }

    RealVariable operator+(const RealVariable x, const double y){
        return RealVariable(x._a, x._b, x._c + y);
    }

    RealVariable operator+(const double y, const RealVariable x){
        return RealVariable(x._a, x._b, x._c + y);
    }

    RealVariable operator-(const RealVariable x, const double y){
        return RealVariable(x._a, x._b, x._c - y);
    }

    RealVariable operator-(const RealVariable x, const RealVariable y){
        return RealVariable(x._a - y._a, x._b - y._b, x._c - y._c);
    }

    RealVariable operator*(const double y, const RealVariable x){
        return RealVariable(x._a * y, x._b * y, x._c * y);
    }

    RealVariable operator/(const RealVariable x, const double y){
        if(y==0){
            throw invalid_argument("Difference in 0");
        }
        return RealVariable(x._a / y, x._b / y, x._c / y);
    }
    RealVariable operator^(const RealVariable x, const double y){
        RealVariable nx;
        return nx;
    }
    RealVariable operator==(const RealVariable x, const double y){
        RealVariable nx;
        nx._a = x._a;
        nx._b = x._b;
        nx._c = x._c - y;
        return nx;
    }
    RealVariable operator==(const RealVariable x, const RealVariable y){
        RealVariable nx;
        nx._a = x._a - y._a;
        nx._b = x._b - y._b;
        nx._c = x._c - y._c;
        cout<<nx._a<<nx._b<<nx._c;
        return nx;
    }


    ComplexVariable operator+(const ComplexVariable x, const ComplexVariable y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator+(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    
    ComplexVariable operator+(const ComplexVariable x, std::complex<double> y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator+(const double x, complex<double> y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator+(std::complex<double> y, const double x){
         ComplexVariable nx;
        return nx;
    }

    ComplexVariable operator-(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator-(const ComplexVariable x, const ComplexVariable y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator-(const ComplexVariable x, std::complex<double> y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator*(const double y, const ComplexVariable x){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator/(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator^(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator==(const ComplexVariable x, const double y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator==(const ComplexVariable x, const ComplexVariable y){
        ComplexVariable nx;
        return nx;
    }
    ComplexVariable operator==(const ComplexVariable x, std::complex<double> y){
        ComplexVariable nx;
        return nx;
    }
}




