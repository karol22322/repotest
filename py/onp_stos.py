#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    stos = []  # stos jako lista
    onp = input("Podaj wyrażenie ONP odzielając każdy element spacją:\n")
    onp = onp.split(" ")

    for element in onp:
        if element.isdigit():
            stos.append(element)
        else:
            a = stos.pop()
            b = stos.pop()
            stos.append(str(eval(b + element + a)))

    print("Wynik", stos.pop())

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
