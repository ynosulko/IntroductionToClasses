class Triangle
{
    double side1 = 0.0;
    double side2 = 0.0;
    double side3 = 0.0;
    
public:

    Triangle();
    
    Triangle(double, double, double);
    
    void setFirstSideLength(double);
    
    double getFirstSideLength();
    
    void setSecondSideLength(double);
    
    double getSecondSideLength();
    
    void setThirdSideLength(double);
    
    double getThirdSideLength();
    
    double calculateTrianglePerimeter();
    
    double calculateTriangleSquare();
    
    void promptValues();
};