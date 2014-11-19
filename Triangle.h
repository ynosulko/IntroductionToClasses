class Triangle
{
    double side1 = 0.0;
    double side2 = 0.0;
    double side3 = 0.0;
    
public:
    
    Triangle(double, double, double);
    
    double setFirstSideLength(double);
    
    double getFirstSideLength();
    
    double setSecondSideLength(double);
    
    double getSecondSideLength();
    
    double setThirdSideLength(double);
    
    double getThirdSideLength();
    
    double calculateTrianglePerimeter();
    
    double calculateTriangleSquare();
};