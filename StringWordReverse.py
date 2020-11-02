# -*- coding: utf-8 -*-
"""
Created on Mon Nov  2 09:36:41 2020

@author: Shubham
"""

s = input()
li = s.split()
for i in range(len(li)-1,-1,-1):
    print(li[i],end=" ")