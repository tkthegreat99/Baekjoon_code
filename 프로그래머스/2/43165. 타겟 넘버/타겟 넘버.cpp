#include <string>
#include <vector>

using namespace std;

int answer;

void dfs(vector<int> numbers, int target, int sum, int index)
{
    if(index == numbers.size())
    {
        if(sum == target) answer++;
        return;
    }
    dfs(numbers, target, sum + numbers[index], index+1);
    dfs(numbers, target, sum - numbers[index], index+1);
}


int solution(vector<int> numbers, int target) {
    
    dfs(numbers, target, 0, 0);
    
    
    
    return answer;
}
