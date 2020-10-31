# -*- coding: utf-8 -*-
"""
Created on Sat Oct 31 09:58:20 2020

@author: Shubham
"""
str1 = input()
str2=""
vowels=['a','e','i','o','u','A','E','I','O','U']
for ch in str1:
    if ch in vowels:
        str2+=ch*2
    else:
        str2+=ch
print(str2)