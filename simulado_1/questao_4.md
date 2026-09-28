i = 2, j = 3, k = 0, x = 2.5, y = 5.0
1: verdadeiro, 0: falso

a) i < j + 2 => Resultado: 1
2 < 3 + 2
2 < 5 -> Verdadeiro

b) 2 * i - 5 <= j - 4 => Resultado: 1 
2 * 2 - 5 <= 3 - 4
4-5 <= 3-4
-1 <= -1 -> Verdadeiro

c) !k && (x + y >= 7.5) => Resultado: 1 
!0 && (2.5+5.0 >= 7.5)
1 && 1 (verdadeiro) -> Verdadeiro

d) !(i == j) || (y / x == 2.0) => Resultado: 1
!(2 == 3) || (5.0/2.5 == 2.0)
!(falso) || (verdadeiro)
verdadeiro || verdadeiro -> verdadeiro

e) i == 2 && j == 4 || k == 0 => Resultado: 1
i == 2 && j == 4 -> Verdadeiro E Falso = Falso
Falso || k == 0 
Falso || Verdadeiro -> Verdadeiro