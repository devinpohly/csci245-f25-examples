public class BSTSet {
	private BSTNode root;

	public BSTSet() {
		root = null;
	}

	public String toString() {
		if (root == null) {
			return "empty";
		} else {
			return root.toString();
		}
	}

	public boolean contains(int item) {
		if (root == null) {
			return false;
		} else {
			return root.contains(item);
		}
	}

	public void add(int item) {
		if (root == null) {
			root = new BSTNode(item);
		} else {
			root.add(item);
		}
	}

	public static void main(String[] args) {
		BSTSet set = new BSTSet();
		System.out.println(set);
		System.out.println(set.contains(0));
		System.out.println(set.contains(-1));
		System.out.println(set.contains(4));

		set.add(11);
		set.add(4);
		set.add(7);
		set.add(10);
		set.add(16);
		set.add(-3);
		set.add(1);
		set.add(17);
		set.add(10);
		set.add(3);
		set.add(9);
		System.out.println(set);
		System.out.println(set.contains(0));
		System.out.println(set.contains(-1));
		System.out.println(set.contains(4));
	}
}
