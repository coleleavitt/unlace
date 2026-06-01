__int64 __fastcall sub_14B170(__int128 a1, __int64 a2, int a3, __int64 *a4, _QWORD *a5)
{
  __int64 v6; // rdx
  __int64 v8; // r12
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r8d
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  int *v17; // rax
  int v18; // r8d
  __int64 v19; // r9
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  _DWORD *v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  int *v28; // rax
  char v29; // al
  int v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+0h] [rbp-58h]
  int v33; // [rsp+Ch] [rbp-4Ch]
  _QWORD v34[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *((_QWORD *)&a1 + 1);
  v8 = *((_QWORD *)&a1 + 1);
  *((_QWORD *)&a1 + 1) = a2;
  v34[1] = __readfsqword(0x28u);
  v10 = sub_124880(a1, v6, 0);
  if ( !v10 )
    return 0;
  v11 = v10;
  while ( *(_DWORD *)v11 == 67 && *(_DWORD *)(v11 + 36) == *(_DWORD *)(v11 + 68) && *(_BYTE *)(v11 + 32) == 4 )
  {
    v11 = *(_QWORD *)(v11 + 40);
    if ( !v11 )
      return 0;
  }
  if ( *(_DWORD *)v11 != 65 )
    return 0;
  v12 = *(_DWORD *)(v11 + 36);
  if ( *(_DWORD *)(a2 + 4) < v12 )
    return 0;
  if ( a4 )
  {
    *a4 = v11;
    if ( !a5 )
    {
      if ( !under_debugger )
        sub_37CFE0(52548);
      BUG();
    }
    *a5 = *(_QWORD *)v8;
    v12 = *(_DWORD *)(v11 + 36);
  }
  v13 = v11 + 32;
  v33 = v12;
  v14 = *(_QWORD *)v8;
  v15 = 1LL << (8 * (unsigned __int8)v12 - 1);
  if ( (unsigned __int64)(8 * v12 - 1) >= 0x40 )
    v15 = 0;
  v16 = v15 + a3;
  *((_QWORD *)&a1 + 1) = v11 + 32;
  v17 = (int *)sub_124880(a1, v8, 0);
  v18 = v33;
  v19 = (__int64)v17;
  if ( !v17 )
  {
    if ( *(_BYTE *)(v11 + 32) != 14 )
      return 0;
    if ( !a3 )
    {
      if ( !(unsigned __int8)sub_11B1C0(*(char **)(v11 + 40), v34, 0) )
        return 0;
      v18 = v33;
      if ( v34[0] )
        return 0;
    }
    v31 = v18;
    *((_QWORD *)&a1 + 1) = *(_QWORD *)(v11 + 40) + 16LL;
    v25 = (_DWORD *)sub_124880(a1, v8, 0);
    v19 = (__int64)v25;
    if ( !v25 || *v25 != 20 )
      return 0;
    v26 = 4 * v31;
    goto LABEL_30;
  }
  v20 = *v17;
  if ( v20 == 4 )
  {
    *((_QWORD *)&a1 + 1) = v11 + 32;
    v28 = (int *)sub_124880(a1, v8, 0);
    v19 = (__int64)v28;
    if ( !v28 )
      return 0;
    v20 = *v28;
    v18 = v33;
  }
  if ( v20 == 20 )
  {
    v21 = *(_DWORD *)(v19 + 68);
    if ( 2 * v21 != v18
      || (v32 = v19,
          v29 = sub_12B630((const __m128i *)a1, *(_QWORD *)(*(_QWORD *)v8 + 8LL), v19 + 64, v14, v13),
          v19 = v32,
          !v29) )
    {
      v22 = sub_117CE0(v19, v34);
      if ( !v22 )
        return 0;
      v23 = sub_325150(*(_QWORD *)(*(_QWORD *)(v22 + 8) + 16LL), *(unsigned int *)(v22 + 4), 0);
      goto LABEL_20;
    }
    v26 = 8 * v21;
LABEL_30:
    v27 = sub_117CE0(v19, v34);
    if ( !v27 )
      return 0;
    v23 = sub_325150(*(_QWORD *)(*(_QWORD *)(v27 + 8) + 16LL), *(unsigned int *)(v27 + 4), 0);
    if ( (unsigned __int64)v26 <= 0x3F )
      v16 >>= v26;
    else
      v16 = 0;
LABEL_20:
    if ( v16 == v23 )
      return v34[0];
  }
  return 0;
}

