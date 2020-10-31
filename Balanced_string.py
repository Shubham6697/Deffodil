# -*- coding: utf-8 -*-
"""
Created on Sat Oct 31 13:34:21 2020

@author: Shubham
"""
def balanced_string(string):
    stack = []
    for i in range(len(string)):
        if string[i] == '[' or string[i] == '{' or string[i] == '(' :
            stack.append(string[i])
        else:
            if len(stack) != 0:
                if stack[-1] == '(' and string[i] == ')' :
                    stack.pop()
                elif stack[-1] == '[' and string[i] == ']' :
                    stack.pop()
                elif stack[-1] == '{' and string[i] == '}' :
                    stack.pop()
                else :
                    return False
            else :
                return False
    if len(stack) == 0:
        return True
    return False
            
        
        
string = input()
if balanced_string(string):
    print("YES")
else:
    print("NO")