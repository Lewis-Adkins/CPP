# Set the style of the plot to histograms
set style data histogram

# Set the style of the boxes within the histogram
set style fill solid border rgb "black"

# Specify the width of the boxes
set boxwidth 0.8

# Set the x-axis label
set xlabel "Values"

# Set the y-axis label
set ylabel "Frequencies"

# Set the title of the plot
set title "Boltzmann Constant"

# Specify the range of y-axis
set yrange [0:*]

# Set the terminal type to PNG and output to a file
set terminal png
set output 'boltzmann.png'

# Plot the data from the file
plot 'data.txt' using 1:2:xtic(1) with boxes notitle