# Abstract Data Types (ADTs)

An **Abstract Data Type (ADT)** is a mathematical model for a certain class of data structures that have similar behavior.

## 1. What is an ADT?
An ADT defines:
1.  **Direct Data**: The type of data it can hold.
2.  **Operations**: The operations that can be performed on the data (e.g., `insert`, `delete`, `search`).

**The key point is abstraction**: An ADT tells you *what* to do, but not *how* to do it.

## 2. ADT vs. Data Structure
It is vital to distinguish between the conceptual model (ADT) and its physical implementation (Data Structure).

| Feature | Abstract Data Type (ADT) | Data Structure |
| :--- | :--- | :--- |
| **Concept** | Conceptual / Logical View | Implementation / Physical View |
| **Focus** | What it does | How it is stored and manipulated |
| **Examples** | List, Stack, Queue, Map | Array-based List, Linked List, HashTable |

## 3. Common Examples of ADTs

### A. List ADT
A sequence of elements where each element has a position.
- **Operations**: `get(i)`, `insert(i, element)`, `remove(i)`, `size()`.

### B. Stack ADT
A "Last-In-First-Out" (LIFO) collection.
- **Operations**: `push(element)`, `pop()`, `peek()`.

### C. Queue ADT
A "First-In-First-Out" (FIFO) collection.
- **Operations**: `enqueue(element)`, `dequeue()`, `front()`.

### D. Map / Dictionary ADT
A collection of key-value pairs.
- **Operations**: `put(key, value)`, `get(key)`, `remove(key)`.

> [!TIP]
> Using ADTs allows programmers to swap implementations (e.g., replacing an `ArrayList` with a `LinkedList`) without changing the code that uses the List, as long as the interface remains the same.
