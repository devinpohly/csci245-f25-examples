// print out 100 % 7

MOVI 100 r1
PUSH r1
MOVI 7 r1
PUSH r1
// Shouldn't break anything
//MOVI 83842 r1
MOVI printmod r7
JAL r7

MOVI 2 r1
SUB r1 sp


// i is in r1
MOVI 1 r1
top:

// calculate i % 5  (r3 % r2)

// ========
// printmod(i, 5)
// Save caller-save registers
PUSH r1

// Set up arguments
PUSH r1
MOVI 5 r2
PUSH r2

// Call printmod
MOVI printmod r7
JAL r7

// Clean up stack
MOVI 2 r1
SUB r1 sp

// Restore caller-save registers
POP r1

// (use return value - in r1)
// ========

MOVI 1 r6
ADD r6 r1

MOVI 20 r6
SUB r1 r6
MOVI top r7
JNZ r6 r7


HALT


// mod(a, b)
//   a is in r3
//   b is in r2
//   result ends up in r4
mod:
PUSH rp
PUSH fp	
MOV sp fp

LDLO -4 r3
LDLO -3 r2

MOV r3 r1
IDIV r2 r3
MUL r2 r3
SUB r3 r1

MOV fp sp
POP fp
POP rp
RET


printmod:
PUSH rp
PUSH fp
MOV sp fp

LDLO -4 r1
LDLO -3 r2

PUSH r1
PUSH r2

MOVI mod r7
JAL r7
// result is in r1

MOVI 2 r2
SUB r2 sp

OUT r1

MOV fp sp
POP fp
POP rp
RET
