import java.util.*;

class Solution {
    public int[] solution(int[] progresses, int[] speeds) {
        List<Integer> list = new ArrayList<>();
        Queue<Integer> queue = new LinkedList<>();
        
        for(int i=0; i<progresses.length;i++){
            int remain = 100-progresses[i];
            int dayNeed = (int) Math.ceil(remain/(double)speeds[i]);
            queue.offer(dayNeed);
        }
        
        while(!queue.isEmpty()){
            int release = queue.poll();
            int count = 1;
            while(!queue.isEmpty()&&queue.peek()<=release){
                queue.poll();
                count++;
            }
            list.add(count);
        }
        
        int[] answer = new int[list.size()];
        for(int i=0;i<list.size();i++){
            answer[i]=list.get(i);
        }
        return answer;
    }
}