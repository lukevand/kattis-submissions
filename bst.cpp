#include <bits/stdc++.h>
using namespace std;

class bst {
    public:
    int total;
    struct node {
        int data;
        node *left;
        node *right;
    };
    node *root;

    node* insert_r(int x, node *t, int depth) {
        if (t == NULL) {
            total += depth;
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        } else if (x < t->data) {
            t->left = insert_r(x, t->left, depth+1);
        } else if (x > t->data) {
            t->right = insert_r(x, t->right, depth+1);
        }
        return t;
    }

    void insert(int x) {
        root = insert_r(x, root, 0);
    }

    bst() { 
        root = NULL;
        total = 0;
    }

};


int main() {
    int N, x;
    scanf("%d", &N);
    /* bst b; */
    set<int> b;
    while (N--) {
        scanf("%d", &x);
        auto pp = b.insert(x).first;
        printf("%d\n", *pp);
    }
	return 0;
}

