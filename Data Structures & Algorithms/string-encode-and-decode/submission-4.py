class Solution:

    def encode(self, strs: List[str]) -> str:
        if len(strs) == 1: return strs[0] + '/'
        return "/".join(strs)

    def decode(self, s: str) -> List[str]:
        if len(s) != 0 and s[len(s) - 1] == '/': return s.split('/')[:1]
        return [] if s == '' else s.split('/')
