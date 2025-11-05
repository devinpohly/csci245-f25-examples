public class Pair<T> {
	private T first;
	private T second;

	public Pair(T first, T second) {
		this.first = first;
		this.second = second;
	}

	public T first() {
		return this.first;
	}

	public T second() {
		return this.second;
	}

	public static void main(String[] args) {
		Pair<Integer> p = new Pair<>(3, 18);
		int a = p.first();
		int b = p.second();
		System.out.println("(" + a + ", " + b + ")");
	}
}
