__int64 __fastcall sub_7B5D0(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rsi
  _QWORD *v5; // rdi
  unsigned int v6; // ebp

  v4 = (__int64 *)(a1 + 24);
  v5 = a2;
  v6 = sub_79AF0(a2, v4);
  if ( !(_BYTE)v6 )
    return v6;
  if ( *a2 >= a2[1] || (v5 = a2, *(_DWORD *)(a1 + 48) = unpack_dd() - 1, *a2 >= a2[1]) )
    sub_76AD0(v5);
  *(_DWORD *)(a1 + 52) = unpack_dd();
  return v6;
}

