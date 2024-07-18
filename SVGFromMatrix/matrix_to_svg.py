import svgwrite
def matrix_to_svg(matrix, filename, padding = 0, cell_size=1):
    rows, cols = matrix.shape
    dwg = svgwrite.Drawing(filename, profile='tiny', 
                           size = (cols * cell_size + 2 * padding, rows * cell_size + 2 * padding))
    min_val = np.min(matrix)
    max_val = np.max(matrix)
    color_scale = lambda val: svgwrite.utils.rgb(int(255 * (val - min_val) / (max_val - min_val)),
                                                 int(255 * (val - min_val) / (max_val - min_val)),
                                                 int(255 * (val - min_val) / (max_val - min_val)))
    for i in range(rows):
        for j in range(cols):
            color = color_scale(matrix[i, j])
            dwg.add(dwg.rect(insert=(j * cell_size + padding, i * cell_size + padding),
                             size=(cell_size, cell_size),
                             fill=color))
    dwg.save()