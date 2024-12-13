#include "../include/common.h"
#include <getopt.h>

static void welcome() {
  printf("Welcome to riscv32e-NPC!\n");
  printf("For help, type \"help\"\n");
}

static char *img_file = NULL;
static char *diff_so_file = NULL;

extern uint8_t mem[CONFIG_MSIZE];//mem

static long load_img() {
  if(img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }
	FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) {
		printf("Can not open '%s'\n", img_file);
		assert(0);
	}

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);

//testim	for (int i = 0; i < size; i++) {printf("%x", mem[i]);}
	assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
		{"img"      , required_argument, NULL, 'i'},
    {"diff"     , required_argument, NULL, 'd'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhd:i:", table, NULL)) != -1) {
    switch (o) {
			case 'b': sdb_set_batch_mode(); break;
      case 'i': img_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
				printf("\t-b,--batch              run with batch mode\n");
        printf("\t-i,--img=FILE           load img file\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

	/* Initialize memory. */
  init_mem();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize the simple debugger. */
  init_sdb();

	/* Display welcome message. */
  welcome();
}

