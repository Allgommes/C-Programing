# C++ Programming Concepts - Study Guide

## Overview
This document covers C++ Object-Oriented Programming concepts demonstrated in your workspace, based on practical examples from your code files.

## Table of Contents
1. [Classes and Objects](#classes-and-objects)
2. [Encapsulation](#encapsulation)
3. [Access Specifiers](#access-specifiers)
4. [Getters and Setters](#getters-and-setters)
5. [Data Types and Arrays](#data-types-and-arrays)
6. [Class Composition](#class-composition)
7. [Best Practices](#best-practices)
8. [Common Issues and Solutions](#common-issues-and-solutions)

---

## Classes and Objects

### Basic Class Definition
Classes are the blueprint for creating objects. They encapsulate data (attributes) and functions (methods) that operate on that data.

**Example from your code** (`exemplo01.cpp`):
```cpp
class IDequipamento {  
public:    
    int ID; 
    int tipo; 
    char descricao[20]; 
};
```

### Object Instantiation
Objects are instances of classes created using the class name.

```cpp
int main() {
    IDequipamento e1; // Creating an object
    e1.ID = 1;
    e1.tipo = 2;
    sprintf(e1.descricao, "router");
    return 0;
}
```

---

## Encapsulation

Encapsulation is the concept of bundling data and methods within a class and controlling access to them. Your code demonstrates this concept extensively.

**Example from** `prog05.cpp`:
```cpp
class pacoteID {
private:
    int ID;                        // Private data members
    char enderecoRemetente[16];    
    char enderecoDestinatario[16]; 
    char payload[100];             
    int CRC;

public:
    void definirID(int i) {        // Public methods
        if (i < 0) return;
        ID = i;
    }
    int obterID() {
        return ID;
    }
};
```

---

## Access Specifiers

### Private
- Members are accessible only within the class
- Used to hide implementation details
- Provides data security

### Public
- Members are accessible from anywhere
- Used for the interface of the class

**Your networking packet classes** demonstrate proper encapsulation:
- Private attributes: `ID`, `enderecoRemetente`, `enderecoDestinatario`, `payload`
- Public methods: setters and getters for controlled access

---

## Getters and Setters

### Setter Methods (definir/set)
Used to modify private data members with validation.

**From your code**:
```cpp
void definirID(int i) {
    if (i < 0) return; // Validation
    ID = i;
}

void definirEnderecoRemetente(const char* rem) {
    sprintf(enderecoRemetente, "%s", rem);
}
```

### Getter Methods (obter/get)
Used to access private data members safely.

```cpp
int obterID() {
    return ID;
}

char* obterEnderecoRemetente() {
    return enderecoRemetente;
}
```

---

## Data Types and Arrays

### Character Arrays
Your code extensively uses character arrays for network addresses and data:

```cpp
char enderecoRemetente[16];    // IP address storage
char enderecoDestinatario[16]; // Destination address
char payload[100];             // Data payload
```

### Integer Arrays
In `exemplo04_so_int.cpp`, you work with integer arrays:

```cpp
int enderecoRemetente[16];     // Array of integers
int enderecoDestinatario[16];  
int payload[100];              
```

### Array Handling Methods
```cpp
void definirEnderecoRemetente(const int* rem) {
    for (int i = 0; i < 16; ++i) {
        enderecoRemetente[i] = rem[i];
    }
}
```

---

## Class Composition

### Object Arrays as Class Members
**From** `exemplo11.cpp` and `prog16.cpp`:

```cpp
class Turma {
private:
    int numero;
public:
    Aluno alunos[3];  // Array of objects as class member
    
    void definirNumero(int n) {
        if (n < 0) return;
        numero = n;
    }
};
```

### Nested Class Usage
**From** `prog16.cpp`:
```cpp
class sessaoTCP {
private:
    int numeroSessao;
public:
    pacoteIP pacote[10];  // Array of pacoteIP objects
    
    void DefinirNumeroSessao(int num) {
        numeroSessao = num;
    }
};
```

---

## Best Practices

### 1. Input Validation
Always validate input in setter methods:
```cpp
void definirID(int i) {
    if (i < 0) return; // Prevent negative IDs
    ID = i;
}
```

### 2. Buffer Overflow Prevention
Use limited input with `scanf`:
```cpp
scanf("%15s", rem);  // Limit to 15 characters
scanf("%99s", pay);  // Limit to 99 characters
```

### 3. Safe String Copying
Use `strncpy` instead of `sprintf` for string copying:
```cpp
// Better approach
strncpy(enderecoRemetente, rem, sizeof(enderecoRemetente) - 1);
enderecoRemetente[sizeof(enderecoRemetente) - 1] = '\0';
```

### 4. Const Correctness
Use `const` for parameters that shouldn't be modified:
```cpp
void definirEnderecoRemetente(const char* rem);
void definirEnderecoDestinatario(const int* dest);
```

---

## Common Issues and Solutions

### 1. Return Type Mismatch
**Problem**: Returning wrong data type
```cpp
// Wrong - returning int as char*
char* obterCRC() {
    return CRC;  // CRC is int, not char*
}
```

**Solution**: Match return types
```cpp
int obterCRC() {
    return CRC;
}
```

### 2. Method Declaration in Class Body
**Problem**: Using `ClassName::` inside class definition
```cpp
class pacoteID {
    void pacoteID::definirID(int i) { // Wrong
        ID = i;
    }
};
```

**Solution**: Remove class name prefix inside class body
```cpp
class pacoteID {
    void definirID(int i) { // Correct
        ID = i;
    }
};
```

### 3. Unsafe String Operations
**Problem**: Using `sprintf` without size limits
```cpp
sprintf(enderecoRemetente, "%s", rem); // Dangerous
```

**Solution**: Use safer alternatives
```cpp
strncpy(enderecoRemetente, rem, sizeof(enderecoRemetente) - 1);
enderecoRemetente[sizeof(enderecoRemetente) - 1] = '\0';
```

---

## Network Packet Classes - Your Domain

Your code focuses heavily on network packet simulation with classes like:

- **`pacoteID`**: Packet with ID, addresses, payload, and CRC
- **`pacoteIP`**: IP packet simulation
- **`sessaoTCP`**: TCP session management

### Key Attributes
- **ID/Identification**: Packet identifier
- **enderecoRemetente**: Sender address
- **enderecoDestinatario**: Destination address  
- **payload**: Data content
- **CRC**: Cyclic Redundancy Check
- **length**: Packet length

### Evolution in Your Code
1. **Basic classes** (`exemplo01.cpp`) - Simple public attributes
2. **Encapsulated classes** (`exemplo02.cpp` onwards) - Private attributes with getters/setters
3. **Complex classes** (`prog16.cpp`) - Class composition with object arrays
4. **Data type variations** - String-based vs integer-based implementations

---

## Compilation and Development Environment

Based on your VS Code configuration:
- **Compiler**: g++ (MinGW-w64)
- **Standard**: C++17
- **Build System**: Tasks.json with gcc problem matcher
- **Debugging**: GDB integration

## Conclusion

Your C++ code demonstrates solid understanding of:
- ✅ Class design and object creation
- ✅ Encapsulation principles
- ✅ Getter/setter patterns
- ✅ Input validation
- ✅ Class composition
- ✅ Array handling in classes

**Areas for improvement**:
- Use safer string operations (`strncpy` vs `sprintf`)
- Implement constructors for initialization
- Add destructors if needed
- Consider using `std::string` instead of char arrays
- Add error handling and exception management

Your focus on network packet simulation provides excellent practical context for learning OOP concepts!