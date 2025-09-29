package chatter;

import java.util.Iterator;

public class CountingIterator implements Iterator<Integer> {
	private int i;
	private int stop;

	public CountingIterator(int start, int stop) {
		i = start;
		this.stop = stop;
	}

	public boolean hasNext() {
		return true;
	}

	public Integer next() {
		int toReturn = i;
		i++;
		return toReturn;
	}

	public static void main(String[] args) {
		CountingIterator ci = new CountingIterator((int) 0, (int) 10);
		while (ci.hasNext()) {
			int n = ci.next();
			System.out.println(n);
		}
	}
}
