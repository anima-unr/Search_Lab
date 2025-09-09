#ifndef LABELINFORMATION_H
#define LABELINFORMATION_H

using namespace std;
class LabelInformation{
    string ingredients[50];
    int calories, numIngredients;

    public:
        LabelInformation();
        LabelInformation(string* ing, int cal, int num);
        LabelInformation(const LabelInformation& rhs);

        string* getIngredients();
        int getCalories();
        int getNumIngredients();

        void addIngredient(string newIngredient);
        void setCalories(int cal);
};
#endif