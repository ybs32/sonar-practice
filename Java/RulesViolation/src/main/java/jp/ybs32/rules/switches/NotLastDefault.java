package jp.ybs32.rules.switches;

public class NotLastDefault {

	public static void main(String[] args) {

		int arg = Integer.parseInt(args[0]);

		switch (arg) {
			case 0:
				break;
			default:
				// The default clause should be the last one
				break;
			case 1:
				arg += 1;
				break;
			case 2:
				arg += 2;
				break;
		}

		System.out.println(arg);
	}

}
