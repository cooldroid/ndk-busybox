#include "busybox.h"

#if defined BB_AR
const char ar_usage[] =
	"ar -[ovR]{ptx} archive filenames"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nExtract or list files from an ar archive.\n\n"
	"Options:\n"
	"\t-o\t\tpreserve original dates\n"
	"\t-p\t\textract to stdout\n"
	"\t-t\t\tlist\n"
	"\t-x\t\textract\n"
	"\t-v\t\tverbosely list files processed\n"
	"\t-R\t\trecursive action"
#endif
	;
#endif

#if defined BB_BASENAME
const char basename_usage[] =
	"basename FILE [SUFFIX]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nStrips directory path and suffixes from FILE.\n"
	"If specified, also removes any trailing SUFFIX."
#endif
	;
#endif

#if defined BB_CAT
const char cat_usage[] =
	"cat [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nConcatenates FILE(s) and prints them to stdout."
#endif
	;
#endif

#if defined BB_CHMOD_CHOWN_CHGRP
const char chgrp_usage[] =
	"chgrp [OPTION]... GROUP FILE..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nChange the group membership of each FILE to GROUP.\n"
	"\nOptions:\n\t-R\tChanges files and directories recursively."
#endif
	;
#endif

#if defined BB_CHMOD_CHOWN_CHGRP
const char chmod_usage[] =
	"chmod [-R] MODE[,MODE]... FILE..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nEach MODE is one or more of the letters ugoa, one of the symbols +-= and\n"
	"one or more of the letters rwxst.\n\n"
	"\nOptions:\n\t-R\tChanges files and directories recursively."
#endif
	;
#endif

#if defined BB_CHMOD_CHOWN_CHGRP
const char chown_usage[] =
	"chown [OPTION]...  OWNER[<.|:>[GROUP] FILE..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nChange the owner and/or group of each FILE to OWNER and/or GROUP.\n"
	"\nOptions:\n\t-R\tChanges files and directories recursively."
#endif
	;
#endif

#if defined BB_CHROOT
const char chroot_usage[] =
	"chroot NEWROOT [COMMAND...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nRun COMMAND with root directory set to NEWROOT."
#endif
	;
#endif

#if defined BB_CHVT
const char chvt_usage[] =
	"chvt N"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nChanges the foreground virtual terminal to /dev/ttyN"
#endif
	;
#endif

#if defined BB_CLEAR
const char clear_usage[] =
	"clear"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nClear screen."
#endif
	;
#endif

#if defined BB_CMP
const char cmp_usage[] =
	"cmp FILE1 [FILE2]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCompare files."
#endif
	;
#endif

#if defined BB_CP_MV
const char cp_usage[] =
	"cp [OPTION]... SOURCE DEST\n"
	"   or: cp [OPTION]... SOURCE... DIRECTORY"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCopies SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n"
	"\n"
	"\t-a\tSame as -dpR\n"
	"\t-d\tPreserves links\n"
	"\t-p\tPreserves file attributes if possible\n"
	"\t-f\tforce (implied; ignored) - always set\n"
	"\t-R\tCopies directories recursively"
#endif
	;
#endif

#if defined BB_CUT
const char cut_usage[] =
	"cut [OPTION]... [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrints selected fields from each input FILE to standard output.\n\n"
	"Options:\n"
	"\t-b LIST\tOutput only bytes from LIST\n"
	"\t-c LIST\tOutput only characters from LIST\n"
	"\t-d CHAR\tUse CHAR instead of tab as the field delimiter\n"
	"\t-s\tOutput only the lines containing delimiter\n"
	"\t-f N\tPrint only these fields\n"
	"\t-n\tIgnored"
#endif
	;
#endif

#if defined BB_DATE
const char date_usage[] =
	"date [OPTION]... [+FORMAT]\n"
	"  or:  date [OPTION] [MMDDhhmm[[CC]YY][.ss]]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nDisplays the current time in the given FORMAT, or sets the system date.\n"
	"\nOptions:\n\t-R\t\tOutputs RFC-822 compliant date string\n"
	"\t-d STRING\tdisplay time described by STRING, not `now'\n"
	"\t-s\t\tSets time described by STRING\n"
	"\t-u\t\tPrints or sets Coordinated Universal Time"
#endif
	;
#endif

#if defined BB_DC
const char dc_usage[] =
	"dc expression ..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nThis is a Tiny RPN calculator that understands the\n"
	"following operations: +, -, /, *, and, or, not, eor.\n"
	"i.e. 'dc 2 2 add' -> 4, and 'dc 8 8 \\* 2 2 + /' -> 16"
#endif
	;
#endif

#if defined BB_DD
const char dd_usage[] =
	"dd [if=FILE] [of=FILE] [bs=N] [count=N] [skip=N] [seek=N] [conv=notrunc|sync]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCopy a file, converting and formatting according to options\n\n"
	"\tif=FILE\tread from FILE instead of stdin\n"
	"\tof=FILE\twrite to FILE instead of stdout\n"
	"\tbs=N\tread and write N bytes at a time\n"
	"\tcount=N\tcopy only N input blocks\n"
	"\tskip=N\tskip N input blocks\n"
	"\tseek=N\tskip N output blocks\n"
	"\tconv=notrunc\tdon't truncate output file\n"
	"\tconv=sync\tpad blocks with zeros\n"
	"\n"
	"Numbers may be suffixed by c (x1), w (x2), b (x512), kD (x1000), k (x1024),\n"
	"MD (x1000000), M (x1048576), GD (x1000000000) or G (x1073741824)."
#endif
	;
#endif

#if defined BB_DEALLOCVT
const char deallocvt_usage[] =
	"deallocvt N"
#ifndef BB_FEATURE_TRIVIAL_HELP
	 "\n\nDeallocate unused virtual terminal /dev/ttyN"
#endif
	 ;
#endif

#if defined BB_DF
const char df_usage[] =
	"df [-?"
#ifdef BB_FEATURE_HUMAN_READABLE
	"hm"
#endif
	"k] [filesystem ...]\n"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint the filesystem space used and space available."
	"Options:\n"
	"\t-?\tshow usage information\n"
