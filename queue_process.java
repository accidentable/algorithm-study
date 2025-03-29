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
        } // �迭�� �켱���� ť�� ����
        
        while(!queue.isEmpty()){
            Process current = queue.poll(); // ���� ť ������
            if(current.priority == pQ.peek()){ // ����� �켱������
                order++; // ���� ����
                pQ.poll(); // ������ �켱���� ����
                if(current.index == location){ //index�� ã�°ͱ��� ������ order ��ȯ
                    return order;
                }
            } else {
                queue.offer(current);
            }
        }
        
        return -1;
    }
}
