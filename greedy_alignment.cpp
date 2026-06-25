//Greedy alignment = allocate members sequentially, satisfy alignment immediately by adding padding wherever required.
/*
Greedy Alignment (Structure/Class Padding):
Compiler stores data members in the same order as declared and aligns each member immediately.
If the current memory address is not divisible by the member's alignment requirement,
padding bytes are added before placing it.

Compiler does NOT rearrange members to reduce size.

Rules:
1. char -> align at multiple of 1
2. int  -> align at multiple of 4
3. double -> align at multiple of 8 (system dependent)
4. Final object size must be a multiple of the largest alignment requirement.

Example:
char + int + char
= c + 3 padding + int + c + 3 padding
= 12 bytes

Reordering members manually (larger -> smaller) can reduce padding.
*/