# Variables and Data Types

In computer programming, variables and data types are the core components that handle data storage and manipulation.

## 1. Variables
A **variable** is a named storage location in memory that holds a value. It acts as a container for data that can be changed during program execution.

### L-values and R-values
- **L-value (Locator Value):** Refers to a memory location. It can appear on the left side of an assignment operator (e.g., `x = 10`, here `x` is an L-value).
- **R-value (Value):** Refers to the actual data stored at some address. It can only appear on the right side of an assignment (e.g., `10` is an R-value).

## 2. Data Types
Data types specify the type of data a variable can hold and the operations that can be performed on it.

### A. Primitive (Built-in) Data Types
These are the basic types provided by the programming language.
- **Integer (`int`)**: Whole numbers, e.g., `5`, `-10`.
- **Floating Point (`float`, `double`)**: Numbers with decimals, e.g., `3.14`.
- **Character (`char`)**: Single symbols, e.g., `'A'`, `'@'`.
- **Boolean (`bool`)**: Logical values, `true` or `false`.

### B. Non-Primitive (User-Defined) Data Types
These are derived from primitive types and offer more complex structures.
- **Arrays**: Collections of items of the same type.
- **Strings**: Sequences of characters.
- **Structures (`struct`)** / **Classes**: Grouping of different data types under one name.
- **Pointers**: Variables that store the memory address of another variable.

## 3. Memory Representation
Variables are stored in memory in two primary ways:
1. **Static Allocation (Stack)**: Memory is allocated at compile-time. It is fast but fixed in size.
2. **Dynamic Allocation (Heap)**: Memory is allocated at runtime using pointers. It is flexible but requires manual management (in languages like C/C++).

> [!NOTE]
> Understanding the size of each data type is crucial for memory-efficient programming. For example, an `int` usually takes 4 bytes, while a `char` takes 1 byte.
