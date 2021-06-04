#include<iostream>
#include<vector>
#include<utility>
#include<queue>
using namespace std;

#define V 8
#define pub push_back

vector<pair<int, int>> height(vector<int> graph[V], int start){
	bool visited[V] = {false};
	int height[V] = {0};

	queue<int> q;
	q.push(start);
	
	while(!q.empty()){
		int current = q.front();
		q.pop();

		for(int child : graph[current]){

			if(visited[child]) continue;
			visited[child] = true;
			q.push(child);
			height[child] = height[current] + 1;
		}
	}


	for(int i = 0; i < V; i++){
		cout << i << " " << height[i] << endl;
	}

}


int main(){
	vector<int> graph[V];

	graph[0].pub(1);
	graph[0].pub(2);
	graph[1].pub(3);
	graph[1].pub(4);
	graph[1].pub(5);
	graph[2].pub(6);
	graph[6].pub(7);

	vector<pair<int, int>> result;
	result = height(graph, 0);

	for(int i = 0; i < V; i++){
		//cout << result[i].first << " " << result[i].second << endl;
	}
}