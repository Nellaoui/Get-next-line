# Get Next Line

<aside>
💡 **Notion Tip:**  You will understand how files are opened, read and closed in an OS,
and how they are interpreted by a programming language for further analysis.
This task is crucial to understand for a future programmer since much of the time is based
on manipulating files for data management and persistence.
This project consists of coding a function that returns one line at a time from a text file.

</aside>

# **`🧠 what we gonna use in Get Next Line ? 🧠` @**

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