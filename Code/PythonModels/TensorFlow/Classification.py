import tensorflow as tf
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from sklearn.preprocessing import LabelEncoder
from tensorflow.keras.utils import to_categorical

df = pd.read_csv('Banner_Data.csv')

df['category_sales'] = pd.cut(df['sales'], bins=3, labels=['Low', 'Medium', 'High'])
df_encoded = pd.get_dummies(df, columns=['banner', 'five_star', 'four_star1', 'four_star2', 'four_star3'])

le = LabelEncoder()
y_encoded = le.fit_transform(df_encoded['category_sales'])
y_categorical = to_categorical(y_encoded)

X = df_encoded.drop(['sales', 'category_sales'], axis=1).values
X_train, X_test, y_train, y_test = train_test_split(X, y_categorical, test_size=0.2, random_state=0)

# TensorFlow model for classification
model = Sequential([
    Dense(10, activation='relu', input_shape=(X_train.shape[1],)),
    Dense(10, activation='relu'),
    Dense(y_categorical.shape[1], activation='softmax')
])

model.compile(optimizer='adam', loss='categorical_crossentropy', metrics=['accuracy'])
model.fit(X_train, y_train, epochs=100, batch_size=10, verbose=1)

# Evaluate the model
loss, accuracy = model.evaluate(X_test, y_test)
print('Accuracy:', accuracy)
