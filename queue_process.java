import java.util.*;

class Solution {
    public class Process{
        int priority;
        int index;
        
        public Process(int priority, int index){
            this.priority = priority;
            this.index = index;
        }
        
    }
    public int solution(int[] priorities, int location) {
        PriorityQueue<Integer> pQ = new PriorityQueue<>(Collections.reverseOrder());
        Queue<Process> queue = new LinkedList<>();
        int order=0;
        
        for(int i=0;i<priorities.length;i++){
            queue.offer(new Process(priorities[i], i));
            pQ.offer(priorities[i]);
        } // 배열을 우선순위 큐에 넣음
        
        while(!queue.isEmpty()){
            Process current = queue.poll(); // 현재 큐 꺼내기
            if(current.priority == pQ.peek()){ // 현재랑 우선순위비교
                order++; // 순서 진행
                pQ.poll(); // 진행한 우선순위 빼기
                if(current.index == location){ //index랑 찾는것까지 같으면 order 반환
                    return order;
                }
            } else {
                queue.offer(current);
            }
        }
        
        return -1;
    }
}
