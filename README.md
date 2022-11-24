<h1 align="center">
	📖 get_next_line
</h1>

<p align="center">
	<b><i>Reading a line on a fd is way too tedious</i></b><br>
</p>

<p align="center">
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/surfi89/get_next_line?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/surfi89/get_next_line?color=blue" />
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project
<aside>
💡 **Notion Tip:**  You will understand how files are opened, read and closed in an OS,
and how they are interpreted by a programming language for further analysis.
This task is crucial to understand for a future programmer since much of the time is based
on manipulating files for data management and persistence.
This project consists of coding a function that returns one line at a time from a text file.

</aside>

# **`🧠 what we gonna use in Get Next Line ? 🧠` **

---

# So what is the process

> Process is an activity of executing a program. Process is of two types – User process and System process. Process control block controls the operation of the process.
> 

---

# **File Descriptor table**

> File descriptor table is the collection of integer array indices that are file descriptors in which elements are pointers to file table entries. One unique file descriptors table is provided in operating system for each process.
> 

---

# Static Variable

> A static int variable remains in memory while the program is running. A normal or auto variable is destroyed when a function call where the variable was declared is over.
> 

---

# Read function

```jsx
ssize_t read(int fd, void *buf, size_t nbytes);
```

## parameter arguments

**fd:** The file descriptor of the file from where the information is to be read. We could either be using a file descriptor acquired via an open system call, or we could just use 0, 1, or 2 referring to typical input, regular output, or regular error, respectively.

---

***buf:** The buffer or character array in which the read data should be saved and kept.

---

**nbyte:** The number of bytes that needed to be read from the document before truncating. All information can be stored in the buffer if the information to be read is shorter than nbytes.

---

## Description

The read() method tries to read ‘nbyte’ bytes into the buffer cache referred to by ‘buf’ from either the file connected with the open document descriptor .’fd’.

On documents that enable the reading, the reading process begins at the offset of the document, and the offset is increased by the number of bytes read. If the document offset is at or beyond the file’s edge, there are no bytes read, and read() yields none.

---

## Return Value

- The numeral of bytes ‘read’ reverted upon achievement must be a non-negative integer while zero points to the end of the file.
- The document position is progressed by this number, or else, to signify an error, the methods return -1 and assign ‘errn’.
> _The aim of this project is to make you code a function that returns a line, read from a file descriptor._

	You will understand how files are opened, read and closed in an OS,
	and how they are interpreted by a programming language for further analysis.
	This task is crucial to understand for a future programmer since much of the time is based
	on manipulating files for data management and persistence.
	This project consists of coding a function that returns one line at a time from a text file.

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).


## 🛠️ Usage

### Requirements

The function is written in C language and thus needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Using it in your code**

To use the function in your code, simply include its header:

```C
#include "get_next_line.h"
```

and, when compiling your code, add the source files and the required flag:

```shell
get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=<size>
```

## 📋 Testing
you can  use this  tester to fully test the project

* [Tripouille/gnlTester](https://github.com/Tripouille/gnlTester)
