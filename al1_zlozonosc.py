#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    a=0
    while a < 1 or a > 99: # poprawny zakres a
        a = input ("podaj liczbe: ")
        # for i in range(2,101,2):
        #     if a == i:
        #         print ("Liczba jest parzysta")
        #         return 0
        # print ("Liczba jest nieparzysta")
        # return 0
    i=2
    while i<100:
        if a == i:
            print ("Parzysta")
            return 0
        i = i  + 2 #powieksza i o 2
        print ("Nieparzysta")
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
