__int64 __fastcall sub_1D3D40(__int64 a1, __int64 *a2, double a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rax
  _QWORD *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // edx
  int v18; // ecx
  bool v19; // zf
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rbp
  char *v24; // rdi
  unsigned __int64 *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r10
  unsigned __int64 *v28; // rbx
  unsigned __int64 *v29; // r11
  signed __int64 v30; // r14
  __int64 v32; // rax
  __int64 v33; // r9

  LOBYTE(v3) = *(_DWORD *)(a1 + 76) == 6 || *(_DWORD *)(a1 + 76) == 1;
  if ( (_BYTE)v3 )
    return 1;
  if ( !*(_DWORD *)(a1 + 72) )
    return 1;
  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
    return 1;
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 == sub_330F80(*(_QWORD **)(a1 + 64), v5) )
    return 1;
  v6 = sub_1CFB40(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 32));
  if ( v6 )
  {
    if ( *v6 == *(_QWORD *)(a1 + 32) )
      return 1;
  }
  if ( sub_64930(a2, *(_DWORD *)(a1 + 72)) )
    return v3;
  v7 = *(_QWORD **)(a1 + 64);
  sub_64190(a2, *(_DWORD *)(a1 + 72), a3);
  if ( *(int *)(a1 + 352) <= 0 )
    return v3;
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    v10 = *(unsigned int *)(*(_QWORD *)(a1 + 344) + 4 * v8);
    if ( (unsigned int)v10 >= *(_DWORD *)(v9 + 64) )
      sub_1D36D0(a3);
    v11 = *(_QWORD **)(*(_QWORD *)(v9 + 528) + 8 * v10);
    if ( (unsigned __int8)sub_1D3D40((__int64)v11, a2) )
      break;
    if ( *(_DWORD *)(a1 + 352) <= (int)++v8 )
      return v3;
  }
  v12 = v11[5];
  v13 = v11[64];
  v14 = *(_QWORD *)(a1 + 512);
  if ( v12 == -1 )
  {
    v12 = v11[4];
    if ( v13 == v14 )
      goto LABEL_20;
  }
  else if ( v13 == v14 )
  {
LABEL_21:
    v21 = 0;
    v22 = sub_1CFB40((__int64)v7, v12);
    v23 = *(_QWORD *)(a1 + 32);
    if ( v22 )
      v21 = v22[1];
    v24 = (char *)v7[149];
    v25 = sub_1D3D00(v24, (__int64)&v24[16 * v7[150]], *(_QWORD *)(a1 + 32));
    v28 = v25;
    if ( v25 == v29 || v23 < *v25 )
    {
      v30 = (char *)v25 - v24;
      if ( v7[151] < (unsigned __int64)(v27 + 1) )
      {
        v32 = qvector_reserve((__int64)(v7 + 149), (__int64)v24, v27 + 1, 16);
        v33 = v7[150];
        v7[149] = v32;
        v28 = (unsigned __int64 *)(v32 + v30);
        v26 = 16 * v33;
      }
      memmove(v28 + 2, v28, v26 - v30);
      *v28 = v23;
      v28[1] = v21;
      ++v7[150];
      return 1;
    }
    if ( !under_debugger )
      sub_383060(0xCE09u, a3);
LABEL_37:
    BUG();
  }
  if ( v14 )
  {
    if ( !under_debugger )
      sub_383060(0xCE51u, a3);
    goto LABEL_37;
  }
  v15 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 512) = v13;
  v16 = v15;
  v17 = v15 & 0xFFFBFFFF;
  v18 = v16 | 0x40000;
  v19 = v13 == 0;
  v20 = 5 * v13;
  if ( !v19 )
    v17 = v18;
  *(_DWORD *)(a1 + 24) = v17;
  *(_QWORD *)(a1 + 520) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1472LL) + 8 * v20 + 24);
LABEL_20:
  if ( v12 != -1 )
    goto LABEL_21;
  return v3;
}

