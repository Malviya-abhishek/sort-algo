import requests
import ast


url = "https://leetcode.com/problems/dungeon-game/"

r = requests.get(url = url)
byte_str = r.content
dict_str = byte_str.decode("UTF-8")
data = ast.literal_eval(dict_str)
print(repr(data))