#ifdef BB_FEATURE_HUMAN_READABLE
	"\t-h\tprint sizes in human readable format (e.g., 1K 243M 2G )\n"
	"\t-m\tprint sizes in megabytes\n"
	"\t-k\tprint sizes in kilobytes(default)\n"
#else
	"\t-k\tprint sizes in kilobytes(compatability)\n"
#endif
#endif
	;
#endif

#if defined BB_DIRNAME
const char dirname_usage[] =
	"dirname [FILENAME ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nStrips non-directory suffix from FILENAME"
#endif
	;
#endif

#if defined BB_DMESG
const char dmesg_usage[] =
	"dmesg [-c] [-n LEVEL] [-s SIZE]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrints or controls the kernel ring buffer\n\n"
	"Options:\n"
	"\t-c\t\tClears the ring buffer's contents after printing\n"
	"\t-n LEVEL\tSets console logging level\n"
	"\t-s SIZE\t\tUse a buffer of size SIZE"
#endif
	;
#endif

#if defined BB_DOS2UNIX
const char dos2unix_usage[] =
	"dos2unix < dosfile > unixfile"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nConverts a text file from dos format to unix format."
#endif
	;
#endif

#if defined BB_DPKG
const char dpkg_usage[] =
	"udpkg <-i|-r|--unpack|--configure> my.deb\n"
	"WORK IN PROGRESS, only usefull for debian-installer\n"
#ifndef BB_FEATURE_TRIVIAL_HELP
#endif
	;
#endif

#if defined BB_DPKG_DEB
const char dpkg_deb_usage[] =
        "dpkg-deb [-cexX] file directory"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPerform actions on debian packages (.debs)\n\n"
	"Options:\n"
	"\t-c\tList contents of filesystem tree (verbose)\n"
	"\t-l\tList contents of filesystem tree (.list format)\n"
	"\t-e\tExtract control files to directory\n"	
	"\t-x\tExctract packages filesystem tree to directory\n"
	"\t-X\tVerbose extract"
#endif
	;
#endif

#if defined BB_DU
const char du_usage[] =
	"du [-?ls"
#ifdef BB_FEATURE_HUMAN_READABLE
	"hm"
#endif
	"k] [FILE]...\n"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSummarizes disk space used for each FILE and/or directory.\n"
	"Disk space is printed in units of 1024 bytes.\n\n"
	"Options:\n"
        "\t-?\tshow usage information\n"
	"\t-l\tcount sizes many times if hard linked\n"
	"\t-s\tdisplay only a total for each argument"
#ifdef BB_FEATURE_HUMAN_READABLE
	"\t-h\tprint sizes in human readable format (e.g., 1K 243M 2G )\n"
	"\t-m\tprint sizes in megabytes\n"
	"\t-k\tprint sizes in kilobytes(default)\n"
#else
	"\t-k\tprint sizes in kilobytes(compatability)\n"
#endif
#endif
	;
#endif

#if defined BB_DUMPKMAP
const char dumpkmap_usage[] =
	"dumpkmap > keymap"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrints out a binary keyboard translation table to standard input."
#endif
	;
#endif

#if defined BB_DUTMP
const char dutmp_usage[] =
	"dutmp [FILE]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nDump utmp file format (pipe delimited) from FILE\n"
	"or stdin to stdout.  (i.e. 'dutmp /var/run/utmp')"
#endif
	;
#endif

#if defined BB_ECHO
const char echo_usage[] =
	"echo [-neE] [ARG ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrints the specified ARGs to stdout\n\n"
	"Options:\n"
	"\t-n\tsuppress trailing newline\n"
	"\t-e\tinterpret backslash-escaped characters (i.e. \\t=tab etc)\n"
	"\t-E\tdisable interpretation of backslash-escaped characters"
#endif
	;
#endif

#if defined BB_EXPR
const char expr_usage[] =
	"expr EXPRESSION"
#ifndef BB_FEATURE_TRIVIAL_HELP
"\n\nPrints the value of EXPRESSION to standard output.\n\n"
"EXPRESSION may be:\n"
"ARG1 |  ARG2	ARG1 if it is neither null nor 0, otherwise ARG2\n"
"ARG1 &  ARG2	ARG1 if neither argument is null or 0, otherwise 0\n"
"ARG1 <  ARG2	ARG1 is less than ARG2\n"
"ARG1 <= ARG2	ARG1 is less than or equal to ARG2\n"
"ARG1 =  ARG2	ARG1 is equal to ARG2\n"
"ARG1 != ARG2	ARG1 is unequal to ARG2\n"
"ARG1 >= ARG2	ARG1 is greater than or equal to ARG2\n"
"ARG1 >  ARG2	ARG1 is greater than ARG2\n"
"ARG1 +  ARG2	arithmetic sum of ARG1 and ARG2\n"
"ARG1 -  ARG2	arithmetic difference of ARG1 and ARG2\n"
"ARG1 *  ARG2	arithmetic product of ARG1 and ARG2\n"
"ARG1 /  ARG2	arithmetic quotient of ARG1 divided by ARG2\n"
"ARG1 %  ARG2	arithmetic remainder of ARG1 divided by ARG2\n"
"STRING : REGEXP		    anchored pattern match of REGEXP in STRING\n"
"match STRING REGEXP	    same as STRING : REGEXP\n"
"substr STRING POS LENGTH    substring of STRING, POS counted from 1\n"
"index STRING CHARS	    index in STRING where any CHARS is found, or 0\n"
"length STRING		    length of STRING\n"
"quote TOKEN		    interpret TOKEN as a string, even if it is a \n"
"				keyword like `match' or an operator like `/'\n"
"( EXPRESSION )		    value of EXPRESSION\n\n"
"Beware that many operators need to be escaped or quoted for shells.\n"
"Comparisons are arithmetic if both ARGs are numbers, else\n"
"lexicographical.  Pattern matches return the string matched between \n"
"\\( and \\) or null; if \\( and \\) are not used, they return the number \n"
"of characters matched or 0."

#endif
	;
#endif


#if defined BB_TRUE_FALSE
const char false_usage[] =
	"false"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nReturn an exit code of FALSE (1)."
#endif
	;
#endif

#if defined BB_FDFLUSH
const char fdflush_usage[] =
	"fdflush DEVICE"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nForces floppy disk drive to detect disk change"
