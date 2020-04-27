#include "doctest.h"
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;


RealVariable x;
TEST_CASE("RealVariable") {
	CHECK((solve(2*x-4 == 10) == 7 || solve(2 * x - 4 == 10) == 7.0));
	CHECK((solve(10 * x + 3 == 53) == 10 || solve(10 * x + 3 == 53) == 10.0));
	CHECK((solve(8 * x + 4 == 20) == 2 || solve(8 * x + 4 == 20) == 2.0));
	CHECK((solve(5 * x + 12 == 30)) == 3.6);
	CHECK((solve(-2 * x + 16 == 20) == -2 || solve(-2 * x + 16 == 20) == -2));
	CHECK((solve(-10 * x - 20 == 15)) == -3.5);
	CHECK((solve(6.4 * x + 12 == 2.3)) == -1.5156);
	CHECK((solve(-2.7 * x + 1 == 2)) == -0.3703);
	CHECK((solve(-10 * x - 20 == 15.8)) == -3.58);
	CHECK((solve(-2.6 * x + 16 == 20.5)) == -1.7307);
	CHECK((solve(3 * x - 5 == 40) == 9 || solve(3 * x - 5 == 40) == 9.0));
	CHECK((solve(4 * x + 12 == 20) == 2 || solve(4 * x + 12 == 20) == 2.0));
	CHECK((solve(-2.7 * x + 11.3 == 2)) == 3.4444);
	CHECK((solve(-17 * x - 20 == 17.8)) == -2.2235);

	CHECK((solve((x ^ 2) == 16) == 4 || solve((x ^ 2) == 16) == -4 || solve((x ^ 2) == 16) == -4.0 || solve((x ^ 2) == 16) == 4.0));
	CHECK((solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == 4 || solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == -4 
		|| solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == -4.0 || solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == 4.0));
	double xvalue = solve(2 * x - 4.0 == 10.0);
	CHECK(xvalue == 7);
	CHECK((solve((x ^ 2) + 8 * x - 4.0 == (x ^ 2) + 12*x + 20) == -6 || solve((x ^ 2) + 8 * x - 4.0 == (x ^ 2) + 12 * x + 20) == -6.0));
	CHECK((solve((x ^ 2) + 8 * x + 12 == 8*x + 24) == 6 || solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == -6 
		|| solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == -6.0 || solve((x ^ 2) + 2 * x + 4.0 == 20 + 6.0*x / 2 - x) == 6.0));
	CHECK((solve((x ^ 2) + 6 * x - 20 == 12*x / 2) == 5 || solve((x ^ 2) + 6 * x - 20 == 12 * x / 2) == -5 
		|| solve((x ^ 2) + 6 * x - 20 == 12 * x / 2) == -5.0 || solve((x ^ 2) + 6 * x - 20 == 12 * x / 2) == 5.0));
	CHECK((solve((x ^ 2) + 16 * x + 56 == 16*x + 7) == 7 || solve((x ^ 2) + 16 * x + 56 == 16 * x + 7) == -7 
		|| solve((x ^ 2) + 16 * x + 56 == 16 * x + 7) == -7.0 || solve((x ^ 2) + 16 * x + 56 == 16 * x + 7) == 7.0));

	CHECK((solve(x - 5 == 7) == 12 || solve(x - 5 == 7) == 12.0));
	CHECK((solve(3*x - 15 == 30) == 15 || solve(3 * x - 15 == 30) == 15.0));
	CHECK(solve(4*x - 8 == -17) == -2.25);
	CHECK(solve(x - 0.7 == 1.3) == 2.0);
	CHECK((solve(-2 * x - 16 == 24) == -4 || solve(-2 * x - 16 == 24) == -4.0));
	CHECK(solve(8*x - 6 == 2) == 1);
	CHECK(solve(16 * x - 8 == 16) == 1.5);
	CHECK(solve(6*x - 0.7 == 12) == 2.1166);
	CHECK(solve(1.4 * x - 6 == 2) == 5.7142);
	CHECK(solve(8.16 * x - 5 == 20) == 3.0637);
	CHECK(solve(5 * x - 6.14 == 1.7) == 1.568);
	CHECK(solve(16.5 * x + 7 == 30) == 1.3939);
	CHECK(solve(10 * x - 8.2 == 20) == 2.82);
	CHECK(solve(16 * x + 14 == 30) == 1);
	CHECK((solve(100 * x - 180 == 20) == 2 || solve(100 * x - 180 == 20) == 2.0));
	CHECK(solve(16.7 * x + 1.5 == 30) == 1.7065);

	CHECK(solve(x / 2 == 14) == 28.0);
	CHECK(solve(x / 10 == 0.05) == 0.5);
	CHECK(solve(x / 10 == -20) == -200);
	CHECK(solve(x / 0.4 == 8) == 3.2);
	CHECK(solve(2*x / 8 == 4) == 16);
	CHECK(solve(4*x / 1.5 == 12) == 4.5);
	CHECK(solve(10*x / 10 == 1) == 1);
	CHECK(solve(-5*x / 4 == 8) == -6.4);
	CHECK(solve(2.8 * x / 1.2 == 4) == 1.7142);
	CHECK(solve(16 * x / 2 == 8) == 1);
	CHECK(solve(10.5 * x / 6 == 7.4) == 4.2285);
	CHECK(solve(-5 * x / -14 == 8) == 22.4);
	CHECK((solve((x ^ 2) == 1) == 1 || solve((x ^ 2) == 1) == -1));

	CHECK_THROWS(solve((x ^ 2) == -16));
	CHECK_THROWS(solve((0 * x + 4 == 20) == -16));
	CHECK_THROWS(solve((x ^ 2) == -20));

	

}



