/*
0/1 => Base -2 Number System
0-9 => Base -10 Number System also known as Decimal Number System
A-F => Base -16 Number System also known as Hexadecimal Number System

Decimal to Binary Conversion:
1. Divide the decimal number by 2.
2. Record the remainder (0 or 1).
3. Update the decimal number to the quotient obtained from the division.
4. Repeat steps 1-3 until the decimal number becomes 0.
5. The binary representation is obtained by reading the recorded remainders in reverse order.

example: Convert 10 to binary
10 / 2 = 5, remainder = 0   
5 / 2 = 2, remainder = 1
2 / 2 = 1, remainder = 0
1 / 2 = 0, remainder = 1
Binary representation of 10 is 1010 (reading the remainders in reverse order).

example: Convert 42 to binary
42 / 2 = 21, remainder = 0
21 / 2 = 10, remainder = 1
10 / 2 = 5, remainder = 0
5 / 2 = 2, remainder = 1
2 / 2 = 1, remainder = 0
1 / 2 = 0, remainder = 1
Binary representation of 42 is 101010 (reading the remainders in reverse order).

example : convert 255 to binary
255 / 2 = 127, remainder = 1
127 / 2 = 63, remainder = 1
63 / 2 = 31, remainder = 1
31 / 2 = 15, remainder = 1
15 / 2 = 7, remainder = 1
7 / 2 = 3, remainder = 1
3 / 2 = 1, remainder = 1
1 / 2 = 0, remainder = 1
Binary representation of 255 is 11111111 (reading the remainders in reverse order).


Binary to Decimal Conversion:
1. Start from the rightmost bit (least significant bit) of the binary number.
2. For each bit, multiply it by 2 raised to the power of its position (starting from 0).
3. Sum all the results to get the decimal representation.

example: Convert 1010 to decimal
(1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (0 * 2^0) = 8 + 0 + 2 + 0 = 10

example: Convert 101010 to decimal
(1 * 2^5) + (0 * 2^4) + (1 * 2^3) + (0 * 2^2) + (1 * 2^1) + (0 * 2^0) = 32 + 0 + 8 + 0 + 2 + 0 = 42

example: Convert 11111111 to decimal
(1 * 2^7) + (1 * 2^6) + (1 * 2^5) + (1 * 2^4) + (1 * 2^3) + (1 * 2^2) + (1 * 2^1) + (1 * 2^0) = 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = 255

*/