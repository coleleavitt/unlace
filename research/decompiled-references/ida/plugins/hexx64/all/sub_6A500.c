char __fastcall sub_6A500(unsigned int *a1, _UNKNOWN ***a2, __m128 si128)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // r8
  int v10; // r9d
  bool v11; // zf
  int v12; // eax
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rax
  char v16; // r15
  __int64 v17; // r12
  __int64 v18; // rdx
  char v19; // al
  int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  char v24; // al
  _UNKNOWN ***v26; // rdi
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rax
  unsigned __int64 *v30; // rax
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  int *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rax
  _DWORD *v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int *v48; // rax
  __int64 v49; // rax
  int v50; // eax
  int v51; // edx
  unsigned int v52; // eax
  void *v53; // r14
  __int64 v54; // rdx
  unsigned __int64 v55; // rbp
  __int64 v56; // rdi
  int v57; // ebp
  unsigned int *v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rbp
  __int64 v63; // rsi
  unsigned int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  int v69; // eax
  char v70; // al
  __int64 v71; // rax
  void *v72; // rax
  int *v73; // rax
  int v74; // eax
  int *v75; // rax
  int v76; // eax
  _QWORD *v77; // rdi
  unsigned __int64 v78; // rax
  _QWORD *v79; // rdi
  unsigned __int64 v80; // rax
  _QWORD *v81; // r14
  _QWORD *v82; // rdi
  _QWORD *v83; // r14
  _QWORD *v84; // rdi
  __int64 v85; // rdx
  _QWORD *v86; // rbx
  __int64 (__fastcall *v87)(_QWORD *, double); // rax
  __int64 v88; // rbp
  __int64 v89; // rdi
  __int64 v90; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  char v92; // [rsp+23h] [rbp-85h]
  unsigned int v93; // [rsp+24h] [rbp-84h]
  __int64 v94; // [rsp+28h] [rbp-80h]
  __int64 v95; // [rsp+30h] [rbp-78h]
  bool v96; // [rsp+3Fh] [rbp-69h]
  _UNKNOWN **v97; // [rsp+40h] [rbp-68h] BYREF
  int v98; // [rsp+48h] [rbp-60h]
  _UNKNOWN ***v99; // [rsp+50h] [rbp-58h] BYREF
  __int128 v100; // [rsp+58h] [rbp-50h]
  unsigned __int64 v101; // [rsp+68h] [rbp-40h]

  v101 = __readfsqword(0x28u);
  v92 = sub_69F70((__int64)a1);
  v5 = *a1;
  if ( (v5 & 0x400) != 0 )
  {
    v6 = a1[16];
    do
    {
      BYTE1(v5) &= ~4u;
      *a1 = v5;
      if ( (int)(v6 - 1) <= 1 )
        break;
      v7 = 1;
      do
      {
        v8 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL * v7);
        if ( (unsigned int)sub_A8320(v8) )
        {
          v11 = *(_QWORD *)(v8 + 48) == 0;
          v92 = 1;
          if ( v11 )
          {
            v7 = 1;
            sub_69F70((__int64)a1);
            goto LABEL_29;
          }
        }
        v95 = *(_QWORD *)(v8 + 376);
        if ( (_DWORD)v95 != 1
          || (v12 = *(_DWORD *)(v8 + 76), v12 == 5)
          || (v99 = nullptr, v100 = 0, !(v96 = v12 != 1 && v12 != 6)) )
        {
          ++v7;
          goto LABEL_29;
        }
        v13 = v8;
        v14 = 0;
        v15 = nullptr;
        v16 = 0;
        v17 = 0;
        while ( 1 )
        {
          v18 = (__int64)&v15[v14];
          v4 = *(unsigned int *)(v13 + 72);
          if ( (_DWORD *)v18 != v15 )
          {
            while ( (_DWORD)v4 != *v15 )
            {
              if ( (_DWORD *)v18 == ++v15 )
                goto LABEL_16;
            }
            if ( (_DWORD *)v18 != v15 )
              break;
          }
LABEL_16:
          if ( v14 && *(_DWORD *)(v13 + 352) != 1 )
            break;
          if ( v16 && *(int *)(v13 + 376) > 1 )
            break;
          a2 = (_UNKNOWN ***)v13;
          v19 = sub_655B0(v8, v13, v18, v4, v9, v10);
          v14 = v100;
          if ( !v19 )
            break;
          v20 = *(_DWORD *)(v13 + 72);
          a2 = v99;
          if ( *((_QWORD *)&v100 + 1) < (unsigned __int64)(v100 + 1) )
          {
            v99 = (_UNKNOWN ***)qvector_reserve((__int64)&v99, (__int64)v99, v100 + 1, 4);
            v14 = v100;
            a2 = v99;
          }
          *((_DWORD *)a2 + v14) = v20;
          v11 = *(_DWORD *)(v13 + 76) == 3;
          v14 = v100 + 1;
          *(_QWORD *)&v100 = v100 + 1;
          if ( !v11
            || *(_DWORD *)(v13 + 376) != 1
            || (v4 = *(unsigned int *)(v13 + 72),
                v21 = **(int **)(v13 + 368),
                v16 |= (_DWORD)v4 + 1 != (_DWORD)v21,
                v22 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8 * v21),
                v23 = *(_DWORD *)(v22 + 76),
                v23 == 1)
            || v23 == 6 )
          {
            v17 = v13;
            break;
          }
          v17 = v13;
          v15 = v99;
          v13 = v22;
        }
        if ( v14 > 1 )
        {
          v27 = *(unsigned __int64 **)(v8 + 424);
          if ( !v27 )
            goto LABEL_125;
          v28 = *v27;
          if ( !*(_QWORD *)(v8 + 432) )
          {
            *v27 = *v27 & 3 | (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
            v29 = *(_QWORD *)(v8 + 424);
            si128 = (__m128)_mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
            *(__m128 *)(v29 + 8) = si128;
            **(_QWORD **)(v8 + 424) &= ~1uLL;
            **(_QWORD **)(v8 + 424) |= 2uLL;
            goto LABEL_41;
          }
          v83 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (*(_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            goto LABEL_124;
          v84 = (_QWORD *)v83[1];
          if ( (*(_BYTE *)v84 & 2) != 0 )
          {
            v77 = (_QWORD *)v83[2];
            if ( (*(_BYTE *)v77 & 2) != 0 )
              goto LABEL_142;
          }
          else
          {
            sub_65F60(v84);
            v77 = (_QWORD *)v83[2];
            if ( (*(_BYTE *)v77 & 2) != 0 )
            {
              if ( (*(_BYTE *)v83 & 2) == 0 )
              {
LABEL_142:
                sub_312B80((__int64)(v83 + 5));
                *v83 |= 2uLL;
              }
LABEL_121:
              if ( v28 > 3 )
                qfree(v28 & 0xFFFFFFFFFFFFFFFCLL);
              v27 = *(unsigned __int64 **)(v8 + 424);
              v28 = *v27;
LABEL_124:
              *v27 = v28 & 3 | (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFFCLL;
              v78 = *(_QWORD *)(v8 + 424);
              si128 = (__m128)_mm_unpacklo_epi64((__m128i)v78, (__m128i)v78);
              *(__m128 *)(v78 + 8) = si128;
              **(_QWORD **)(v8 + 424) &= ~1uLL;
              **(_QWORD **)(v8 + 424) |= 2uLL;
LABEL_125:
              *(_QWORD *)(v8 + 432) = 0;
LABEL_41:
              v30 = *(unsigned __int64 **)(v8 + 456);
              *(_BYTE *)(v8 + 440) = 1;
              if ( !v30 )
                goto LABEL_132;
              v31 = *v30;
              if ( !*(_QWORD *)(v8 + 464) )
              {
                *v30 = *v30 & 3 | (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL;
                v32 = *(_QWORD *)(v8 + 456);
                si128 = (__m128)_mm_unpacklo_epi64((__m128i)v32, (__m128i)v32);
                *(__m128 *)(v32 + 8) = si128;
                **(_QWORD **)(v8 + 456) &= ~1uLL;
                **(_QWORD **)(v8 + 456) |= 2uLL;
LABEL_44:
                v33 = *(_QWORD *)(v8 + 64);
                *(_BYTE *)(v8 + 472) = 1;
                v92 = 0;
                *(_DWORD *)(v33 + 4) &= ~8u;
                v34 = *(int **)(v8 + 368);
                v94 = -1;
                v35 = *v34;
                v36 = *((_QWORD *)a1 + 66);
                v93 = -1;
                v37 = *(_QWORD *)(v36 + 8 * v35);
                if ( !v37 )
                {
LABEL_88:
                  v71 = *(_QWORD *)(v8 + 48);
                  if ( v71 )
                  {
                    if ( (*(_BYTE *)(v71 + 4) & 0x40) != 0 )
                    {
                      v4 = *(_QWORD *)(v8 + 56);
                      if ( *(_DWORD *)v4 == 55 && v4 == *(_QWORD *)(v71 + 8) )
                      {
                        v85 = *(_QWORD *)(v71 + 24) + 1LL;
                        if ( v85 == *(_QWORD *)(v4 + 24) )
                          *(_QWORD *)(v71 + 24) = v85;
                      }
                    }
                  }
                  if ( v92 )
                  {
                    sub_69F70((__int64)a1);
                    v26 = v99;
                    v7 = v95;
                  }
                  else
                  {
                    v26 = v99;
                    v7 = v95;
                    v92 = v96;
                  }
                  goto LABEL_36;
                }
                while ( 2 )
                {
                  if ( *(int *)(v37 + 352) > 1 )
                    goto LABEL_88;
                  v38 = *(_QWORD *)(v37 + 376);
                  if ( (_DWORD)v38 == 1 )
                  {
                    v39 = *(_DWORD **)(v8 + 56);
                    v35 = **(int **)(v37 + 368);
                    v90 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8 * v35);
                    if ( v39 && *v39 == 55 )
                      goto LABEL_51;
                  }
                  else
                  {
                    if ( v17 != v37 )
                    {
                      if ( !under_debugger )
                        sub_383060(0xCB3Bu, *(double *)si128.m128_u64);
                      goto LABEL_165;
                    }
                    v39 = *(_DWORD **)(v8 + 56);
                    if ( (int)v38 > 0 )
                    {
                      v35 = **(int **)(v17 + 368);
                      v90 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8 * v35);
                      if ( v39 )
                      {
                        if ( *v39 == 55 )
                          goto LABEL_51;
LABEL_163:
                        v73 = *(int **)(v37 + 56);
                        if ( v73 )
                        {
LABEL_102:
                          v74 = *v73;
                          v35 = (unsigned int)(v74 - 54);
                          if ( (unsigned int)v35 > 1 && v74 != 58 )
                            goto LABEL_104;
LABEL_53:
                          v40 = v37;
                          if ( !(unsigned __int8)sub_655B0(v8, v37, v35, v4, v9, v10) )
                          {
                            if ( !under_debugger )
                              sub_383060(0xCDF8u, *(double *)si128.m128_u64);
                            goto LABEL_165;
                          }
                          v42 = *(_QWORD *)(v8 + 320);
                          if ( v42 < *(_QWORD *)(v37 + 320) )
                            v42 = *(_QWORD *)(v37 + 320);
                          *(_QWORD *)(v8 + 320) = v42;
                          v43 = *(_QWORD *)(v8 + 328);
                          if ( v43 > *(_QWORD *)(v37 + 328) )
                            v43 = *(_QWORD *)(v37 + 328);
                          *(_QWORD *)(v8 + 328) = v43;
                          v44 = *(_QWORD *)(v8 + 336);
                          if ( v44 > *(_QWORD *)(v37 + 336) )
                            v44 = *(_QWORD *)(v37 + 336);
                          *(_QWORD *)(v8 + 336) = v44;
                          if ( *(_QWORD *)(v8 + 512) == *(_QWORD *)(v37 + 512) )
                          {
                            v45 = *(_QWORD *)(v8 + 520);
                            if ( v45 > *(_QWORD *)(v37 + 520) )
                              v45 = *(_QWORD *)(v37 + 520);
                            *(_QWORD *)(v8 + 520) = v45;
                          }
                          v46 = *(_QWORD *)(v8 + 56);
                          v47 = *(_QWORD *)(v37 + 48);
                          if ( v46 )
                            *(_QWORD *)(v46 + 8) = v47;
                          else
                            *(_QWORD *)(v8 + 48) = v47;
                          v48 = *(unsigned int **)(v37 + 48);
                          if ( v48 )
                          {
                            v40 = *v48;
                            *((_QWORD *)v48 + 2) = *(_QWORD *)(v8 + 56);
                            v49 = *(_QWORD *)(v37 + 56);
                            *(_QWORD *)(v8 + 56) = v49;
                            if ( *(_DWORD *)v49 == 55 )
                              v94 = *(_QWORD *)(v49 + 24);
                            if ( *(_QWORD *)(v8 + 40) == *(_QWORD *)(v37 + 32) && (*(_BYTE *)(v37 + 24) & 2) == 0 )
                              *(_QWORD *)(v8 + 40) = *(_QWORD *)(v37 + 40);
                            *(_OWORD *)(v37 + 48) = 0;
                            v50 = *(_DWORD *)(v8 + 24);
                            HIWORD(v51) = HIWORD(v50);
                            if ( (_DWORD)v40 != 55 )
                            {
                              LOBYTE(v51) = v50 | 0x80;
                              BYTE1(v51) = BYTE1(v50) & 0xFD;
                              v50 = v51;
                            }
                          }
                          else if ( *(_QWORD *)(v37 + 32) != *(_QWORD *)(v8 + 40) || (*(_BYTE *)(v37 + 24) & 2) != 0 )
                          {
                            *(_QWORD *)(v37 + 56) = 0;
                            v50 = *(_DWORD *)(v8 + 24);
                          }
                          else
                          {
                            *(_QWORD *)(v8 + 40) = *(_QWORD *)(v37 + 40);
                            *(_OWORD *)(v37 + 48) = 0;
                            v50 = *(_DWORD *)(v8 + 24);
                          }
                          v52 = v50 & 0xFFFFFFF7;
                          v53 = nullptr;
                          *(_DWORD *)(v8 + 24) = v52;
                          v54 = v52;
                          *(_DWORD *)(v8 + 24) = v52 | *(_DWORD *)(v37 + 24) & 0x158 | 0x40;
                          v55 = *(_QWORD *)(v37 + 376);
                          if ( v55 )
                          {
                            n[0] = 4 * v55;
                            v72 = (void *)qalloc_or_throw(4 * v55, v40, 4 * v55, v41);
                            v40 = *(_QWORD *)(v37 + 368);
                            v53 = v72;
                            memcpy(v72, (const void *)v40, n[0]);
                          }
                          v56 = *(_QWORD *)(v8 + 368);
                          si128 = (__m128)_mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
                          if ( v56 )
                          {
                            *(_QWORD *)(v8 + 376) = 0;
                            *(__m128 *)n = si128;
                            qfree(v56);
                            si128 = (__m128)_mm_load_si128((const __m128i *)n);
                          }
                          *(_QWORD *)(v8 + 368) = v53;
                          v57 = *(_DWORD *)(v8 + 72);
                          *(__m128 *)(v8 + 376) = si128;
                          v58 = *(unsigned int **)(v37 + 368);
                          if ( 4LL * *(_QWORD *)(v37 + 376) )
                          {
                            while ( 1 )
                            {
                              v59 = *(_QWORD *)(v37 + 64);
                              v60 = *v58;
                              if ( (unsigned int)v60 >= *(_DWORD *)(v59 + 64) )
                                break;
                              v40 = *(unsigned int *)(v37 + 72);
                              sub_66220(
                                *(_QWORD *)(*(_QWORD *)(v59 + 528) + 8 * v60) + 344LL,
                                v40,
                                v57,
                                *(double *)si128.m128_u64);
                              v61 = *(_QWORD *)(v37 + 368);
                              if ( ++v58 == (unsigned int *)(v61 + 4LL * *(_QWORD *)(v37 + 376)) )
                                goto LABEL_79;
                            }
                            if ( !under_debugger )
                              sub_383060(0xCDEFu, *(double *)si128.m128_u64);
LABEL_165:
                            BUG();
                          }
                          v61 = *(_QWORD *)(v37 + 368);
LABEL_79:
                          if ( v61 )
                          {
                            *(_QWORD *)(v37 + 376) = 0;
                            qfree(v61);
                            *(_QWORD *)(v37 + 368) = 0;
                            *(_QWORD *)(v37 + 384) = 0;
                          }
                          *(_DWORD *)(v8 + 76) = *(_DWORD *)(v37 + 76);
                          if ( v17 == v37 && v93 != -1 )
                          {
                            v62 = j__qalloc_or_throw(80, v40, v54, v41);
                            v63 = v94;
                            if ( v94 == -1 )
                              v63 = *(_QWORD *)(v8 + 32);
                            *(_QWORD *)(v62 + 40) = 0;
                            *(_QWORD *)(v62 + 32) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v62 + 48) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v62 + 56) = 0;
                            *(_QWORD *)(v62 + 64) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v62 + 72) = 0;
                            sub_330970(v62, v63);
                            v64 = v93;
                            *(_BYTE *)(v62 + 32) = 7;
                            *(_DWORD *)v62 = 55;
                            *(_DWORD *)(v62 + 40) = v64;
                            sub_338690(v8, v62, v65, v66, v67, v68);
                          }
                          sub_668F0(v37, *(double *)si128.m128_u64);
                          v69 = *(_DWORD *)(v37 + 72);
                          a2 = &v97;
                          v97 = &off_4DBBB8;
                          v98 = v69;
                          v70 = sub_68750((__int64)a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v97);
                          v92 |= v70;
                          if ( v17 == v37 )
                            goto LABEL_88;
                          v37 = v90;
                          if ( !v90 )
                            goto LABEL_88;
                          continue;
                        }
LABEL_104:
                        if ( *(_DWORD *)(v37 + 376) != 1 || *(_DWORD *)(v37 + 76) == 5 )
                          goto LABEL_53;
                        if ( v90 )
                        {
                          v35 = *(unsigned int *)(v90 + 72);
                          if ( (_DWORD)v35 == *(_DWORD *)(v8 + 72) + 2 )
                            v35 = v93;
                          v93 = v35;
                          goto LABEL_53;
                        }
LABEL_117:
                        v90 = 0;
                        goto LABEL_53;
                      }
                      goto LABEL_101;
                    }
                    if ( !v39 )
                    {
                      v75 = *(int **)(v17 + 56);
                      if ( v75 )
                      {
                        v76 = *v75;
                        v35 = (unsigned int)(v76 - 54);
                        if ( (unsigned int)v35 > 1 )
                        {
                          v90 = 0;
                          if ( v76 != 58 )
                            goto LABEL_53;
                        }
                      }
                      goto LABEL_117;
                    }
                    v90 = 0;
                    if ( *v39 != 55 )
                    {
LABEL_101:
                      v73 = *(int **)(v37 + 56);
                      if ( v73 )
                        goto LABEL_102;
                      goto LABEL_53;
                    }
LABEL_51:
                    sub_A3480(v8, (__int64)v39);
                  }
                  break;
                }
                if ( v17 == v37 )
                  goto LABEL_163;
                goto LABEL_53;
              }
              v81 = (_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (*(_BYTE *)(v31 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                goto LABEL_131;
              v82 = (_QWORD *)v81[1];
              if ( (*(_BYTE *)v82 & 2) != 0 )
              {
                v79 = (_QWORD *)v81[2];
                if ( (*(_BYTE *)v79 & 2) != 0 )
                  goto LABEL_137;
              }
              else
              {
                sub_65F60(v82);
                v79 = (_QWORD *)v81[2];
                if ( (*(_BYTE *)v79 & 2) != 0 )
                {
                  if ( (*(_BYTE *)v81 & 2) == 0 )
                  {
LABEL_137:
                    sub_312B80((__int64)(v81 + 5));
                    *v81 |= 2uLL;
                  }
LABEL_128:
                  if ( v31 > 3 )
                    qfree(v31 & 0xFFFFFFFFFFFFFFFCLL);
                  v30 = *(unsigned __int64 **)(v8 + 456);
                  v31 = *v30;
LABEL_131:
                  *v30 = v31 & 3 | (unsigned __int64)v30 & 0xFFFFFFFFFFFFFFFCLL;
                  v80 = *(_QWORD *)(v8 + 456);
                  si128 = (__m128)_mm_unpacklo_epi64((__m128i)v80, (__m128i)v80);
                  *(__m128 *)(v80 + 8) = si128;
                  **(_QWORD **)(v8 + 456) &= ~1uLL;
                  **(_QWORD **)(v8 + 456) |= 2uLL;
LABEL_132:
                  *(_QWORD *)(v8 + 464) = 0;
                  goto LABEL_44;
                }
              }
              sub_65F60(v79);
              if ( (*(_BYTE *)v81 & 2) == 0 )
                goto LABEL_137;
              goto LABEL_128;
            }
          }
          sub_65F60(v77);
          if ( (*(_BYTE *)v83 & 2) == 0 )
            goto LABEL_142;
          goto LABEL_121;
        }
        v26 = v99;
        ++v7;
LABEL_36:
        if ( v26 )
        {
          *(_QWORD *)&v100 = 0;
          qfree((__int64)v26);
        }
LABEL_29:
        v6 = a1[16];
      }
      while ( (int)(v6 - 1) > v7 );
      v5 = *a1;
    }
    while ( (v5 & 0x400) != 0 );
  }
  if ( v92 )
  {
    v86 = *((_QWORD **)a1 + 98);
    if ( v86 )
    {
      v87 = *(__int64 (__fastcall **)(_QWORD *, double))(*v86 + 8LL);
      if ( v87 == sub_66F30 )
      {
        v88 = (__int64)(v86 + 31);
        *v86 = off_4EC750;
        do
        {
          v88 -= 32;
          sub_66C80(v88, *(double *)si128.m128_u64);
        }
        while ( (_QWORD *)v88 != v86 + 7 );
        v89 = v86[1];
        *v86 = &unk_4EC808;
        if ( v89 )
        {
          v86[2] = 0;
          qfree(v89);
        }
        j__qfree((__int64)v86);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _UNKNOWN ***))v87)(*((_QWORD *)a1 + 98), a2);
      }
    }
    *((_QWORD *)a1 + 98) = 0;
    sub_670E0(a1, (__int64)a2, v5, v4);
    sub_66FA0((__int64)a1, 1);
  }
  v24 = sub_13FDE0((__int64)a1, 1);
  return v92 | v24;
}

