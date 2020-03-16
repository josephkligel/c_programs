int main(int argc, char const *argv[]) {
  char a;
  short b;
  int c;
  long d;
  float e;
  double f;

  printf("An char variable occupies %lu bytes of storage\n", sizeof(a));
  printf("An short variable occupies %lu bytes of storage\n", sizeof(b));
  printf("An int variable occupies %lu bytes of storage\n", sizeof(c));
  printf("An long variable occupies %lu bytes of storage\n", sizeof(d));
  printf("An float variable occupies %lu bytes of storage\n", sizeof(e));
  printf("An double variable occupies %lu bytes of storage\n", sizeof(f));

  return 0;
}
