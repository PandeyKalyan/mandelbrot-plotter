#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

using namespace std;

const float pi=3.14159;

 class Complex
 {
private:
    float Re;
    float Im;

public:
    Complex();
    Complex(float,float);
    Complex(const Complex&);
    ~Complex();
    void display();

    float magnitude();
    float phase();
    Complex conjugate();

    Complex operator=(const Complex& );
    Complex operator+(const Complex& );
    Complex operator+(float );
    Complex operator-(const Complex& );
    Complex operator-(float );
    Complex operator*(float );
    Complex operator/(float );
    Complex operator*(const Complex& );
    Complex operator/(const Complex& );


 };
 Complex::Complex()
 {
     Re=0;
     Im=0;
 }

 Complex::Complex(float re,float im)
 {
     Re=re;
     Im=im;
 }

 Complex::Complex(const Complex& c1)
 {
     Re=c1.Re;
     Im=c1.Im;
 }

 Complex::~Complex(){}

 void Complex::display()
 {
     cout<<"Re="<<Re<<" "<<"Im="<<Im<<endl;
 }

 float Complex::magnitude()      //Magnitude of complex number
 {
     float mag=sqrt(Re*Re+Im*Im);
     return mag;
 }

 float Complex::phase()      //Phase of complex number
 {
     float phi;
     float m=Im/Re;
     if(Re<0 && Im>=0)
     {
         phi=180+180*atan(m)/pi;
     }
     else if(Re<0 && Im<0)
     {
        phi=-180+180*atan(m)/pi;
     }
     else
     {
         phi=180*atan(m)/pi;
     }
     return phi;
 }


 Complex Complex::conjugate()
 {
     return Complex(Re,-Im);
 }

 Complex Complex::operator=(const Complex& c1)   //Assignment of complex number
 {
     Complex c2;
     Re=c1.Re;
     Im=c1.Im;
     return c2;
 }

 Complex Complex::operator+(const Complex& c1)  //Addition of complex numbers
 {
     Complex csum;
     csum.Re= Re+c1.Re;
     csum.Im=Im+c1.Im;
     return csum;
 }

Complex Complex::operator+(float r)
{
    return Complex(Re+r,Im);
}

  Complex Complex::operator-(const Complex& c1) //Subtraction of complex numbers
 {
     Complex cdiff;
     cdiff.Re=Re-c1.Re;
     cdiff.Im=Im-c1.Im;
     return cdiff;
 }

 Complex Complex::operator-(float r)
 {
     return Complex(Re-r,Im);
 }

 Complex Complex::operator*(float s) //Scalar Multiplication
 {
     return Complex(s*Re,s*Im);
 }

 Complex Complex::operator/(float s) //Scalar Division
 {
     return Complex(Re/s,Im/s);
 }

 Complex Complex::operator*(const Complex& c1) //Complex Multiplication
 {
     Complex cmul;
     cmul.Re=Re*c1.Re-Im*c1.Im;
     cmul.Im=Re*c1.Im+Im*c1.Re;
     return cmul;
 }

 Complex Complex::operator/(const Complex& c1)  //Complex Division;
 {
     float d=c1.Re*c1.Re+c1.Im*c1.Im;
     return Complex((Re*c1.Re+Im*c1.Im)/d,(-Re*c1.Im+Im*c1.Re)/d);


 }





#endif // COMPLEX_H_INCLUDED
