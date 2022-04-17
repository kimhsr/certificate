#include <stdio.h>
struct jsu {
  char nae[12];
  int os, db, hab, hhab;

};

int main() {
  struct jsu st[3] = { {"데이터1", 95, 88}, {"데이터2", 84, 91}, {"데이터3", 86, 75} };
  struct jsu* p;
  p = &st[0];
  (p + 1)->hab = (p + 1)->os + (p + 2)->db;
  // p->hab = p->os + (p+1)->db;
  (p + 1)->hhab = (p + 1)->hab + p->os + p->db;
  // p->hhab = p->hab + (p - 1)->os + (p - 1)->db;
  printf("%d", (p + 1)->hab + (p + 1)->hhab);
  // printf("%d", p->hab + p->hhab);
}
