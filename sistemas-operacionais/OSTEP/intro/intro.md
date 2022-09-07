# Introduction to Operating Systems

You already know the **Von Neumann** model of computing. In this book we will see what
happens in background to make systems easy to use.

There's a body of software that make it easy to run programs, share memory end other
stuff. It's OS.

It's when the operating system takes a physical resource (such as memory, processor) and transforms it into a more general, powerful, and easy-to-use virtual form of itself. We refer to the OS as a **virtual machine** because of that behaviour.

OS provides API and STD Libs to applications.

OS is known as a **resource manager**, because it manages how software can interact and share the resources.

## Virtualizing the CPU

Running many `cpu.c` instances show us that the OS can simulate that we have more than one CPU. It's an illusion. The OS is virtualizing the CPU.

**API's** is the major way that users interact with OS.
