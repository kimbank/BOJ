// 1002
// 터렛
// https://www.acmicpc.net/problem/1002



#include <stdio.h>
typedef long long ll;

void swap(ll* a, ll* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
  int t;
  scanf("%d", &t);

  while(t--)
  { 
    ll x1, y1, r1, x2, y2, r2;
    scanf("%lld %lld %lld %lld %lld %lld", &x1, &y1, &r1, &x2, &y2, &r2);
    ll dx = x1 - x2; 
    ll dy = y1 - y2;

    if (r1 > r2) swap(&r1, &r2);

    ll add = r1 + r2;
    add = add * add;
    ll sub = r2 - r1;
    sub = sub * sub;
    ll d = dx * dx + dy * dy;

    if (d < add && d > sub) printf("2\n");
    else if (d == add || (d == sub && d != 0) ) printf("1\n"); 
    else if (d < sub || d > add) printf("0\n");
    else if (d == 0)
    { 
      if (r1 == r2) printf("-1\n"); 
      else printf("0\n");
    } 
  }

  return 0;
}