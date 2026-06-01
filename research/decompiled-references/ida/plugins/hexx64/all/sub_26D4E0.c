bool __fastcall sub_26D4E0(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5, double a6)
{
  __int64 v11; // rax
  int v12; // edi
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rsi

  if ( get_tinfo_property()
    || !sub_26AAE0(*a1, a2, *a4, a6)
    && (!(unsigned __int8)sub_26D3F0((__int64)a1, a3, a4, a5) || !sub_26AAE0(*a1, a2, *a4, a6)) )
  {
    return 0;
  }
  v11 = a1[10];
  v12 = *(_DWORD *)(*(_QWORD *)(v11 + 24) + 24LL);
  v13 = 8 * *(_DWORD *)(*(_QWORD *)(v11 + 112) + 84LL) - 1;
  if ( (unsigned __int64)v13 > 0x3F )
    return 1;
  v14 = *a3;
  v15 = a1[11];
  v16 = 1LL << v13;
  v17 = *a3 * *a4;
  if ( v12 != 8 )
  {
    if ( (v16 & ((int)v17 ^ (unsigned __int64)v14)) == 0 )
      return (v16 & (v15 ^ ((int)v15 - (int)v17))) == 0;
    return 0;
  }
  if ( (v16 & (v17 ^ v14)) != 0 )
    return 0;
  return (v16 & (v15 ^ (v15 - v17))) == 0;
}

