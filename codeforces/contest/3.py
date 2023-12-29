import math

def is_perfect_square(num):
    sqrt_num = int(math.sqrt(num))
    return sqrt_num * sqrt_num == num

def solve():
    n = int(input())
    s = 0
    for i in range(n):
        num = int(input())
        s += num

    if is_perfect_square(s):
        print("YES")
    else:
        print("NO")

def main():
    t = 1
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
