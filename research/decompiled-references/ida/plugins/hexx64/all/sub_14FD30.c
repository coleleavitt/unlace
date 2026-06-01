__int64 __fastcall sub_14FD30(
        const __m128i *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        __m128i a7,
        __m128 a8)
{
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // r8d
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  int *v18; // rax
  int v19; // r8d
  __int64 v20; // r9
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  _DWORD *v26; // rax
  int v27; // ebx
  __int64 v28; // rax
  int *v29; // rax
  char v30; // al
  int v32; // [rsp+0h] [rbp-58h]
  __int64 v33; // [rsp+0h] [rbp-58h]
  int v34; // [rsp+Ch] [rbp-4Ch]
  __int64 v35[9]; // [rsp+10h] [rbp-48h] BYREF

  v35[1] = __readfsqword(0x28u);
  v11 = sub_129440((__int64)a1, a3, a2, 0, *(double *)a7.m128i_i64, a8);
  if ( !v11 )
    return 0;
  v12 = v11;
  while ( *(_DWORD *)v12 == 67 && *(_DWORD *)(v12 + 36) == *(_DWORD *)(v12 + 68) && *(_BYTE *)(v12 + 32) == 4 )
  {
    v12 = *(_QWORD *)(v12 + 40);
    if ( !v12 )
      return 0;
  }
  if ( *(_DWORD *)v12 != 65 )
    return 0;
  v13 = *(_DWORD *)(v12 + 36);
  if ( *(_DWORD *)(a3 + 4) < v13 )
    return 0;
  if ( a5 )
  {
    *a5 = v12;
    if ( !a6 )
    {
      if ( !under_debugger )
        sub_383060(0xCD44u, *(double *)a7.m128i_i64);
      BUG();
    }
    *a6 = *(_QWORD *)a2;
    v13 = *(_DWORD *)(v12 + 36);
  }
  v14 = v12 + 32;
  v34 = v13;
  v15 = *(_QWORD *)a2;
  v16 = 1LL << (8 * (unsigned __int8)v13 - 1);
  if ( (unsigned __int64)(8 * v13 - 1) >= 0x40 )
    v16 = 0;
  v17 = v16 + a4;
  v18 = (int *)sub_129440((__int64)a1, v12 + 32, a2, 0, *(double *)a7.m128i_i64, a8);
  v19 = v34;
  v20 = (__int64)v18;
  if ( !v18 )
  {
    if ( *(_BYTE *)(v12 + 32) != 14 )
      return 0;
    if ( !a4 )
    {
      if ( !(unsigned __int8)sub_11FD80(*(char **)(v12 + 40), v35, 0) )
        return 0;
      v19 = v34;
      if ( v35[0] )
        return 0;
    }
    v32 = v19;
    v26 = (_DWORD *)sub_129440((__int64)a1, *(_QWORD *)(v12 + 40) + 16LL, a2, 0, *(double *)a7.m128i_i64, a8);
    v20 = (__int64)v26;
    if ( !v26 || *v26 != 20 )
      return 0;
    v27 = 4 * v32;
    goto LABEL_30;
  }
  v21 = *v18;
  if ( v21 == 4 )
  {
    v29 = (int *)sub_129440((__int64)a1, v12 + 32, a2, 0, *(double *)a7.m128i_i64, a8);
    v20 = (__int64)v29;
    if ( !v29 )
      return 0;
    v21 = *v29;
    v19 = v34;
  }
  if ( v21 == 20 )
  {
    v22 = *(_DWORD *)(v20 + 68);
    if ( 2 * v22 != v19
      || (v33 = v20, v30 = sub_1301F0(a1, *(_QWORD *)(*(_QWORD *)a2 + 8LL), v20 + 64, v15, v14, a7, a8), v20 = v33, !v30) )
    {
      v23 = sub_11C8A0(v20, v35);
      if ( !v23 )
        return 0;
      v24 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v23 + 8) + 16LL), *(_DWORD *)(v23 + 4), 0);
      goto LABEL_20;
    }
    v27 = 8 * v22;
LABEL_30:
    v28 = sub_11C8A0(v20, v35);
    if ( !v28 )
      return 0;
    v24 = sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL), *(_DWORD *)(v28 + 4), 0);
    if ( (unsigned __int64)v27 <= 0x3F )
      v17 >>= v27;
    else
      v17 = 0;
LABEL_20:
    if ( v17 == v24 )
      return v35[0];
  }
  return 0;
}