#endif
	;
#endif

#if defined BB_FIND
const char find_usage[] =
	"find [PATH...] [EXPRESSION]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSearch for files in a directory hierarchy.  The default PATH is\n"
	"the current directory; default EXPRESSION is '-print'\n\n"
	"\nEXPRESSION may consist of:\n"
	"\t-follow\t\tDereference symbolic links.\n"
	"\t-name PATTERN\tFile name (leading directories removed) matches PATTERN.\n"
#ifdef BB_FEATURE_FIND_TYPE
	"\t-type X\t\tFiletype matches X (where X is one of: f,d,l,b,c,...)\n"
#endif
#ifdef BB_FEATURE_FIND_PERM
	"\t-perm PERMS\tPermissions match any of (+NNN); all of (-NNN); or exactly (NNN)\n"
#endif
#ifdef BB_FEATURE_FIND_MTIME
	"\t-mtime TIME\tModified time is greater than (+N); less than (-N); or exactly (N) days\n"
#endif
#endif
	;
#endif

#if defined BB_FREE
const char free_usage[] =
	"free"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nDisplays the amount of free and used system memory"
#endif
	;
#endif

#if defined BB_FREERAMDISK
const char freeramdisk_usage[] =
	"freeramdisk DEVICE"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nFrees all memory used by the specified ramdisk."
#endif
	;
#endif

#if defined BB_FSCK_MINIX
const char fsck_minix_usage[] =
	"Usage: fsck.minix [-larvsmf] /dev/name"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPerforms a consistency check for MINIX filesystems.\n\n"
	"Options:\n"
	"\t-l\tLists all filenames\n"
	"\t-r\tPerform interactive repairs\n"
	"\t-a\tPerform automatic repairs\n"
	"\t-v\tverbose\n"
	"\t-s\tOutputs super-block information\n"
	"\t-m\tActivates MINIX-like \"mode not cleared\" warnings\n"
	"\t-f\tForce file system check."
#endif
	;
#endif

#if defined BB_GETOPT
const char getopt_usage[] =
"getopt [OPTIONS]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
"\nParse command options\n"
"  -a, --alternative            Allow long options starting with single -\n"
"  -l, --longoptions=longopts   Long options to be recognized\n"
"  -n, --name=progname          The name under which errors are reported\n"
"  -o, --options=optstring      Short options to be recognized\n"
"  -q, --quiet                  Disable error reporting by getopt(3)\n"
"  -Q, --quiet-output           No normal output\n"
"  -s, --shell=shell            Set shell quoting conventions\n"
"  -T, --test                   Test for getopt(1) version\n"
"  -u, --unqote                 Do not quote the output"
#endif
;
#endif

#if defined BB_GREP
const char grep_usage[] =
	"grep [-ihHnqvs] pattern [files...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSearch for PATTERN in each FILE or standard input.\n\n"
	"Options:\n"
	"\t-H\tprefix output lines with filename where match was found\n"
	"\t-h\tsuppress the prefixing filename on output\n"
	"\t-i\tignore case distinctions\n"
	"\t-n\tprint line number with output lines\n"
	"\t-q\tbe quiet. Returns 0 if result was found, 1 otherwise\n"
	"\t-v\tselect non-matching lines\n"
	"\t-s\tsuppress file open/read error messages"
#endif
	;
#endif

#if defined BB_GUNZIP
const char gunzip_usage[] =
	"gunzip [OPTION]... FILE"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nUncompress FILE (or standard input if FILE is '-').\n\n"
	"Options:\n"
	"\t-c\tWrite output to standard output\n"
	"\t-t\tTest compressed file integrity"
#endif
	;
#endif

#if defined BB_GZIP
const char gzip_usage[] =
	"gzip [OPTION]... FILE"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCompress FILE with maximum compression.\n"
	"When FILE is '-', reads standard input.  Implies -c.\n\n"
	"Options:\n"
	"\t-c\tWrite output to standard output instead of FILE.gz\n"
	"\t-d\tdecompress"
#endif
	;
#endif

#if defined BB_HALT
const char halt_usage[] =
	"halt"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nHalt the system."
#endif
	;
#endif

#if defined BB_HEAD
const char head_usage[] =
	"head [OPTION] [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint first 10 lines of each FILE to standard output.\n"
	"With more than one FILE, precede each with a header giving the\n"
	"file name. With no FILE, or when FILE is -, read standard input.\n\n"

	"Options:\n" "\t-n NUM\t\tPrint first NUM lines instead of first 10"
#endif
	;
#endif

#if defined BB_HOSTID
const char hostid_usage[] =
	"hostid"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint out a unique 32-bit identifier for the machine."
#endif
	;
#endif

#if defined BB_HOSTNAME
const char hostname_usage[] =
	"hostname [OPTION] {hostname | -F file}"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nGet or set the hostname or DNS domain name. If a hostname is given\n"
	"(or a file with the -F parameter), the host name will be set.\n\n"

	"Options:\n"
	"\t-s\t\tShort\n"
	"\t-i\t\tAddresses for the hostname\n"
	"\t-d\t\tDNS domain name\n"
	"\t-F, --file FILE\tUse the contents of FILE to specify the hostname"
#endif
	;
#endif

#if defined BB_ID
const char id_usage[] =
	"id [OPTIONS]... [USERNAME]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint information for USERNAME or the current user\n\n"
	"Options:\n"
	"\t-g\tprints only the group ID\n"
	"\t-u\tprints only the user ID\n"
	"\t-n\tprint a name instead of a number (with for -ug)\n"
	"\t-r\tprints the real user ID instead of the effective ID (with -ug)"
#endif
	;
#endif

#if defined BB_IFCONFIG
const char ifconfig_usage[] =
	"ifconfig [-a] [-i] [-v] <interface> [<address>]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nconfigure a network interface\n\n"
	"Options:\n"
	"  [[-]broadcast [<address>]]  [[-]pointopoint [<address>]]\n"
	"  [netmask <address>]  [dstaddr <address>]  [tunnel <adress>]\n"
#ifdef SIOCSKEEPALIVE
	"  [outfill <NN>] [keepalive <NN>]\n"
