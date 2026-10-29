__int64 __fastcall sub_1D9600(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v4; // rax
  int *v5; // rbx
  int v6; // eax
  char v8; // dl
  char v9; // dl
  char v10; // dl
  char v11; // al
  _DWORD *v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rax
  int *v16; // rdx
  int *v17; // r8
  int v18; // edi
  int v19; // eax
  int v20; // eax
  char v21; // al
  _DWORD *v22; // rdx
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rax
  int flags; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r12
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __m128i *v37; // rbp
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rsi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rsi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rbp
  unsigned __int64 v54; // r12
  __int64 v55; // rbx
  __int64 v56; // r15
  __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rdx
  int v60; // eax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // r12
  _QWORD *v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __m128i *v67; // rbp
  __int64 v68; // [rsp+10h] [rbp-48h]
  __int64 v69; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 138) )
  {
    a2 = *(_QWORD *)(a1 + 32) + 24LL;
    sub_1D9190(a1, (unsigned __int64 *)a2, 0);
  }
  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(int **)(a1 + 32);
  if ( v4 )
  {
    v8 = *((_BYTE *)v5 + 32);
    if ( v8 == 5 )
    {
      *(_QWORD *)(*((_QWORD *)v5 + 5) + 8LL) += v4;
      v4 = *(_QWORD *)(a1 + 120);
      v5 = *(int **)(a1 + 32);
    }
    else if ( v8 == 8 )
    {
      *(_DWORD *)(*((_QWORD *)v5 + 5) + 12LL) += v4;
      v5 = *(int **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 120);
      v9 = *((_BYTE *)v5 + 48);
      if ( v9 != 5 )
      {
LABEL_18:
        if ( v9 == 8 )
        {
          *(_DWORD *)(*((_QWORD *)v5 + 7) + 12LL) += v4;
          v4 = *(_QWORD *)(a1 + 120);
          v5 = *(int **)(a1 + 32);
        }
        v10 = *((_BYTE *)v5 + 64);
        if ( v10 != 5 )
          goto LABEL_21;
        goto LABEL_35;
      }
LABEL_34:
      *(_QWORD *)(*((_QWORD *)v5 + 7) + 8LL) += v4;
      v5 = *(int **)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 120);
      v10 = *((_BYTE *)v5 + 64);
      if ( v10 != 5 )
      {
LABEL_21:
        if ( v10 == 8 )
        {
          *(_DWORD *)(*((_QWORD *)v5 + 9) + 12LL) += v4;
          v5 = *(int **)(a1 + 32);
        }
        goto LABEL_4;
      }
LABEL_35:
      *(_QWORD *)(*((_QWORD *)v5 + 9) + 8LL) += v4;
      v5 = *(int **)(a1 + 32);
      goto LABEL_4;
    }
    v9 = *((_BYTE *)v5 + 48);
    if ( v9 != 5 )
      goto LABEL_18;
    goto LABEL_34;
  }
LABEL_4:
  v6 = *v5;
  if ( *(_BYTE *)(a1 + 136) )
  {
    if ( v6 == 55 )
    {
      if ( *((_BYTE *)v5 + 32) != 6 )
      {
        v11 = *((_BYTE *)v5 + 32);
        goto LABEL_28;
      }
      v25 = *(_QWORD *)(a1 + 8);
      v26 = *(unsigned int *)(a1 + 128);
      if ( (unsigned int)v26 >= *(_DWORD *)(v25 + 64) )
        goto LABEL_96;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 528) + 8 * v26) + 32LL) == *((_QWORD *)v5 + 5) )
      {
LABEL_59:
        v11 = *((_BYTE *)v5 + 32);
        if ( v11 == 6 )
          return 0;
LABEL_28:
        if ( v11 != 7 )
          return 0xFFFFFFFFLL;
        v12 = *(_DWORD **)(a1 + 64);
        v13 = (unsigned int)v5[10];
        if ( (_DWORD)v13 == v12[148] )
        {
          v5[10] = *(_DWORD *)(a1 + 132);
          return 0;
        }
        v14 = v12[146];
        if ( (int)v13 >= v14 && (int)v13 < v12[147] )
        {
          v5[10] = *(_DWORD *)(a1 + 128) + v13 - v14;
          return 0;
        }
        v45 = *(_QWORD *)(a1 + 8);
        if ( (unsigned int)v13 < *(_DWORD *)(v45 + 64) )
        {
          v46 = sub_330F80((_QWORD *)v45, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 528) + 8 * v13) + 32LL));
          v47 = **(_QWORD ***)(a1 + 56);
          if ( v47 )
          {
            v48 = *v47 & 0xFFFFFFFFFFFFFFFCLL;
            if ( !v48 )
            {
LABEL_84:
              v57 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
              *((_BYTE *)v5 + 32) = 6;
              v58 = 8 * *(_DWORD *)(v57 + 84);
              if ( (unsigned __int64)v58 <= 0x3F )
                v46 &= ~(-1LL << v58);
              *((_QWORD *)v5 + 5) = v46;
              return 0;
            }
            while ( (*(_BYTE *)v48 & 2) == 0 )
            {
              while ( 1 )
              {
                v49 = *(_QWORD *)(v48 + 24);
                if ( v46 >= v49 )
                  break;
                v48 = *(_QWORD *)(v48 + 8);
                if ( (*(_BYTE *)v48 & 2) != 0 )
                  goto LABEL_77;
              }
              if ( v49 >= v46 )
              {
                if ( v47 == (_QWORD *)v48 )
                  break;
                goto LABEL_84;
              }
              v48 = *(_QWORD *)(v48 + 16);
            }
          }
