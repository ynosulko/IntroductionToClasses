class Rectangle
{
    double side1 = 0.0;
    double side2 = 0.0;
    
public:
    
    Rectangle();
    
    Rectangle(double, double);
    
    void setFirstSideLength(double);
    
    double getFirstSideLength();
    
    void setSecondSideLength(double);
    
    double getSecondSideLength();
    
    double calculateRectanglePerimeter();
    
    double calculateRectangleSquare();

    void promptValues();
};