# 1002
# 터렛
# https://www.acmicpc.net/problem/1002


def swap(a, b):
    tmp = a
    a = b
    b = tmp


t = int(input())

for _ in range(t):
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    dx = x1 - x2
    dy = y1 - y2

    if r1 > r2:
        swap(r1, r2)

    add = r1 + r2
    add *= add
    sub = r2 - r1
    sub *= sub
    d = dx ** 2 + dy ** 2

    if (d < add) and (d > sub):
        print("2")
    elif (d == add) or ((d == sub) and (d != 0)):
        print("1")
    elif (d < sub) or (d > add):
        print("0")
    elif d == 0:
        if r1 == r2:
            print("-1")
        else:
            print("0")