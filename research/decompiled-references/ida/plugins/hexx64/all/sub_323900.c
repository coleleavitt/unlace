__int64 __fastcall sub_323900(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  v3 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v3 > 0x3A )
    return 0;
  v4 = 0x409001800000000LL;
  if ( _bittest64(&v4, v3) )
    return 1;
  if ( (_DWORD)v3 == 57 )
  {
    if ( *(_QWORD *)(a1 + 24) != a2 )
    {
      sub_284360(a1, a2, nullptr, a3);
      return sub_3230C0();
    }
  }
  else if ( (unsigned int)(v3 - 22) <= 9 )
  {
    return sub_3230C0();
  }
  return 0;
}

