// don't include any libraries to keep program small

// compiler warning for the static string but not for the global string? 
static char *staticString = "Static String";
char *globalString = "Global String";
char uninitializedString[50];

int main(void) {

    char *localString = "Local String";
    char localUninitString[50];

    return 0;

}