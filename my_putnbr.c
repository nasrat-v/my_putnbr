
#include <unistd.h>

void my_putchar(char c) {
  write(1, &c, 1);
}

void my_putnbr(int nb) {
  (nb >= 0) ?: (my_putchar('-'), nb = -nb);
  (nb < 10) ?: my_putnbr(nb / 10);
  my_putchar((nb % 10) + '0');
}

int main() {
  my_putnbr(-1234);
  my_putchar('\n');
  my_putnbr(1234);
  return (0);
}
