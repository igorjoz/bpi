output = open("bpi2011-9-out.html", "w")

# 0 means no student (free space); number greater than 0 means student's index
students = [
    [1, 2, 3],
    [4, 0, 6],
    [7, 8, 9],
    [10, 0, 0],
    [13, 14, 15],
    [16, 17, 18],
    [0, 0, 0],
    [22, 23, 0],
    [25, 26, 27],
]

for row in students:
    htmlCode = "<div class=\"row\" style=\"display: flex;\">\n"
    for studentIndex in row:
        if studentIndex > 0:
            htmlCode += "<div style=\"color: green; padding: 0 2px;\">"
            htmlCode += str(studentIndex)
            htmlCode += "</div>\n"
        else:
            htmlCode += "<div style=\"color: red; padding: 0 2px;\">Wolne</div>\n"
    htmlCode += "</div>\n\n"
    htmlCode += "<br>\n\n"
    print(htmlCode)
    output.write(htmlCode)
