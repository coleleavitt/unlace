bool __fastcall sub_3872B0(__int64 a1)
{
  bool result; // al
  _QWORD *v2; // rdi

  result = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v2 = *(_QWORD **)(a1 + 88);
    if ( *v2 != -1 )
      return (unsigned int)sub_25E490((__int64)v2) != 0;
  }
  return result;
}

