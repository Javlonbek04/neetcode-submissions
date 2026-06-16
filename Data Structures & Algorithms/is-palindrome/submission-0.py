class Solution:
    def isPalindrome(self, s: str) -> bool:
        a = ""
        for ch in s:
            if ch.isalnum(): a += ch
        a = a.lower()
        print(a)
        return a == a[::-1]
        