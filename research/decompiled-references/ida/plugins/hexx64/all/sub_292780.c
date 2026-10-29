__int64 __fastcall sub_292780(_QWORD *a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebx
  unsigned int tinfo_size; // eax
  int v7; // eax
  unsigned __int64 v8; // r12
  char v9; // cl
  __int64 v10; // r14
  __int64 v11; // rdx

  v3 = is_numop();
  if ( !(_BYTE)v3 )
    return 0;
  v4 = v3;
  if ( (unsigned int)get_radix() != 16 )
    return 0;
  if ( **(_QWORD **)(a2 + 24) <= 0xFFu )
    return 0;
  tinfo_size = get_tinfo_size();
  v7 = sub_284430((__int64)a1, a2, tinfo_size, 0, a3);
  if ( v7 <= 0 )
    return 0;
  v8 = *(unsigned __int8 *)(a1[9] + 130LL);
  if ( (int)v8 <= v7 )
    return 0;
  v9 = 8 * v7;
  if ( 8 * v7 > 63 )
  {
    v10 = -1;
  }
  else
  {
    if ( (-(1LL << v9) & **(_QWORD **)(a2 + 24)) != -(1LL << v9) )
      return 0;
    v10 = (1LL << v9) - 1;
  }
  v11 = *(_QWORD *)(a1[2] + 8LL * a1[3] - 8);
  if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 22) > 9
    || (unsigned int)get_tinfo_property() != 1
    || get_tinfo_size() >= v8 )
  {
    **(_QWORD **)(a2 + 24) &= v10;
    return v4;
  }
  return 0;
}

