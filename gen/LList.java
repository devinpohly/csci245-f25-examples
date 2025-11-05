public class LList<T> {
	private class Node {
		private T datum;
		private Node next;

		public Node(T datum, Node next) {
			this.datum = datum;
			this.next = next;
		}

		public String toString() {
			if (this.next == null) {
				return datum.toString();
			} else {
				return datum.toString() +
					", " +
					this.next.toString();
			}
		}
	}

	private Node head = null;

	public void addFirst(T item) {
		head = new Node(item, head);
	}

	public String toString() {
		if (head == null) {
			return "[]";
		} else {
			return "[" + head.toString() + "]";
		}
	}

	public static void main(String[] args) {
		LList<Integer> ll = new LList<>();
		ll.addFirst(1);
		ll.addFirst(3);
		ll.addFirst(5);
		ll.addFirst(7);
		System.out.println(ll);
	}
}
