/*============================================================================================*/
/* Nama   : Randy                                                                             */
/* Nim    : 02                                                                                */
/* PT     : Matematika Institut Teknologi Kalimantan                                          */
/* Program: Memproyeksikan Graph Menjadi Matrix                                               */
/*============================================================================================*/

#include<stdio.h>
#include<conio.h>
#define max 20

int adj[max][max];
int n;
main() {
    int choice;
    int node, origin, destin;
    create_graph();
    while (1) {
        printf("1.Masukan node\n");
        printf("2.Hapus node\n");
        printf("3.Tampilkan Matrix\n");
        printf("4.Exit\n");
        printf("Pilihan : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            insert_node();
            break;
        case 2:
            printf("Masukan Node Yang Ingin Di Hapus : ");
            fflush(stdin);
            scanf("%d", &node);
            delete_node(node);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Salah Pilih\n");
            break;
        }
    }
    getch();
}

create_graph() {
    int i, max_edges, origin, destin;

    printf("Masukan Total Node : ");
    scanf("%d", &n);
    max_edges = n * (n - 1);

    for (i = 1; i <= max_edges; i++) {
        printf("Masukan Edges %d( 0 0 ) Untuk Keluar : ", i);
        scanf("%d %d", &origin, &destin);
        if ((origin == 0) && (destin == 0))
            break;
        if (origin > n || destin > n || origin <= 0 || destin <= 0) {
            printf("Edge Salah!\n");
            i--;
        } else
            adj[origin][destin] = 1;
    }
}

display() {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%4d", adj[i][j]);
        printf("\n");
    }
}

insert_node() {
    int i;
    n++;
    printf("Node Yang Dimasukan Adalah %d \n", n);
    for (i = 1; i <= n; i++) {
        adj[i][n] = 0;
        adj[n][i] = 0;
    }
}

void delete_node(char u) {
    int i, j;
    if (n == 0) {
        printf("Graf Kosong\n");
        return;
    }
    if (u > n) {
        printf("Node Tersebut Tidak Ada Di Graf\n");
        return;
    }
    for (i = u; i <= n - 1; i++)
        for (j = 1; j <= n; j++) {
            adj[j][i] = adj[j][i + 1];
            adj[i][j] = adj[i + 1][j];
        }
    n--;
}
