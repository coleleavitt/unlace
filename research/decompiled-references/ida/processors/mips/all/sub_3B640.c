unsigned __int64 __fastcall sub_3B640(__int64 a1, __int64 a2, char a3)
{
  char **v4; // rax
  unsigned __int64 result; // rax
  _UNKNOWN **v6; // rdx

  if ( (unsigned __int8)getinf_flag(11, 4) )
    *(_WORD *)(a1 + 188) |= 4u;
  v4 = (char **)&off_73AA0;
  if ( *(_DWORD *)(a1 + 260) != 2 )
  {
    v4 = off_74160;
    if ( (*(_BYTE *)(a1 + 188) & 1) != 0 )
    {
      v4 = off_73F20;
      if ( (*(_DWORD *)(a1 + 120) & 0xFFFFFFFB) != 0 )
        v4 = off_73CE0;
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) = v4;
  result = *(_QWORD *)(a1 + 24);
  if ( *(char **)(result + 8) == "MIPSpro assembler" )
  {
    v6 = &off_737E0;
    if ( (*(_BYTE *)(a1 + 188) & 1) == 0 )
      v6 = nullptr;
    *(_QWORD *)(result + 24) = v6;
  }
  if ( a3 )
    return sub_3B4E0(a1);
  return result;
}

