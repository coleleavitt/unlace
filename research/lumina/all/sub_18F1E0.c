__int64 __fastcall sub_18F1E0(__int64 *a1, unsigned __int16 *a2, __int64 a3)
{
  int v4; // r12d
  unsigned __int16 *v5; // r8
  unsigned __int64 v6; // rax
  bool v7; // bp
  bool v8; // r13
  bool v9; // dl
  int v10; // r15d
  __int64 v11; // r9
  __int16 v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // r10
  char v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v20; // rsi
  unsigned __int16 v21; // bp
  __int64 v22; // r9
  unsigned __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rsi
  unsigned __int16 *v26; // rdi
  unsigned __int16 v27; // r8
  __int64 v28; // r10
  unsigned int v29; // eax
  int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // ebp
  char v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // r11
  __int64 v36; // rsi
  __int64 v37; // r10
  unsigned int v38; // r8d
  unsigned __int64 v39; // rdx
  __int64 v40; // r11
  __int64 v41; // rsi
  __int64 v42; // r10
  unsigned int v43; // r8d
  unsigned __int64 v44; // rdx
  __int64 v45; // r11
  __int64 v46; // rsi
  __int64 v47; // r9
  char v48; // r8
  unsigned __int64 v49; // rdx
  __int64 v50; // r10
  __int64 v51; // rsi
  __int64 v53; // r9
  __int16 v54; // r10
  unsigned __int64 v55; // rdx
  __int64 v56; // r11
  __int64 v57; // rsi
  char v58; // r9
  __int64 v59; // rbp
  unsigned __int64 v60; // rdx
  __int64 v61; // r10
  __int64 v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // [rsp+0h] [rbp-60h]
  unsigned __int64 v74; // [rsp+0h] [rbp-60h]
  unsigned __int64 v75; // [rsp+0h] [rbp-60h]
  unsigned __int64 v76; // [rsp+0h] [rbp-60h]
  unsigned __int64 v77; // [rsp+0h] [rbp-60h]
  __int64 v78; // [rsp+8h] [rbp-58h]
  unsigned __int64 v79; // [rsp+8h] [rbp-58h]
  unsigned __int64 v80; // [rsp+8h] [rbp-58h]
  unsigned __int64 v81; // [rsp+8h] [rbp-58h]
  unsigned __int64 v82; // [rsp+8h] [rbp-58h]
  char v83; // [rsp+8h] [rbp-58h]
  __int64 v84; // [rsp+10h] [rbp-50h]
  char v85; // [rsp+10h] [rbp-50h]
  __int64 v86; // [rsp+10h] [rbp-50h]
  __int64 v87; // [rsp+10h] [rbp-50h]
  __int64 v88; // [rsp+10h] [rbp-50h]
  __int64 v89; // [rsp+10h] [rbp-50h]
  unsigned __int16 *v90; // [rsp+18h] [rbp-48h]
  __int64 v91; // [rsp+18h] [rbp-48h]
  __int64 v92; // [rsp+18h] [rbp-48h]
  __int64 v93; // [rsp+18h] [rbp-48h]
  __int64 v94; // [rsp+18h] [rbp-48h]
  unsigned __int16 *v95; // [rsp+18h] [rbp-48h]
  __int64 v96; // [rsp+18h] [rbp-48h]
  __int64 v97; // [rsp+18h] [rbp-48h]
  __int64 v98; // [rsp+18h] [rbp-48h]
  __int64 v99; // [rsp+20h] [rbp-40h]
  __int64 v100; // [rsp+20h] [rbp-40h]
  __int64 v101; // [rsp+20h] [rbp-40h]
  __int64 v102; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v103; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v104; // [rsp+20h] [rbp-40h]
  unsigned __int16 *v105; // [rsp+20h] [rbp-40h]

  if ( a2 )
  {
    if ( !a1 )
      return 0;
    v4 = a3;
    a1[1] = 0;
    v5 = a2;
    v6 = a1[2];
    v7 = (int)a3 >= 0;
    v8 = (int)a3 >= 0;
    if ( (int)a3 <= 0 )
    {
      if ( v6 > 0xF )
      {
        v9 = (int)a3 >= 0;
        if ( v4 )
          goto LABEL_6;
        return 1;
      }
      a3 = 16;
    }
    else
    {
      a3 = (int)a3;
      if ( v6 >= (int)a3 )
      {
        v9 = 1;
LABEL_6:
        v10 = 0;
        while ( 1 )
        {
          v21 = *v5;
          if ( !*v5 && v4 < 0 )
            return 1;
          if ( v21 > 0x7Fu )
            break;
LABEL_13:
          v22 = a1[1];
          if ( v22 )
          {
            v23 = v22 + 1;
            v24 = a1[1];
            v25 = *a1;
            --v22;
            if ( a1[2] < v23 )
              goto LABEL_49;
          }
          else
          {
            v25 = *a1;
            v24 = 1;
            v23 = 2;
            if ( (unsigned __int64)a1[2] < 2 )
            {
LABEL_49:
              v90 = v5;
              v84 = v24;
              v78 = v22;
              v73 = v23;
              v63 = sub_1987B0(a1, v25, v23, 1);
              v5 = v90;
              v24 = v84;
              v22 = v78;
              v23 = v73;
              *a1 = v63;
              v25 = v63;
            }
          }
          a1[1] = v23;
          *(_BYTE *)(v25 + v22) = v21;
          *(_BYTE *)(*a1 + v24) = 0;
LABEL_16:
          ++v5;
LABEL_17:
          if ( v4 <= ++v10 && v8 )
            return 1;
          v9 = v8;
        }
        if ( v21 <= 0x7FFu )
        {
          v53 = a1[1];
          v54 = (v21 >> 6) | 0xFFC0;
          if ( v53 )
          {
            v55 = v53 + 1;
            v56 = a1[1];
            v57 = *a1;
            --v53;
            if ( a1[2] >= v55 )
              goto LABEL_45;
LABEL_61:
            v103 = v5;
            v96 = v56;
            v87 = v53;
            v75 = v55;
            v69 = sub_1987B0(a1, v57, v55, 1);
            v5 = v103;
            v56 = v96;
            v53 = v87;
            v55 = v75;
            *a1 = v69;
            v57 = v69;
            LOBYTE(v54) = (v21 >> 6) | 0xC0;
          }
          else
          {
            v57 = *a1;
            v56 = 1;
            v55 = 2;
            if ( (unsigned __int64)a1[2] < 2 )
              goto LABEL_61;
          }
LABEL_45:
          a1[1] = v55;
          *(_BYTE *)(v57 + v53) = v54;
          v58 = v21 & 0x3F | 0x80;
          *(_BYTE *)(*a1 + v56) = 0;
          v59 = a1[1];
          if ( v59 )
          {
            v60 = v59 + 1;
            v61 = a1[1];
            v62 = *a1;
            --v59;
            if ( a1[2] >= v60 )
            {
LABEL_47:
              a1[1] = v60;
              *(_BYTE *)(v62 + v59) = v58;
              *(_BYTE *)(*a1 + v61) = 0;
              goto LABEL_16;
            }
          }
          else
          {
            v62 = *a1;
            v61 = 1;
            v60 = 2;
            if ( (unsigned __int64)a1[2] >= 2 )
              goto LABEL_47;
          }
          v95 = v5;
          v86 = v61;
          v83 = v58;
          v74 = v60;
          v68 = sub_1987B0(a1, v62, v60, 1);
          v5 = v95;
          v61 = v86;
          *a1 = v68;
          v58 = v83;
          v62 = v68;
          v60 = v74;
          goto LABEL_47;
        }
        if ( (unsigned int)v21 - 55296 <= 0x3FF )
        {
          if ( v4 <= ++v10 && v9 )
            return 0;
          v26 = v5 + 2;
          v27 = v5[1];
          if ( !v27 && v4 < 0 )
            return 0;
          if ( (unsigned int)v27 - 56320 > 0x3FF )
            return 0;
          v28 = a1[1];
          v29 = ((v21 << 10) & 0xFFC00) + 0x10000;
          v30 = v29 | v27 & 0x3FF;
          v31 = v29 >> 18;
          v32 = v30;
          v33 = v31 | 0xF0;
          if ( v28 )
          {
            v34 = v28 + 1;
            v35 = a1[1];
            v36 = *a1;
            --v28;
            if ( a1[2] >= v34 )
              goto LABEL_32;
LABEL_57:
            v102 = v28;
            v94 = v35;
            v85 = v31 | 0xF0;
            v82 = v34;
            v67 = sub_1987B0(a1, v36, v34, 1);
            v28 = v102;
            v35 = v94;
            *a1 = v67;
            v33 = v85;
            v36 = v67;
            v34 = v82;
          }
          else
          {
            v36 = *a1;
            v35 = 1;
            v34 = 2;
            if ( (unsigned __int64)a1[2] < 2 )
              goto LABEL_57;
          }
LABEL_32:
          a1[1] = v34;
          *(_BYTE *)(v36 + v28) = v33;
          *(_BYTE *)(*a1 + v35) = 0;
          v37 = a1[1];
          v38 = (v32 >> 12) & 0x3F | 0xFFFFFF80;
          if ( v37 )
          {
            v39 = v37 + 1;
            v40 = a1[1];
            v41 = *a1;
            --v37;
            if ( a1[2] >= v39 )
              goto LABEL_34;
LABEL_55:
            v101 = v37;
            v93 = v40;
            v81 = v39;
            v66 = sub_1987B0(a1, v41, v39, 1);
            v37 = v101;
            v40 = v93;
            *a1 = v66;
            LOBYTE(v38) = (v32 >> 12) & 0x3F | 0x80;
            v41 = v66;
            v39 = v81;
          }
          else
          {
            v41 = *a1;
            v40 = 1;
            v39 = 2;
            if ( (unsigned __int64)a1[2] < 2 )
              goto LABEL_55;
          }
LABEL_34:
          a1[1] = v39;
          *(_BYTE *)(v41 + v37) = v38;
          *(_BYTE *)(*a1 + v40) = 0;
          v42 = a1[1];
          v43 = (v32 >> 6) & 0x3F | 0xFFFFFF80;
          if ( v42 )
          {
            v44 = v42 + 1;
            v45 = a1[1];
            v46 = *a1;
            --v42;
            if ( a1[2] >= v44 )
              goto LABEL_36;
LABEL_53:
            v100 = v45;
            v92 = v42;
            v80 = v44;
            v65 = sub_1987B0(a1, v46, v44, 1);
            v45 = v100;
            v42 = v92;
            *a1 = v65;
            LOBYTE(v43) = (v32 >> 6) & 0x3F | 0x80;
            v46 = v65;
            v44 = v80;
          }
          else
          {
            v46 = *a1;
            v45 = 1;
            v44 = 2;
            if ( (unsigned __int64)a1[2] < 2 )
              goto LABEL_53;
          }
LABEL_36:
          a1[1] = v44;
          *(_BYTE *)(v46 + v42) = v43;
          *(_BYTE *)(*a1 + v45) = 0;
          v47 = a1[1];
          v48 = v32 & 0x3F | 0x80;
          if ( v47 )
          {
            v49 = v47 + 1;
            v50 = a1[1];
            v51 = *a1;
            --v47;
            if ( a1[2] >= v49 )
            {
LABEL_38:
              a1[1] = v49;
              *(_BYTE *)(v51 + v47) = v48;
              v5 = v26;
              *(_BYTE *)(*a1 + v50) = 0;
              goto LABEL_17;
            }
          }
          else
          {
            v51 = *a1;
            v50 = 1;
            v49 = 2;
            if ( (unsigned __int64)a1[2] >= 2 )
              goto LABEL_38;
          }
          v99 = v50;
          v91 = v47;
          v79 = v49;
          v64 = sub_1987B0(a1, v51, v49, 1);
          v50 = v99;
          v47 = v91;
          *a1 = v64;
          v48 = v32 & 0x3F | 0x80;
          v51 = v64;
          v49 = v79;
          goto LABEL_38;
        }
        if ( (unsigned int)v21 - 56320 <= 0x3FF )
          return 0;
        v11 = a1[1];
        v12 = (v21 >> 12) | 0xFFE0;
        if ( v11 )
        {
          v13 = v11 + 1;
          v14 = a1[1];
          v15 = *a1;
          --v11;
          if ( a1[2] >= v13 )
            goto LABEL_10;
        }
        else
        {
          v15 = *a1;
          v14 = 1;
          v13 = 2;
          if ( (unsigned __int64)a1[2] >= 2 )
            goto LABEL_10;
        }
        v105 = v5;
        v98 = v14;
        v89 = v11;
        v77 = v13;
        v71 = sub_1987B0(a1, v15, v13, 1);
        v5 = v105;
        v14 = v98;
        v11 = v89;
        v13 = v77;
        *a1 = v71;
        v15 = v71;
        LOBYTE(v12) = (v21 >> 12) | 0xE0;
LABEL_10:
        a1[1] = v13;
        *(_BYTE *)(v15 + v11) = v12;
        *(_BYTE *)(*a1 + v14) = 0;
        v16 = a1[1];
        v17 = (v21 >> 6) & 0x3F | 0x80;
        if ( v16 )
        {
          v18 = v16 + 1;
          v19 = a1[1];
          v20 = *a1;
          --v16;
          if ( a1[2] >= v18 )
          {
LABEL_12:
            a1[1] = v18;
            *(_BYTE *)(v20 + v16) = v17;
            LOBYTE(v21) = v21 & 0x3F | 0x80;
            *(_BYTE *)(*a1 + v19) = 0;
            goto LABEL_13;
          }
        }
        else
        {
          v20 = *a1;
          v19 = 1;
          v18 = 2;
          if ( (unsigned __int64)a1[2] >= 2 )
            goto LABEL_12;
        }
        v104 = v5;
        v97 = v19;
        v88 = v16;
        v76 = v18;
        v70 = sub_1987B0(a1, v20, v18, 1);
        v5 = v104;
        v19 = v97;
        v16 = v88;
        v18 = v76;
        *a1 = v70;
        v20 = v70;
        v17 = (v21 >> 6) & 0x3F | 0x80;
        goto LABEL_12;
      }
    }
    v72 = sub_1987B0(a1, *a1, a3, 1);
    v5 = a2;
    v9 = v7;
    *a1 = v72;
    if ( v4 )
      goto LABEL_6;
    return 1;
  }
  return 0;
}
