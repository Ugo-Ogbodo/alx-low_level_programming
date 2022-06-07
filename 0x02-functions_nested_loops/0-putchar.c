#include"main.h"

/**
 * main - Entry point
 *
 * Aim: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char boy[] = "_putchar";
  int re;

  for (re = 0; re < 8; ++re)
    _putchar(boy[re]);
  _putchar('\n');

  return (0);
}
