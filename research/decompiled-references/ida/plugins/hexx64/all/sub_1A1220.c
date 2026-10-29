unsigned __int64 __fastcall sub_1A1220(_QWORD *a1, int a2, __m128i a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // rdi
  int v6; // r10d
  _QWORD *v7; // r14
  __int64 v8; // r15
  int v9; // r12d
  __int64 v10; // rbp
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  char v21; // cl
  __int64 v22; // rsi
  __m128 *v23; // rcx
  char v24; // al
  unsigned __int64 *v25; // [rsp+10h] [rbp-68h]
  bool v26; // [rsp+1Bh] [rbp-5Dh]
  unsigned __int64 v28; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v3 = *a1;
  if ( !*a1 )
  {
    if ( !under_debugger )
      sub_383060(0xC881u, *(double *)a3.m128i_i64);
LABEL_37:
    BUG();
  }
  v4 = a1;
  v5 = a1[12];
  v6 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 64) + 1504LL) + 84LL) + a2 - 1)
     & -*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 64) + 1504LL) + 84LL);
  if ( !v4[13] )
    goto LABEL_13;
  v25 = *(unsigned __int64 **)(*(_QWORD *)(v3 + 64) + 1504LL);
  v7 = v4;
  v26 = v6 != 0;
  v8 = 0;
  v9 = 0;
  v10 = v6;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v5 + 8 * v8);
      if ( *(_DWORD *)v11 )
        break;
      v8 = ++v9;
      if ( (unsigned __int64)v9 >= v7[13] )
        goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_32F330(v11 + 64, &v28) )
    {
      if ( !under_debugger )
        sub_383060(0xC9EAu, *(double *)a3.m128i_i64);
      goto LABEL_37;
    }
    v12 = v7[9];
    if ( v28 >= v12 && v26 && v12 + v10 - 1 >= v28 + *(int *)(v11 + 68) - 1 )
    {
      v13 = *v7;
      sub_11D5A0(*(_QWORD *)(v7[12] + 8 * v8));
      v14 = *(_DWORD *)(v13 + 24);
      BYTE1(v14) &= ~2u;
      LOBYTE(v14) = v14 | 0x80;
      *(_DWORD *)(v13 + 24) = v14;
    }
    else
    {
      if ( *(_DWORD *)v11 != 4 || !(unsigned __int8)sub_11FD80((char *)(v11 + 32), (__int64 *)&v29, 0) )
      {
        if ( !under_debugger )
          sub_383060(0xC9EBu, *(double *)a3.m128i_i64);
        goto LABEL_37;
      }
      v16 = v7[9];
      v17 = v28;
      v18 = *(_DWORD *)(v11 + 36) / 2;
      v19 = v28 + v18;
      if ( v19 != v16 && v19 != v16 + a2 && v19 != v10 + v16 )
      {
        if ( !under_debugger )
          sub_383060(0xCB75u, *(double *)a3.m128i_i64);
        goto LABEL_37;
      }
      v20 = v29;
      v21 = 8 * v18;
      if ( *(_BYTE *)(*(_QWORD *)(*v7 + 480LL) + 145LL) == (v18 == 0 || (__int64)v28 < v16) )
        v20 = v29 >> v21;
      v22 = 1LL << v21;
      v23 = *(__m128 **)(v11 + 40);
      v29 = v20 & (v22 - 1);
      a3 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
      v23[1] = (__m128)a3;
      *(_DWORD *)(v11 + 36) = v18;
      if ( v17 >= v7[9] )
        v24 = sub_126F10((int *)(v11 + 64), v25, v18, (__int64)v23, *(double *)a3.m128i_i64);
      else
        v24 = sub_12AB50((unsigned int **)(v11 + 64), v25, v18, 1, a3);
      if ( !v24 )
      {
        if ( !under_debugger )
          sub_383060(0xC9ECu, *(double *)a3.m128i_i64);
        goto LABEL_37;
      }
    }
    ++v9;
    v5 = v7[12];
    v8 = v9;
  }
  while ( (unsigned __int64)v9 < v7[13] );
LABEL_12:
  v4 = v7;
LABEL_13:
  if ( v5 )
  {
    v4[13] = 0;
    qfree(v5);
    v4[12] = 0;
    v4[14] = 0;
  }
  v4[15] = 0;
  *v4 = 0;
  return v30 - __readfsqword(0x28u);
}

