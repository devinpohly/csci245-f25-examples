package chatter;

/**
 * Message.java
 *
 * Class to model a message in Chatter (a Twitter-like
 * system)
 *
 * @author Thomas VanDrunen
 * CSCI 235, Wheaton College
 * Sept 14, 2010
 * In-class example
 */

import java.util.*;

public class Message implements Comparable<Message>, Iterable<String> {

	public class TagIterator implements Iterator<String> {
		private Message m;
		private int i = 0;

		public TagIterator(Message m) {
			this.m = m;
		}

		public boolean hasNext() {
			return i < m.poundTags.length;
		}

		public String next() {
			String toReturn = m.poundTags[i];
			i++;
			return toReturn;
		}
	}

	public static class NameComparator implements Comparator<Message> {
		public int compare(Message a, Message b) {
			return a.userName.compareTo(b.userName);
		}
	}

	private static int numInstances;

	static {
		numInstances = 0;
		System.out.println("Static initializer executed");
	}

	/**
	 * The (text) content of this message
	 */
	private String text;

	/**
	 * The name of the user who sent this message
	 */
	private String userName;

	/**
	 * The codes used to identify categories relevant
	 * for this message
	 */
	private String[] poundTags;

	/**
	 * Timestamp of when this message was created
	 */
	private long date;

	/**
	 * Plain constructor
	 * @param text The content of the message
	 * @param userName The user who sent this
	 * @param poundTags Array of relevant categories (will be cloned)
	 */
	public Message(String text, String userName, String[] poundTags) {
		this.text = text;
		this.userName = userName;
		this.poundTags = new String[poundTags.length];
		for (int i = 0; i < poundTags.length; i++)
			this.poundTags[i] = poundTags[i];
		this.date = System.currentTimeMillis();
		numInstances++;
	}

	/**
	 * Dummy constructor generating default text
	 * @param userName The user who sent this
	 */
	public Message(String userName) {
		this("default text", userName, new String[0]);
	}

	public Iterator<String> iterator() {
		List<String> tags = this.tags();
		return tags.iterator();
	}

	public int compareTo(Message o) {
		// return < 0 if this comes before/is less than o
		// return > 0 if this comes after/is greater than o
		// return == 0 if this equals o
		int textOrder = this.text.compareTo(o.text);
		if (textOrder != 0) {
			return textOrder;
		}
		return (int) (this.date - o.date);
	}

	/**
	 * Make a string representation of this message.
	 * @return A string displaying this message
	 */
	public String toString() {
		// the string we're returning, built up across
		// several steps
		String toReturn = userName + "\t" + (new Date(date)) + "\n" +
			text + "\n";
		for (int i = 0; i < poundTags.length; i++)
			toReturn += "#" + poundTags[i];
		toReturn += "\n";
		return toReturn;
	}

	/**
	 * Get the primary category for this message,
	 * empty string if none
	 * @return The primary category for this message, empty
	 * string if none
	 */
	public String primaryPoundTag() {
		if (poundTags.length > 0) return poundTags[0];
		else return "";
	}

	public List<String> tags() {
		List<String> toReturn = new ArrayList<>();
		for (int i = 0; i < poundTags.length; i++) {
			toReturn.add(poundTags[i]);
		}
		return toReturn;
	}

	/**
	 * Get the date when this message was made
	 * @return the date when this message was made
	 */
	public long date() {
		return date;
	}

	public static int getNumInstances() {
		return numInstances;
	}

	/**
	 * Main method for testing.
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("hello");
		String[] pounds = {"FranzLiszt", "TomSwifities", "FranzLiszt"};
		Message msg =
			new Message("\"I have lost all my Hungarian sheet music,\" he said listlessly.",
					"Xerxes", pounds);
		System.out.println(msg.toString());
		System.out.println("There are " + Message.getNumInstances() + " instances.");
		String[] pounds2 = {"FranzLiszt", "HelloWorld"};
		Message msg2 = new Message("hello", "Bob", pounds2);
		System.out.println("There are " + Message.getNumInstances() + " instances.");

		int compared = msg.compareTo(msg2);
		if (compared < 0) {
			System.out.println("msg comes first");
		} else if (compared > 0) {
			System.out.println("msg comes second");
		} else {
			System.out.println("msg equals msg2");
		}

		List<Message> msgs = new ArrayList<Message>();
		msgs.add(msg);
		msgs.add(msg2);
		msgs.add(msg);

		Collections.sort(msgs, new NameComparator());
		System.out.println(msgs);
		System.out.println(msgs.contains(msg));

		List<String> tags = msg.tags();
		System.out.println(tags);

		// for-each loop
		Set<String> tagSet = new HashSet<>();
		tagSet.addAll(tags);
		for (String item : tagSet) {
			System.out.println("#" + item);
		}

		Map<String, Message> tagMap = new HashMap<>();
		for (Message m : msgs) {
			for (String tag : m) {
				if (!tagMap.containsKey(tag)) {
					tagMap.put(tag, m);
				}
			}
		}
		System.out.println(tagMap);
	}
}
