*This project has been created as part
of the 42 curriculum by mlazar.*

# Piscine C

## Description

This repository contains my work for the 42 Piscine, an intensive
selection period where I learned the basics of programming in C and
of working in a Unix environment. The goal is to learn by doing,
to work with peers, and to build a solid base for the main
curriculum.

Each exercise is stored in its own folder and follows the Norm.

## Structure

```
.
├── C00/
│   ├── ex00/
│   │   └── ft_putchar.c
│   ├── ex01/
│   └── ...
├── C01/
├── C02/
├── ...
└── Shell00/
```

- **Shell00 / Shell01:** Unix commands, permissions, scripting basics.
- **C00 - C13:** C language exercises (functions, pointers, strings,
  arrays, memory allocation, structures, files, and so on).
- **Rush:** team projects completed during the pool.
- **Exam:** practice exercises for the weekly exams.

> Edit this list to match the modules you actually completed.

## Instructions

Compile an exercise with the required flags:

```bash
cc -Wall -Wextra -Werror ex00/ft_putchar.c main.c -o test
./test
```

Check the Norm:

```bash
norminette -R CheckForbiddenSourceHeader
```

Notes:
- The `main.c` files are only for my own testing and are not part of
  the submitted work.
- Each folder only contains the files required by the subject.

## Resources

- `man` pages (`man 2 write`, `man 3 printf`, ...)
- The Norm and the subjects provided by 42
- Peer learning with other students during the pool

### AI usage

AI was used for the following tasks:
- Understanding concepts (pointers, `const`, memory).
- Explaining compiler errors and how to read them.

I wrote and tested all the code myself.
