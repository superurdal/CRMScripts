#setLanguageLevel 3;

/*
 * Methods for doing file operations. MB, Ddoes not work in Online!
 */

/*
 * Get list of files on disk in current directory
 * Filter can f.instance be '*.txt'
 */
String[] getFiles(String filter) {
	String cmd = "cmd.exe /c dir /B " + filter;
	String[] files = runProgram(cmd).split('\r\n');
  return files;
}