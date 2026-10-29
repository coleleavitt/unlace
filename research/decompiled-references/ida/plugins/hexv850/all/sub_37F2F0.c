__int64 __fastcall sub_37F2F0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // ebx
  int v6; // [rsp+38h] [rbp-50h]

  copy_tinfo_t();
  copy_tinfo_t();
  v6 = *(_DWORD *)(a2 + 56);
  v4 = 0;
  if ( !(unsigned int)lexcompare_tinfo() )
  {
    v4 = a3;
    if ( !(_BYTE)a3 )
      LOBYTE(v4) = *(_DWORD *)(a1 + 56) == v6;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  return v4;
}

