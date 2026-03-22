# HTML 学习笔记

## HTML 基础

### 文档结构
```html
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>页面标题</title>
    <meta name="description" content="页面描述">
</head>
<body>
    <!-- 内容 -->
</body>
</html>
```

### 常用标签

#### 文本标签
- `<h1>` - `<h6>`: 标题（h1 最重要）
- `<p>`: 段落
- `<span>`: 行内容器（inline）
- `<div>`: 块级容器（block）
- `<br>`: 换行
- `<hr>`: 水平线

#### 语义化标签（HTML5）
```html
<header>页眉</header>
<nav>导航</nav>
<main>主要内容</main>
<article>文章</article>
<section>章节</section>
<aside>侧边栏</aside>
<footer>页脚</footer>
```

#### 列表
```html
<!-- 无序列表 -->
<ul>
    <li>项目 1</li>
    <li>项目 2</li>
</ul>

<!-- 有序列表 -->
<ol>
    <li>第一步</li>
    <li>第二步</li>
</ol>

<!-- 定义列表 -->
<dl>
    <dt>术语</dt>
    <dd>定义</dd>
</dl>
```

#### 链接与媒体
```html
<!-- 超链接 -->
<a href="https://example.com" target="_blank">链接</a>

<!-- 图片 -->
<img src="image.jpg" alt="描述文字" width="300" height="200">

<!-- 视频 -->
<video src="video.mp4" controls></video>

<!-- 音频 -->
<audio src="audio.mp3" controls></audio>
```

#### 表格
```html
<table>
    <thead>
        <tr>
            <th>姓名</th>
            <th>年龄</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td>张三</td>
            <td>25</td>
        </tr>
    </tbody>
</table>
```

#### 表单
```html
<form action="/submit" method="POST">
    <label for="name">姓名:</label>
    <input type="text" id="name" name="name" required>
    
    <label for="email">邮箱:</label>
    <input type="email" id="email" name="email">
    
    <label for="pwd">密码:</label>
    <input type="password" id="pwd" name="password">
    
    <label for="age">年龄:</label>
    <input type="number" id="age" name="age" min="1" max="150">
    
    <label for="gender">性别:</label>
    <select id="gender" name="gender">
        <option value="male">男</option>
        <option value="female">女</option>
    </select>
    
    <label>
        <input type="checkbox" name="agree"> 同意条款
    </label>
    
    <label>
        <input type="radio" name="level" value="beginner"> 初级
        <input type="radio" name="level" value="advanced"> 高级
    </label>
    
    <label for="bio">简介:</label>
    <textarea id="bio" name="bio" rows="4"></textarea>
    
    <button type="submit">提交</button>
    <button type="reset">重置</button>
</form>
```

---

## CSS 基础

### CSS 引入方式
```html
<!-- 内联样式 -->
<p style="color: red;">文本</p>

<!-- 内部样式 -->
<style>
    p { color: red; }
</style>

<!-- 外部样式（推荐） -->
<link rel="stylesheet" href="style.css">
```

### CSS 选择器
```css
/* 元素选择器 */
p { color: blue; }

/* 类选择器 */
.className { color: green; }

/* ID 选择器 */
#idName { color: red; }

/* 属性选择器 */
input[type="text"] { border: 1px solid #ccc; }

/* 伪类 */
a:hover { color: orange; }
li:first-child { font-weight: bold; }

/* 后代选择器 */
div p { color: purple; }

/* 子元素选择器 */
div > p { color: teal; }
```

### 盒模型
```css
.box {
    width: 200px;
    height: 100px;
    padding: 10px;      /* 内边距 */
    border: 1px solid #000;  /* 边框 */
    margin: 20px;       /* 外边距 */
    
    /* 盒模型计算 */
    box-sizing: border-box;  /* 包含 padding 和 border */
}
```

### 布局基础
```css
/* display 属性 */
.inline { display: inline; }   /* 行内 */
.block { display: block; }     /* 块级 */
.none { display: none; }       /* 隐藏 */
.flex { display: flex; }       /* 弹性布局 */
.grid { display: grid; }       /* 网格布局 */

/* position 属性 */
.relative { position: relative; }
.absolute { position: absolute; }
.fixed { position: fixed; }
.sticky { position: sticky; }

/* Flexbox 基础 */
.container {
    display: flex;
    justify-content: center;  /* 水平居中 */
    align-items: center;      /* 垂直居中 */
    gap: 10px;                /* 间距 */
}
```

