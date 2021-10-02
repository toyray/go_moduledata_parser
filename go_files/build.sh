#!/bin/bash
GO111MODULE=auto GOOS=windows GOARCH=amd64 go build -ldflags="-s -w" -o "$1win64s.exe"
GO111MODULE=auto GOOS=windows GOARCH=amd64 go build -o "$1win64.exe"
GO111MODULE=auto GOOS=windows GOARCH=386 go build -ldflags="-s -w" -o "$1win32s.exe"
GO111MODULE=auto GOOS=windows GOARCH=386 go build -o "$1win32.exe"
GO111MODULE=auto GOOS=linux GOARCH=amd64 go build -ldflags="-s -w" -o "$1lnx64s"
GO111MODULE=auto GOOS=linux GOARCH=amd64 go build -o "$1lnx64"
GO111MODULE=auto GOOS=linux GOARCH=386 go build -ldflags="-s -w" -o "$1lnx32s"
GO111MODULE=auto GOOS=linux GOARCH=386 go build -o "$1lnx32"

