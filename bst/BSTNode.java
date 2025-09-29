public class BSTNode {
	private int datum;
	private BSTNode left;
	private BSTNode right;

	public BSTNode(int datum) {
		this.datum = datum;
		this.left = null;
		this.right = null;
	}

	//  [ ... ] 3 [ .. ]
	public String toString() {
		String result;
		if (left == null) {
			result = "[]";
		} else {
			result = "[" + left.toString() + "]";
		}
		result += " " + datum + " ";
		if (right == null) {
			result += "[]";
		} else {
			result += "[" + right.toString() + "]";
		}
		return result;
	}

	public boolean contains(int item) {
		if (item == datum) {
			return true;
		} else if (item < datum) {
			// left
			if (left == null) {
				return false;
			} else {
				return left.contains(item);
			}
		} else {
			// right
			if (right == null) {
				return false;
			} else {
				return right.contains(item);
			}
		}
	}

	public void add(int item) {
		if (item == datum) {
			return;
		} else if (item < datum) {
			// left
			if (left == null) {
				left = new BSTNode(item);
			} else {
				left.add(item);
			}
		} else {
			// right
			if (right == null) {
				right = new BSTNode(item);
			} else {
				right.add(item);
			}
		}
	}
}
