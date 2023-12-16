
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score

df = pd.read_csv('Banner_Data.csv')

# For simplicity, let's create a mock categorical target
df['category_sales'] = pd.cut(df['sales'], bins=3, labels=['Low', 'Medium', 'High'])

# Encoding the categorical target
df_encoded['category_sales'] = df['category_sales']

# Features and target
X = df_encoded.drop(['sales', 'category_sales'], axis=1)
y = df_encoded['category_sales']

# Splitting the dataset
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=0)

# Create and train the model
classifier = RandomForestClassifier()
classifier.fit(X_train, y_train)

# Predict and evaluate the model
y_pred = classifier.predict(X_test)
print('Accuracy:', accuracy_score(y_test, y_pred))
