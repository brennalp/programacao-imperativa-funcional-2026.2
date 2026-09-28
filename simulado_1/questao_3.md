int a = 2, b = 4, c = 5, d = 10;

1. a += b + c; // Valor final de a = 11
b+c = 4+5 = 9
a = a+9 = 2+9 = 11

2. b *= c = d - 2; // Valores finais de b e c: c = 8, b = 32
c = d-2 = 10-2 = 8
c=8
b = b*c = 4*8 = 32

3. d %= a + 3; // Valor final de d = 0
d = d % (a+3) = 10 % (2+3) = 10%5 = 0

4. a += b += c += 5; // Valores finais de a, b e c:
c = c+5 = 5+5 = 10
b = b+c = 4+10 = 14
a = a+b = 2+14 = 16

