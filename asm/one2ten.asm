MOVI 1 r1   // use r1 as i, i = 1

top:
                 // (note: we will loop back here)
OUT  r1     // output i

MOVI 1 r2   // put 1 in r2 so we can...
ADD  r2 r1  //   ... add it to i (i++)

MOV  r1 r3  // copy i into r3 for calculation
MOVI 11 r2  // now put 11 into r2...
SUB  r2 r3  // ... so we can subtract that from i
                 // (SUB r2 r1 would change i!)

MOVI top r2
JNZ  r3 r2  // and if the result is not 0, jump to addr 3

HALT        // otherwise i == 11, so we're done
