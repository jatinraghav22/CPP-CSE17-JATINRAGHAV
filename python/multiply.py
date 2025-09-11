matrix_1=[[1,0,0],[0,1,0],[0,0,1]]
matrix_2=[[1,0,0],[0,1,0],[0,0,1]]
result = [[0, 0, 0], [0, 0, 0],[0, 0, 0]]
for i in range(3):
    for j in range(3):     
        result[i][j] = (matrix_1[i][0] * matrix_2[0][j] +
                        matrix_1[i][1] * matrix_2[1][j] +
                        matrix_1[i][2] * matrix_2[2][j])
for row in result:
    print(row)
