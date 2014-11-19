class Rectangle
{
    double side1 = 0.0;
    double side2 = 0.0;
    
public:
    
    Rectangle(double, double);
    
    double setFirstSideLength(double);
    
    double getFirstSideLength();
    
    double setSecondSideLength(double);
    
    double getSecondSideLength();
    
    double calculateRectanglePerimeter();
    
    double calculateRectangleSquare();
};