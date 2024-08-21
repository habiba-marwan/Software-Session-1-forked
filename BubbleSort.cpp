int number = 4;
int boxes[number];
for (int i = 0; i < number - 1; i++)
        for (int j = 0; j < number - 1 - i; j++)
            if (boxes[j] > boxes[j + 1])
            {
                int hold = boxes[j];
                boxes[j] = boxes[j + 1];
                boxes[j + 1] = hold;
            }
