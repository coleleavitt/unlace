char __fastcall sub_66180(__int64 a1)
{
  int v2; // edx
  int v3; // eax
  int v4; // ebp
  __int64 v5; // rbx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rax
  char v11; // r15
  __int64 v12; // r12
  _DWORD *v13; // rdx
  char v14; // al
  int v15; // r12d
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  char v20; // al
  __int64 v22; // rdi
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  _DWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  int *v40; // rax
  int v41; // esi
  __int64 v42; // rax
  int v43; // eax
  int v44; // edx
  unsigned int v45; // eax
  void *v46; // r14
  unsigned __int64 v47; // rbp
  __m128i si128; // xmm0
  int v49; // ebp
  unsigned int *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rbp
  __int64 v55; // rsi
  int v56; // eax
  int v57; // eax
  char v58; // al
  __int64 v59; // rax
  __int64 v60; // rcx
  _DWORD *v61; // rsi
  int *v62; // rax
  int v63; // eax
  int v64; // edx
  int *v65; // rax
  int v66; // eax
  _QWORD *v67; // rdi
  _QWORD *v68; // rdi
  _QWORD *v69; // r14
  _QWORD *v70; // rdi
  _QWORD *v71; // r14
  _QWORD *v72; // rdi
  __int64 v73; // rdx
  __int64 *v74; // rbx
  __int64 (__fastcall *v75)(_QWORD *); // rax
  __int64 *v76; // rbp
  __int64 v77; // rdi
  __int64 v78; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  char v80; // [rsp+23h] [rbp-85h]
  int v81; // [rsp+24h] [rbp-84h]
  __int64 v82; // [rsp+28h] [rbp-80h]
  __int64 v83; // [rsp+30h] [rbp-78h]
  bool v84; // [rsp+3Fh] [rbp-69h]
  _UNKNOWN **v85; // [rsp+40h] [rbp-68h] BYREF
  int v86; // [rsp+48h] [rbp-60h]
  __int64 v87; // [rsp+50h] [rbp-58h]
  __int128 v88; // [rsp+58h] [rbp-50h]
  unsigned __int64 v89; // [rsp+68h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v80 = sub_65BF0(a1);
  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x400) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 64);
    do
    {
      BYTE1(v2) &= ~4u;
      *(_DWORD *)a1 = v2;
      if ( v3 - 1 <= 1 )
        break;
      v4 = 1;
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v4);
        if ( (unsigned int)sub_A3E60(v5) )
        {
          v6 = *(_QWORD *)(v5 + 48) == 0;
          v80 = 1;
          if ( v6 )
          {
            v4 = 1;
            sub_65BF0(a1);
            goto LABEL_29;
          }
        }
        v83 = *(_QWORD *)(v5 + 376);
        if ( (_DWORD)v83 != 1 || (v7 = *(_DWORD *)(v5 + 76), v7 == 5) || (v87 = 0, v88 = 0, !(v84 = v7 != 1 && v7 != 6)) )
        {
          ++v4;
          goto LABEL_29;
        }
        v8 = v5;
        v9 = 0;
        v10 = nullptr;
        v11 = 0;
        v12 = 0;
        while ( 1 )
        {
          v13 = &v10[v9];
          if ( v13 != v10 )
          {
            while ( *(_DWORD *)(v8 + 72) != *v10 )
            {
              if ( v13 == ++v10 )
                goto LABEL_16;
            }
            if ( v13 != v10 )
              break;
          }
LABEL_16:
          if ( v9 && *(_DWORD *)(v8 + 352) != 1 )
            break;
          if ( v11 && *(int *)(v8 + 376) > 1 )
            break;
          v14 = sub_61230(v5, v8);
          v9 = v88;
          if ( !v14 )
            break;
          v15 = *(_DWORD *)(v8 + 72);
          v16 = v87;
          if ( *((_QWORD *)&v88 + 1) < (unsigned __int64)(v88 + 1) )
          {
            v87 = qvector_reserve();
            v9 = v88;
            v16 = v87;
          }
          *(_DWORD *)(v16 + 4 * v9) = v15;
          v6 = *(_DWORD *)(v8 + 76) == 3;
          v9 = v88 + 1;
          *(_QWORD *)&v88 = v88 + 1;
          if ( !v6
            || *(_DWORD *)(v8 + 376) != 1
            || (v17 = **(int **)(v8 + 368),
                v11 |= *(_DWORD *)(v8 + 72) + 1 != (_DWORD)v17,
                v18 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v17),
                v19 = *(_DWORD *)(v18 + 76),
                v19 == 1)
            || v19 == 6 )
          {
            v12 = v8;
            break;
          }
          v12 = v8;
          v10 = (_DWORD *)v87;
          v8 = v18;
        }
        if ( v9 > 1 )
        {
          v23 = *(unsigned __int64 **)(v5 + 424);
          if ( !v23 )
            goto LABEL_125;
          v24 = *v23;
          if ( !*(_QWORD *)(v5 + 432) )
          {
            *v23 = *v23 & 3 | (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(v5 + 424) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(v5 + 424),
                                                          (__m128i)*(unsigned __int64 *)(v5 + 424));
            **(_QWORD **)(v5 + 424) &= ~1uLL;
            **(_QWORD **)(v5 + 424) |= 2uLL;
            goto LABEL_41;
          }
          v71 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (*(_BYTE *)(v24 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            goto LABEL_124;
          v72 = (_QWORD *)v71[1];
          if ( (*(_BYTE *)v72 & 2) != 0 )
          {
            v67 = (_QWORD *)v71[2];
            if ( (*(_BYTE *)v67 & 2) != 0 )
              goto LABEL_142;
          }
          else
          {
            sub_61BE0(v72);
            v67 = (_QWORD *)v71[2];
            if ( (*(_BYTE *)v67 & 2) != 0 )
            {
              if ( (*(_BYTE *)v71 & 2) == 0 )
              {
LABEL_142:
                sub_30DA80(v71 + 5);
                *v71 |= 2uLL;
              }
LABEL_121:
              if ( v24 > 3 )
                qfree();
              v23 = *(unsigned __int64 **)(v5 + 424);
              v24 = *v23;
LABEL_124:
              *v23 = v24 & 3 | (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFCLL;
              *(__m128i *)(*(_QWORD *)(v5 + 424) + 8LL) = _mm_unpacklo_epi64(
                                                            (__m128i)*(unsigned __int64 *)(v5 + 424),
                                                            (__m128i)*(unsigned __int64 *)(v5 + 424));
              **(_QWORD **)(v5 + 424) &= ~1uLL;
              **(_QWORD **)(v5 + 424) |= 2uLL;
LABEL_125:
              *(_QWORD *)(v5 + 432) = 0;
LABEL_41:
              v25 = *(unsigned __int64 **)(v5 + 456);
              *(_BYTE *)(v5 + 440) = 1;
              if ( !v25 )
                goto LABEL_132;
              v26 = *v25;
              if ( !*(_QWORD *)(v5 + 464) )
              {
                *v25 = *v25 & 3 | (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(*(_QWORD *)(v5 + 456) + 8LL) = _mm_unpacklo_epi64(
                                                              (__m128i)*(unsigned __int64 *)(v5 + 456),
                                                              (__m128i)*(unsigned __int64 *)(v5 + 456));
                **(_QWORD **)(v5 + 456) &= ~1uLL;
                **(_QWORD **)(v5 + 456) |= 2uLL;
LABEL_44:
                v27 = *(_QWORD *)(v5 + 64);
                *(_BYTE *)(v5 + 472) = 1;
                v80 = 0;
                *(_DWORD *)(v27 + 4) &= ~8u;
                v28 = *(int **)(v5 + 368);
                v82 = -1;
                v29 = *v28;
                v30 = *(_QWORD *)(a1 + 528);
                v81 = -1;
                v31 = *(_QWORD *)(v30 + 8 * v29);
                if ( !v31 )
                {
LABEL_88:
                  v59 = *(_QWORD *)(v5 + 48);
                  if ( v59 )
                  {
                    if ( (*(_BYTE *)(v59 + 4) & 0x40) != 0 )
                    {
                      v60 = *(_QWORD *)(v5 + 56);
                      if ( *(_DWORD *)v60 == 55 && v60 == *(_QWORD *)(v59 + 8) )
                      {
                        v73 = *(_QWORD *)(v59 + 24) + 1LL;
                        if ( v73 == *(_QWORD *)(v60 + 24) )
                          *(_QWORD *)(v59 + 24) = v73;
                      }
                    }
                  }
                  if ( v80 )
                  {
                    sub_65BF0(a1);
                    v22 = v87;
                    v4 = v83;
                  }
                  else
                  {
                    v22 = v87;
                    v4 = v83;
                    v80 = v84;
                  }
                  goto LABEL_36;
                }
                while ( 2 )
                {
                  if ( *(int *)(v31 + 352) > 1 )
                    goto LABEL_88;
                  v32 = *(_QWORD *)(v31 + 376);
                  if ( (_DWORD)v32 == 1 )
                  {
                    v61 = *(_DWORD **)(v5 + 56);
                    v78 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * **(int **)(v31 + 368));
                    if ( v61 && *v61 == 55 )
                      goto LABEL_51;
                  }
                  else
                  {
                    if ( v12 != v31 )
                    {
                      if ( !under_debugger )
                        sub_37DDE0(52027);
                      goto LABEL_165;
                    }
                    v33 = *(_DWORD **)(v5 + 56);
                    if ( (int)v32 > 0 )
                    {
                      v78 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * **(int **)(v12 + 368));
                      if ( v33 )
                      {
                        if ( *v33 == 55 )
                          goto LABEL_51;
LABEL_163:
                        v62 = *(int **)(v31 + 56);
                        if ( v62 )
                        {
LABEL_102:
                          v63 = *v62;
                          if ( (unsigned int)(v63 - 54) > 1 && v63 != 58 )
                            goto LABEL_104;
LABEL_53:
                          if ( !(unsigned __int8)sub_61230(v5, v31) )
                          {
                            if ( !under_debugger )
                              sub_37DDE0(52728);
                            goto LABEL_165;
                          }
                          v34 = *(_QWORD *)(v5 + 320);
                          if ( v34 < *(_QWORD *)(v31 + 320) )
                            v34 = *(_QWORD *)(v31 + 320);
                          *(_QWORD *)(v5 + 320) = v34;
                          v35 = *(_QWORD *)(v5 + 328);
                          if ( v35 > *(_QWORD *)(v31 + 328) )
                            v35 = *(_QWORD *)(v31 + 328);
                          *(_QWORD *)(v5 + 328) = v35;
                          v36 = *(_QWORD *)(v5 + 336);
                          if ( v36 > *(_QWORD *)(v31 + 336) )
                            v36 = *(_QWORD *)(v31 + 336);
                          *(_QWORD *)(v5 + 336) = v36;
                          if ( *(_QWORD *)(v5 + 512) == *(_QWORD *)(v31 + 512) )
                          {
                            v37 = *(_QWORD *)(v5 + 520);
                            if ( v37 > *(_QWORD *)(v31 + 520) )
                              v37 = *(_QWORD *)(v31 + 520);
                            *(_QWORD *)(v5 + 520) = v37;
                          }
                          v38 = *(_QWORD *)(v5 + 56);
                          v39 = *(_QWORD *)(v31 + 48);
                          if ( v38 )
                            *(_QWORD *)(v38 + 8) = v39;
                          else
                            *(_QWORD *)(v5 + 48) = v39;
                          v40 = *(int **)(v31 + 48);
                          if ( v40 )
                          {
                            v41 = *v40;
                            *((_QWORD *)v40 + 2) = *(_QWORD *)(v5 + 56);
                            v42 = *(_QWORD *)(v31 + 56);
                            *(_QWORD *)(v5 + 56) = v42;
                            if ( *(_DWORD *)v42 == 55 )
                              v82 = *(_QWORD *)(v42 + 24);
                            if ( *(_QWORD *)(v5 + 40) == *(_QWORD *)(v31 + 32) && (*(_BYTE *)(v31 + 24) & 2) == 0 )
                              *(_QWORD *)(v5 + 40) = *(_QWORD *)(v31 + 40);
                            *(_OWORD *)(v31 + 48) = 0;
                            v43 = *(_DWORD *)(v5 + 24);
                            HIWORD(v44) = HIWORD(v43);
                            if ( v41 != 55 )
                            {
                              LOBYTE(v44) = v43 | 0x80;
                              BYTE1(v44) = BYTE1(v43) & 0xFD;
                              v43 = v44;
                            }
                          }
                          else if ( *(_QWORD *)(v31 + 32) != *(_QWORD *)(v5 + 40) || (*(_BYTE *)(v31 + 24) & 2) != 0 )
                          {
                            *(_QWORD *)(v31 + 56) = 0;
                            v43 = *(_DWORD *)(v5 + 24);
                          }
                          else
                          {
                            *(_QWORD *)(v5 + 40) = *(_QWORD *)(v31 + 40);
                            *(_OWORD *)(v31 + 48) = 0;
                            v43 = *(_DWORD *)(v5 + 24);
                          }
                          v45 = v43 & 0xFFFFFFF7;
                          v46 = nullptr;
                          *(_DWORD *)(v5 + 24) = v45;
                          *(_DWORD *)(v5 + 24) = v45 | *(_DWORD *)(v31 + 24) & 0x158 | 0x40;
                          v47 = *(_QWORD *)(v31 + 376);
                          if ( v47 )
                          {
                            n[0] = 4 * v47;
                            v46 = (void *)qalloc_or_throw();
                            memcpy(v46, *(const void **)(v31 + 368), n[0]);
                          }
                          si128 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
                          if ( *(_QWORD *)(v5 + 368) )
                          {
                            *(_QWORD *)(v5 + 376) = 0;
                            *(__m128i *)n = si128;
                            qfree();
                            si128 = _mm_load_si128((const __m128i *)n);
                          }
                          *(_QWORD *)(v5 + 368) = v46;
                          v49 = *(_DWORD *)(v5 + 72);
                          *(__m128i *)(v5 + 376) = si128;
                          v50 = *(unsigned int **)(v31 + 368);
                          if ( 4LL * *(_QWORD *)(v31 + 376) )
                          {
                            while ( 1 )
                            {
                              v51 = *(_QWORD *)(v31 + 64);
                              v52 = *v50;
                              if ( (unsigned int)v52 >= *(_DWORD *)(v51 + 64) )
                                break;
                              sub_61EA0(
                                *(_QWORD *)(*(_QWORD *)(v51 + 528) + 8 * v52) + 344LL,
                                *(_DWORD *)(v31 + 72),
                                v49);
                              v53 = *(_QWORD *)(v31 + 368);
                              if ( ++v50 == (unsigned int *)(v53 + 4LL * *(_QWORD *)(v31 + 376)) )
                                goto LABEL_79;
                            }
                            if ( !under_debugger )
                              sub_37DDE0(52719);
LABEL_165:
                            BUG();
                          }
                          v53 = *(_QWORD *)(v31 + 368);
LABEL_79:
                          if ( v53 )
                          {
                            *(_QWORD *)(v31 + 376) = 0;
                            qfree();
                            *(_QWORD *)(v31 + 368) = 0;
                            *(_QWORD *)(v31 + 384) = 0;
                          }
                          *(_DWORD *)(v5 + 76) = *(_DWORD *)(v31 + 76);
                          if ( v12 == v31 && v81 != -1 )
                          {
                            v54 = j__qalloc_or_throw();
                            v55 = v82;
                            if ( v82 == -1 )
                              v55 = *(_QWORD *)(v5 + 32);
                            *(_QWORD *)(v54 + 40) = 0;
                            *(_QWORD *)(v54 + 32) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v54 + 48) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v54 + 56) = 0;
                            *(_QWORD *)(v54 + 64) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v54 + 72) = 0;
                            sub_32B5A0(v54, v55);
                            v56 = v81;
                            *(_BYTE *)(v54 + 32) = 7;
                            *(_DWORD *)v54 = 55;
                            *(_DWORD *)(v54 + 40) = v56;
                            sub_3330D0(v5, v54);
                          }
                          sub_62570(v31);
                          v57 = *(_DWORD *)(v31 + 72);
                          v85 = &off_4AE638;
                          v86 = v57;
                          v58 = sub_643D0(a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v85);
                          v80 |= v58;
                          if ( v12 == v31 )
                            goto LABEL_88;
                          v31 = v78;
                          if ( !v78 )
                            goto LABEL_88;
                          continue;
                        }
LABEL_104:
                        if ( *(_DWORD *)(v31 + 376) != 1 || *(_DWORD *)(v31 + 76) == 5 )
                          goto LABEL_53;
                        if ( v78 )
                        {
                          v64 = *(_DWORD *)(v78 + 72);
                          if ( v64 == *(_DWORD *)(v5 + 72) + 2 )
                            v64 = v81;
                          v81 = v64;
                          goto LABEL_53;
                        }
LABEL_117:
                        v78 = 0;
                        goto LABEL_53;
                      }
                      goto LABEL_101;
                    }
                    if ( !v33 )
                    {
                      v65 = *(int **)(v12 + 56);
                      if ( v65 )
                      {
                        v66 = *v65;
                        if ( (unsigned int)(v66 - 54) > 1 )
                        {
                          v78 = 0;
                          if ( v66 != 58 )
                            goto LABEL_53;
                        }
                      }
                      goto LABEL_117;
                    }
                    v78 = 0;
                    if ( *v33 != 55 )
                    {
LABEL_101:
                      v62 = *(int **)(v31 + 56);
                      if ( v62 )
                        goto LABEL_102;
                      goto LABEL_53;
                    }
LABEL_51:
                    sub_9EFC0(v5);
                  }
                  break;
                }
                if ( v12 == v31 )
                  goto LABEL_163;
                goto LABEL_53;
              }
              v69 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (*(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                goto LABEL_131;
              v70 = (_QWORD *)v69[1];
              if ( (*(_BYTE *)v70 & 2) != 0 )
              {
                v68 = (_QWORD *)v69[2];
                if ( (*(_BYTE *)v68 & 2) != 0 )
                  goto LABEL_137;
              }
              else
              {
                sub_61BE0(v70);
                v68 = (_QWORD *)v69[2];
                if ( (*(_BYTE *)v68 & 2) != 0 )
                {
                  if ( (*(_BYTE *)v69 & 2) == 0 )
                  {
LABEL_137:
                    sub_30DA80(v69 + 5);
                    *v69 |= 2uLL;
                  }
LABEL_128:
                  if ( v26 > 3 )
                    qfree();
                  v25 = *(unsigned __int64 **)(v5 + 456);
                  v26 = *v25;
LABEL_131:
                  *v25 = v26 & 3 | (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFCLL;
                  *(__m128i *)(*(_QWORD *)(v5 + 456) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(v5 + 456),
                                                                (__m128i)*(unsigned __int64 *)(v5 + 456));
                  **(_QWORD **)(v5 + 456) &= ~1uLL;
                  **(_QWORD **)(v5 + 456) |= 2uLL;
LABEL_132:
                  *(_QWORD *)(v5 + 464) = 0;
                  goto LABEL_44;
                }
              }
              sub_61BE0(v68);
              if ( (*(_BYTE *)v69 & 2) == 0 )
                goto LABEL_137;
              goto LABEL_128;
            }
          }
          sub_61BE0(v67);
          if ( (*(_BYTE *)v71 & 2) == 0 )
            goto LABEL_142;
          goto LABEL_121;
        }
        v22 = v87;
        ++v4;
LABEL_36:
        if ( v22 )
        {
          *(_QWORD *)&v88 = 0;
          qfree();
        }
LABEL_29:
        v3 = *(_DWORD *)(a1 + 64);
      }
      while ( v3 - 1 > v4 );
      v2 = *(_DWORD *)a1;
    }
    while ( (*(_DWORD *)a1 & 0x400) != 0 );
  }
  if ( v80 )
  {
    v74 = *(__int64 **)(a1 + 784);
    if ( v74 )
    {
      v75 = *(__int64 (__fastcall **)(_QWORD *))(*v74 + 8);
      if ( v75 == sub_62BB0 )
      {
        v76 = v74 + 31;
        *v74 = (__int64)off_4BE5E8;
        do
        {
          v76 -= 4;
          sub_62900(v76);
        }
        while ( v76 != v74 + 7 );
        v77 = v74[1];
        *v74 = (__int64)&unk_4BE6A0;
        if ( v77 )
        {
          v74[2] = 0;
          qfree();
        }
        j__qfree();
      }
      else
      {
        v75(*(_QWORD **)(a1 + 784));
      }
    }
    *(_QWORD *)(a1 + 784) = 0;
    sub_62D60((_QWORD *)a1);
    sub_62C20(a1, 1u, (__int64)"block merging result");
  }
  v20 = sub_13B920(a1, 1);
  return v80 | v20;
}

