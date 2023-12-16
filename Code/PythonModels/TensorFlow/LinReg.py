import tensorflow as tf
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from sklearn.model_selection import train_test_split
import pandas as pd

df = pd.read_csv('Banner_Data.csv')

X = df_encoded.drop('sales', axis=1).values
y = df_encoded['sales'].values

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)

# TensorFlow model for linear regression
model = Sequential()
model.add(Dense(1, input_dim=X_train.shape[1]))

model.compile(optimizer='adam', loss='mean_squared_error')
model.fit(X_train, y_train, epochs=100, batch_size=10, verbose=1)

# Evaluate the model
mse = model.evaluate(X_test, y_test)
print('Mean Squared Error:', mse)
