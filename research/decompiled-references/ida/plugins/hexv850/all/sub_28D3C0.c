__int64 __fastcall sub_28D3C0(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int tinfo_size; // eax
  int v6; // eax
  unsigned __int64 v7; // r12
  char v8; // cl
  __int64 v9; // r14
  __int64 v10; // rdx

  v2 = is_numop();
  if ( !(_BYTE)v2 )
    return 0;
  v3 = v2;
  if ( (unsigned int)get_radix() != 16 )
    return 0;
  if ( **(_QWORD **)(a2 + 24) <= 0xFFu )
    return 0;
  tinfo_size = get_tinfo_size();
  v6 = sub_27F070((__int64)a1, a2, tinfo_size, 0);
  if ( v6 <= 0 )
    return 0;
  v7 = *(unsigned __int8 *)(a1[9] + 130LL);
  if ( (int)v7 <= v6 )
    return 0;
  v8 = 8 * v6;
  if ( 8 * v6 > 63 )
  {
    v9 = -1;
  }
  else
  {
    if ( (-(1LL << v8) & **(_QWORD **)(a2 + 24)) != -(1LL << v8) )
      return 0;
    v9 = (1LL << v8) - 1;
  }
  v10 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( (unsigned int)(*(_DWORD *)(v10 + 8) - 22) > 9
    || (unsigned int)get_tinfo_property() != 1
    || get_tinfo_size() >= v7 )
  {
    **(_QWORD **)(a2 + 24) &= v9;
    return v3;
  }
  return 0;
}

