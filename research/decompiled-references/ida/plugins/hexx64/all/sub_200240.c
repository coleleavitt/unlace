__int64 __fastcall sub_200240(__int64 a1, _BYTE *a2, _BYTE *a3, int a4, __int64 a5, double a6, __m128 a7)
{
  __m128i *v8; // r14
  int v11; // r13d
  unsigned int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  unsigned int v20; // [rsp+10h] [rbp-50h]
  __int64 v21; // [rsp+18h] [rbp-48h]
  int v22[15]; // [rsp+24h] [rbp-3Ch] BYREF

  v8 = (__m128i *)(a1 + 56);
  v22[0] = a4;
  do
  {
    v21 = v22[0];
    v11 = v22[0];
    v12 = sub_2089E0((unsigned __int64)a2, v22[0], a5, v8, *(_BYTE *)(a1 + 108), 0, a3);
    v13 = v12;
    if ( v12 == 3 )
      return (unsigned int)-36;
    if ( v12 != 1 )
      goto LABEL_10;
    if ( !*(_BYTE *)(a1 + 109) && *a2 == 5 )
    {
      v18 = *(_DWORD **)(a1 + 72);
      v19 = &v18[*(_QWORD *)(a1 + 80)];
      if ( v18 != v19 )
      {
        while ( v11 != *v18 )
        {
          if ( v19 == ++v18 )
            goto LABEL_6;
        }
        if ( v18 != v19 )
        {
          v20 = v13;
          sub_1F45B0(*(_QWORD *)(a1 + 8), 0xFFFFFFFFFFFFFFFFLL, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 432LL) + 104 * v21);
          return v20;
        }
      }
    }
LABEL_6:
    v14 = sub_1FF940(a1, v22, (unsigned __int64)a2, (__int64)a3, a6, a7);
  }
  while ( !v14 );
  if ( v14 == 1 )
    return (unsigned int)-36;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL) + 604LL) & 0x10) != 0 )
  {
    v13 = sub_2089E0((unsigned __int64)a2, v22[0], a5, v8, *(_BYTE *)(a1 + 108), 1u, nullptr);
LABEL_10:
    if ( !v13 )
    {
      v15 = *(_QWORD **)(a1 + 48);
      if ( (unsigned __int64)v22[0] >= v15[1] )
      {
        if ( !under_debugger )
          sub_383060(0xC49Au, a6);
        BUG();
      }
      if ( a3 )
      {
        if ( *a3 )
        {
          v16 = *v15 + 104LL * v22[0];
          if ( !*(_BYTE *)(v16 + 80) )
          {
            sub_1EF8F0(v16, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), a3, 0, a6);
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
  return v13;
}

