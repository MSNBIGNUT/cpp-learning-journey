# C++ 学习笔记

## 基础语法

### 变量与数据类型

**基本数据类型:**
```cpp
int age = 25;              // 整数
double price = 99.99;      // 双精度浮点数
float temperature = 36.5;  // 单精度浮点数
char grade = 'A';          // 字符
bool isPassed = true;      // 布尔值
```

**类型修饰符:**
- `signed` / `unsigned` - 有符号/无符号
- `short` / `long` - 短整型/长整型
- `const` - 常量（不可修改）
- `constexpr` - 编译时常量（C++11）

**auto 类型推导（C++11）:**
```cpp
auto count = 10;        // int
auto price = 9.99;      // double
auto name = "Alice";    // const char*
```

### 控制结构

**条件语句:**
```cpp
// if-else
if (score >= 90) {
    grade = 'A';
} else if (score >= 80) {
    grade = 'B';
} else {
    grade = 'C';
}

// switch
switch (day) {
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    default: cout << "Other";
}
```

**循环语句:**
```cpp
// for 循环
for (int i = 0; i < 10; i++) {
    cout << i << " ";
}

// while 循环
int i = 0;
while (i < 10) {
    cout << i << " ";
    i++;
}

// do-while 循环
do {
    cout << i << " ";
    i++;
} while (i < 10);

// 范围 for 循环（C++11）
std::vector<int> nums = {1, 2, 3, 4, 5};
for (auto num : nums) {
    cout << num << " ";
}
```

**跳转语句:**
- `break` - 跳出循环或 switch
- `continue` - 跳过本次循环
- `return` - 返回函数值

### 函数

**基本语法:**
```cpp
// 函数声明
int add(int a, int b);

// 函数定义
int add(int a, int b) {
    return a + b;
}

// 带默认参数
void greet(std::string name = "Guest");

// 函数重载
int multiply(int a, int b);
double multiply(double a, double b);
```

**现代 C++ 函数特性:**
```cpp
// 返回类型推导（C++14）
auto multiply(auto a, auto b) {
    return a * b;
}

// Lambda 表达式（C++11）
auto add = [](int a, int b) {
    return a + b;
};
```

---

## C++11/14/17/20 新特性

### C++11
- auto 类型推导
- 智能指针（unique_ptr, shared_ptr, weak_ptr）
- Lambda 表达式
- 右值引用与移动语义
- 范围 for 循环
- nullptr

### C++14
- 泛型 Lambda
- 返回类型推导
- 二进制字面量
- std::make_unique

### C++17
- 结构化绑定
- std::optional, std::variant, std::any
- 文件系统库（filesystem）
- if 初始化语句
- 折叠表达式

### C++20
- Concepts（概念）
- Ranges（范围库）
- Coroutines（协程）
- Modules（模块）
- 三路比较运算符（<=>）

---

_持续更新中..._

---

## C++11/14/17/20 新特性

### C++11
- auto 类型推导
- 智能指针
- Lambda 表达式
- 右值引用

### C++14
- 泛型 Lambda
- 返回类型推导

### C++17
- 结构化绑定
- std::optional, std::variant
- 文件系统库

### C++20
- Concepts
- Ranges
- Coroutines
- Modules

---

_持续更新中..._
