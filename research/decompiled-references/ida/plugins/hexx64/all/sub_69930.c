__int64 __fastcall sub_69930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  int v7; // ebx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  _DWORD *v22; // rax
  _DWORD *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v28; // rax
  __int64 v29; // rax

  v7 = *(_DWORD *)(a2 + 72);
  v8 = v7 + 1;
  v9 = sub_68AC0(a1, v7 + 1, 0, a4, a5);
  *(_DWORD *)(v9 + 24) |= 2u;
  v10 = v9;
  *(_DWORD *)(v9 + 76) = *(_DWORD *)(a2 + 76);
  v11 = *(_QWORD *)(a2 + 368);
  *(_DWORD *)(a2 + 76) = 3;
  v12 = *(_QWORD *)(v9 + 368);
  *(_QWORD *)(v10 + 368) = v11;
  v13 = _mm_loadu_si128((const __m128i *)(v10 + 376));
  *(_QWORD *)(v10 + 376) = *(_QWORD *)(a2 + 376);
  *(_QWORD *)(v10 + 384) = *(_QWORD *)(a2 + 384);
  *(_QWORD *)(a2 + 368) = v12;
  *(__m128i *)(a2 + 376) = v13;
  v14 = *(_QWORD *)(v10 + 352);
  v15 = *(_QWORD *)(v10 + 344);
  if ( *(_QWORD *)(v10 + 360) < (unsigned __int64)(v14 + 1) )
  {
    v28 = qvector_reserve(v10 + 344, v15, v14 + 1, 4);
    *(_QWORD *)(v10 + 344) = v28;
    v15 = v28;
    v14 = *(_QWORD *)(v10 + 352);
  }
  *(_DWORD *)(v15 + 4 * v14) = v7;
  ++*(_QWORD *)(v10 + 352);
  v16 = *(_QWORD *)(a2 + 376);
  v17 = *(_QWORD *)(a2 + 368);
  if ( *(_QWORD *)(a2 + 384) < (unsigned __int64)(v16 + 1) )
  {
    v29 = qvector_reserve(a2 + 368, v17, v16 + 1, 4);
    *(_QWORD *)(a2 + 368) = v29;
    v17 = v29;
    v16 = *(_QWORD *)(a2 + 376);
  }
  *(_DWORD *)(v17 + 4 * v16) = v8;
  v18 = *(_QWORD *)(a2 + 512);
  ++*(_QWORD *)(a2 + 376);
  sub_1D4F80(v10, v18);
  *(_QWORD *)(v10 + 32) = *(_QWORD *)(a3 + 24);
  if ( *(int *)(v10 + 376) > 0 )
  {
    v19 = 0;
    while ( 1 )
    {
      v20 = *(unsigned int *)(*(_QWORD *)(v10 + 368) + 4 * v19);
      if ( (unsigned int)v20 >= *(_DWORD *)(a1 + 64) )
        break;
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v20);
      v22 = *(_DWORD **)(v21 + 344);
      v23 = &v22[*(_QWORD *)(v21 + 352)];
      if ( v22 == v23 )
      {
LABEL_19:
        if ( !under_debugger )
          sub_383060(0xC9C8u, *(double *)v13.m128i_i64);
        goto LABEL_21;
      }
      while ( v7 != *v22 )
      {
        if ( v23 == ++v22 )
          goto LABEL_19;
      }
      *v22 = v8;
      if ( *(_DWORD *)(v10 + 376) <= (int)++v19 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_383060(0xCDEFu, *(double *)v13.m128i_i64);
LABEL_21:
    BUG();
  }
LABEL_13:
  *(_QWORD *)(v10 + 48) = a3;
  *(_QWORD *)(v10 + 56) = *(_QWORD *)(a2 + 56);
  v24 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a2 + 56) = v24;
  if ( v24 )
    *(_QWORD *)(v24 + 8) = 0;
  else
    *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a3 + 16) = 0;
  v25 = *(_DWORD *)(a2 + 24);
  BYTE1(v25) &= ~2u;
  LOBYTE(v25) = v25 | 0x80;
  *(_DWORD *)(a2 + 24) = v25;
  v26 = *(_DWORD *)(v10 + 24);
  BYTE1(v26) &= ~2u;
  LOBYTE(v26) = v26 | 0x80;
  *(_DWORD *)(v10 + 24) = v26;
  sub_330FD0(v10);
  return v10;
}

