import os
import json
import sys

from go_moduledata import Parser

def main():
    if len(sys.argv) != 2:
        print("Usage: parser.py GOLANG_BINARY\n")
        print("Please specify Golang binary as arg.\n")
        exit()

    filename = sys.argv[1]

    if not os.path.isfile(filename):
        print("Specified file does not exist.")
        exit()

    p = Parser(filename)
    if p.parse():
        print(json.dumps(p.output(), indent=4))

if __name__ == '__main__':
    main()