#endif
	"  [hw ether <address>]  [metric <NN>]  [mtu <NN>]\n"
	"  [[-]trailers]  [[-]arp]  [[-]allmulti]\n"
	"  [multicast]  [[-]promisc]\n"
	"  [mem_start <NN>]  [io_addr <NN>]  [irq <NN>]  [media <type>]\n"
	"  [up|down] ..."
#endif
	;
#endif

#if defined BB_INSMOD
const char insmod_usage[] =
	"insmod [OPTION]... MODULE [symbol=value]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nLoads the specified kernel modules into the kernel.\n\n"
	"Options:\n"
	"\t-f\tForce module to load into the wrong kernel version.\n"
	"\t-k\tMake module autoclean-able.\n"
	"\t-v\tverbose output\n" 
	"\t-L\tLock to prevent simultaneous loads of a module\n"
	"\t-x\tdo not export externs"
#endif
	;
#endif

#if defined BB_KILL
const char kill_usage[] =
	"kill [-signal] process-id [process-id ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSend a signal (default is SIGTERM) to the specified process(es).\n\n"
	"Options:\n" "\t-l\tList all signal names and numbers."
#endif
	;
#endif

#if defined BB_KILLALL
const char killall_usage[] =
	"killall [-signal] process-name [process-name ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSend a signal (default is SIGTERM) to the specified process(es).\n\n"
	"Options:\n" "\t-l\tList all signal names and numbers."
#endif
	;
#endif

#if defined BB_LENGTH
const char length_usage[] =
	"length STRING"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrints out the length of the specified STRING."
#endif
	;
#endif

#if defined BB_LN
const char ln_usage[] =
	"ln [OPTION] TARGET... LINK_NAME|DIRECTORY"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreate a link named LINK_NAME or DIRECTORY to the specified TARGET\n"
	"\nYou may use '--' to indicate that all following arguments are non-options.\n\n"
	"Options:\n"
	"\t-s\tmake symbolic links instead of hard links\n"
	"\t-f\tremove existing destination files\n"
	"\t-n\tno dereference symlinks - treat like normal file"
#endif
	;
#endif

#if defined BB_LOADACM
const char loadacm_usage[] =
	"loadacm < mapfile"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nLoads an acm from standard input."
#endif
	;
#endif

#if defined BB_LOADFONT
const char loadfont_usage[] =
	"loadfont < font"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nLoads a console font from standard input."
#endif
	;
#endif

#if defined BB_LOADKMAP
const char loadkmap_usage[] =
	"loadkmap < keymap"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nLoads a binary keyboard translation table from standard input."
#endif
	;
#endif

#if defined BB_LOGGER
const char logger_usage[] =
	"logger [OPTION]... [MESSAGE]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nWrite MESSAGE to the system log.  If MESSAGE is omitted, log stdin.\n\n"
	"Options:\n"
	"\t-s\tLog to stderr as well as the system log.\n"
	"\t-t\tLog using the specified tag (defaults to user name).\n"
	"\t-p\tEnter the message with the specified priority.\n"
	"\t\tThis may be numerical or a ``facility.level'' pair."
#endif
	;
#endif

#if defined BB_LOGNAME
const char logname_usage[] =
	"logname"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint the name of the current user."
#endif
	;
#endif

#if defined BB_LS
const char ls_usage[] =
	"ls [-1Aa"
#ifdef BB_FEATURE_LS_TIMESTAMPS
	"c"
#endif
	"Cd"
#ifdef BB_FEATURE_LS_TIMESTAMPS
	"e"
#endif
#ifdef BB_FEATURE_LS_FILETYPES
	"F"
#endif
	"iln"
#ifdef BB_FEATURE_LS_FILETYPES
	"p"
#endif
#ifdef BB_FEATURE_LS_FOLLOWLINKS
    "L"
#endif
#ifdef BB_FEATURE_LS_RECURSIVE
	"R"
#endif
#ifdef BB_FEATURE_LS_SORTFILES
	"rS"
#endif
	"s"
#ifdef BB_FEATURE_AUTOWIDTH
	"T"
#endif
#ifdef BB_FEATURE_LS_TIMESTAMPS
	"tu"
#endif
#ifdef BB_FEATURE_LS_SORTFILES
	"v"
#endif
#ifdef BB_FEATURE_AUTOWIDTH
	"w"
#endif
	"x"
#ifdef BB_FEATURE_LS_SORTFILES
	"X"
#endif
#ifdef BB_FEATURE_HUMAN_READABLE
	"h"
#endif
	"k] [filenames...]\n"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nList directory contents\n\n"
	"Options:\n"
	"\t-1\tlist files in a single column\n"
	"\t-A\tdo not list implied . and ..\n"
	"\t-a\tdo not hide entries starting with .\n"
	"\t-C\tlist entries by columns\n"
#ifdef BB_FEATURE_LS_TIMESTAMPS
	"\t-c\twith -l: show ctime (the time of last\n"
	"\t\tmodification of file status information)\n"
#endif
	"\t-d\tlist directory entries instead of contents\n"
#ifdef BB_FEATURE_LS_TIMESTAMPS
	"\t-e\tlist both full date and full time\n"
#endif
#ifdef BB_FEATURE_LS_FILETYPES
	"\t-F\tappend indicator (one of */=@|) to entries\n"
#endif
	"\t-i\tlist the i-node for each file\n"
	"\t-l\tuse a long listing format\n"
	"\t-n\tlist numeric UIDs and GIDs instead of names\n"
#ifdef BB_FEATURE_LS_FILETYPES
	"\t-p\tappend indicator (one of /=@|) to entries\n"
#endif
#ifdef BB_FEATURE_LS_FOLLOWLINKS
	"\t-L\tlist entries pointed to by symbolic links\n"
#endif
#ifdef BB_FEATURE_LS_RECURSIVE
	"\t-R\tlist subdirectories recursively\n"
#endif
#ifdef BB_FEATURE_LS_SORTFILES
	"\t-r\tsort the listing in reverse order\n"
	"\t-S\tsort the listing by file size\n"
#endif
	"\t-s\tlist the size of each file, in blocks\n"
#ifdef BB_FEATURE_AUTOWIDTH
	"\t-T NUM\tassume Tabstop every NUM columns\n"
