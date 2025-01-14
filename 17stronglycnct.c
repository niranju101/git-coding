
		

	#include <stdio.h>
	#include <stdlib.h>

	#define MAX_DEGREE 5
	#define MAX_NUM_VERTICES 20

	// Structure to represent a vertex
	struct vertices_s {
	    int visited;
	    int deg;
	    int adj[MAX_DEGREE];
	} vertices[] = {
	    {0, 3, {1, 2, 3}},
	    {0, 2, {0, 2}},
	    {0, 3, {1, 4, 3}},
	    {0, 3, {0, 5, 3}},
	    {0, 3, {2, 3, 6}}
	};

	int num_vertices = sizeof(vertices) / sizeof(vertices[0]);

	// Structure for stack
	struct stack_s {
	    int top;
	    int items[MAX_NUM_VERTICES];
	} stack = {-1};

	// Push operation for the stack
	void stack_push(int v) {
	    stack.top++;
	    if (stack.top < MAX_NUM_VERTICES)
		stack.items[stack.top] = v;
	    else {
		printf("Stack is full!\n");
		exit(1);
	    }
	}

	// Pop operation for the stack
	int stack_pop() {
	    return stack.top < 0 ? -1 : stack.items[stack.top--];
	}

	// Depth First Search
	void dfs(int v, int transpose) {
	    int i, c, n;
	    vertices[v].visited = 1;
	    for (i = 0, c = vertices[v].deg; i < c; ++i) {
		n = vertices[v].adj[i] * transpose;
		if (n >= 0 && n < num_vertices) {
		    if (!vertices[n].visited)
		        dfs(n, transpose);
		}
	    }
	    if (transpose < 0)
		stack_push(v);
	}

	// Reset visited flag for all vertices
	void reset_visited() {
	    for (int i = 0; i < num_vertices; i++)
		vertices[i].visited = 0;
	}

	// First pass to determine the order of vertices
	void order_pass() {
	    for (int i = 0; i < num_vertices; ++i) {
		if (!vertices[i].visited)
		    dfs(i, -1);
	    }
	}

	// Second pass to find Strongly Connected Components (SCC)
	void scc_pass() {
	    int v;
	    while ((v = stack_pop()) != -1) {
		if (!vertices[v].visited) {
		    printf("Strongly Connected Component: ");
		    dfs(v, 1);
		    printf("\n");
		}
	    }
	}

	int main(void) {
	    order_pass();
	    reset_visited();
	    scc_pass();
	    return 0;
	}

	stronglyconnected16.c
	Displaying kruskals15.c.
