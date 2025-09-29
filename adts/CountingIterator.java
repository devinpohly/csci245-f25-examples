import java.util.Iterator;

public class CountingIterator implements Iterator<Integer> {
	private int i;

	public CountingIterator(int i) {
		this.i = i;
	}

	public boolean hasNext() {
		return true;
	}

	public Integer next() {
		int toReturn = i;
		i++;
		return toReturn;
	}

	public static void main(String[] args)
	{
		Iterator<Integer> it = new CountingIterator(5);
		while (it.hasNext()) {
			int i = it.next();
			System.out.println(i);
			// if (i > 20)
			// 	break;
		}
	}
}
