/**
    Exercise - 18: Rectangle Area

    Sample Input
    10 5

    Sample Output
    10 5
    50

    Cassio Cioni Carmo - 04/23/2023
**/
#include <iostream>

class Rectangle{
    protected: 
    int m_width, m_height;
    
    public:
    virtual void display() const{
        std::cout << m_width <<' '<< m_height << std::endl ;
    }
};

class RectangleArea : public Rectangle{
    
    public:
    void read_input(){
        std::cin >> this->m_width >> this->m_height;
    }
    
    virtual void display() const override{
        std::cout << m_width * m_height << std::endl ;
    }
    
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}