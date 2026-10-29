__int64 __fastcall sub_9960(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  _BOOL8 v9; // rdx
  int v10; // eax
  int v11; // edi
  __int64 v12; // r15
  unsigned __int64 i; // rbp
  bool v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // [rsp+8h] [rbp-70h] BYREF
  unsigned __int8 v23[32]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h]
  unsigned __int64 v25; // [rsp+38h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v22 = a2;
  if ( !(unsigned __int8)sub_98F0((_QWORD *)a1, (__int64)&v22, a3, a4) )
    return 0;
  v7 = v22;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = 1;
  v10 = *((unsigned __int16 *)v22 + 12);
  v11 = *(_DWORD *)(v8 + 104);
  if ( v10 >= v11 && v10 < *(_DWORD *)(v8 + 108) )
    v9 = (*(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * (v10 - v11) + 8) & 1) == 0;
  *(_DWORD *)(a1 + 5232) = v9;
  v12 = 5;
  for ( i = 0; *(_DWORD *)(a1 + 4 * i + 160); i = 4 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(a1 + 140) <= (int)i;
      if ( i > 2 )
        break;
      sub_8E50(a1, v7, (unsigned __int8 *)&v7[v12], v14, v5, v6);
      if ( !(unsigned __int8)sub_98F0((_QWORD *)a1, (__int64)&v22, v15, v16) )
        return 0;
      ++i;
      v7 = v22;
      v12 += 5;
      if ( !*(_DWORD *)(a1 + 4 * i + 160) )
        goto LABEL_8;
    }
    memset(v23, 0, sizeof(v23));
    v24 = 0;
    v23[0] = 2;
    sub_82F0(a1, (__int64)v7, i, (__int64)v23, v5, v6);
    sub_8E50(a1, v22, v23, v14, v18, v19);
    if ( !(unsigned __int8)sub_98F0((_QWORD *)a1, (__int64)&v22, v20, v21) )
      return 0;
    v7 = v22;
    if ( i == 4 )
      break;
    v12 += 5;
  }
LABEL_8:
  sub_9460(a1, (__int64)v7, v9, v8, v5);
  return 1;
}

