void handleInsert(LinkedList *list) {
  char *name = (char *)malloc(STRING_MAX * sizeof(char));
  int num_lines, runtime, memory_usage, num_char;
  Node *new_node, *curr_node, *prev_node;
  printf("\nNumber of characters in file name: ");
  readInputNumber(&num_char);
  printf("File name: ");
  readInputString(name, STRING_MAX);
  printf("Number of lines in CSV file: ");
  readInputNumber(&num_lines);
  printf("Experiment runtime (ms): ");
  readInputNumber(&runtime);
  printf("Experiment memory usage (B): ");
  readInputNumber(&memory_usage);

  new_node = (Node *)malloc(sizeof(Node));
  curr_node = (Node *)malloc(sizeof(Node));
  new_node->name = (char *)malloc((strlen(name) + 1) * sizeof(char));
  strcpy(new_node->name, name);

  new_node->lines = num_lines;
  new_node->runtime = runtime;
  new_node->memory_usage = memory_usage;
  new_node->next = NULL;

  if (list->head == NULL) {
    list->head = new_node;
  } else {
    curr_node = list->head;
    prev_node = (Node *)malloc(sizeof(Node));
    prev_node = NULL;

    while (curr_node != NULL) {
      if (strcmp(curr_node->name, new_node->name) == 0) {
        printf("\nAn entry with that file name already exists.\n");
        free(new_node);
        return;
      }
      curr_node = curr_node->next;
    }
    curr_node = list->head;
    bool chk = false;
    while (curr_node != NULL) {
      if (strcmp(curr_node->name, new_node->name) < 0) {
        if (prev_node == NULL) {
          prev_node = list->head;
          curr_node = curr_node->next;
        } else {
          prev_node = prev_node->next;
          curr_node = curr_node->next;
        }
      } else {
        if (curr_node == list->head) {
          chk = true;
          new_node->next = list->head;
          list->head = new_node;
        } else {
          chk = true;
          new_node->next = prev_node->next;
          prev_node->next = new_node;
        }
      }
    }
  if (!chk)
  {
    prev_node->next = new_node;
    new_node->next = NULL;
  }
}
}

void handleDelete(LinkedList *list) {
  char *name = (char *)malloc(STRING_MAX * sizeof(char));
  Node *curr_node, *prev_node;
  
curr_node = (Node *)malloc(sizeof(Node));
  prev_node = (Node *)malloc(sizeof(Node));
  
  printf("\nEnter file name to delete: ");
  readInputString(name, STRING_MAX);

  curr_node = list->head;
  prev_node = NULL;

  
  while (curr_node != NULL) {
    if (strcmp(curr_node->name, name) == 0) {
      if (prev_node == NULL) {
        list->head = curr_node->next;
      } else {
        prev_node->next = curr_node->next;
      }
      free(curr_node->name);
      free(curr_node);
      
      printf("Deleting entry for CSV file <%s>\n", name);
      return;
    }
    prev_node = curr_node;
    curr_node = curr_node->next;
  }

  printf("An entry for file <%s> does not exist.\n", name);
  free(name);
}

void handleSearch(LinkedList *list) {
  char *name = (char *)malloc(STRING_MAX * sizeof(char));
  Node *curr_node = (Node *)malloc(sizeof(Node));
  
  int found = 0;
  int tp;

  printf("\nEnter file name to find: ");
  readInputString(name, STRING_MAX);
  
  
      curr_node = list->head;

  
  while (curr_node != NULL) {
    if (strcmp(curr_node->name, name) == 0) {
      printf("File <%s>\n", curr_node->name);
      printf("Lines: %d\n", curr_node->lines);
      printf("Runtime (ms): %d\n", curr_node->runtime);
      printf("Memory usage (B): %d\n", curr_node->memory_usage);
      printf("Throughput: %.2f\n",
             (curr_node->lines) * 1000.00 / curr_node->runtime);
      found = 1;
      break;
    }
    curr_node = curr_node->next;
  }

  if (!found) {
    printf("An entry for file <%s> does not exist.\n", name);
  }
  free(name);
}

void handlePrint(LinkedList *list) {
  Node *curr_node = (Node *)malloc(sizeof(Node));
        curr_node = list->head;
  

  if (curr_node == NULL) {
    printf("\nData entries:\n");
    printf("There are no data entries.\n");
  } else {
    printf("\nData entries:\n");
    while (curr_node != NULL) {
      printf("\nFile <%s>\n", curr_node->name);
      printf("Lines: %d\n", curr_node->lines);
      printf("Runtime (ms): %d\n", curr_node->runtime);
      printf("Memory usage (B): %d\n", curr_node->memory_usage);
      printf("Throughput: %.2f\n",
             (curr_node->lines) * 1000.00 / curr_node->runtime);
      curr_node = curr_node->next;
    }
  }
}

void handleQuit(LinkedList *list) {
  Node *curr_node = (Node *)malloc(sizeof(Node));
        curr_node = list->head;

  while (curr_node != NULL) {
    printf("Deleting entry for CSV file <%s>\n", curr_node->name);
    free(curr_node->name);
    free(curr_node);
    curr_node = curr_node->next;
  }
}
