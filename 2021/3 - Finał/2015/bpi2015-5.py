p1 = True
p2 = False
p3 = False
p4 = True
p5 = True

print(
    p1 and (not (p2 and not p3)) and (not ((not p3 and p4) and (p4 and not p5)))
)
