# C++ String Examples

[![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)](https://en.cppreference.com/w/)
[![CMake](https://img.shields.io/badge/Build-CMake-green.svg)](https://cmake.org/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

> A collection of simple examples and practical exercises demonstrating how to work with `std::string` in C++.

---

## 📚 Topics

| Topic | Methods / Concepts |
|-------|--------------------|
| ✂️ Sizing | `size()` and `length()` |
| 🧹 Cleaning | `empty()` and `clear()` |
| 🎯 Access | `at()` and `operator[]` |
| 🔤 Edges | `front()` and `back()` |
| ➕ Append | `push_back()` and `pop_back()` |
| 🔗 Concatenate | `append()` |
| 📥 Insert | `insert()` |
| 🗑 Remove | `erase()` |
| 🔄 Replace | `replace()` |
| ✂️ Extract | `substr()` |
| 🔍 Search | `find()` and `rfind()` |
| 🔁 Iterate | Iterators |
| 🧰 Basics | Basic string manipulation |

---

## 🛠️ Technologies

- **C++** (C++17 standard)
- **CMake** — build system
- **Standard Template Library (STL)** — `std::string`

---

## 🎯 Purpose

This repository is created for **learning and practicing string manipulation in C++**.

Each example focuses on a specific method or concept and is intentionally kept **simple and easy to understand**.

---

## 📁 Structure

```
cpp-string-examples/
├── src/
│   ├── erase.cpp
│   ├── insert.cpp
│   ├── replace.cpp
│   ├── substr.cpp
│   ├── find.cpp
│   └── ...
└── README.md
```

---

## 🚀 Example

```cpp
#include <iostream>
#include <string>

int main() {
    std::string text = "Lorem Ipsum";

    text.erase(5, 1);

    std::cout << text << '\n';

    return 0;
}
```

---

## 📖 Learning

The examples are written as part of my **C++ learning journey** and can be used as a **quick reference** for common `std::string` operations.

---

## 📄 License

This project is licensed under the **MIT License** — see the [LICENSE](LICENSE) file for details.