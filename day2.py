import csv

# Part 1

sum = 0
with open('input.csv', 'r') as csvfile:
    spamreader = csv.reader(csvfile, delimiter = '\t')
    for row in spamreader:
        row = [int(x) for x in row]
        sum += max(row) - min(row)
print("Part 1:", sum)

# Part 2

sum = 0
with open('input.csv', 'r') as csvfile:
    spamreader = csv.reader(csvfile, delimiter = '\t')
    for row in spamreader:
        row = [int(x) for x in row]
        for i in row:
            for x
