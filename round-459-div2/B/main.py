#! /usr/bin/python3
# encoding: utf-8

line1 = str(input())
line1 = line1.split()

n = int(line1[0])
m = int(line1[1])

d = {}

for i in range(n):
    line = str(input())
    line = line.split(' ')
    d[line[1]] = line[0]

for i in range(m):
    line_str = str(input())
    line_list = line_str.split(' ')
    print(line_str + ' #%s' %(d[line_list[1].rstrip(';')]))
