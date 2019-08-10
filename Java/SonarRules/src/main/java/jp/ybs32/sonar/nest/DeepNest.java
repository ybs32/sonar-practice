package jp.ybs32.sonar.nest;

public class DeepNest {

	public static void main(String[] args) {

		if (args[0].equals("a")) {					// Compliant - depth = 1
			/* ... */
			for (int i = 0; i < 10; i++) {			// Compliant - depth = 2
				/* ... */
				if (args[1].equals("b")) {			// Compliant - depth = 3, not exceeding the limit
					/* ... */
					for (int j = 0; j < 10; j++) {	// Noncompliant - depth = 4
						/* ... */
					}
				}
			}
		}
	}

}
