import pandas as pd
flights = pd.read_csv('flights.csv')
flights=flights.dropna(axis=1,how='any')
flights.to_csv('new.csv')
