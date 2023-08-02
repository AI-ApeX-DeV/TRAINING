import numpy as np
from sklearn.linear_model import LinearRegression

# Sample data for demonstration purposes
# Replace X and y with your own dataset
X = np.array([[1, 2], [2, 3], [3, 4], [4, 5], [5, 6]])
y = np.array([3, 4, 2, 5, 6])

# Create the linear regression model
model = LinearRegression()

# Fit the model with the data
model.fit(X, y)

# Coefficients and intercept
coefficients = model.coef_
intercept = model.intercept_

print("Coefficients:", coefficients)
print("Intercept:", intercept)

# Predict using the model
# Replace new_X with your own new data for prediction
new_X = np.array([[6, 7], [8, 9]])
predictions = model.predict(new_X)

print("Predictions:", predictions)