LABEL_77:
          sub_66FA0(*(_QWORD *)(a1 + 8), 0);
          return 0xFFFFFFFFLL;
        }
LABEL_96:
        sub_1D36D0(*(double *)a3.m128i_i64);
      }
      a2 = 4;
      flags = get_flags_ex();
      v5 = *(int **)(a1 + 32);
      if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 )
      {
        *v5 = 56;
        v59 = *(_QWORD *)(a1 + 16);
        v60 = *(_DWORD *)(v59 + 24);
        BYTE1(v60) &= ~2u;
        LOBYTE(v60) = v60 | 0x80;
        *(_DWORD *)(v59 + 24) = v60;
        v61 = *(_QWORD *)(a1 + 16);
        v62 = *(_DWORD *)(v61 + 24);
        BYTE1(v62) &= ~2u;
        LOBYTE(v62) = v62 | 0x80;
        *(_DWORD *)(v61 + 24) = v62;
        v63 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
        v64 = (_QWORD *)j__qalloc_or_throw(80, 4, v61, v28);
        v64[4] = 0xFFFFFFFF00000000LL;
        v64[5] = 0;
        v64[6] = 0xFFFFFFFF00000000LL;
        v64[7] = 0;
        v64[8] = 0xFFFFFFFF00000000LL;
        v64[9] = 0;
        sub_330970((__int64)v64, v63);
        *(_DWORD *)v64 = 58;
        a2 = (__int64)v64;
        v67 = (__m128i *)sub_68FC0(
                           *(_QWORD *)(a1 + 8),
                           *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 1,
                           v65,
                           v66,
                           *(double *)a3.m128i_i64);
        sub_A3160((__int64)v67, v64, 0, *(double *)a3.m128i_i64);
        v67[1].m128i_i32[2] |= 2u;
        a3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v63, (__m128i)(unsigned __int64)(v63 + 1));
        v67[2] = a3;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 588LL);
        v5 = *(int **)(a1 + 32);
      }
      v6 = *v5;
      if ( *v5 != 54 )
      {
LABEL_58:
        if ( v6 != 55 )
        {
LABEL_7:
          if ( (unsigned int)(v6 - 42) > 0xA )
          {
            if ( v6 != 53 )
            {
LABEL_9:
              if ( v6 == 58 )
              {
                *v5 = 55;
                *(_BYTE *)(*(_QWORD *)(a1 + 32) + 32LL) = 7;
                v50 = *(unsigned int *)(a1 + 132);
                *(_DWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = v50;
                v51 = *(_QWORD *)(a1 + 32);
                v52 = *(_QWORD *)(v51 + 24);
                v53 = *(_QWORD **)(v51 + 16);
                v68 = v52;
                v69 = *(_QWORD *)(a1 + 16);
                if ( *(_QWORD *)(a1 + 104) )
                {
                  v54 = 0;
                  do
                  {
                    v55 = j__qalloc_or_throw(80, a2, v50, v52);
                    *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v55 + 40) = 0;
                    *(_QWORD *)(v55 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v55 + 56) = 0;
                    *(_QWORD *)(v55 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v55 + 72) = 0;
                    sub_330970(v55, v68);
                    *(_DWORD *)v55 = 4;
                    v56 = v54++;
                    v56 *= 16;
                    sub_125180((unsigned __int8 *)(v55 + 32), (unsigned __int8 *)(v56 + *(_QWORD *)(a1 + 96)));
                    sub_125180((unsigned __int8 *)(v55 + 64), (unsigned __int8 *)(v56 + *(_QWORD *)(a1 + 72)));
                    a2 = v55;
                    v53 = sub_A3160(v69, (_QWORD *)v55, (__int64)v53, *(double *)a3.m128i_i64);
                  }
                  while ( v54 < *(_QWORD *)(a1 + 104) );
                }
              }
              return 0;
            }
            v15 = *((_QWORD *)v5 + 7);
            v16 = *(int **)(v15 + 24);
            v17 = &v16[*(_QWORD *)(v15 + 32)];
            if ( v17 != v16 )
            {
              do
              {
                a2 = *(_QWORD *)(a1 + 64);
                v20 = *v16;
                if ( *v16 == *(_DWORD *)(a2 + 592) )
                {
                  v19 = *(_DWORD *)(a1 + 132);
                }
                else
                {
                  v18 = *(_DWORD *)(a2 + 584);
                  if ( v20 < v18 || v20 >= *(_DWORD *)(a2 + 588) )
                    return 0xFFFFFFFFLL;
                  v19 = *(_DWORD *)(a1 + 128) + v20 - v18;
                }
                *v16++ = v19;
              }
              while ( v17 != v16 );
              v5 = *(int **)(a1 + 32);
              v6 = *v5;
              goto LABEL_9;
            }
            return 0;
          }
          v21 = *((_BYTE *)v5 + 64);
          if ( v21 == 6 )
            return 0;
          if ( v21 != 7 )
            return 0xFFFFFFFFLL;
          v22 = *(_DWORD **)(a1 + 64);
          v23 = (unsigned int)v5[18];
          if ( (_DWORD)v23 == v22[148] )
          {
            v5[18] = *(_DWORD *)(a1 + 132);
            return 0;
          }
          v24 = v22[146];
          if ( (int)v23 >= v24 && (int)v23 < v22[147] )
          {
            v5[18] = *(_DWORD *)(a1 + 128) + v23 - v24;
            return 0;
          }
          v38 = *(_QWORD *)(a1 + 8);
          if ( (unsigned int)v23 < *(_DWORD *)(v38 + 64) )
          {
            v39 = sub_330F80((_QWORD *)v38, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 528) + 8 * v23) + 32LL));
            v40 = **(_QWORD ***)(a1 + 56);
            if ( v40 )
            {
              v41 = *v40 & 0xFFFFFFFFFFFFFFFCLL;
              if ( !v41 )
              {
LABEL_68:
                v43 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
                *((_BYTE *)v5 + 64) = 6;
                v44 = 8 * *(_DWORD *)(v43 + 84);
                if ( (unsigned __int64)v44 <= 0x3F )
                  v39 &= ~(-1LL << v44);
                *((_QWORD *)v5 + 9) = v39;
                return 0;
              }
              while ( (*(_BYTE *)v41 & 2) == 0 )
              {
                v42 = *(_QWORD *)(v41 + 24);
                if ( v39 >= v42 )
                {
                  if ( v42 >= v39 )
                  {
                    if ( v40 == (_QWORD *)v41 )
                      goto LABEL_77;
                    goto LABEL_68;
                  }
                  v41 = *(_QWORD *)(v41 + 16);
                }
                else
                {
                  v41 = *(_QWORD *)(v41 + 8);
                }
              }
            }
            goto LABEL_77;
          }
          goto LABEL_96;
        }
        goto LABEL_59;
      }
    }
    else if ( v6 != 54 )
    {
      goto LABEL_7;
    }
    *v5 = 57;
    sub_11CA10((char *)(*(_QWORD *)(a1 + 32) + 32LL), (char *)(*(_QWORD *)(a1 + 32) + 48LL));
    v29 = *(_QWORD *)(a1 + 32);
    sub_11CA10((char *)(v29 + 48), (char *)(v29 + 64));
    v30 = *(_QWORD *)(a1 + 16);
    v31 = *(_DWORD *)(v30 + 24);
    BYTE1(v31) &= ~2u;
    LOBYTE(v31) = v31 | 0x80;
    *(_DWORD *)(v30 + 24) = v31;
    v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    v34 = (_QWORD *)j__qalloc_or_throw(80, v29 + 64, v30, v33);
    v34[4] = 0xFFFFFFFF00000000LL;
    v34[5] = 0;
    v34[6] = 0xFFFFFFFF00000000LL;
    v34[7] = 0;
    v34[8] = 0xFFFFFFFF00000000LL;
    v34[9] = 0;
    sub_330970((__int64)v34, v32);
    *(_DWORD *)v34 = 58;
    a2 = (__int64)v34;
    v37 = (__m128i *)sub_68FC0(
                       *(_QWORD *)(a1 + 8),
                       *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 1,
                       v35,
                       v36,
                       *(double *)a3.m128i_i64);
    sub_A3160((__int64)v37, v34, 0, *(double *)a3.m128i_i64);
    v37[1].m128i_i32[2] |= 2u;
    a3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v32, (__m128i)(unsigned __int64)(v32 + 1));
    v37[2] = a3;
    ++*(_DWORD *)(*(_QWORD *)(a1 + 64) + 588LL);
    v5 = *(int **)(a1 + 32);
    v6 = *v5;
    goto LABEL_58;
  }
  if ( v6 == 55 )
  {
    if ( *((_BYTE *)v5 + 32) != 7 || *(_DWORD *)(*(_QWORD *)(a1 + 64) + 592LL) != v5[10] )
      return 0;
    *v5 = 58;
    sub_11CDA0(*(_QWORD *)(a1 + 32) + 32LL);
    v5 = *(int **)(a1 + 32);
    v6 = *v5;
  }
  if ( (unsigned int)(v6 - 42) > 0xA )
  {
    if ( v6 != 57 )
      return 0;
    return (unsigned int)*(unsigned __int8 *)(a1 + 137) - 1;
  }
  else
  {
    if ( *((_BYTE *)v5 + 64) != 7 )
      return 0;
    return (unsigned int)-(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 592LL) == v5[18]);
  }
}

