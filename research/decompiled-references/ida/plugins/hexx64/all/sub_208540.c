__int64 __fastcall sub_208540(__int64 a1, __int64 a2, char a3, unsigned __int64 a4, __int64 a5, __m128i a6, __m128 a7)
{
  __int64 v8; // rdi
  unsigned int v13; // eax
  unsigned int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  _DWORD *v17; // rsi
  unsigned int *v18; // rax
  unsigned int v19; // r12d
  _QWORD **v20; // rdi
  __int64 *v21; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  int v27; // edx
  __int64 v28[9]; // [rsp+0h] [rbp-48h] BYREF

  v28[1] = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v8 + 2) & 4) != 0 )
    goto LABEL_23;
  LOBYTE(v13) = sub_A9400(v8, *(_DWORD **)(a1 + 32), a2, a4, a5 + 80, *(double *)a6.m128i_i64);
  v14 = v13;
  if ( !(_BYTE)v13 || *(_DWORD *)(a2 + 4) != a4 && !*(_DWORD *)(a5 + 92) )
    return 0;
  v15 = *(_QWORD *)(a1 + 32);
  if ( *(_BYTE *)(v15 + 64) == 8
    && (unsigned __int8)sub_F3440(
                          *(_QWORD *)(v15 + 72),
                          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
                          *(const __m128i **)(a1 + 16),
                          *(_QWORD *)(a1 + 24),
                          a2) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL) |= 0x80u;
    **(_DWORD **)(a1 + 8) &= ~0x10000u;
    return v14;
  }
  v16 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v16 + 320) )
  {
    v17 = *(_DWORD **)(a1 + 32);
    if ( *v17 == 4 || *v17 == 67 && v17[9] == v17[17] )
    {
      v20 = *(_QWORD ***)(v16 + 800);
      if ( v20 )
      {
        if ( a3 )
        {
          v21 = sub_1FBD10(v20, (unsigned __int64)(v17 + 8));
          if ( !v21 || v21[1] >= a4 )
          {
            v16 = *(_QWORD *)(a1 + 8);
            goto LABEL_18;
          }
        }
        else
        {
          v21 = sub_1FBD10(v20, (unsigned __int64)(v17 + 16));
          if ( !v21 || v21[1] >= a4 )
            goto LABEL_10;
        }
        v25 = *v21;
        v26 = *((int *)v21 + 4);
        if ( *(_QWORD *)(v25 + 440) < v26 )
        {
          if ( !under_debugger )
            sub_383060(0xC83Au, *(double *)a6.m128i_i64);
          BUG();
        }
        v27 = *(_DWORD *)(*(_QWORD *)(v25 + 432) + 104 * v26 + 24);
        if ( (v27 & 0x40) != 0 )
          return 0;
        v16 = *(_QWORD *)(a1 + 8);
        if ( *(_BYTE *)(v16 + 320) )
        {
          if ( (v27 & 0x100) != 0 )
            return 0;
        }
      }
    }
  }
  if ( a3 )
  {
LABEL_18:
    v19 = 4;
    goto LABEL_19;
  }
LABEL_10:
  v18 = *(unsigned int **)(a1 + 32);
  if ( (*((_BYTE *)v18 + 5) & 0x40) != 0
    && *(int *)(a2 + 4) <= 4
    && sub_32ED00(*v18)
    && (unsigned __int8)sub_11FD80((char *)(*(_QWORD *)(a1 + 32) + 48LL), v28, 0)
    && !v28[0]
    && !sub_11CC50(
          (unsigned __int8 *)(*(_QWORD *)(a1 + 32) + 32LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL),
          0,
          *(double *)a6.m128i_i64)
    && sub_131730(
         *(unsigned __int64 **)(*(_QWORD *)(a1 + 8) + 1504LL),
         *(const __m128i **)(a1 + 16),
         *(_QWORD *)(a1 + 24),
         *(_QWORD *)(a1 + 32) + 32LL,
         2 * *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL),
         1u,
         a6,
         a7,
         1u) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL);
    v23 = *(_QWORD *)(a1 + 16);
    v24 = *(_DWORD *)(v23 + 24);
    BYTE1(v24) &= ~2u;
    LOBYTE(v24) = v24 | 0x80;
    *(_DWORD *)(v23 + 24) = v24;
    return v14;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v19 = 0;
LABEL_19:
  if ( !sub_11CC50((unsigned __int8 *)a2, *(_QWORD *)(v16 + 1496), 0, *(double *)a6.m128i_i64) )
    v19 |= 3u;
  if ( !(unsigned __int8)sub_AB6D0(
                           *(__m128i **)(a1 + 16),
                           *(unsigned int **)(a1 + 24),
                           a2,
                           v19,
                           *(double *)a6.m128i_i64) )
  {
    v8 = *(_QWORD *)(a1 + 8);
LABEL_23:
    sub_179D00((_QWORD *)(v8 + 952), (unsigned __int64 *)(*(_QWORD *)(a1 + 24) + 24LL));
    return 0;
  }
  return v14;
}

