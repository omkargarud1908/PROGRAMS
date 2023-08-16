import pandas as pd

# Read the CSV file into a DataFrame
df = pd.read_csv('sports.csv')

print(df.columns)  # Print the column names

# Perform label encoding on the 'game' column
df['game'] = df['game'].replace(['football', 'cricket'], [0, 1])

# Save the modified DataFrame to a new CSV file
df.to_csv('new1.csv', index=False)
