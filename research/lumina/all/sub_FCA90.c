__int64 __fastcall sub_FCA90(__int64 a1, __int16 a2)
{
  int v2; // r14d
  int v3; // eax
  int *v4; // rax
  __int64 v5; // rbx
  int v6; // eax
  __int64 *v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rdi
  __int64 **v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 *v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r15
  int v19; // r13d
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rbx
  __int16 v24; // r10
  __int16 v25; // ax
  __int16 v26; // ax
  char v27; // r8
  __int16 v28; // r10
  __int16 v29; // r10
  __int64 v30; // r9
  __int64 v31; // rbx
  __int16 v32; // r11
  char *v33; // r9
  __int16 v34; // si
  __int16 v35; // ax
  __int16 v36; // dx
  __int64 v37; // rcx
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int16 v42; // si
  __int16 v43; // di
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  __int16 v47; // cx
  unsigned __int64 v48; // rax
  __int16 v49; // dx
  __int16 v50; // dx
  __int16 v51; // dx
  __int16 v52; // ax
  __int16 v53; // ax
  unsigned __int64 v54; // rdx
  __int16 v55; // cx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rax
  _DWORD *v62; // rsi
  char v63; // al
  char v64; // cl
  __int16 v65; // dx
  int v66; // eax
  char v67; // al
  __int64 *v68; // rcx
  char v69; // al
  __int64 v70; // rax
  __int64 v71; // rax
  __int16 v72; // [rsp+0h] [rbp-D8h]
  __int64 v73; // [rsp+0h] [rbp-D8h]
  __int16 v74; // [rsp+0h] [rbp-D8h]
  __int16 v75; // [rsp+0h] [rbp-D8h]
  int v77; // [rsp+14h] [rbp-C4h]
  _OWORD *v78; // [rsp+28h] [rbp-B0h]
  __int16 v79; // [rsp+30h] [rbp-A8h]
  __int16 v80; // [rsp+30h] [rbp-A8h]
  __int16 v81; // [rsp+30h] [rbp-A8h]
  __int16 v82; // [rsp+34h] [rbp-A4h]
  __int16 v83; // [rsp+36h] [rbp-A2h]
  __int64 v84; // [rsp+38h] [rbp-A0h]
  char *v85; // [rsp+40h] [rbp-98h]
  int v86; // [rsp+48h] [rbp-90h]
  _OWORD *v87; // [rsp+50h] [rbp-88h]
  __int64 v88; // [rsp+58h] [rbp-80h]
  int v90; // [rsp+64h] [rbp-74h]
  __int64 v91; // [rsp+68h] [rbp-70h]
  __int64 v92; // [rsp+70h] [rbp-68h]
  __int64 *v93; // [rsp+78h] [rbp-60h]
  __int64 *v94; // [rsp+80h] [rbp-58h]
  unsigned __int8 v95; // [rsp+8Bh] [rbp-4Dh]
  _QWORD v97[9]; // [rsp+90h] [rbp-48h] BYREF

  v2 = 1;
  v3 = *(unsigned __int8 *)(a1 + 72);
  v97[1] = __readfsqword(0x28u);
  v95 = v3;
  v90 = v3;
  v93 = *(__int64 **)a1;
  v91 = **(_QWORD **)a1;
  if ( v3 > 1 )
    v2 = 5 * (v3 != 2) + 5;
  v4 = *(int **)(a1 + 16);
  if ( a2 && v4 )
  {
    v5 = *v4;
    v77 = v5;
    v6 = 2 * v5;
  }
  else
  {
    v6 = 0;
    v5 = 0;
    v77 = 0;
  }
  v7 = sub_DBF10(v91, v6 + v2 * 16 * (v90 + 4));
  v94 = v7;
  result = 7;
  if ( v7 )
  {
    v9 = 4LL * v2;
    v10 = &v7[v9];
    v11 = &v7[v9 + v9];
    v87 = v10;
    *(_OWORD *)v10 = 0;
    *((_OWORD *)v10 + 1) = 0;
    v12 = (__int64 **)(v7 + 3);
    v13 = (unsigned int)(2 * v2 - 1);
    v92 = 8LL * v95;
    v14 = (__int64)&v7[4 * v13 + 7];
    v15 = v11;
    do
    {
      *v12 = v15;
      v12 += 4;
      v15 += v95;
    }
    while ( (__int64 **)v14 != v12 );
    v85 = (char *)v11 + v92 * ((int)v13 + 1LL);
    if ( v77 )
    {
      memset((char *)v11 + v92 * ((int)v13 + 1LL), 0, 2 * v5);
      LOWORD(v66) = 48;
      if ( *((_DWORD *)v93 + 50) <= 0x30u )
        v66 = *((_DWORD *)v93 + 50);
      *((_WORD *)v87 + 8) = v66;
      v67 = -1;
      if ( !v90 )
        v67 = v77;
      *((_BYTE *)v87 + 22) = v67;
      v17 = v90;
      if ( v90 )
      {
LABEL_14:
        v18 = (__int64)v94;
        v84 = 0;
        v88 = (unsigned int)(v17 - 1) + 1LL;
        v19 = 1;
        v83 = 0;
        v82 = 0;
        v86 = 0;
LABEL_15:
        if ( !v19 )
          goto LABEL_36;
        v20 = (__int64)v87;
        v21 = (unsigned int)(v19 - 1);
        v19 = 0;
        v78 = &v87[2 * v21 + 2];
        while ( 1 )
        {
          v22 = *(_QWORD *)(a1 + 88);
          if ( !v22 )
            goto LABEL_35;
          do
          {
            v97[0] = 0;
            v23 = *(_QWORD *)v20;
            if ( (~*(_QWORD *)v20 & *(_QWORD *)v22) != 0 )
              goto LABEL_34;
            if ( (*(_QWORD *)(v22 + 8) & v23) != 0 )
              goto LABEL_34;
            v24 = *(_WORD *)(v20 + 16);
            if ( (*(_BYTE *)(v22 + 49) & 0x40) != 0 && v24 <= 2 )
              goto LABEL_34;
            v25 = sub_CB800(*(__int16 *)(v22 + 18), (__int16)(v24 + *(_WORD *)(v22 + 20)));
            v26 = sub_CB800(v25, *(__int16 *)(v20 + 20));
            v29 = *(_WORD *)(v22 + 22) + v28;
            v31 = v30 | v23;
            v32 = v26;
            if ( v27 < 0 )
            {
              v80 = v29;
              v74 = v26;
              v27 = sub_FBF10((__int64 *)a1, *(_DWORD **)(a1 + 16), v20, *(_WORD *)(a1 + 68), v84, v22, 0.0, v97);
              v32 = v74;
              v29 = v80;
              if ( v27 < 0 )
              {
LABEL_45:
                v36 = v32 - 2;
                if ( !v19 )
                {
LABEL_46:
                  v41 = v19++;
LABEL_43:
                  v37 = v18 + 32 * v41;
                  goto LABEL_33;
                }
                goto LABEL_27;
              }
            }
            else
            {
              v97[0] = *(_QWORD *)(v20 + 8);
            }
            if ( v27 >= v77 )
              goto LABEL_45;
            v33 = &v85[2 * v27];
            v34 = *(_WORD *)v33;
            if ( !*(_WORD *)v33 )
            {
              v48 = 100 * (v77 - v27) / v77;
              if ( (unsigned __int64)(int)v48 > 7 )
              {
                _BitScanReverse64(&v54, (int)v48);
                v55 = 60 - (v54 ^ 0x3F);
                v48 = (unsigned __int64)(int)v48 >> v55;
                v50 = 10 * v55 + 30;
              }
              else
              {
                v49 = 40;
                if ( (unsigned __int64)(int)v48 <= 1 )
                  goto LABEL_68;
                while ( 1 )
                {
                  v48 *= 2LL;
                  if ( v48 > 7 )
                    break;
                  v49 -= 10;
                }
                v50 = v49 - 20;
              }
              v34 = word_1BACD0[v48 & 7] + v50;
LABEL_68:
              v34 += a2 - 50;
              v51 = *(_WORD *)(a1 + 68);
              if ( (v51 & 0x4000) != 0 && (v52 = *(_WORD *)(a1 + 70), a2 > v52) )
              {
LABEL_73:
                if ( v52 > 10 )
                {
                  v81 = v29;
                  v75 = v32;
                  v53 = sub_D5CA0(v52);
                  v29 = v81;
                  v32 = v75;
                  v34 += v53;
                }
              }
              else
              {
                if ( (v51 & 0x100) == 0 )
                {
                  v52 = a2;
                  goto LABEL_73;
                }
                if ( a2 > 10 )
                {
                  v52 = a2 - 10;
                  goto LABEL_73;
                }
              }
              *(_WORD *)v33 = v34;
            }
            v79 = v29;
            v72 = v32;
            v35 = sub_CB800(v32, v34);
            v29 = v79;
            v36 = v72;
            v32 = v35 + 5;
            if ( !v19 )
              goto LABEL_46;
LABEL_27:
            v37 = v18;
            do
            {
              if ( *(_QWORD *)v37 == v31 && ((*(_BYTE *)(v37 + 22) ^ v27) & 0x80u) == 0 )
              {
                if ( *(__int16 *)(v37 + 18) < v32
                  || *(_WORD *)(v37 + 18) == v32
                  && (*(__int16 *)(v37 + 16) < v29 || *(_WORD *)(v37 + 16) == v29 && *(__int16 *)(v37 + 20) <= v36) )
                {
                  goto LABEL_34;
                }
LABEL_33:
                v38 = *(void **)(v37 + 24);
                v73 = v37;
                *(_QWORD *)v37 = *(_QWORD *)(v22 + 8) | *(_QWORD *)v20;
                v39 = v97[0];
                *(_WORD *)(v37 + 20) = v36;
                *(_WORD *)(v37 + 16) = v29;
                *(_WORD *)(v37 + 18) = v32;
                *(_BYTE *)(v37 + 22) = v27;
                *(_QWORD *)(v37 + 8) = v39;
                memcpy(v38, *(const void **)(v20 + 24), 8 * v84);
                *(_QWORD *)(*(_QWORD *)(v73 + 24) + 8 * v84) = v22;
                if ( v19 < v2 )
                  goto LABEL_34;
                v42 = *(_WORD *)(v18 + 18);
                v43 = *(_WORD *)(v18 + 16);
                v44 = v18 + 32;
                v82 = v42;
                v83 = v43;
                if ( v2 == 1 )
                {
                  v86 = 0;
                  goto LABEL_34;
                }
                v45 = 0;
                v46 = 1;
                while ( 2 )
                {
                  v47 = *(_WORD *)(v44 + 18);
                  if ( v47 <= v42 )
                  {
                    if ( v47 == v42 && *(__int16 *)(v44 + 20) > v43 )
                    {
                      v43 = *(_WORD *)(v44 + 20);
LABEL_50:
                      v42 = *(_WORD *)(v44 + 18);
                      v45 = v46;
                    }
                    ++v46;
                    v44 += 32;
                    if ( v2 == v46 )
                    {
                      v86 = v45;
                      v82 = v42;
                      v83 = v43;
                      goto LABEL_34;
                    }
                    continue;
                  }
                  break;
                }
                v43 = *(_WORD *)(v44 + 20);
                goto LABEL_50;
              }
              v37 += 32;
            }
            while ( v18 + 32 * ((unsigned int)(v19 - 1) + 1LL) != v37 );
            if ( v2 > v19 )
              goto LABEL_46;
            if ( v32 <= v82 && (v32 != v82 || v36 < v83) )
            {
              v41 = v86;
              goto LABEL_43;
            }
LABEL_34:
            v22 = *(_QWORD *)(v22 + 72);
          }
          while ( v22 );
LABEL_35:
          v20 += 32;
          if ( v78 == (_OWORD *)v20 )
          {
LABEL_36:
            if ( v88 != ++v84 )
            {
              v40 = (__int64)v87;
              v87 = (_OWORD *)v18;
              v18 = v40;
              goto LABEL_15;
            }
            if ( !v19 )
            {
              sub_DBD10((__int64)v93, "no query solution");
              sub_C9250(v91, v94);
              return 1;
            }
            if ( v19 != 1 )
            {
              v56 = v18 + 32;
              v57 = v18 + 32LL * (unsigned int)(v19 - 2) + 64;
              do
              {
                if ( *(_WORD *)(v18 + 18) > *(_WORD *)(v56 + 18) )
                  v18 = v56;
                v56 += 32;
              }
              while ( v57 != v56 );
            }
            v58 = 0;
            v59 = a1 + 876;
            do
            {
              v59 += 112;
              v60 = *(_QWORD *)(*(_QWORD *)(v18 + 24) + 8 * v58++);
              *(_QWORD *)(v59 - 20) = v60;
              v61 = *(unsigned __int8 *)(v60 + 16);
              *(_BYTE *)(v59 - 52) = v61;
              *(_DWORD *)(v59 - 112) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 104 * v61 + 72);
            }
            while ( v90 > (int)v58 );
LABEL_89:
            if ( (*(_WORD *)(a1 + 68) & 0x180) == 0x100
              && !*(_BYTE *)(a1 + 75)
              && a2
              && **(_DWORD **)(a1 + 24) == (char)sub_FBF10(
                                                   (__int64 *)a1,
                                                   *(_DWORD **)(a1 + 24),
                                                   v18,
                                                   128,
                                                   v95 - 1,
                                                   *(_QWORD *)(*(_QWORD *)(v18 + 24) + v92 - 8),
                                                   0.0,
                                                   v97) )
            {
              *(_BYTE *)(a1 + 75) = 2;
            }
            v62 = *(_DWORD **)(a1 + 16);
            v63 = *(_BYTE *)(a1 + 76) & 0xFB;
            *(_BYTE *)(a1 + 76) = v63;
            if ( v62 )
            {
              v64 = *(_BYTE *)(v18 + 22);
              *(_BYTE *)(a1 + 73) = v64;
              v65 = *(_WORD *)(a1 + 68);
              if ( (v65 & 0x80u) != 0 )
              {
                if ( *(char *)(v18 + 22) == *v62 )
                  *(_BYTE *)(a1 + 75) = 2;
                goto LABEL_94;
              }
              *(_QWORD *)(a1 + 112) = *(_QWORD *)(v18 + 8);
              if ( v64 > 0 )
              {
                if ( v90 && v64 == 1 && (v65 & 3) != 0 )
                  *(_BYTE *)(a1 + 76) = v63 | 4;
                goto LABEL_94;
              }
              *(_BYTE *)(a1 + 73) = 0;
              if ( v90 )
              {
                v68 = (__int64 *)(*(_QWORD *)(v18 + 24) + v92 - 8);
                if ( (*(_DWORD *)(*v68 + 48) & 0x1000) == 0 && (*(_DWORD *)(*v68 + 48) & 0x104) != 0x104 )
                {
                  v97[0] = 0;
                  v69 = sub_FBF10((__int64 *)a1, v62, v18, 2048, v95 - 1, *v68, 0.0, v97);
                  v62 = *(_DWORD **)(a1 + 16);
                  if ( *v62 == v69 )
                  {
                    v70 = v97[0];
                    *(_BYTE *)(a1 + 76) |= 4u;
                    *(_QWORD *)(a1 + 112) = v70;
                  }
                  v65 = *(_WORD *)(a1 + 68);
                }
LABEL_94:
                if ( (v65 & 0x200) != 0 && *(char *)(a1 + 73) == *v62 && v90 )
                {
                  v97[0] = 0;
                  if ( **(_DWORD **)(a1 + 16) == (char)sub_FBF10(
                                                         (__int64 *)a1,
                                                         v62,
                                                         v18,
                                                         0,
                                                         v95 - 1,
                                                         *(_QWORD *)(*(_QWORD *)(v18 + 24) + v92 - 8),
                                                         0.0,
                                                         v97) )
                  {
                    v71 = v97[0];
                    *(_BYTE *)(a1 + 76) |= 8u;
                    *(_QWORD *)(a1 + 112) = v71;
                  }
                }
              }
            }
            *(_WORD *)(a1 + 78) = *(_WORD *)(v18 + 16);
            sub_C9250(v91, v94);
            return 0;
          }
        }
      }
    }
    else
    {
      LOWORD(v16) = 48;
      v85 = nullptr;
      if ( *((_DWORD *)v93 + 50) <= 0x30u )
        v16 = *((_DWORD *)v93 + 50);
      *((_WORD *)v87 + 8) = v16;
      v17 = v90;
      if ( v90 )
        goto LABEL_14;
    }
    v18 = (__int64)v87;
    goto LABEL_89;
  }
  return result;
}
