from sklearn.datasets import load_iris
from sklearn.preprocessing import MinMaxScaler
import pandas as pd

# Load the iris dataset
data = load_iris()
X = data.data  # Features

# Create a DataFrame from the features
df = pd.DataFrame(X, columns=data.feature_names)

# Initialize the MinMaxScaler
scaler = MinMaxScaler()

# Rescale the data between 0 and 1
scaled_data = scaler.fit_transform(df)

# Create a new DataFrame with scaled data
scaled_df = pd.DataFrame(scaled_data, columns=df.columns)

print("Original Data:")
print(df.head())
print("\nScaled Data (between 0 and 1):")
print(scaled_df.head())
