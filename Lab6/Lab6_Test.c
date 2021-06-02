#include "Lab6.h"
#include <assert.h>

void testcheckEndInput() {
    assert(!checkEndInput("QWE"));
    assert(checkEndInput("end"));
    assert(checkEndInput("EnD"));
    assert(!checkEndInput("89456132"));

    printf("checkEndInput test complited.\n");
}

void testgetWord() {
    char *testLine = NULL;
    
    testLine = getWord();
    assert(strcmp(testLine, "my word"));
    free(testLine);
    
    testLine = getWord();
    assert(strcmp(testLine, "Say my name"));
    free(testLine);

    printf("getWord test complited\n");
}

void testfillTree() {
    Node *testTree = newNode("asd");
    Node *current = testTree;
    if (!testTree) return;

    fillTree(testTree);

    assert(strcmp(current->word, "klop"));
    current = current->left;
    assert(!strcmp(current->word, "doom"));
    current = current->left;
    assert(strcmp(current->word, "aboba"));
    current = testTree->left->right;
    assert(strcmp(current->word, "hi"));
    current = testTree->right;
    assert(strcmp(current->word, "onion"));
    current = testTree->right;
    assert(strcmp(current->word, "topor"));
    current = testTree->right->left;
    assert(strcmp(current->word, "mork"));

    printf("fillTree test complited\n");
}



#undef main

int main() {
    testcheckEndInput();

    return 0;
}