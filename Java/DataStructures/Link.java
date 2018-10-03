import java.util.*;

class Node {
  public int data;
  public Node next;

  public Node(int data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  public Node head;
  public LinkedList() {
    this.head = null;
  }

/*Method to check whether the list is empty*/
  public void isEmpty() {
    if (head == null) {
      System.out.println("Empty List");
    } else {
      System.out.println("Not Empty");
    }
  }

/*Method to insert node at the end of the linked list*/
  public void addNodeLast(int data) {
    Node newNode = new Node(data);
    if(head == null) {
      head = newNode;
    } else {
      Node temp;
      for(temp = head; temp.next != null; temp = temp.next);
      temp.next = newNode;
    }
  }

/*Method to insert node at the beginning of the linked list*/
  public void addNodeFirst(int data) {
    Node newNode = new Node(data);
    if(head == null) {
      head = newNode;
    } else {
      newNode.next = head;
      head = newNode;
    }
  }

/*Method to insert node at a given position*/
  public void addNodeAtPos(int data,int pos) {
    Node newNode = new Node(data);
    Node temp = head;
    Node prev = null;
    if(head == null) {
      head = newNode;
    } else {
    for(int i = 0; i < pos - 1; i++) {
      prev = temp;
      temp = temp.next;
      }
    newNode.next = prev.next;
    prev.next = newNode;
    }
  }

/*Method to print the linked list*/
  public void printList(){
    Node temp;
    if(head == null) {
      System.out.println("Empty List");
    } else {
    for(temp = head; temp != null; temp = temp.next) {
      System.out.println(temp.data);
      }
    }
  }

  /*Method to delete a node from last*/
  public void deleteLast() {
    Node temp = head;
    Node prev = null;
    if(head == null) {
      System.out.println("Empty List");
    } else {

      while(temp.next != null){
        prev = temp;
        temp = temp.next;
      }
      prev.next = null;
    }
  }

/*Method to delete a node from the beginning*/
  public void deleteFirst() {
    Node temp = head;
    if(head == null) {
      System.out.println("Empty List");
    } else {
      head = temp.next;
      temp.next = null;
    }
  }

/*Method to delete a node at a given position*/
  public void deleteAtPos(int pos) {
    Node temp = head;
    Node prev = null;
    if(head == null) {
      System.out.println("Empty List");
    } else {
      for(int i = 0; i < pos - 1; i++) {
        prev = temp;
        temp = temp.next;
      }
      prev.next = temp.next;
    }
  }

/*Method to check whether a given element is the last element of the given linked list*/
  public boolean isLastElement(int data) {
    Node temp = head;
      while(temp.next != null) {
        temp = temp.next;
      }
      if(temp.data == data) {
        return true;
      } else {
        return false;
        }
    }
}


public class Link {
  public static void main(String[] args) {
      LinkedList l1 = new LinkedList();
      l1.addNodeLast(10);
      l1.addNodeLast(20);
      l1.addNodeLast(30);
      l1.addNodeLast(40);
      l1.addNodeLast(60);
      l1.printList();
      l1.addNodeAtPos(50,5);
      l1.printList();
      l1.isEmpty();
      l1.deleteAtPos(5);
      l1.printList();
      l1.deleteAtPos(3);
      l1.printList();
      System.out.println(l1.isLastElement(20));
  }
}
