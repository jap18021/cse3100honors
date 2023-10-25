import pandas as pd
from micromlgen import port
from sklearn.ensemble import RandomForestClassifier # Import Decision Tree Classifier
from sklearn.model_selection import train_test_split # Import train_test_split function
from sklearn import metrics #Import scikit-learn metrics module for accuracy calculation
df = pd.read_csv("draft_picks.csv")
df = df[df["position"] == "QB"]
df = df[["hof", "probowls", "seasons_started", "pass_yards", "pass_tds"]]
df.dropna(inplace=True)
print(len(df))
feature_cols = ["probowls", "seasons_started", "pass_yards", "pass_tds"]
X = df[feature_cols]
Y = df.hof
X_train, X_test, y_train, y_test = train_test_split(X, Y, test_size=0.3, random_state=1) # 70% training and 30% test
# Create Decision Tree classifer object
clf = RandomForestClassifier()

# Train Decision Tree Classifer
clf = clf.fit(X_train,y_train)
with open("classifier.h", "w") as file:
    file.write(port(clf))
#Predict the response for test dataset
y_pred = clf.predict(X_test)
print("Accuracy:",metrics.accuracy_score(y_test, y_pred))