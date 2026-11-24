#include "case.h"
struct rec { int id; short kind; unsigned char flags; long weight; struct rec *next; };
struct pair { int a, b; };
T long rec_score(const struct rec *r) { long s = 0; for (; r; r = r->next) s += r->id * r->kind + (r->flags & 3) * r->weight; return s; }
T void rec_init(struct rec *r, int id) { r->id = id; r->kind = -id; r->flags = id & 0xff; r->weight = (long)id << 33; r->next = 0; }
T struct pair pair_swap(struct pair p) { struct pair q = { p.b, p.a + p.b }; return q; }
T int pair_sum(struct pair *ps, int n) { int s = 0; for (int i = 0; i < n; i++) s += ps[i].a - ps[i].b; return s; }
int main(void) {
  struct rec r[3]; rec_init(&r[0], 3); rec_init(&r[1], 260); rec_init(&r[2], -9);
  r[0].next = &r[1]; r[1].next = &r[2];
  P("%d %d %u %ld", r[1].id, r[1].kind, r[1].flags, r[1].weight);
  P("%ld", rec_score(r)); P("%ld", rec_score(0));
  struct pair p = {7, -2}; struct pair q = pair_swap(p); P("%d %d", q.a, q.b);
  struct pair ps[3] = {{1, 2}, {30, 4}, {-5, 6}}; P("%d", pair_sum(ps, 3));
  return 0;
}
