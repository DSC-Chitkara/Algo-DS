import java.util.LinkedList;
import java.util.Scanner;

public class Graph {
    int vertex;
    LinkedList<Integer> list[];

    public Graph(int vertex) {
        this.vertex = vertex;
        list = new LinkedList[vertex];
        for (int i = 0; i <vertex ; i++) {
            list[i] = new LinkedList<>();
        }
    }

    public void addEdge(int source, int destination){

        //add edge
        list[source].addFirst(destination);

        //add back edge ((for undirected)
        list[destination].addFirst(source);
    }

    public void printGraph(){
        for (int i = 0; i <vertex ; i++) {
            if(list[i].size()>0) {
                System.out.print("Vertex " + i + " is connected to: ");
                for (int j = 0; j < list[i].size(); j++) {
                    System.out.print(list[i].get(j) + " ");
                }
                System.out.println();
            }
        }
    }

    public static void main(String[] args) {
    	Scanner s = new Scanner(System.in);
    	System.out.println("Enter the number of vertices");
    	int v = s.nextInt();
    	System.out.println("Enter the number of edges required in the graph");
    	int e = s.nextInt();
        Graph graph = new Graph(v);
        for(int i = 0;i<e;i++){
        	System.out.println("Enter the source and destination vertices");
        	int src = s.nextInt();
        	int dest = s.nextInt();
        	graph.addEdge(src,dest);
        }
        graph.printGraph();

    }
}