unsigned __int64 __fastcall sub_1A0C60(_QWORD *a1, int a2)
{
  __int64 v2; // rax
  _QWORD *v3; // r12
  __int64 v4; // rdi
  int v5; // r10d
  _QWORD *v6; // r14
  __int64 v7; // r15
  int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v15; // rsi
  __int64 v16; // rax
  signed int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  char v20; // cl
  __int64 v21; // rsi
  __m128i *v22; // rcx
  char v23; // al
  __int64 v24; // [rsp+10h] [rbp-68h]
  bool v25; // [rsp+1Bh] [rbp-5Dh]
  unsigned __int64 v27; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v2 = *a1;
  if ( !*a1 )
  {
    if ( !under_debugger )
      sub_3835A0(51329);
LABEL_37:
    BUG();
  }
  v3 = a1;
  v4 = a1[12];
  v5 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL) + 84LL) + a2 - 1)
     & -*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL) + 84LL);
  if ( !v3[13] )
    goto LABEL_13;
  v24 = *(_QWORD *)(*(_QWORD *)(v2 + 64) + 1504LL);
  v6 = v3;
  v25 = v5 != 0;
  v7 = 0;
  v8 = 0;
  v9 = v5;
  do
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v4 + 8 * v7);
      if ( *(_DWORD *)v10 )
        break;
      v7 = ++v8;
      if ( (unsigned __int64)v8 >= v6[13] )
        goto LABEL_12;
    }
    if ( !(unsigned __int8)sub_32F650(v10 + 64, &v27) )
    {
      if ( !under_debugger )
        sub_3835A0(51690);
      goto LABEL_37;
    }
    v11 = v6[9];
    if ( v27 >= v11 && v25 && v11 + v9 - 1 >= v27 + *(int *)(v10 + 68) - 1 )
    {
      v12 = *v6;
      sub_11CFE0(*(_QWORD *)(v6[12] + 8 * v7));
      v13 = *(_DWORD *)(v12 + 24);
      BYTE1(v13) &= ~2u;
      LOBYTE(v13) = v13 | 0x80;
      *(_DWORD *)(v12 + 24) = v13;
    }
    else
    {
      if ( *(_DWORD *)v10 != 4 || !(unsigned __int8)sub_11F7C0((char *)(v10 + 32), &v28, 0) )
      {
        if ( !under_debugger )
          sub_3835A0(51691);
        goto LABEL_37;
      }
      v15 = v6[9];
      v16 = v27;
      v17 = *(_DWORD *)(v10 + 36) / 2;
      v18 = v27 + v17;
      if ( v18 != v15 && v18 != v15 + a2 && v18 != v9 + v15 )
      {
        if ( !under_debugger )
          sub_3835A0(52085);
        goto LABEL_37;
      }
      v19 = v28;
      v20 = 8 * v17;
      if ( *(_BYTE *)(*(_QWORD *)(*v6 + 480LL) + 145LL) == (v17 == 0 || (__int64)v27 < v15) )
        v19 = v28 >> v20;
      v21 = 1LL << v20;
      v22 = *(__m128i **)(v10 + 40);
      v28 = v19 & (v21 - 1);
      v22[1] = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      *(_DWORD *)(v10 + 36) = v17;
      if ( v16 >= v6[9] )
        v23 = sub_126950(v10 + 64, v24, v17);
      else
        v23 = sub_12A590(v10 + 64, v24, v17, 1);
      if ( !v23 )
      {
        if ( !under_debugger )
          sub_3835A0(51692);
        goto LABEL_37;
      }
    }
    ++v8;
    v4 = v6[12];
    v7 = v8;
  }
  while ( (unsigned __int64)v8 < v6[13] );
LABEL_12:
  v3 = v6;
LABEL_13:
  if ( v4 )
  {
    v3[13] = 0;
    qfree();
    v3[12] = 0;
    v3[14] = 0;
  }
  v3[15] = 0;
  *v3 = 0;
  return v29 - __readfsqword(0x28u);
}

