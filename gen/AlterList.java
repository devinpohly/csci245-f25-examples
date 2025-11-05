public class AlterList<E, O> {
	private static class Node<D, N> {
		private D datum;
		private Node<N, D> next;

		public Node(D datum, Node<N, D> next) {
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

	private Node<E, O> head = null;

	private AlterList(Node<E, O> head) {
		this.head = head;
	}

	public AlterList() {
		this.head = null;
	}

	public AlterList<O, E> addFirst(O item) {
		return new AlterList<O, E>(new Node<O, E>(item, head));
	}

	public String toString() {
		if (head == null) {
			return "[]";
		} else {
			return "[" + head.toString() + "]";
		}
	}

	public static void main(String[] args) {
		AlterList<Integer, String> ll = new AlterList<>();
		AlterList<String, Integer> other = ll.addFirst("foo");
		ll = other.addFirst(3);
		other = ll.addFirst(10);
		ll = other.addFirst(10);
		System.out.println(ll);
	}
}
