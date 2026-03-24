// Rectangle 类练习
// 学习日期：2026-03-24
// 主题：C++ 面向对象基础

#include <iostream>
#include <string>

class Rectangle {
private:
    double width;
    double height;

public:
    // 构造函数
    Rectangle(double w, double h) : width(w), height(h) {
        std::cout << "Rectangle created: " << width << " x " << height << std::endl;
    }

    // 拷贝构造函数
    Rectangle(const Rectangle& other) 
        : width(other.width), height(other.height) {
        std::cout << "Rectangle copied" << std::endl;
    }

    // 析构函数
    ~Rectangle() {
        std::cout << "Rectangle destroyed" << std::endl;
    }

    // 计算面积
    double getArea() const {
        return width * height;
    }

    // 计算周长
    double getPerimeter() const {
        return 2 * (width + height);
    }

    // Getter/Setter
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    void setWidth(double w) { 
        if (w > 0) width = w; 
    }
    
    void setHeight(double h) { 
        if (h > 0) height = h; 
    }

    // 缩放
    void scale(double factor) {
        if (factor > 0) {
            width *= factor;
            height *= factor;
        }
    }

    // 信息展示
    void display() const {
        std::cout << "Rectangle[" << width << " x " << height 
                  << "] Area: " << getArea() 
                  << ", Perimeter: " << getPerimeter() << std::endl;
    }
};

// 测试函数
int main() {
    std::cout << "=== Rectangle Class Test ===" << std::endl;

    // 创建对象
    Rectangle rect1(5.0, 3.0);
    rect1.display();

    // 修改尺寸
    rect1.setWidth(10.0);
    rect1.setHeight(6.0);
    rect1.display();

    // 缩放
    rect1.scale(2.0);
    rect1.display();

    // 拷贝构造
    Rectangle rect2(rect1);
    rect2.display();

    std::cout << "\n=== Test Complete ===" << std::endl;
    return 0;
}
