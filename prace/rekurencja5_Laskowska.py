#!/usr/bin/env python
# -*- coding: utf-8 -*-


def ciag(a):
    if a == 0:
        return 0
    return ciag (a - 1) + 1 + (a - 1) * 2


def main(args):
    a = int(input("podaj wyraz ciągu: "))
    print (ciag(a))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
