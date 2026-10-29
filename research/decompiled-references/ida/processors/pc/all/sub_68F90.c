__int64 __fastcall sub_68F90(__int64 a1, __int64 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 != 1 )
  {
    if ( v2 == 5 )
    {
      get_flags_ex();
      if ( (unsigned __int8)is_seg() )
        return *(_QWORD *)(a2 + 8);
    }
    return -1;
  }
  if ( *(_WORD *)(a2 + 6) <= 0x1Cu )
    return -1;
  return calc_dataseg();
}
