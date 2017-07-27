//
//  complex.h
//  
//
//  Created by Jesse on 30-07-14.
//
//

#ifndef _complex_h
#define _complex_h

struct complex
{
    double a, b;
    
    complex()
    {
        a = b = 0.0;
    }
    
    complex(double real, double imaginary)
    {
        a = real;
        b = imaginary;
    }
    
    // Arithmetic~ operators
    complex operator + (const complex &c)
    {
        return complex(a + c.a, b + c.b);
    }
    
    complex operator - (const complex &c)
    {
        return complex(a - c.a, b - c.b);
    }
    
    complex operator * (const complex &c)
    {
        return complex(a * c.a - b * c.b, a * c.b + b * c.a);
    }
    
    complex operator / (const complex &c)
    {
        return complex((a * c.a + b * c.b)/(c.a * c.a + c.b * c.b), (b * c.a - a * c.b)/(c.a * c.a + c.b * c.b));
    }
    
    // Equality operators
    bool operator == (const complex& c)
    {
        return a == c.a && b == c.b;
    }
    
    bool operator < (const complex &c)
    {
        return a * a + b * b < c.a * c.a + c.b * c.b;
    }
    
    bool operator > (const complex &c)
    {
        return a * a + b * b > c.a * c.a + c.b * c.b;
    }
    
    bool operator < (const int &c)
    {
        return a * a + b * b < c * c;
    }
    
    bool operator > (const int &c)
    {
        return a * a + b * b > c * c;
    }
};

#endif
