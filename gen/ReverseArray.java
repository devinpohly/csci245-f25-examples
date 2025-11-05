public class ReverseArray {
	public static <T> void reverseArray(T[] arr) {
		for (int i = 0; i < arr.length / 2; i++) {
			T t = arr[i];
			arr[i] = arr[arr.length - 1 - i];
			arr[arr.length - 1 - i] = t;
		}
	}

	public static <T> T getIndex(T[] arr, int i) {
		return arr[i];
	}

	public static void main(String[] args) {
		String[] arr = new String[]{"two", "tre", "fie", "sevenenen", "eleventy"};
		String s = getIndex(arr, 3);
		System.out.println(s);
		// reverseArray(arr);
		// for (String i: arr) {
		// 	System.out.print(i + " ");
		// }
		// System.out.println();
	}
}
