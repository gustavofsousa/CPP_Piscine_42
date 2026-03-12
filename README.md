<h1 align="center">CPP Piscine — C++ Modules</h1>

<p align="center">
  <img src="https://img.shields.io/badge/language-C++-blue.svg" alt="Language">
  <img src="https://img.shields.io/badge/standard-C++98-orange.svg" alt="C++98">
  <img src="https://img.shields.io/badge/42-School-black.svg" alt="42 School">
  <img src="https://img.shields.io/badge/status-complete-brightgreen.svg" alt="Status">
</p>

<p align="center">
  10 progressive modules covering C++ from the ground up — OOP, memory management, templates, STL, and more.
</p>

<p align="center">
  <a href="README.pt-br.md">🇧🇷 Leia em Português</a>
</p>

---

## Why this project matters

> "This project taught me the full object-oriented paradigm — encapsulation, inheritance, polymorphism, and operator overloading — and why these concepts exist, not just how to use them. Understanding C++ at this level gives direct insight into how languages like Java, C#, and Python implement their object models, and how high-performance systems (game engines, financial systems, embedded software) are designed."

C++ remains one of the most demanded languages in systems programming, game development, embedded systems, and performance-critical applications. This foundation is directly transferable.

---

## Module overview

| Module | Topic | Key Concepts |
|---|---|---|
| **CPP00** | Namespaces, I/O | `std::cout`, classes, member functions |
| **CPP01** | Memory allocation | `new`/`delete`, references vs pointers, `filestream` |
| **CPP02** | Ad-hoc polymorphism | Operator overloading, canonical form, fixed-point numbers |
| **CPP03** | Inheritance | Base/derived classes, constructors in hierarchy |
| **CPP04** | Subtype polymorphism | Virtual functions, abstract classes, interfaces |
| **CPP05** | Exceptions | `try`/`catch`/`throw`, custom exception classes |
| **CPP06** | Casts | `static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast` |
| **CPP07** | Templates | Function templates, class templates, `std::swap` |
| **CPP08** | STL containers | `std::vector`, `std::list`, `std::map`, iterators |
| **CPP09** | STL algorithms | `std::stack`, Bitcoin exchange problem, merge-insert sort |

---

## A standout technical detail

CPP09's final exercise implements the **Ford-Johnson (merge-insert sort)** algorithm — one of the theoretically optimal comparison-based sorting algorithms known for minimizing the number of comparisons. Implementing it in C++ with STL containers demonstrates a strong grasp of both algorithmic thinking and modern C++ idioms, going well beyond typical academic exercises.

---

## Getting Started

Each module is self-contained:

```bash
git clone https://github.com/gustavofsousa/CPP_Piscine_42.git
cd CPP_Piscine_42/CPP00/ex00
make
./megaphone "hello world"
```

### Running any exercise

```bash
cd CPP<module>/ex<number>
make
./<executable>
```

---

## Project structure

```
CPP_Piscine_42/
├── CPP00/       # Namespaces, classes, I/O
│   ├── ex00/    # Megaphone
│   └── ex01/    # PhoneBook
├── CPP01/       # Memory, references, files
├── CPP02/       # Operator overloading, fixed-point
├── CPP03/       # Inheritance
├── CPP04/       # Virtual functions, abstract classes
├── CPP05/       # Exceptions
├── CPP06/       # Type casts
├── CPP07/       # Templates
├── CPP08/       # STL containers and iterators
└── CPP09/       # STL algorithms, Bitcoin exchange, merge-insert sort
```

---

## Skills demonstrated

- Object-Oriented Programming (OOP) in C++
- Memory management (`new`/`delete`, RAII)
- Operator overloading and canonical class form
- Inheritance and polymorphism (virtual dispatch)
- Exception handling
- Generic programming with templates
- STL containers and iterators
- Algorithm design (merge-insert / Ford-Johnson sort)

---

## License

This project was developed as part of the [42 School](https://42.fr) curriculum.

---

<p align="center">Made with ☕ at 42 Rio de Janeiro</p>
