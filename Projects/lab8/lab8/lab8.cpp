#include <iostream>

using namespace std ;
     
enum triangleType {scalene, isosceles, equilateral, noTriangle};
    
triangleType triangleShape (double a ,double b ,double c);
     
    int main()
    {
    double a;
    double b;
    double c;
    int shape;
     
    cout << "What is the length of Side A: " << endl;
    cin >> a;
    cout << "What is the length of Side B: " << endl;
    cin >> b;
    cout << "What is the length of Side C: " << endl;
    cin >> c;
     
    shape = triangleShape (a,b,c);

    switch (shape)
    {
    case 0:
    cout << "The Triangle Shape is Scalene." << endl ;
    break ;
    case 1:
    cout << "The Triangle Shape is Isosceles." << endl ;
    break ;
    case 2:
    cout << "The Triangle Shape is Equilateral." << endl ;
    break ;
    case 3:
    cout << "There is no shape, this is not a Triangle!" << endl ;
    break ;
    }
     
    return 0;
    }
     
    triangleType triangleShape (double a,double b,double c)
    {
     
    triangleType shape;
     
    if ( ( a >= (b + c) ) || ( b >= (a + c) ) || ( c >= (a + b) ) )
    shape = noTriangle;
    else if ( ( a == b ) && ( a == c ) && ( b == c ) )
    shape = equilateral;
    else if ( a != b && a != c && b != c )
    shape = scalene;
    else
    shape = isosceles;
     
    return shape;
    }