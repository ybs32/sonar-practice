package jp.ybs32.rules.switches;

public class NonDefault {

	public static void main(String[] args) {

		int arg = Integer.parseInt(args[0]);

		// Missing default clause
		switch (arg) {
			case 0:
				break;
			case 1:
				arg += 1;
				break;
			case 2:
				arg += 2;
				break;
			// The final default clause is required for secure programming
		}

		System.out.println(arg);
	}

}
