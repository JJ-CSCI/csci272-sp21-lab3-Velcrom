//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
#include <iostream>
//------------------------------

// Put the assignment code here

class Quaternion {
private:

  double a;
  double b;
  double c;
  double d;

public:
  Quaternion(double a1, double b1, double c1, double d1){
    a = a1;
    b = b1;
    c = c1;
    d = d1;
  }
  

  bool operator==(const Quaternion& y)const{
    if(a == y.a && b == y.b && c == y.c && d == y.d)
      return true;
    else
    return false;
    
  }

  Quaternion operator+(const Quaternion& y)const{
   double x = a + y.a;
   double w = b + y.b;
   double h = c + y.c;
   double z = d + y.d;
   Quaternion e(x,w,h,z);
return e;
  }

  Quaternion operator-(const Quaternion& y)const{
    return Quaternion(a - y.a, b - y.b, c - y.c, d - y.d);
  }

  Quaternion operator*(const double& y)const{
    return Quaternion(a * y, b * y, c * y, d * y);
  }
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
