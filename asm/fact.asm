//  PRECONDITION: n >= 0
// long fact(int n) {
//   if (n < 2) {
//     return 1;
//   } else {
//     return n * fact(n - 1);
//   }
// }


// print(fact(3))
// gets number from command line
LDLO -1 r1
// we could also have hard-coded
// MOVI 10 r1

PUSH r1

MOVI fact r7
JAL r7

MOVI 1 r2
SUB r2 sp

OUT r1

// print(fact(10))
//MOVI 10 r1
//PUSH r1
//
//MOVI fact r7
//JAL r7
//
//MOVI 1 r2
//SUB r2 sp
//
//OUT r1

HALT



fact:
PUSH rp
PUSH fp
MOV sp fp

LDLO -3 r4
MOVI 2 r2
// This allows us to keep n in a register (which is faster than memory)
MOV r4 r3
IDIV r2 r3  // r2 /= r3
MOVI else r7
JNZ r3 r7

// if n < 2
MOVI 1 r1

MOVI after r7
JMP r7

else:
// if n >= 2

/// === call fact(n - 1)
PUSH r4

// push (n - 1)
MOV r4 r3
MOVI 1 r2
SUB r2 r3
PUSH r3

MOVI fact r7
JAL r7

MOVI 1 r2
SUB r2 sp

POP r4
/// === end call fact(n - 1)
// r1 = fact(n - 1)
// r4 = n
MUL r4 r1

after:
POP fp
POP rp
RET
