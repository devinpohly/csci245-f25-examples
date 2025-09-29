public class LList {
	private LNode head;

	public boolean isEmpty() {
		return (head == null);
	}

	public String toString() {
		if (head == null) {
			return "[]";
		} else {
			return "[" + head.toString() + "]";
		}
	}

	public void addFront(int item) {
		LNode newHead = new LNode(item, head);
		head = newHead;
	}

	public void addBack(int item) {
		if (head == null) {
			head = new LNode(item, null);
		} else {
			head.addBack(item);
		}
		// if (head == null) {
		// 	head = new LNode(item, null);
		// } else {
		// 	LNode current = head;
		// 	while (current.getNext() != null) {
		// 		current = current.getNext();
		// 	}
		// 	current.setNext(new LNode(item, null));
		// }
	}

	public void insertionSortIterative() {
		// Point to beginning of sorted portion
		LNode sortedHead = null;
		// Point to next unsorted node
		LNode unsortedHead = head;

		while (unsortedHead != null) {
			System.out.println("Sorted: " + sortedHead);
			System.out.println("Rest: " + unsortedHead);
			
			// Detach current from unsorted
			LNode current = unsortedHead;
			unsortedHead = unsortedHead.getNext();
			current.setNext(null);

			System.out.println("Current: " + current);

			// Compare current with sorted nodes until we see one
			// which is greater than current
			if (sortedHead == null) {
				sortedHead = current;
			} else {
				if (sortedHead.getDatum() > current.getDatum()) {
					// Current belongs at the beginning
					current.setNext(sortedHead);
					sortedHead = current;
				} else {
					LNode compare = sortedHead;
					while (compare.getNext() != null &&
							compare.getNext().getDatum() < current.getDatum()) {
						compare = compare.getNext();
					}
					// compare should be the last node < current
					// insert current after compare
					current.setNext(compare.getNext());
					compare.setNext(current);
					// compare has been inserted
				}
			}
		}
		head = sortedHead;
	}

	public static void main(String[] args) {
		LList list = new LList();

		System.out.println(list.isEmpty());
		System.out.println(list);

		list.addBack(12);
		System.out.println(list.isEmpty());
		System.out.println(list);

		list.addFront(3);
		list.addFront(45);
		list.addBack(678);
		list.addBack(9);
		System.out.println(list);

		list.insertionSortIterative();
		System.out.println(list);
	}
}
