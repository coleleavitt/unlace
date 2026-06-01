__int64 __fastcall sub_1CCC40(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v4; // r13
  unsigned __int64 *v5; // rax
  _QWORD *v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // r15
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // ecx
  bool v18; // zf
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rbp
  char *v23; // rdi
  unsigned __int64 *v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  unsigned __int64 *v27; // rbx
  unsigned __int64 *v28; // r11
  signed __int64 v29; // r14
  __int64 v31; // rax
  __int64 v32; // r9

  LOBYTE(v2) = *(_DWORD *)(a1 + 76) == 6 || *(_DWORD *)(a1 + 76) == 1;
  if ( (_BYTE)v2 )
    return 1;
  if ( !*(_DWORD *)(a1 + 72) )
    return 1;
  if ( (*(_BYTE *)(a1 + 26) & 2) != 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 == sub_329920(*(_QWORD *)(a1 + 64)) )
    return 1;
  v5 = sub_1C8C20(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 32));
  if ( v5 )
  {
    if ( *v5 == *(_QWORD *)(a1 + 32) )
      return 1;
  }
  if ( sub_5E3B0(a2, *(_DWORD *)(a1 + 72)) )
    return v2;
  v6 = *(_QWORD **)(a1 + 64);
  sub_5DC10(a2, *(_DWORD *)(a1 + 72));
  if ( *(int *)(a1 + 352) <= 0 )
    return v2;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v9 = *(unsigned int *)(*(_QWORD *)(a1 + 344) + 4 * v7);
    if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 64) )
      sub_1CC5D0();
    v10 = *(_QWORD **)(*(_QWORD *)(v8 + 528) + 8 * v9);
    if ( (unsigned __int8)sub_1CCC40(v10, a2) )
      break;
    if ( *(_DWORD *)(a1 + 352) <= (int)++v7 )
      return v2;
  }
  v11 = v10[5];
  v12 = v10[64];
  v13 = *(_QWORD *)(a1 + 512);
  if ( v11 == -1 )
  {
    v11 = v10[4];
    if ( v12 == v13 )
      goto LABEL_20;
  }
  else if ( v12 == v13 )
  {
LABEL_21:
    v20 = 0;
    v21 = sub_1C8C20((__int64)v6, v11);
    v22 = *(_QWORD *)(a1 + 32);
    if ( v21 )
      v20 = v21[1];
    v23 = (char *)v6[149];
    v24 = sub_1CCC00(v23, (__int64)&v23[16 * v6[150]], *(_QWORD *)(a1 + 32));
    v27 = v24;
    if ( v24 == v28 || v22 < *v24 )
    {
      v29 = (char *)v24 - v23;
      if ( v6[151] < (unsigned __int64)(v26 + 1) )
      {
        v31 = qvector_reserve();
        v32 = v6[150];
        v6[149] = v31;
        v27 = (unsigned __int64 *)(v31 + v29);
        v25 = 16 * v32;
      }
      memmove(v27 + 2, v27, v25 - v29);
      *v27 = v22;
      v27[1] = v20;
      ++v6[150];
      return 1;
    }
    if ( !under_debugger )
      sub_37B760(52745);
LABEL_37:
    BUG();
  }
  if ( v13 )
  {
    if ( !under_debugger )
      sub_37B760(52817);
    goto LABEL_37;
  }
  v14 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 512) = v12;
  v15 = v14;
  v16 = v14 & 0xFFFBFFFF;
  v17 = v15 | 0x40000;
  v18 = v12 == 0;
  v19 = 5 * v12;
  if ( !v18 )
    v16 = v17;
  *(_DWORD *)(a1 + 24) = v16;
  *(_QWORD *)(a1 + 520) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1472LL) + 8 * v19 + 24);
LABEL_20:
  if ( v11 != -1 )
    goto LABEL_21;
  return v2;
}

