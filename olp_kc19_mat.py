k, n, i, j, s = [int(x) for x in input().strip().split()]

matrixs = []
for _ in range(k):
    mtx = []
    for row_id in range(n):
        row = [int(x) for x in input().strip().split()]
        mtx.append(row)
    matrixs.append(mtx)

row = matrixs[0][i-1]

for mtx_id in range(1, k):
    res = [0 for _ in range(n)]
    for x in range(n):
        for y in range(n):
            res[x] += row[y]*matrixs[mtx_id][y][x]
            res[x] %= s
    row = res

print(row[j-1])