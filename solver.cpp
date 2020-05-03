#include <iostream>

#include "solver.hpp"

using namespace std;


namespace solver{

    double solve(RealVariable x){//x == 10
        double ans=0; 
		if(x._a == 0 && x._b == 0) throw runtime_error("There is no real solution");
		//cout << x._a << " " << x._b << " " << x._c << endl;
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
        ans = (int)(ans*10000.0)/10000.0;
        return ans;
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

    RealVariable operator*(const double y, const RealVariable x){// 2*x - 4 == 10
        return RealVariable(x._a * y, x._b * y, x._c * y);
    }

    RealVariable operator/(const RealVariable x, const double y){
        if(y == 0){
            throw invalid_argument("Difference in 0");
        }
        return RealVariable(x._a / y, x._b / y, x._c / y);
    }
    RealVariable operator^(const RealVariable x, const double y){
        RealVariable nx;
		if (y == 2) {
			nx._a = nx._a + 1;
			nx._b = 0;
			nx._c = x._c;
			return nx;
		}
		else {
			throw invalid_argument("exponent is not valid");
		}
		
        
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
        nx._a = x._a;
        nx._b = x._b;
        nx._c = x._c;
		if (nx._a != 0) {
			nx._a = nx._a - y._a;
		}
		if (nx._b != 0) nx._b = nx._b - y._b;
		 nx._c = nx._c - y._c;
        return nx;
    }


	complex<double> solve(ComplexVariable x) {//y + 5i == 2y +3i ===0+2i
		complex<double> ans = 0;
		if (x._a == complex<double>(0, 0) && x._b == complex<double>(0, 0)) throw runtime_error("There is no real solution");
		complex<double> delta = (x._b*x._b) - (complex<double>(4, 0) * x._a*x._c);
		if (x._a == complex<double>(0, 0)) {
			ans = (-1.0 * x._c) / x._b;
		}
		else {
			delta = sqrt(delta);
			ans = (-x._b + delta) / (2.0 * x._a);
		}
		return complex<double>((int)(ans.real()*10000.0) / 10000.0, (int)(ans.imag()*10000.0) / 10000.0);
	}

    ComplexVariable operator+(const ComplexVariable x, const ComplexVariable y){
        return ComplexVariable(x._a + y._a, x._b + y._b, x._c + y._c);
    }

    ComplexVariable operator+(const ComplexVariable x, const double y){
		return ComplexVariable(x._a, x._b, x._c + y);
    }

	ComplexVariable operator+(const double y, const ComplexVariable x) {
		return ComplexVariable(x._a, x._b, x._c + y);
	}
    
    ComplexVariable operator+(const ComplexVariable x, std::complex<double> y){
		return ComplexVariable(x._a, x._b, x._c + y);
    }
    ComplexVariable operator+(const double x, complex<double> y){
		return ComplexVariable();
    }
    ComplexVariable operator+(std::complex<double> y, const double x){
         ComplexVariable nx;
        return nx;
    }

    ComplexVariable operator-(const ComplexVariable x, const double y){
		return ComplexVariable(x._a, x._b, x._c - y);
    }
    ComplexVariable operator-(const ComplexVariable x, const ComplexVariable y){
		return ComplexVariable(x._a - y._a, x._b - y._b, x._c - y._c);
    }
    ComplexVariable operator-(const ComplexVariable x, std::complex<double> y){
		return ComplexVariable(x._a, x._b, x._c - y);
    }
    ComplexVariable operator*(const double y, const ComplexVariable x){
		return ComplexVariable(x._a*y, x._b*y, x._c*y);
    }
    ComplexVariable operator/(const ComplexVariable x, const double y){
		return ComplexVariable(x._a/y, x._b/y, x._c/y);
    }
    ComplexVariable operator^(const ComplexVariable x, const double y){
		if (y == 2) {
			return ComplexVariable(x._a + x._b, 0, x._c);
		}
		else {
			throw invalid_argument("exponent is not valid");
		}
    }
    ComplexVariable operator==(const ComplexVariable x, const double y){
		return ComplexVariable(x._a, x._b, x._c - y);
    }

    ComplexVariable operator==(const ComplexVariable x, const ComplexVariable y){
		ComplexVariable nx;
		nx._a = x._a;
		nx._b = x._b;
		nx._c = x._c;
		if (nx._a != complex<double>(0, 0)) {
			nx._a = nx._a - y._a;
		}
		if (nx._b != complex<double>(0, 0)) nx._b = nx._b - y._b;
		 nx._c = nx._c - y._c;
		return nx;
    }
    ComplexVariable operator==(const ComplexVariable x, std::complex<double> y){
		return ComplexVariable(x._a, x._b, x._c - y);
    }
}



