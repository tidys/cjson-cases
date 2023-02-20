#include <iostream>
#include "cJSON.h"
using namespace std;
int main(_In_ int argc, _In_reads_(argc) _Pre_z_ char** argv, _In_z_ char** envp){
    string jsonString = "{\"test-string\":\"abc\",\"test-number\":99}";
    cJSON* jsonObject= cJSON_Parse(jsonString.c_str());
    cJSON* testNumberObj = cJSON_GetObjectItemCaseSensitive(jsonObject, "test-number");
    if (cJSON_IsNumber(testNumberObj))
    {
        cout << testNumberObj->valuedouble << endl;
    }
    return 0;
}