# Set seed for reproducibility
set.seed(123)

# Set variables for stock and price
stock <- 50
price <- 50

# Loop variable counts the number of loops
loop <- 1

# Set the while statement
while (price > 45) {
    # Create a random price between 40 and 60
    price <- stock + sample(-10:10, 1)

    # Count the number of loops
    loop <- loop + 1

    # Print the number of loops
    print(loop)
}

# Output after the loop
cat('It took', loop, 'loops before we short the price. The lowest price is', price)
