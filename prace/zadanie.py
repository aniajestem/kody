#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    i=2
    n = int(input("podaj liczbe"))
    while i * i <=0:
        if n % i == 0:
            print("Liczba jest złożona")
            return 0
        i = i+1
    print("Liczba jest pierwsza")
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
