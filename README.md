<h1 align="center">
	<img alt="badge push" src="./push_swap_dark.svg" />
 </h1>
 
 <div align="center">
 
 [![NPM](https://img.shields.io/npm/l/react)](https://github.com/nandajfa/push_swap/blob/main/LICENSE)
 
  </div>
 
   ## 🗣️ About

> _Writing a sorting algorithm is always a very important step in a developer’s journey. It is often the first encounter with the concept of complexity. Sorting algorithms and their complexity are part of the classic questions discussedduring job interviews. It’s probably a good time to look at these concepts since you’llhave to face them at some point._

#### 

The Push swap project is a very simple and a highly straightforward algorithm project:data must be sorted.
You have at your disposal a set of integer values, 2 stacks, and a set of instructions to manipulate both stacks.

### Skills

* Rigor
* Unix
* Imperative programming
* Algorithms & AI

### Push_swap_gui

Click [here](https://github.com/elijahkash/push_swap_gui) to access the push_swap_gui repository .
![alt text](./Images/gui.png)

### 📋 Moves allowed 

- `sa` : swap the first 2 elements at the top of stack a (do nothing if there is only one or no elements).
- `sb` : swap the first 2 elements at the top of stack b (do nothing if there is only one or no elements).
- `ss` : `sa` and `sb` at the same time.
- `pa` : take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.
- `pb` : take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.
- `ra` : shift up all elements of stack a by 1. The first element becomes
the last one.
- `rb` : shift up all elements of stack b by 1. The first element becomes the last one.
- `rr` : `ra` and `rb` at the same time.
- `rra` : shift down all elements of stack a by 1. The last element becomes the first one.
- `rrb` : shift down all elements of stack b by 1. The last element becomes the first one.
- `rrr` : `rra` and `rrb` at the same time.
<br />

## Getting started
**Follow the steps below**
```bash
# Clone the project and access the folder
https://github.com/nandajfa/push_swap && cd push_swap/

# Compile push_swap and checker with
make

# Running push_swap
./push_swap 1 3 2 5 4

# Running push_swap with the checker
ARG="1 3 2 5 4"; ./push_swap $ARG | ./checker $ARG

# Clean output files with
make fclean

# Well done!
```

### Performance

* With 3 numbers: 2 instructions
* With 5 numbers: 6 instructions
* With 100 numbers: 1084
* With 500 numbers: 6784

### Author

 | [<img src="https://avatars.githubusercontent.com/u/80687429?v=4" width=115><br><sub>Jessica Fernanda</sub>](https://github.com/nandajfa) |
 | :---: |
 
  [![Linkedin Badge](https://img.shields.io/badge/-Jessica-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://[https://www.linkedin.com/in/jessica-fernanda-programadora/](https://www.linkedin.com/in/jessica-fernanda-programadora/))](https://www.linkedin.com/in/jessica-fernanda-programadora/)
[![Gmail Badge](https://img.shields.io/badge/-nanda.jfa@gmail.com-c14438?style=flat-square&logo=Gmail&logoColor=white&link=mailto:nanda.jfa@gmail.com)](mailto:nanda.jfa@gmail.com)
