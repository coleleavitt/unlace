unsigned __int64 __fastcall sub_255C0(unsigned int **a1, char *a2, char *a3, double a4, __m128 a5)
{
  char *v5; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned int *v9; // r12
  unsigned __int64 v10; // rbp
  unsigned int *v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r12
  unsigned __int8 *v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int8 v19; // al
  _QWORD *v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r12
  void *v26; // rdi
  __int64 v27; // rsi
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  unsigned __int8 v38; // al
  _QWORD *v39; // r9
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int8 *v46; // r10
  unsigned __int8 *v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rsi
  __int64 v50; // rdi
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // rdi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  unsigned __int8 *v56; // rbx
  __int64 i; // rax
  unsigned __int8 v58; // al
  _QWORD *v59; // r9
  unsigned __int64 v60; // rdi
  __int64 v61; // r8
  _QWORD *v62; // rax
  unsigned __int8 v63; // cl
  unsigned __int64 v64; // rax
  void *v65; // rdi
  __int64 v66; // r8
  unsigned __int64 v67; // rdi
  _QWORD *v68; // rax
  unsigned __int8 v69; // cl
  unsigned __int64 v70; // rax
  void *v71; // rdi
  __int64 v72; // r8
  unsigned __int64 v73; // rdi
  _QWORD *v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int8 v76; // cl
  void *v77; // rdi
  char *v78; // rsi
  __int64 v79; // rcx
  char *v80; // rsi
  __int64 v81; // rcx
  char *v82; // rsi
  __int64 v83; // rcx
  unsigned int *v85; // [rsp+8h] [rbp-60h]
  unsigned int *v86; // [rsp+8h] [rbp-60h]
  unsigned __int64 v87; // [rsp+8h] [rbp-60h]
  _QWORD *v88; // [rsp+8h] [rbp-60h]
  unsigned __int64 v89; // [rsp+8h] [rbp-60h]
  _QWORD *v90; // [rsp+8h] [rbp-60h]
  unsigned __int64 v91; // [rsp+10h] [rbp-58h]
  unsigned __int64 v92; // [rsp+10h] [rbp-58h]
  _QWORD *v93; // [rsp+10h] [rbp-58h]
  unsigned __int64 v94; // [rsp+10h] [rbp-58h]
  unsigned __int8 *v95; // [rsp+10h] [rbp-58h]
  char v96; // [rsp+18h] [rbp-50h]
  char v97; // [rsp+18h] [rbp-50h]
  char v98; // [rsp+18h] [rbp-50h]
  unsigned int *v99; // [rsp+20h] [rbp-48h]
  unsigned __int64 v100; // [rsp+28h] [rbp-40h]

  v5 = a2;
  v100 = __readfsqword(0x28u);
  *a1 = nullptr;
  v7 = a3 - a2;
  v8 = (a3 - a2) >> 3;
  if ( v5 != a3 && v7 <= 0 || (*a1 = (unsigned int *)sub_25030(nullptr, v8), v5 != a3) )
  {
    while ( 1 )
    {
      v9 = *a1;
      v10 = *(_QWORD *)v5;
      if ( !*a1 )
      {
        v99 = nullptr;
        goto LABEL_8;
      }
      if ( *v9 > 1 )
        break;
      v29 = *((_QWORD *)v9 + 2);
      v30 = *((_QWORD *)v9 + 1);
      v31 = 0xD6E8FEB86659FD93LL
          * ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) ^ ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) >> 32));
      v32 = HIDWORD(v31);
      if ( v30 >= v29 >> 1 )
      {
        if ( v29 )
        {
          v42 = *((_QWORD *)v9 + 4);
          v43 = (v29 - 1) & (v32 ^ v31 ^ *((_QWORD *)v9 + 3));
          v44 = v43 & 0x7F;
          v45 = v42 + 144 * (v43 >> 7);
LABEL_48:
          v46 = (unsigned __int8 *)(v45 + 128);
LABEL_49:
          v47 = (unsigned __int8 *)(v45 + v44);
          while ( 1 )
          {
            v48 = *v47;
            if ( v48 == 255 )
              break;
            if ( v10 == *(_QWORD *)(*(_QWORD *)v46 + 8 * v48) )
              goto LABEL_31;
            if ( ++v47 == v46 )
            {
              v45 += 144;
              v46 = v47 + 144;
              v44 = 0;
              if ( 0x8E38E38E38E38E39LL * ((v45 - v42) >> 4) != v29 >> 7 )
                goto LABEL_49;
              v45 = *((_QWORD *)v9 + 4);
              goto LABEL_48;
            }
          }
        }
        sub_24B90(*a1, v30 + 1);
        v52 = *((_QWORD *)v9 + 2);
        v53 = *((_QWORD *)v9 + 4);
        v54 = (v52 - 1)
            & (*((_QWORD *)v9 + 3)
             ^ v31
             ^ ((0xD6E8FEB86659FD93LL
               * ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) ^ ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) >> 32))) >> 32));
        v55 = v54 & 0x7F;
        v56 = (unsigned __int8 *)(v53 + 144 * (v54 >> 7));