### 颜色和字体
```css
.text {
    color: #333333;              /* 十六进制 */
    color: rgb(51, 51, 51);      /* RGB */
    color: rgba(51, 51, 51, 0.8); /* RGBA（带透明度） */
    
    font-family: Arial, sans-serif;
    font-size: 16px;
    font-weight: bold;
    line-height: 1.5;
    text-align: center;
}
```

---

## JavaScript 基础

### 引入方式
```html
<!-- 内部脚本 -->
<script>
    console.log("Hello, World!");
</script>

<!-- 外部脚本（推荐） -->
<script src="script.js"></script>

<!-- 模块（ES6） -->
<script type="module" src="module.js"></script>
```

### 变量声明
```javascript
// var - 函数作用域（不推荐使用）
var name = "Alice";

// let - 块级作用域（推荐）
let age = 25;
age = 26;  // 可以重新赋值

// const - 常量（推荐）
const PI = 3.14159;
// PI = 3;  // 错误！不能重新赋值

// 对象/数组可以修改内容
const person = { name: "Bob" };
person.name = "Alice";  // ✅ 可以
// person = {};  // ❌ 不行
```

### 数据类型

**原始类型（Primitive Types）:**
```javascript
let str = "Hello";      // String
let num = 42;           // Number
let big = 123456789n;   // BigInt
let flag = true;        // Boolean
let nothing = null;     // Null
let undefinedVar;       // Undefined
let sym = Symbol('id'); // Symbol
```

**引用类型:**
```javascript
let obj = { name: "Alice", age: 25 };     // Object
let arr = [1, 2, 3, 4, 5];                // Array
let func = function() { return 42; };     // Function
let date = new Date();                    // Date
let regex = /abc/i;                       // RegExp
```

### 运算符
```javascript
// 算术运算符
let sum = 10 + 5;      // 15
let diff = 10 - 5;     // 5
let product = 10 * 5;  // 50
let quotient = 10 / 5; // 2
let remainder = 10 % 3; // 1
let power = 2 ** 3;    // 8

// 比较运算符
10 == "10"   // true (宽松相等)
10 === "10"  // false (严格相等)
10 != "10"   // false
10 !== "10"  // true
10 > 5       // true
10 >= 10     // true

// 逻辑运算符
true && false  // false (与)
true || false  // true (或)
!true          // false (非)

// 空值合并
let name = input ?? "Guest";  // input 为 null/undefined 时用默认值

// 可选链
let city = user?.address?.city;  // 安全访问嵌套属性
```

### DOM 操作入门
```javascript
// 获取元素
const element = document.getElementById("myId");
const elements = document.querySelector(".myClass");
const allElements = document.querySelectorAll("p");

// 修改内容
element.textContent = "新文本";
element.innerHTML = "<strong>HTML 内容</strong>";

// 修改样式
element.style.color = "red";
element.style.fontSize = "16px";

// 添加/移除类
element.classList.add("active");
element.classList.remove("hidden");
element.classList.toggle("visible");

// 事件监听
element.addEventListener("click", function(event) {
    console.log("被点击了!", event);
});

// 创建元素
const newDiv = document.createElement("div");
newDiv.textContent = "我是新元素";
document.body.appendChild(newDiv);
```

### 函数
```javascript
// 函数声明
function greet(name) {
    return "Hello, " + name;
}

// 函数表达式
const greet2 = function(name) {
    return "Hi, " + name;
};

// 箭头函数（ES6）
const greet3 = (name) => {
    return "Hey, " + name;
};

// 简写箭头函数
const greet4 = name => `Hey, ${name}`;

// 默认参数
function greet5(name = "Guest") {
    return "Hello, " + name;
}

// 剩余参数
function sum(...numbers) {
    return numbers.reduce((a, b) => a + b, 0);
}
```

---

_参考：Microsoft Web-Dev-For-Beginners_

_持续更新中..._
