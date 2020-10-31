# -*- coding: utf-8 -*-
"""
Created on Sat Oct 31 15:54:16 2020

@author: Shubham
"""

arr = list(map(int,input().split()))
mini = min(arr)
for i in range(len(arr)):
    s=""
    if arr[i] < 0:
        s+=' '*abs(mini-arr[i])
        s+='*'*(abs(arr[i])+1)
    else:
        s+=' '*abs(mini)
        s+='*'*(abs(arr[i])+1)
    print(s,end='\n')