#endif
#ifdef BB_FEATURE_LS_TIMESTAMPS
	"\t-t\twith -l: show modification time (the time of last\n"
	"\t\tchange of the file)\n"
	"\t-u\twith -l: show access time (the time of last\n"
	"\t\taccess of the file)\n"
#endif
#ifdef BB_FEATURE_LS_SORTFILES
	"\t-v\tsort the listing by version\n"
#endif
#ifdef BB_FEATURE_AUTOWIDTH
	"\t-w NUM\tassume the terminal is NUM columns wide\n"
#endif
	"\t-x\tlist entries by lines instead of by columns\n"
#ifdef BB_FEATURE_LS_SORTFILES
	"\t-X\tsort the listing by extension\n"
#endif

#ifdef BB_FEATURE_HUMAN_READABLE
	"\t-h\tprint sizes in human readable format (e.g., 1K 243M 2G )\n"
	"\t-k\tprint sizes in kilobytes(default)\n"
#else
	"\t-k\tprint sizes in kilobytes(compatability)"
#endif

#endif /*  BB_FEATURE_TRIVIAL_HELP */
	;
#endif /* BB_LS */

#if defined BB_LSMOD
const char lsmod_usage[] =
	"lsmod"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nList the currently loaded kernel modules."
#endif
	;
#endif

#if defined BB_MAKEDEVS
const char makedevs_usage[] =
	"makedevs NAME TYPE MAJOR MINOR FIRST LAST [s]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreates a range of block or character special files\n\n"
	"TYPEs include:\n"
	"\tb:\tMake a block (buffered) device.\n"
	"\tc or u:\tMake a character (un-buffered) device.\n"
	"\tp:\tMake a named pipe. MAJOR and MINOR are ignored for named pipes.\n\n"
	"FIRST specifies the number appended to NAME to create the first device.\n"
	"LAST specifies the number of the last item that should be created.\n"
	"If 's' is the last argument, the base device is created as well.\n\n"
	"For example:\n"
	"\tmakedevs /dev/ttyS c 4 66 2 63   ->  ttyS2-ttyS63\n"
	"\tmakedevs /dev/hda b 3 0 0 8 s    ->  hda,hda1-hda8"
#endif
	;
#endif

#if defined BB_MD5SUM
const char md5sum_usage[] =
	"md5sum [OPTION] [FILE]...\n"
	"or:    md5sum [OPTION] -c [FILE]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint or check MD5 checksums.\n\n"
	"Options:\n"
	"With no FILE, or when FILE is -, read standard input.\n\n"
	"\t-b\tread files in binary mode\n"
	"\t-c\tcheck MD5 sums against given list\n"
	"\t-t\tread files in text mode (default)\n"
	"\t-g\tread a string\n"
	"\nThe following two options are useful only when verifying checksums:\n"
	"\t-s,\tdon't output anything, status code shows success\n"
	"\t-w,\twarn about improperly formated MD5 checksum lines"
#endif
	;
#endif

#if defined BB_MKDIR
const char mkdir_usage[] =
	"mkdir [OPTION] DIRECTORY..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreate the DIRECTORY(ies), if they do not already exist\n\n"
	
	"Options:\n"
	"\t-m\tset permission mode (as in chmod), not rwxrwxrwx - umask\n"
	"\t-p\tno error if existing, make parent directories as needed"
#endif
	;
#endif

#if defined BB_MKFIFO
const char mkfifo_usage[] =
	"mkfifo [OPTIONS] name"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreates a named pipe (identical to 'mknod name p')\n\n"
	"Options:\n"
	"\t-m\tcreate the pipe using the specified mode (default a=rw)"
#endif
	;
#endif

#if defined BB_MKFS_MINIX
const char mkfs_minix_usage[] =
	"mkfs.minix [-c | -l filename] [-nXX] [-iXX] /dev/name [blocks]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nMake a MINIX filesystem.\n\n"
	"Options:\n"
	"\t-c\t\tCheck the device for bad blocks\n"
	"\t-n [14|30]\tSpecify the maximum length of filenames\n"
	"\t-i INODES\tSpecify the number of inodes for the filesystem\n"
	"\t-l FILENAME\tRead the bad blocks list from FILENAME\n"
	"\t-v\t\tMake a Minix version 2 filesystem"
#endif
	;
#endif

#if defined BB_MKNOD
const char mknod_usage[] =
	"mknod [OPTIONS] NAME TYPE MAJOR MINOR"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreate a special file (block, character, or pipe).\n\n"
	"Options:\n"
	"\t-m\tcreate the special file using the specified mode (default a=rw)\n\n"
	"TYPEs include:\n"
	"\tb:\tMake a block (buffered) device.\n"
	"\tc or u:\tMake a character (un-buffered) device.\n"
	"\tp:\tMake a named pipe. MAJOR and MINOR are ignored for named pipes."
#endif
	;
#endif

#if defined BB_MKSWAP
const char mkswap_usage[] =
	"mkswap [-c] [-v0|-v1] device [block-count]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrepare a disk partition to be used as a swap partition.\n\n"
	"Options:\n" "\t-c\t\tCheck for read-ability.\n"
	"\t-v0\t\tMake version 0 swap [max 128 Megs].\n"
	"\t-v1\t\tMake version 1 swap [big!] (default for kernels > 2.1.117).\n"
	"\tblock-count\tNumber of block to use (default is entire partition)."
#endif
	;
#endif

#if defined BB_MKTEMP
const char mktemp_usage[] =
	"mktemp [-q] TEMPLATE"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreates a temporary file with its name based on TEMPLATE.\n"
	"TEMPLATE is any name with six `Xs' (i.e. /tmp/temp.XXXXXX)."
#endif
	;
#endif

#if defined BB_MORE
const char more_usage[] =
	"more [FILE ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nMore is a filter for viewing FILE one screenful at a time."
#endif
	;
#endif

#if defined BB_MOUNT
const char mount_usage[] = 
	"mount [flags] device directory [-o options,more-options]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nMount a filesystem\n\n"
	"Flags:\n" 
	"\t-a:\t\tMount all filesystems in fstab.\n"
#ifdef BB_MTAB
	"\t-f:\t\t\"Fake\" mount. Add entry to mount table but don't mount it.\n"
	"\t-n:\t\tDon't write a mount table entry.\n"
