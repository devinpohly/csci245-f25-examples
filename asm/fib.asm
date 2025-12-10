//  PRECONDITION: n >= 0
// long fib(int n) {
//   if (n < 2) {
//     return 1;
//   } else {
//     return fib(n - 1) + fib(n - 2);
//   }
// }


// print(fib(3))
// gets number from command line
LDLO -1 r1
// we could also have hard-coded
// MOVI 10 r1

PUSH r1

MOVI fib r7
JAL r7

MOVI 1 r2
SUB r2 sp

OUT r1

HALT



fib:
PUSH rp
PUSH fp
MOV sp fp
MOVI 1 r1
ADD r1 sp

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


PUSH r4
MOV r4 r3
MOVI 1 r2
SUB r2 r3
PUSH r3
MOVI fib r7
JAL r7
MOVI 1 r2
SUB r2 sp
POP r4

STLO 0 r1

PUSH r4
MOV r4 r3
MOVI 2 r2
SUB r2 r3
PUSH r3
MOVI fib r7
JAL r7
MOVI 1 r2
SUB r2 sp
POP r4

LDLO 0 r5
ADD r5 r1


after:
MOV fp sp
POP fp
POP rp
RET
