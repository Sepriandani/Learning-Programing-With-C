char takaran,ulang;
int tandon,ABmix,umur;

void selada(void){
    awal:
    printf("Selada memiliki masa panen yaitu 45 - 50 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 700 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=50){
        printf("Nurisi yang dibutuhkan yaitu 840 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.2;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}

void kangkung(void){
    awal:
    printf("Kangkung memiliki masa panen yaitu 28 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 800 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=28){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}

void Bayam(void){
    awal:
    printf("Bayam memiliki masa panen yaitu 25 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 900 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=25){
        printf("Nurisi yang dibutuhkan yaitu 1400 ppm dan pH larutan 6.5 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*7;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}
void pakchoy(void){
    awal:
    printf("pakchoy memiliki masa panen yaitu 40 - 60 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 7.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 700 ppm dan pH larutan 7.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 900 ppm dan pH larutan 7.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=35){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 7.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >35 && umur <=60){
        printf("Nurisi yang dibutuhkan yaitu 1300 ppm dan pH larutan 7.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}
void sawi(void){
    awal:
    printf("sawi memiliki masa panen yaitu 40 - 60 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 700 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 900 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=35){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >35 && umur <=60){
        printf("Nurisi yang dibutuhkan yaitu 1300 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}
void cabai(void){
    awal:
    printf("Cabai memiliki masa panen yaitu 40 -45 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 700 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 900 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=28){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >28 && umur <=45){
        printf("Nurisi yang dibutuhkan yaitu 1400 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*7;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}
void terong(void){
    awal:
    printf("Terong memiliki masa panen yaitu 60 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 700 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 900 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=28){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >28 && umur <=35){
        printf("Nurisi yang dibutuhkan yaitu 1400 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*7;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >35 && umur <=42){
        printf("Nurisi yang dibutuhkan yaitu 1600 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*8;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >42 && umur <=49){
        printf("Nurisi yang dibutuhkan yaitu 1800 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*9;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >49 && umur <=60){
        printf("Nurisi yang dibutuhkan yaitu 2200 ppm dan pH larutan 6.0 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*11;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}
void tomat(void){
    awal:
    printf("Tomat memiliki masa panen yaitu 63 hari\n");
    printf("Masukkan umur sayur saat ini: ");scanf("%d",&umur);
    if(umur <=7){
        printf("Nurisi yang dibutuhkan yaitu 500 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >7 && umur <=14){
        printf("Nurisi yang dibutuhkan yaitu 700 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*3.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >14 && umur <=21){
        printf("Nurisi yang dibutuhkan yaitu 900 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*4.5;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >21 && umur <=28){
        printf("Nurisi yang dibutuhkan yaitu 1200 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*6;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >28 && umur <=35){
        printf("Nurisi yang dibutuhkan yaitu 1400 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*7;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >35 && umur <=42){
        printf("Nurisi yang dibutuhkan yaitu 1600 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*8;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >42 && umur <=49){
        printf("Nurisi yang dibutuhkan yaitu 1800 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*9;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >49 && umur <=56){
        printf("Nurisi yang dibutuhkan yaitu 2200 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*11;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else if(umur >56 && umur <=65){
        printf("Nurisi yang dibutuhkan yaitu 3000 ppm dan pH larutan 6.3 \n");
        printf("Apakah anda ingin menentukan takaran nutrisi AB mix (Y/N)");scanf("%s",&takaran);
        if(takaran=='y' || takaran=='Y'){
            printf("Masukkan besar tandon (Liter): ");scanf("%d",&tandon);
            ABmix=tandon*15;
            printf("Anda membutuhkan %d L air biasa dan %d ml larutan nutrisi AB mix\n\n",tandon,ABmix);
        }
    }
    else{
        printf("Umur tanaman sudah melewati masa panen\n");
    }
    printf("Mau Coba Lagi (Y/N): ");scanf("%s",&ulang);
    if(ulang=='y'||ulang=='Y'){
        goto awal;
    }
}
