public class HeterogeneousPair<F, S> {
	private F first;
	private S second;

	public HeterogeneousPair(F first, S second) {
		this.first = first;
		this.second = second;
	}

	public F first() {
		return this.first;
	}

	public S second() {
		return this.second;
	}

	public static void main(String[] args) {
		HeterogeneousPair<Integer, String> p = new HeterogeneousPair<>(3, "three");
		int a = p.first();
		String b = p.second();
		System.out.println("(" + a + ", " + b + ")");
	}
}
