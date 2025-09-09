#include "labelInformation.h"

LabelInformation::LabelInformation(){
    calories =0;
    numIngredients = 0;
}
LabelInformation::LabelInformation(string* ing, int cal, int num){
    calories = cal;
    numIngredients = num;
    for(int i = 0; i < numIngredients; i++){
        ingredients[i] = ing[i];
    }
}
LabelInformation::LabelInformation(const LabelInformation& rhs){
    calories = rhs.calories;
    numIngredients = rhs.numIngredients;
    for(int i = 0; i < numIngredients; i++){
        ingredients[i] = rhs.ingredients[i];
    }
}

string* LabelInformation::getIngredients(){
    string temp[numIngredients];
    for(int i = 0; i < numIngredients; i++){
        temp[i] = ingredients[i];
    }
    return temp;
}
int LabelInformation::getCalories(){
    return calories;
}
int LabelInformation::getNumIngredients(){
    return numIngredients;
}

void addIngredient(string newIngredient){
    ingredients[numIngredients] = newIngredient;
    numIngredients++;
}
void LabelInformation::setCalories(int cal){
    calories = cal;
}