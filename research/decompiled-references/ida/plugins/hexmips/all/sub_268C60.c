char __fastcall sub_268C60(__int64 *a1, _QWORD *a2, __int64 *a3, __int64 *a4, __int64 *a5)
{
  __int64 v10; // rax
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rsi

  if ( get_tinfo_property()
    || !sub_266260(*a1, a2, *a4) && (!(unsigned __int8)sub_268B70((__int64)a1, a3, a4, a5) || !sub_266260(*a1, a2, *a4)) )
  {
    return 0;
  }
  v10 = a1[10];
  v11 = *(_DWORD *)(*(_QWORD *)(v10 + 24) + 24LL);
  v12 = 8 * *(_DWORD *)(*(_QWORD *)(v10 + 112) + 84LL) - 1;
  if ( (unsigned __int64)v12 > 0x3F )
    return 1;
  v13 = *a3;
  v14 = a1[11];
  v15 = 1LL << v12;
  v16 = *a3 * *a4;
  if ( v11 != 8 )
  {
    if ( (v15 & ((int)v16 ^ (unsigned __int64)v13)) == 0 )
      return (v15 & (v14 ^ ((int)v14 - (int)v16))) == 0;
    return 0;
  }
  if ( (v15 & (v16 ^ v13)) != 0 )
    return 0;
  return (v15 & (v14 ^ (v14 - v16))) == 0;
}