#endif
	"\t-o option:\tOne of many filesystem options, listed below.\n"
	"\t-r:\t\tMount the filesystem read-only.\n"
	"\t-t fs-type:\tSpecify the filesystem type.\n"
	"\t-w:\t\tMount for reading and writing (default).\n"
	"\n"
	"Options for use with the \"-o\" flag:\n"
	"\tasync/sync:\tWrites are asynchronous / synchronous.\n"
	"\tatime/noatime:\tEnable / disable updates to inode access times.\n"
	"\tdev/nodev:\tAllow use of special device files / disallow them.\n"
	"\texec/noexec:\tAllow use of executable files / disallow them.\n"
#if defined BB_FEATURE_MOUNT_LOOP
	"\tloop:\t\tMounts a file via loop device.\n"
#endif
	"\tsuid/nosuid:\tAllow set-user-id-root programs / disallow them.\n"
	"\tremount:\tRe-mount a currently-mounted filesystem, changing its flags.\n"
	"\tro/rw:\t\tMount for read-only / read-write.\n"
	"\nThere are EVEN MORE flags that are specific to each filesystem.\n"
	"You'll have to see the written documentation for those."
#endif
	;
#endif

#if defined BB_MT
const char mt_usage[] =
	"mt [-f device] opcode value"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nControl magnetic tape drive operation\n"
	"\nAvailable Opcodes:\n\n"
	"bsf bsfm bsr bss datacompression drvbuffer eof eom erase\n"
	"fsf fsfm fsr fss load lock mkpart nop offline ras1 ras2\n"
	"ras3 reset retension rew rewoffline seek setblk setdensity\n"
	"setpart tell unload unlock weof wset"
#endif
	;
#endif

#if defined BB_CP_MV
const char mv_usage[] =
	"mv SOURCE DEST\n"
	"   or: mv SOURCE... DIRECTORY"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nRename SOURCE to DEST, or move SOURCE(s) to DIRECTORY."
#endif
	;
#endif

#if defined BB_NC
const char nc_usage[] =
	"nc [-p PORT] IP PORT\n"
	"   or: nc -l -p PORT"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nNetcat opens a pipe to IP:PORT\n"
	"Options:\n"
	"\t-l\tListen on the socket.\n"
	"\t-p PORT\tBind the local port to PORT."
#endif
	;
#endif

#if defined BB_NSLOOKUP
const char nslookup_usage[] =
	"nslookup [HOST]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nQueries the nameserver for the IP address of the given HOST"
#endif
;
#endif

#if defined BB_PING
#if defined BB_FEATURE_SIMPLE_PING
const char ping_usage[] =
	"ping host"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSend ICMP ECHO_REQUEST packets to network hosts"
#endif
	;
#else /* ! defined BB_FEATURE_SIMPLE_PING */
const char ping_usage[] =
	"ping [OPTION]... host"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSend ICMP ECHO_REQUEST packets to network hosts.\n\n"
	"Options:\n"
	"\t-c COUNT\tSend only COUNT pings.\n"
	"\t-s SIZE\t\tSend SIZE data bytes in packets (default=56).\n"
	"\t-q\t\tQuiet mode, only displays output at start\n"
	"\t\t\tand when finished."
#endif
	;
#endif
#endif

#if defined BB_PIVOT_ROOT
const char pivot_root_usage[] =
	"pivot_root new_root put_old"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nMove the current root file system to put_old and make new_root\n"
	"the new root file system."
#endif
	;
#endif

#if defined BB_POWEROFF
const char poweroff_usage[] =
	"poweroff"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nHalt the system and request that the kernel shut off the power."
#endif
	;
#endif

#if defined BB_PRINTF
const char printf_usage[] =
	"printf FORMAT [ARGUMENT...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nFormats and prints ARGUMENT(s) according to FORMAT,\n"
	"Where FORMAT controls the output exactly as in C printf."
#endif
	;
#endif

#if defined BB_PS
const char ps_usage[] =
	"ps"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nReport process status\n"
	"\nThis version of ps accepts no options."
#endif
	;
#endif

#if defined BB_PWD
const char pwd_usage[] =
	"pwd"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint the full filename of the current working directory."
#endif
	;
#endif

#if defined BB_RDATE
const char rdate_usage[] =
	"rdate [OPTION] HOST"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nGet and possibly set the system date and time from a remote HOST.\n"
	"Options:\n"
	"\t-s\tSet the system date and time (default).\n"
	"\t-p\tPrint the date and time."
#endif
	;
#endif

#if defined BB_READLINK
const char readlink_usage[] =
	"readlink"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nRead a symbolic link."
#endif
	;
#endif

#if defined BB_REBOOT
const char reboot_usage[] =
	"reboot"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nReboot the system."
#endif
	;
#endif
	
#if defined BB_RENICE
const char renice_usage[] =
	"renice priority pid [pid ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nChanges priority of running processes. Allowed priorities range\n"
	"from 20 (the process runs only when nothing else is running) to 0\n"
	"(default priority) to -20 (almost nothing else ever gets to run)."
#endif
	;
#endif


#if defined BB_RESET
const char reset_usage[] =
	"reset"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nResets the screen."
#endif
	;
#endif

#if defined BB_RM
const char rm_usage[] =
	"rm [OPTION]... FILE..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nRemove (unlink) the FILE(s).  You may use '--' to\n"
	"indicate that all following arguments are non-options.\n\n"
	"Options:\n"
	"\t-f\t\tremove existing destinations, never prompt\n"
	"\t-r or -R\tremove the contents of directories recursively"
#endif
	;
#endif

#if defined BB_RMDIR
const char rmdir_usage[] =
	"rmdir [OPTION]... DIRECTORY..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nRemove the DIRECTORY(ies), if they are empty."
#endif
	;
#endif

#if defined BB_RMMOD
const char rmmod_usage[] =
	"rmmod [OPTION]... [MODULE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nUnloads the specified kernel modules from the kernel.\n\n"
	"Options:\n" 
	"\t-a\tTry to remove all unused kernel modules."
#endif
	;
#endif

#if defined BB_ROUTE
const char route_usage[] =
	"route [{add|del|flush}]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nEdit the kernel's routing tables"