LABEL_64:
        for ( i = v56[v55]; i != 255; i = *v56 )
        {
          if ( v10 == *(_QWORD *)(*((_QWORD *)v56 + 16) + 8 * i) )
            break;
          if ( ++v55 != 128 )
            goto LABEL_64;
          v56 += 144;
          v55 = 0;
          if ( 0x8E38E38E38E38E39LL * ((__int64)&v56[-v53] >> 4) == v52 >> 7 )
            v56 = *((unsigned __int8 **)v9 + 4);
        }
        v58 = v56[137];
        if ( v58 == v56[136] )
        {
          if ( v58 )
          {
            if ( v58 == 48 )
            {
              v97 = 80;
              v67 = 640;
              v66 = 80;
            }
            else
            {
              v97 = v58 + 16;
              v66 = v58 + 16LL;
              v67 = 8 * v66;
            }
          }
          else
          {
            v97 = 48;
            v67 = 384;
            v66 = 48;
          }
          v94 = v55;
          v87 = v66;
          v68 = (_QWORD *)operator new[](v67);
          v55 = v94;
          v69 = v56[136];
          v59 = v68;
          v70 = 0;
          if ( !v69
            || (v80 = *((char **)v56 + 16),
                v70 = v69,
                v81 = 8LL * v69,
                *v59 = *(_QWORD *)v80,
                v59[(unsigned __int64)v81 / 8 - 1] = *(_QWORD *)&v80[v81 - 8],
                qmemcpy(
                  (void *)((unsigned __int64)(v59 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)(v80 - ((char *)v59 - ((unsigned __int64)(v59 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v59 - (((_DWORD)v59 + 8) & 0xFFFFFFF8) + (unsigned int)v81) >> 3)),
                v70 < v87) )
          {
            do
            {
              LOBYTE(v59[v70]) = v70 + 1;
              ++v70;
            }
            while ( v70 < v87 );
          }
          v71 = *((void **)v56 + 16);
          if ( v71 )
          {
            v88 = v59;
            operator delete[](v71);
            v55 = v94;
            v59 = v88;
          }
          *((_QWORD *)v56 + 16) = v59;
          v56[136] = v97;
          v58 = v56[137];
        }
        else
        {
          v59 = *((_QWORD **)v56 + 16);
        }
        v56[137] = v59[v58];
        v56[v55] = v58;
        v40 = *((_QWORD *)v9 + 4);
        ++*((_QWORD *)v9 + 1);
        v41 = v55 | (0x1C71C71C71C71C80LL * ((__int64)&v56[-v40] >> 4));
      }
      else
      {
        v33 = *((_QWORD *)v9 + 4);
        v34 = (v29 - 1) & (v32 ^ *((_QWORD *)v9 + 3) ^ v31);
        v35 = v34 & 0x7F;
        v36 = (unsigned __int8 *)(v33 + 144 * (v34 >> 7));
LABEL_35:
        v37 = v36[v35];
        if ( v37 != 255 )
        {
          while ( v10 != *(_QWORD *)(*((_QWORD *)v36 + 16) + 8 * v37) )
          {
            if ( ++v35 != 128 )
              goto LABEL_35;
            v36 += 144;
            v35 = 0;
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v36[-v33] >> 4) == v29 >> 7 )
              v36 = *((unsigned __int8 **)v9 + 4);
            v37 = *v36;
            if ( v37 == 255 )
              goto LABEL_41;
          }
          goto LABEL_31;
        }
LABEL_41:
        v38 = v36[137];
        if ( v38 == v36[136] )
        {
          if ( v38 )
          {
            if ( v38 == 48 )
            {
              v98 = 80;
              v73 = 640;
              v72 = 80;
            }
            else
            {
              v98 = v38 + 16;
              v72 = v38 + 16LL;
              v73 = 8 * v72;
            }
          }
          else
          {
            v98 = 48;
            v73 = 384;
            v72 = 48;
          }
          v95 = v36;
          v89 = v72;
          v74 = (_QWORD *)operator new[](v73);
          v36 = v95;
          v39 = v74;
          v75 = 0;
          v76 = v95[136];
          if ( !v76
            || (v82 = *((char **)v95 + 16),
                v75 = v76,
                v83 = 8LL * v76,
                *v39 = *(_QWORD *)v82,
                v39[(unsigned __int64)v83 / 8 - 1] = *(_QWORD *)&v82[v83 - 8],
                qmemcpy(
                  (void *)((unsigned __int64)(v39 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)(v82 - ((char *)v39 - ((unsigned __int64)(v39 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v39 - (((_DWORD)v39 + 8) & 0xFFFFFFF8) + (unsigned int)v83) >> 3)),
                v75 < v89) )
          {
            do
            {
              LOBYTE(v39[v75]) = v75 + 1;
              ++v75;
            }
            while ( v75 < v89 );
          }
          v77 = *((void **)v95 + 16);
          if ( v77 )
          {
            v90 = v39;
            operator delete[](v77);
            v36 = v95;
            v39 = v90;
          }
          *((_QWORD *)v36 + 16) = v39;
          v36[136] = v98;
          v38 = v36[137];
        }
        else
        {
          v39 = *((_QWORD **)v36 + 16);
        }
        v36[137] = v39[v38];
        v36[v35] = v38;
        v40 = *((_QWORD *)v9 + 4);
        ++*((_QWORD *)v9 + 1);
        v41 = v35 | (0x1C71C71C71C71C80LL * ((__int64)&v36[-v40] >> 4));
      }
      *(_QWORD *)(*(_QWORD *)(v40 + 144 * (v41 >> 7) + 128)
                + 8LL * *(unsigned __int8 *)(v40 + 144 * (v41 >> 7) + (v41 & 0x7F))) = v10;
LABEL_31:
      v5 += 8;
      if ( a3 == v5 )
        return v100 - __readfsqword(0x28u);
    }
    v99 = *a1;
    if ( *v9 != -1 )
      _InterlockedAdd((volatile signed __int32 *)v9, 1u);
LABEL_8:
    sub_21440(a1, a4, a5);
    v11 = *a1;
    v12 = *((_QWORD *)*a1 + 2);
    v13 = 0xD6E8FEB86659FD93LL
        * ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) ^ ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) >> 32));
    if ( v12 )
    {
      v14 = *((_QWORD *)v11 + 4);
      v15 = (unsigned __int8)(v12 - 1) & (unsigned __int8)(BYTE4(v13) ^ v13 ^ *((_BYTE *)v11 + 24)) & 0x7F;
      v16 = (unsigned __int8 *)(v14 + 144 * (((v12 - 1) & (HIDWORD(v13) ^ v13 ^ *((_QWORD *)v11 + 3))) >> 7));
LABEL_10:
      v17 = v16[v15];
      if ( v17 != 255 )
      {
        while ( v10 != *(_QWORD *)(*((_QWORD *)v16 + 16) + 8 * v17) )
        {
          if ( ++v15 != 128 )
            goto LABEL_10;
          v16 += 144;
          v15 = 0;
          if ( 0x8E38E38E38E38E39LL * ((__int64)&v16[-v14] >> 4) == v12 >> 7 )
            v16 = *((unsigned __int8 **)v11 + 4);
          v17 = *v16;
          if ( v17 == 255 )
            goto LABEL_16;
        }
        goto LABEL_20;
      }
LABEL_16:
      v18 = *((_QWORD *)v11 + 1);
      if ( v18 < v12 >> 1 )
      {
LABEL_17:
        v19 = v16[137];
        if ( v19 == v16[136] )
        {
          if ( v19 )
          {
            if ( v19 == 48 )
            {
              v96 = 80;
              v60 = 640;
              v61 = 80;
            }
            else
            {
              v61 = v19 + 16LL;
              v96 = v19 + 16;
              v60 = 8 * v61;
            }
          }
          else
          {
            v96 = 48;
            v60 = 384;
            v61 = 48;
          }
          v92 = v61;
          v86 = v11;
          v62 = (_QWORD *)operator new[](v60);
          v11 = v86;
          v63 = v16[136];
          v20 = v62;
          v64 = 0;
          if ( !v63
            || (v78 = *((char **)v16 + 16),
                v64 = v63,
                v79 = 8LL * v63,
                *v20 = *(_QWORD *)v78,
                v20[(unsigned __int64)v79 / 8 - 1] = *(_QWORD *)&v78[v79 - 8],
                qmemcpy(
                  (void *)((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                  (const void *)(v78 - ((char *)v20 - ((unsigned __int64)(v20 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                  8LL * (((unsigned int)v20 - (((_DWORD)v20 + 8) & 0xFFFFFFF8) + (unsigned int)v79) >> 3)),
                v64 < v92) )
          {
            do
            {
              LOBYTE(v20[v64]) = v64 + 1;
              ++v64;
            }
            while ( v64 < v92 );
          }
          v65 = *((void **)v16 + 16);
          if ( v65 )
          {
            v93 = v20;
            operator delete[](v65);
            v20 = v93;
            v11 = v86;
          }
          *((_QWORD *)v16 + 16) = v20;
          v16[136] = v96;
          v19 = v16[137];
        }
        else
        {
          v20 = *((_QWORD **)v16 + 16);
        }
        v16[137] = v20[v19];
        v16[v15] = v19;
        v21 = *((_QWORD *)v11 + 4);
        ++*((_QWORD *)v11 + 1);
        v22 = 144 * ((v15 | (unsigned __int64)(0x1C71C71C71C71C80LL * ((__int64)&v16[-v21] >> 4))) >> 7);
        *(_QWORD *)(*(_QWORD *)(v22 + v21 + 128) + 8LL * *(unsigned __int8 *)(v22 + v21 + (v15 & 0x7F))) = v10;
LABEL_20:
        if ( v99 && *v99 != -1 && !_InterlockedSub((volatile signed __int32 *)v99, 1u) )
        {
          v23 = *((_QWORD *)v99 + 4);
          if ( v23 )
          {
            v24 = v23 + 144LL * *(_QWORD *)(v23 - 8);
            if ( v23 == v24 )
            {
              v27 = 0;
            }
            else
            {
              do
              {
                v25 = v24;
                v26 = *(void **)(v24 - 16);
                v24 -= 144;
                if ( v26 )
                  operator delete[](v26);
              }
              while ( *((_QWORD *)v99 + 4) != v24 );
              v27 = 144LL * *(_QWORD *)(v25 - 152);
            }
            operator delete[]((void *)(v24 - 8), v27 + 8);
          }
          operator delete(v99, 0x28u);
        }
        goto LABEL_31;
      }
    }
    else
    {
      v18 = *((_QWORD *)v11 + 1);
    }
    v91 = HIDWORD(v13);
    v85 = *a1;
    sub_24B90(*a1, v18 + 1);
    v11 = v85;
    v49 = *((_QWORD *)v85 + 2);
    v50 = *((_QWORD *)v85 + 4);
    v15 = (unsigned __int8)(v49 - 1)
        & (unsigned __int8)(v91
                          ^ *((_BYTE *)v85 + 24)
                          ^ (-109 * ((-109 * (v10 ^ BYTE4(v10))) ^ ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) >> 32))))
        & 0x7F;
    v16 = (unsigned __int8 *)(v50
                            + 144
                            * (((v49 - 1)
                              & (v91
                               ^ *((_QWORD *)v85 + 3)
                               ^ (0xD6E8FEB86659FD93LL
                                * ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10)))
                                 ^ ((0xD6E8FEB86659FD93LL * (v10 ^ HIDWORD(v10))) >> 32))))) >> 7));
    while ( 1 )
    {
      v51 = v16[v15];
      if ( v51 == 255 || v10 == *(_QWORD *)(*((_QWORD *)v16 + 16) + 8 * v51) )
        break;
      if ( ++v15 == 128 )
      {
        v16 += 144;
        v15 = 0;
        if ( 0x8E38E38E38E38E39LL * ((__int64)&v16[-v50] >> 4) == v49 >> 7 )
          v16 = *((unsigned __int8 **)v85 + 4);
      }
    }
    goto LABEL_17;
  }
  return v100 - __readfsqword(0x28u);
}

