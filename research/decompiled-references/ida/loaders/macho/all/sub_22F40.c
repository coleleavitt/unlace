__int64 __fastcall sub_22F40(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_DWORD **)a2;
  v3 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 == v3 )
    return 12;
  while ( 1 )
  {
    if ( *v2 == 2 )
    {
      result = (unsigned int)v2[1];
      if ( (_DWORD)result )
        break;
    }
    v2 += 4;
    if ( (_DWORD *)v3 == v2 )
      return 12;
  }
  if ( !*(_BYTE *)(a1 + 13692) )
    return 12;
  if ( (unsigned int)result < 0xC )
    result = 12;
  if ( (unsigned int)result > 0x11 )
    return 17;
  return result;
}