#endif
	;
#endif

#if defined BB_RPMUNPACK
const char rpmunpack_usage[] =
	"rpmunpack < package.rpm | gunzip | cpio -idmuv"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nExtracts an rpm archive."
#endif
	;
#endif

#if defined BB_SED
const char sed_usage[] =
	"sed [-Vhnef] pattern [files...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\n"
	"-n\t\tsuppress automatic printing of pattern space\n"
	"-e script\tadd the script to the commands to be executed\n"
	"-f scriptfile\tadd the contents of script-file to the commands to be executed\n"
	"-h\t\tdisplay this help message\n"
	"\n"
	"If no -e or -f is given, the first non-option argument is taken as the\n"
	"sed script to interpret. All remaining arguments are names of input\n"
	"files; if no input files are specified, then the standard input is read."
#endif
	;
#endif

#if defined BB_SETKEYCODES
const char setkeycodes_usage[] =
	"setkeycodes SCANCODE KEYCODE ..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSet entries into the kernel's scancode-to-keycode map,\n"
	"allowing unusual keyboards to generate usable keycodes.\n\n" 
	"SCANCODE may be either xx or e0xx (hexadecimal),\n"
	"and KEYCODE is given in decimal"
#endif
	;
#endif

#if defined BB_SH
const char shell_usage[] =
	"sh [FILE]...\n"
	"   or: sh -c command [args]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nlash: The BusyBox command interpreter (shell)."
#endif
	;
#endif

#if defined BB_SLEEP
const char sleep_usage[] =
	"sleep N" 
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPause for N seconds."
#endif
	;
#endif

#if defined BB_SORT
const char sort_usage[] =
	"sort [-n]"
#ifdef BB_FEATURE_SORT_REVERSE
	" [-r]"
#endif
	" [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nSorts lines of text in the specified files"
#endif
	;
#endif

#if defined BB_SWAPONOFF
const char swapoff_usage[] =
	"swapoff [OPTION] [device]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nStop swapping virtual memory pages on the given device.\n\n"
	"Options:\n"
	"\t-a\tStop swapping on all swap devices"
#endif
	;
#endif

#if defined BB_SWAPONOFF
const char swapon_usage[] =
	"swapon [OPTION] [device]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nStart swapping virtual memory pages on the given device.\n\n"
	"Options:\n"
	"\t-a\tStart swapping on all swap devices"
#endif
	;
#endif

#if defined BB_SYNC
const char sync_usage[] =
	"sync"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nWrite all buffered filesystem blocks to disk."
#endif
	;
#endif

#if defined BB_SYSLOGD
const char syslogd_usage[] =
	"syslogd [OPTION]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nLinux system and kernel (provides klogd) logging utility.\n"
	"Note that this version of syslogd/klogd ignores /etc/syslog.conf.\n\n"
	"Options:\n"
	"\t-m NUM\t\tInterval between MARK lines (default=20min, 0=off)\n"
	"\t-n\t\tRun as a foreground process\n"
#ifdef BB_FEATURE_KLOGD
	"\t-K\t\tDo not start up the klogd process\n"
#endif
	"\t-O FILE\t\tUse an alternate log file (default=/var/log/messages)"
#ifdef BB_FEATURE_REMOTE_LOG
	"\n\t-R HOST[:PORT]\t\tLog remotely to IP or hostname on PORT (default PORT=514/UDP)\n"
	"\t-L\t\tLog locally as well as network logging (default is network only)"
#endif
#endif
	;
#endif

#if defined BB_TAIL
const char tail_usage[] =
	"tail [OPTION]... [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint last 10 lines of each FILE to standard output.\n"
	"With more than one FILE, precede each with a header giving the\n"
	"file name. With no FILE, or when FILE is -, read standard input.\n\n"
	"Options:\n"
#ifndef BB_FEATURE_SIMPLE_TAIL
	"\t-c N[kbm]\toutput the last N bytes\n"
#endif
	"\t-n N[kbm]\tprint last N lines instead of last 10\n"
	"\t-f\t\toutput data as the file grows"
#ifndef BB_FEATURE_SIMPLE_TAIL
	"\n\t-q\t\tnever output headers giving file names\n"
	"\t-s SEC\t\twait SEC seconds between reads with -f\n"
	"\t-v\t\talways output headers giving file names\n\n"
	"If the first character of N (bytes or lines) is a `+', output begins with \n"
	"the Nth item from the start of each file, otherwise, print the last N items\n"
	"in the file. N bytes may be suffixed by k (x1024), b (x512), or m (1024^2)."
//#else
//	"\nIf the first character of N (bytes or lines) is a `+', output begins with \n"
//	"the Nth item from the start of each file."
#endif
#endif
	;
#endif

#if defined BB_TAR
const char tar_usage[] =
#ifdef BB_FEATURE_TAR_CREATE
	"tar -[cxtvO] "
#else
	"tar -[xtvO] "
#endif
#if defined BB_FEATURE_TAR_EXCLUDE
	"[--exclude File] "
        "[-X File]"
#endif
	"[-f tarFile] [FILE(s)] ..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCreate, extract, or list files from a tar file.\n\n"
	"Main operation mode:\n"
#ifdef BB_FEATURE_TAR_CREATE
	"\tc\t\tcreate\n"
#endif
	"\tx\t\textract\n"
	"\tt\t\tlist\n"
	"\nFile selection:\n"
	"\tf\t\tname of tarfile or \"-\" for stdin\n"
	"\tO\t\textract to stdout\n"
#if defined BB_FEATURE_TAR_EXCLUDE
	"\texclude\t\tfile to exclude\n"
        "\tX\t\tfile with names to exclude\n"
#endif
	"\nInformative output:\n"
	"\tv\t\tverbosely list files processed"
#endif
	;
#endif

#if defined BB_TEE
const char tee_usage[] =
	"tee [OPTION]... [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nCopy standard input to each FILE, and also to standard output.\n\n"
	"Options:\n" "\t-a\tappend to the given FILEs, do not overwrite"
#endif
	;
#endif

#if defined BB_TELNET
const char telnet_usage[] =
	"telnet host [port]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nTelnet is used to establish interactive communication with another\n"
	"computer over a network using the TELNET protocol."
#endif
	;
