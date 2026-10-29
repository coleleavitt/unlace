unsigned __int64 __fastcall sub_10E8D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __m128i a5)
{
  char v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  int v9; // ebp
  unsigned __int64 v10; // rdx
  char v11; // r12
  int i; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rsi
  unsigned __int64 *v15; // r12
  __int64 *v16; // r13
  unsigned __int64 *v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v25; // [rsp+8h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 316) = a2;
  if ( (a2 & 6) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC3E5u, *(double *)a5.m128i_i64);
    goto LABEL_38;
  }
  if ( (a2 & 6) == 6 )
  {
    if ( !under_debugger )
      sub_383060(0xCAEBu, *(double *)a5.m128i_i64);
    goto LABEL_38;
  }
  v6 = a2;
  sub_10CB40(a1, a2, a3, a4, a5);
  v7 = *(_QWORD *)(a1 + 320);
  v8 = *(int *)(v7 + 64);
  v9 = *(_DWORD *)(v7 + 64);
  sub_1053D0((__int64 *)(a1 + 8), v8, a1 + 288, *(double *)a5.m128i_i64);
  sub_1053D0((__int64 *)(a1 + 32), v8, a1 + 288, *(double *)a5.m128i_i64);
  v10 = *(_QWORD *)(a1 + 64);
  if ( v10 >= v8 )
  {
    if ( v8 != v10 )
      *(_QWORD *)(a1 + 64) = v8;
    v24 = 0;
    if ( v9 > 0 )
      goto LABEL_7;
LABEL_28:
    v15 = *(unsigned __int64 **)(a1 + 128);
    if ( !v15 )
      return v25 - __readfsqword(0x28u);
    v16 = (__int64 *)(a1 + 104);
    if ( !(16LL * *(_QWORD *)(a1 + 136)) )
      return v25 - __readfsqword(0x28u);
    goto LABEL_14;
  }
  v22 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 72) < v8 )
  {
    v23 = qvector_reserve(a1 + 56, v22, v8, 4);
    v10 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 56) = v23;
    v22 = v23;
  }
  memset((void *)(v22 + 4 * v10), 0, 4 * (v8 - v10));
  *(_QWORD *)(a1 + 64) = v8;
  v24 = 0;
  if ( v9 <= 0 )
    goto LABEL_28;
LABEL_7:
  v11 = v6 & 1;
  for ( i = 0; i < v9; v24 = i )
  {
    v14 = 40LL * i;
    if ( v11 )
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 176) + v14);
    else
      v13 = (_QWORD *)(*(_QWORD *)(a1 + 200) + v14);
    sub_103FB0(a1, v13, (__int64)sub_102260, 0, (__int64)&v24);
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v24) = *(_QWORD *)(a1 + 136);
    i = v24 + 1;
  }
  v15 = *(unsigned __int64 **)(a1 + 128);
  if ( v15 )
  {
    v16 = (__int64 *)(a1 + 104);
    if ( 16LL * *(_QWORD *)(a1 + 136) )
    {
      do
      {
LABEL_14:
        v17 = v15;
        v15 += 2;
        sub_103DA0(v17, v16, *(double *)a5.m128i_i64);
      }
      while ( v15 != (unsigned __int64 *)(*(_QWORD *)(a1 + 128) + 16LL * *(_QWORD *)(a1 + 136)) );
    }
  }
  v24 = 1;
  if ( v9 > 1 )
  {
    v18 = 1;
    while ( 1 )
    {
      if ( (*(_BYTE *)(a1 + 316) & 2) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 320);
        if ( (unsigned int)v18 >= *(_DWORD *)(v19 + 64) )
          sub_101D70(*(double *)a5.m128i_i64);
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 528) + 8LL * (unsigned int)v18) + 24LL) & 0x600) != 0x200 )
          break;
      }
      sub_103FB0(a1, (_QWORD *)(*(_QWORD *)(a1 + 200) + 40LL * v18), (__int64)sub_101C70, 0, (__int64)&v24);
      if ( (*(_BYTE *)(a1 + 316) & 4) != 0 && (v20 = (_QWORD *)(*(_QWORD *)(a1 + 224) + 40LL * v24), v20[3]) )
      {
        sub_103FB0(a1, v20, (__int64)sub_101C70, 0, (__int64)&v24);
        v18 = v24 + 1;
        v24 = v18;
        if ( v18 >= v9 )
          return v25 - __readfsqword(0x28u);
      }
      else
      {
        v18 = v24 + 1;
        v24 = v18;
        if ( v18 >= v9 )
          return v25 - __readfsqword(0x28u);
      }
    }
    if ( !under_debugger )
      sub_383060(0xC3E6u, *(double *)a5.m128i_i64);
LABEL_38:
    BUG();
  }
  return v25 - __readfsqword(0x28u);
}

