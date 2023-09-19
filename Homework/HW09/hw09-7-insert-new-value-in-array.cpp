/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/#include <stdio.h>

int main() {
    int oldArray[] = {9, 2, 6, 1, 7};
    int N, i, j, temp;

    printf("Enter new element of Array:\n");
    scanf("%d", &N);

    int newArray[N + 5]; // เพิ่มขนาดของอาเรย์ให้มากกว่าพอสำหรับ N จำนวน

    printf("Input:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &newArray[i]);
    }

    // นำค่าจาก oldArray และ newArray มาผสมเข้าด้วยกัน
    for (i = 0; i < 5; i++) {
        newArray[N + i] = oldArray[i];
    }

    // ใช้การเรียงแบบ Bubble Sort เพื่อจัดเรียงอาเรย์ newArray
    for (i = 0; i < N + 5 - 1; i++) {
        for (j = 0; j < N + 5 - 1 - i; j++) {
            if (newArray[j] > newArray[j + 1]) {
                // สลับค่า
                temp = newArray[j];
                newArray[j] = newArray[j + 1];
                newArray[j + 1] = temp;
            }
        }
    }

    printf("Old Array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", oldArray[i]);
    }

    printf("\nNew Array: ");
    for (i = 0; i < N + 5; i++) {
        printf("%d ", newArray[i]);
    }

    return 0;
}
