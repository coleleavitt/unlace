__int64 __fastcall sub_4CF90(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 440);
  if ( v2 == -1 )
    return find_ioport(a1 + 160, a2);
  if ( a2 >= v2 )
  {
    a2 -= v2;
    return find_ioport(a1 + 160, a2);
  }
  return 0;
}

