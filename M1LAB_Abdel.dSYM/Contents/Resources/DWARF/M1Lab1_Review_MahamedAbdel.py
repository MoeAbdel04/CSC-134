# Calculating taxes when filing single
# 01/25/2024
# CSC121 M1Lab1– Review
# Mahamed Abdel
# Function to calculate the marginal tax rate
def calculate_marginal_tax_rate(income, status):
    if status != 'single':
        return None
    if income <= 9875:
        return 10
    elif income <= 40125:
        return 12
    elif income <= 85525:
        return 22
    elif income <= 163300:
        return 24
    elif income <= 207350:
        return 32
    elif income <= 518400:
        return 35
    else:
        return 37
# Function to calculate the effective tax rate
    def calculate_effective_tax_rate(income, tax):
        return (tax / income) * 100
# Function to calculate the tax based on the income
def calculate_tax(income, status):
    if status != 'single':
        return None
    if income <= 9875:
        tax = 0.10 * income
    elif income <= 40125:
        tax = 987.5 + 0.12 * (income - 9875)
    elif income <= 85525:
        tax = 4617.5 + 0.22 * (income - 40125)
    elif income <= 163300:
        tax = 14605.5 + 0.24 * (income - 85525)
    elif income <= 207350:
        tax = 33271.5 + 0.32 * (income - 163300)
    elif income <= 518400:
        tax = 47367.5 + 0.35 * (income - 207350)
    else:
        tax = 156235 + 0.37 * (income - 518400)
    return tax
# Display a welcome message
    print("Welcome to the Income Tax Calculator!")
# Set flag variable to control program flow
    running = True
# Continue loop as long as running is True
    while running:
    # Prompt the user to enter their status
        status = input("Enter your status (single, married, divorced, etc...): ")
    # Check if the status is 'single'
    if status.lower() != 'single':
        print("This program is designed to calculate tax for singles only!!!")
        # Prompt the user to enter their status again or stop
        again = input("Enter 'stop' to terminate or any other key to enter status again: ")
        if again.lower() == "stop":
            running = False
    else:
        # Prompt the user to enter their income
        income = float(input("Enter your income: "))
        # Calculate the tax based on the income and status
        tax = calculate_tax(income, status)
        # Check if the tax calculation is valid for the status
        if tax is None:
            print("Invalid status. Please enter 'single' or 'stop' to terminate.")
            # Prompt the user to enter their status again or stop
            again = input("Enter 'stop' to terminate or any other key to enter status again: ")
            if again.lower() == "stop":
                running = False
        else:
# Calculate the marginal tax rate
            marginal_tax_rate = calculate_marginal_tax_rate(income, status)
            # Calculate the effective tax rate
            effective_tax_rate = calculate_effective_tax_rate(income, tax)
            # Display the results
            print("Income: $", income)
            print("Income Tax: $", tax)
            print("Marginal Tax Rate: ", marginal_tax_rate, "%")
            print("Effective Tax Rate: ", effective_tax_rate, "%")
            # Prompt the user to run the program again or stop
            again = input("Enter 'stop' to terminate or any other key to calculate again: ")
            # Set running to False if the user wants to stop
            if again.lower() == "stop":
                running = False
# End of the program
print("Thank you for trying our application!")