TEST_CASE("Test-complex +"){//10

    ComplexVariable y;
    CHECK(solve(y+1i == 2.0+3i) == (2.0+2i));
    CHECK(solve(y+1i == 3i) == 2i);
    CHECK(solve(y+2i == 5i) == 0.0+3i);
    CHECK(solve(y+5+1i == 3i) == -5.0+2i);
    CHECK(solve(y+4+5i == 15.0+3i) == 15.0-2i);
    CHECK(solve(y+3+1i == 2.0+3i) == -1.0+2i);
    CHECK(solve(y+4+0i == 2.0+3i) == 2.0+2i);
    CHECK(solve(y+1i+3 == 2.0+2.0+5i+8.0+3i) == 9.0+7i);
    CHECK(solve(y+3i == 2.0+3i) == 2.0);
    CHECK(solve(y+5+5i == 5.0+5i) == 0.0);
}

TEST_CASE("Test-complex -"){//10

    ComplexVariable y;
    CHECK(solve(y+(-1i) == -2.0-3i) == -2.0-2i);
    CHECK(solve(y-4 == 3i) == 4.0+3i);
    CHECK(solve(y+(-14.0+3i) == 3i) == 14.0);
    CHECK(solve(y-4-4+1i == 3i-2i) == 8.0);
    CHECK(solve(y+(-1.0*(5i-6.0)) == 3i) == -6.0+8i);
    CHECK(solve(y+(-4.0+4.0+3i) == 3i) == 0.0);
    CHECK(solve(y-5 == 3i) == 5.0+3i);
    CHECK(solve(y+(-4.0-5i) == -4.0-3i) == 2i);
    CHECK(solve(y+(-3.0-1.0i) == 2.0-3i) == 5.0-2i);
    CHECK(solve(y+(-0.0i) == 0.0+0.0i) == 0.0);
}

TEST_CASE("Test-complex *"){//10

    ComplexVariable y;
    CHECK(solve(y == (3.0+2i)*(3.0-2i)) == 13.0+0i);
    CHECK(solve(y == (1.0+1i)*(2.0+2i)) == 4i);
    CHECK(solve(y == (1.0+2.5i)*(3.0+2.5i)) == -3.25+10i);
    CHECK(solve(y == (-1.0-2.5i)*2.5i) == 6.25-2.5i);
    CHECK(solve(y == 1i*1i*1i*1i*1i) == 1i);
    CHECK(solve(2*y-4 == 10.0+1i) == 7.0+1i);
    CHECK(solve(2*y == 10.0+1i) == 5.0+0.5i);
    CHECK(solve(3*y == 7.0+1i) == 2.333+0.333i);
    CHECK(solve(5*y == 10.0+1i) == 2.0+0.2i);
    CHECK(solve(2*y-5*y == 10.0+1i) == -3.333-0.333i);
}

TEST_CASE("Test-complex /"){//10

    ComplexVariable y;
    CHECK(solve(y == (3.0+2i)/(3.0-2i)) == 0.385+0.923i);
    CHECK(solve(y == (1.0+1i)/(2.0+2i)) == 0.5);
    CHECK(solve(y == (2.0+2i)/(2.0+2i)) == 1.0);
    CHECK(solve(y == (4.0+4i)/(2.0+2i)) == 2.0);
    CHECK(solve(y == (6.0+6i)/(2.0+2i)) == 3.0);
    CHECK(solve(y == (1.0+2.5i)/(3.0+2.5i)) == 0.607+0.328i);
    CHECK(solve(y == (-1.0-2.5i)/2.5i) == -1.0+0.4i);
    CHECK(solve(y == 1i/1i/1i/1i/1i) == -1i);
    CHECK(solve(2*y == 1i/1i/1i/1i/1i) == -0.5i);
    CHECK(solve(3*y == 2.0+1i) == -0.667+0.333i);
}

TEST_CASE("Test-complex ^"){//7

    ComplexVariable y;
    CHECK(solve(y == (2.0+1i)^2) == 3.0+4.0i);
    CHECK(solve(y == (2.0+1i)^3) == 2.0+11i);
    CHECK(solve(y == (1.15+2.5i)^2) == -4.927+5.75i);
    CHECK(solve(y == (0.0+1i)^2) == -1.0+0i);
    CHECK(solve(y == 0.825i^2) == -0.681);
    CHECK_NOTHROW(solve(y^2 == 4) == 2.0+0i || solve(y^2 == 4) == -2.0+0i);
    CHECK(solve(y^2 == -1) == 0.0+1i);
 
}

TEST_CASE("General tests"){//5

    ComplexVariable y;
    CHECK(solve(y+5i == 2*y+3i) == 2i);
    CHECK(solve(2*y+5i == 3i) == -1i);
    CHECK(solve(2*y+8i-(5^2)+3*y == 3i) == 5.0-1.0i);
    CHECK_NOTHROW(solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == 4.0+0i || solve((y^2) + 2*y + 4 == 20 + 6*y/2 - y) == -4.0+0i);
    CHECK_NOTHROW(solve((y^2) == -16) == 0.0+4i || solve((y^2) == -16) == 4i || solve((y^2) == -16) == 0.0-4i || solve((y^2) == -16) == -4i);


}

TEST_CASE("throw"){
    ComplexVariable y;
    CHECK_THROWS(solve((0*y) == 0.0+0i) == 0.0);
    CHECK_THROWS(solve((y^0) == 1.0+0i) == 0.0);


}