#!/etc/bin/env python3
colours = ["red", "green", "yellow", "blue"]
things = ["house", "car", "tree"]
result = [(i, j) for i in colours for j in things]
print(result)
