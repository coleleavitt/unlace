__int64 __fastcall sub_1FC5C0(__int64 a1, _BYTE *a2, _BYTE *a3, int a4, int a5)
{
  int v6; // r14d
  int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 v14; // rdi
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  unsigned int v18; // [rsp+10h] [rbp-50h]
  __int64 v19; // [rsp+18h] [rbp-48h]
  int v20[15]; // [rsp+24h] [rbp-3Ch] BYREF

  v6 = a1 + 56;
  v20[0] = a4;
  do
  {
    v19 = v20[0];
    v9 = v20[0];
    v10 = sub_204D60((_DWORD)a2, v20[0], a5, v6, *(unsigned __int8 *)(a1 + 108), 0, (__int64)a3);
    v11 = v10;
    if ( v10 == 3 )
      return (unsigned int)-36;
    if ( v10 != 1 )
      goto LABEL_10;
    if ( !*(_BYTE *)(a1 + 109) && *a2 == 5 )
    {
      v16 = *(_DWORD **)(a1 + 72);
      v17 = &v16[*(_QWORD *)(a1 + 80)];
      if ( v16 != v17 )
      {
        while ( v9 != *v16 )
        {
          if ( v17 == ++v16 )
            goto LABEL_6;
        }
        if ( v16 != v17 )
        {
          v18 = v11;
          sub_1F0930(*(_QWORD *)(a1 + 8), -1, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v19);
          return v18;
        }
      }
    }
LABEL_6:
    v12 = sub_1FBCC0(a1, v20, (unsigned __int64)a2, (__int64)a3);
  }
  while ( !v12 );
  if ( v12 == 1 )
    return (unsigned int)-36;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
  {
    v11 = sub_204D60((_DWORD)a2, v20[0], a5, v6, *(unsigned __int8 *)(a1 + 108), 1, 0);
LABEL_10:
    if ( !v11 )
    {
      v13 = *(_QWORD **)(a1 + 48);
      if ( (unsigned __int64)v20[0] >= v13[1] )
      {
        if ( !under_debugger )
          sub_37EEE0(50330);
        BUG();
      }
      if ( a3 )
      {
        if ( *a3 )
        {
          v14 = *v13 + 104LL * v20[0];
          if ( !*(_BYTE *)(v14 + 80) )
          {
            sub_1EBC70(v14, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), a3, 0);
            return 0;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-10;
  }
  return v11;
}

