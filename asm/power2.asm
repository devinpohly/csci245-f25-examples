MOVI 1 r1
MOVI 2 r2

// THIS
restart:
OUT r1
MUL r2 r1

MOVI restart r7
JMP r7

HALT
