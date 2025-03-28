#include "football.h"
#include <stdio.h>
int mod_score(int total, int score_type){
        return (total - (total % score_type)) / score_type;
}
int count_combinations(int points){
    int i, j, k, l, m, score, td2p, tdfp, tdp, fgp, sftp, td2 = 8, tdf = 7, td = 6, fg = 3, sft = 2;
    score = points; int returnNum = 0;
    int temp_score[5];
    for(i = 0; i <= mod_score(score, td2); i++){
        temp_score[0] = score;
        td2p = (mod_score(temp_score[0], td2) - i);
        temp_score[0] -= td2 * td2p;
        for(j = 0; j <= mod_score(temp_score[0], tdf); j++){
            temp_score[1] = temp_score[0];
            tdfp = (mod_score(temp_score[1], tdf) - j);
            temp_score[1] -= tdf * tdfp;
            for(k = 0; k <= mod_score(temp_score[1], td); k++){
                temp_score[2] = temp_score[1];
                tdp = (mod_score(temp_score[2], td) - k);
                temp_score[2] -= td * tdp;
                for(l = 0; l <= mod_score(temp_score[2], fg); l++){
                    temp_score[3] = temp_score[2];
                    fgp = (mod_score(temp_score[3], fg) - l);
                    temp_score[3] -= fg * fgp;
                    for(m = 0; m <= mod_score(temp_score[3], sft); m++){
                        temp_score[4] = temp_score[3];
                        sftp = (mod_score(temp_score[4], sft) - m);
                        temp_score[4] -= sft * sftp;
                        if(temp_score[4] == 0){returnNum++;}
                    }
                }
            }
        }
    }
    return returnNum;
}
void print_combinations(int points){
    int i, j, k, l, m, score, td2p, tdfp, tdp, fgp, sftp, td2 = 8, tdf = 7, td = 6, fg = 3, sft = 2;
    score = points;
    int temp_score[5];
    for(i = 0; i <= mod_score(score, td2); i++){
        temp_score[0] = score;
        td2p = (mod_score(temp_score[0], td2) - i);
        temp_score[0] -= td2 * td2p;
        for(j = 0; j <= mod_score(temp_score[0], tdf); j++){
            temp_score[1] = temp_score[0];
            tdfp = (mod_score(temp_score[1], tdf) - j);
            temp_score[1] -= tdf * tdfp;
            for(k = 0; k <= mod_score(temp_score[1], td); k++){
                temp_score[2] = temp_score[1];
                tdp = (mod_score(temp_score[2], td) - k);
                temp_score[2] -= td * tdp;
                for(l = 0; l <= mod_score(temp_score[2], fg); l++){
                    temp_score[3] = temp_score[2];
                    fgp = (mod_score(temp_score[3], fg) - l);
                    temp_score[3] -= fg * fgp;
                    for(m = 0; m <= mod_score(temp_score[3], sft); m++){
                        temp_score[4] = temp_score[3];
                        sftp = (mod_score(temp_score[4], sft) - m);
                        temp_score[4] -= sft * sftp;
                        if(temp_score[4] == 0){ 
                            printf("%d:TD+2, %d:TD+FG %d:TD+ %d:FG %d:Safety \n", td2p, tdfp, tdp, fgp, sftp);
                        }
                    }
                }
            }
        }
    }
}
