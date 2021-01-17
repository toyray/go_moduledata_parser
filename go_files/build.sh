#!/bin/bash
GOOS=windows GOARCH=amd64 go build -ldflags="-s -w" -o "$1win64s.exe"
GOOS=windows GOARCH=amd64 go build -o "$1win64.exe"
GOOS=windows GOARCH=386 go build -ldflags="-s -w" -o "$1win32s.exe"
GOOS=windows GOARCH=386 go build -o "$1win32.exe"
GOOS=linux GOARCH=amd64 go build -ldflags="-s -w" -o "$1lnx64s"
GOOS=linux GOARCH=amd64 go build -o "$1lnx64"
GOOS=linux GOARCH=386 go build -ldflags="-s -w" -o "$1lnx32s"
GOOS=linux GOARCH=386 go build -o "$1lnx32"

