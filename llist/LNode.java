public class LNode {
	private int datum;
	private LNode next;

	public LNode(int datum, LNode next) {
		this.datum = datum;
		this.next = next;
	}

	public String toString() {
		if (this.next == null) {
			return Integer.toString(datum);
		} else {
			return Integer.toString(datum) +
				", " +
				this.next.toString();
		}
	}

	public void addBack(int item) {
		if (this.next == null) {
			next = new LNode(item, null);
		} else {
			next.addBack(item);
		}
	}

	public LNode getNext() {
		return next;
	}

	public void setNext(LNode next) {
		this.next = next;
	}

	public int getDatum() {
		return datum;
	}
}
