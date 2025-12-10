
MOVI arr r1
PUSH r1
MOVI 20 r1
PUSH r1
MOVI nothing r1
PUSH r1

MOVI selsort r7
JAL r7

POP r1
POP r1
POP r1


// Print out the array contents

MOVI 0 r1
MOVI arr r5

print:
MOV r1 r3
ADD r5 r3
LD r3 r4
OUT r4

MOVI 1 r2
ADD r2 r1

MOV r1 r3
MOVI 20 r2
SUB r2 r3
MOVI print r7
JNZ r3 r7



HALT

selsort:
PUSH rp
PUSH fp
MOV sp fp

MOVI 1 r11

LDLO -5 r10 // arr
LDLO -4 r2 // n
LDLO -3 r3 // less (fp)

// i = r4
// mini = r6

MOVI 0 r6
MOVI 0 r4
outer:


MOV r4 r6

// j = r5

// j = i + 1
MOV r4 r5
ADD r11 r5

inner:

// ...

// save registers
push r2
push r3
push r4
push r5
push r6
push r10
// push arr[j]
MOV r10 r20
ADD r5 r20
PUSH r20
// push arr[mini]
MOV r10 r20
ADD r6 r20
PUSH r20
// jal
JAL r3
// result is in r1
// clean up stack
MOVI 2 r20
SUB r20 sp
// restore registers
pop r10
pop r6
pop r5
pop r4
pop r3
pop r2


out r1


// j++
ADD r11 r5
// test
MOV r5 r22
SUB r2 r22
MOVI inner r7
JNZ r22 r7


// swap index i and mini

// r20 = &arr[i]
MOV r10 r20
ADD r4 r20
// r21 = &arr[mini]
MOV r10 r21
ADD r6 r21

// swaps *r20 with *r21
LD r20 r22
LD r21 r23
ST r21 r22
ST r20 r23




// i++ and test

ADD r11 r4

MOV r4 r22
SUB r2 r22
ADD r11 r22
MOVI outer r7
JNZ r22 r7


MOV fp sp
POP fp
POP rp
RET

nothing:
movi 0 r1
ret

arr:
IDIV r11 r8
MOVI 3 r9
PUSH r13
ST   r20 r5
LDLO 7 r4
POP  r19
HALT
RET
STLO 2 r0