#endif

#if defined BB_TEST
const char test_usage[] =
	"test EXPRESSION\n"
	"or   [ EXPRESSION ]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nChecks file types and compares values returning an exit\n"
	"code determined by the value of EXPRESSION."
#endif
	;
#endif

#if defined BB_TOUCH
const char touch_usage[] =
	"touch [-c] file [file ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nUpdate the last-modified date on the given file[s].\n\n"
	"Options:\n"
	"\t-c\tDo not create any files"
#endif
	;
#endif

#if defined BB_TR
const char tr_usage[] =
	"tr [-cds] STRING1 [STRING2]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nTranslate, squeeze, and/or delete characters from\n"
	"standard input, writing to standard output.\n\n"
	"Options:\n"
	"\t-c\ttake complement of STRING1\n"
	"\t-d\tdelete input characters coded STRING1\n"
	"\t-s\tsqueeze multiple output characters of STRING2 into one character"
#endif
	;
#endif

#if defined BB_TRUE_FALSE
const char true_usage[] =
	"true"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nReturn an exit code of TRUE (0)."
#endif
	;
#endif

#if defined BB_TTY
const char tty_usage[] =
	"tty"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint the file name of the terminal connected to standard input.\n\n"
	"Options:\n"
	"\t-s\tprint nothing, only return an exit status"
#endif
	;
#endif

#if defined BB_UMOUNT
const char umount_usage[] =
	"umount [flags] filesystem|directory"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\nUnmount file systems\n"
	"\nFlags:\n" "\t-a:\tUnmount all file systems"
#ifdef BB_MTAB
	" in /etc/mtab\n\t-n:\tDon't erase /etc/mtab entries\n"
#else
	"\n"
#endif
	"\t-r:\tTry to remount devices as read-only if mount is busy"
#if defined BB_FEATURE_MOUNT_FORCE
	"\n\t-f:\tForce filesystem umount (i.e. unreachable NFS server)"
#endif
#if defined BB_FEATURE_MOUNT_LOOP
	"\n\t-l:\tDo not free loop device (if a loop device has been used)"
#endif
#endif
	;
#endif

#if defined BB_UNAME
const char uname_usage[] =
	"uname [OPTION]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint certain system information.  With no OPTION, same as -s.\n\n"
	"Options:\n"
	"\t-a\tprint all information\n"
	"\t-m\tthe machine (hardware) type\n"
	"\t-n\tprint the machine's network node hostname\n"
	"\t-r\tprint the operating system release\n"
	"\t-s\tprint the operating system name\n"

	"\t-p\tprint the host processor type\n"
	"\t-v\tprint the operating system version"
#endif
	;
#endif

#if defined BB_UNIQ
const char uniq_usage[] =
	"uniq [OPTION]... [INPUT [OUTPUT]]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nDiscard all but one of successive identical lines from INPUT\n"
	"(or standard input), writing to OUTPUT (or standard output).\n"
	"Options:\n"
	"\t-c\tprefix lines by the number of occurrences\n"
	"\t-d\tonly print duplicate lines\n"
	"\t-u\tonly print unique lines"
#endif
	;
#endif

#if defined BB_UNIX2DOS
const char unix2dos_usage[] =
	"unix2dos < unixfile > dosfile"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nConverts a text file from unix format to dos format."
#endif
	;
#endif

#if defined BB_UPDATE
const char update_usage[] =
	"update [options]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPeriodically flushes filesystem buffers.\n\n"
	"Options:\n"
	"\t-S\tforce use of sync(2) instead of flushing\n"
	"\t-s SECS\tcall sync this often (default 30)\n"
	"\t-f SECS\tflush some buffers this often (default 5)"
#endif
	;
#endif

#if defined BB_UPTIME
const char uptime_usage[] =
	"uptime"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nDisplay the time since the last boot."
#endif
	;
#endif

#if defined BB_USLEEP
const char usleep_usage[] =
	"usleep N" 
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPause for N microseconds."
#endif
	;
#endif

#if defined BB_UUDECODE
const char uudecode_usage[] =
	"uudecode [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nUudecode a file that is uuencoded.\n\n"
	"Options:\n"
	"\t-o FILE\tdirect output to FILE"
#endif
	;
#endif

#if defined BB_UUENCODE
const char uuencode_usage[] =
	"uuencode [OPTION] [INFILE] REMOTEFILE"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nUuencode a file.\n\n"
	"Options:\n"
	"\t-m\tuse base64 encoding as of RFC1521"
#endif
	;
#endif

#if defined BB_WATCHDOG
const char watchdog_usage[] =
	"watchdog dev\n"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\nPeriodically write to watchdog device \"dev\".\n"
#endif
	;
#endif

#if defined BB_WC
const char wc_usage[] =
	"wc [OPTION]... [FILE]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrint line, word, and byte counts for each FILE, and a total line if\n"
	"more than one FILE is specified.  With no FILE, read standard input.\n\n"
	"Options:\n"
	"\t-c\tprint the byte counts\n"
	"\t-l\tprint the newline counts\n"

	"\t-L\tprint the length of the longest line\n"
	"\t-w\tprint the word counts"
#endif
	;
#endif

#if defined BB_WGET
const char wget_usage[] = "wget [-c] [-O file] url"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nwget retrieves files via HTTP\n\n"
	"Options:\n"
	"\t-c\tcontinue retrieval of aborted transfers\n"
	"\t-O\tsave to filename ('-' for stdout)"
#endif
	;
#endif

#if defined BB_WHICH
const char which_usage[] =
	"which [COMMAND ...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nLocates a COMMAND."
#endif
	;
#endif

#if defined BB_WHOAMI
const char whoami_usage[] =
	"whoami"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nPrints the user name associated with the current effective user id."
#endif
	;
#endif

#if defined BB_XARGS
const char xargs_usage[] = "xargs [COMMAND] [ARGS...]"
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nExecutes COMMAND on every item given by standard input." 
#endif
	;
#endif

#if defined BB_YES
const char yes_usage[] =
	"yes [OPTION]... [STRING]..."
#ifndef BB_FEATURE_TRIVIAL_HELP
	"\n\nRepeatedly outputs a line with all specified STRING(s), or `y'."
#endif
	;
#endif

