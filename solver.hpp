
#include <complex>
#include <stdlib.h>

namespace solver{




    class RealVariable{
    private:
        

    public:
        double _a, _b, _c;
        RealVariable(): _a(0),_b(1),_c(0){}
        RealVariable(double a, double b, double c): _a(a),_b(b),_c(c){}

        friend RealVariable operator+(const RealVariable x, const RealVariable y);
        friend RealVariable operator+(const RealVariable x, const double y);
        friend RealVariable operator+(const double y, const RealVariable x);
        friend RealVariable operator-(const RealVariable x, const double y);
        friend RealVariable operator-(const RealVariable x, const RealVariable y);
        friend RealVariable operator*(const double y, const RealVariable x);
        friend RealVariable operator/(const RealVariable x, const double y);
        friend RealVariable operator^(const RealVariable x, const double y);
        friend RealVariable operator==(const RealVariable x, const double y);
        friend RealVariable operator==(const RealVariable x, const RealVariable y);


    };

    class ComplexVariable{
    private:
		

    public:
		std::complex<double> _a;
		std::complex<double> _b;
		std::complex<double> _c;

		ComplexVariable() : _a(0), _b(1), _c(0) {}
		ComplexVariable(std::complex<double> a, std::complex<double> b, std::complex<double> c) : _a(a), _b(b), _c(c) {}

        friend ComplexVariable operator+(const ComplexVariable x, const ComplexVariable y);
        friend ComplexVariable operator+(const ComplexVariable x, const double y);
        friend ComplexVariable operator+(const ComplexVariable x, std::complex<double> y);
        friend ComplexVariable operator+(std::complex<double> y, const double x);
        friend ComplexVariable operator+(const double x, std::complex<double> y);
		friend ComplexVariable operator+(const double y, const ComplexVariable x);


        friend ComplexVariable operator-(const ComplexVariable x, const double y);
        friend ComplexVariable operator-(const ComplexVariable x, const ComplexVariable y);
        friend ComplexVariable operator-(const ComplexVariable x, std::complex<double> y);

        friend ComplexVariable operator*(const double y, const ComplexVariable x);

        friend ComplexVariable operator/(const ComplexVariable x, const double y);

        friend ComplexVariable operator^(const ComplexVariable x, const double y);
        
        friend ComplexVariable operator==(const ComplexVariable x, const double y);
        friend ComplexVariable operator==(const ComplexVariable x, const ComplexVariable y);
        friend ComplexVariable operator==(const ComplexVariable x, std::complex<double> y);


        
    };

    double solve(RealVariable x);
    std::complex<double> solve(ComplexVariable y);


}