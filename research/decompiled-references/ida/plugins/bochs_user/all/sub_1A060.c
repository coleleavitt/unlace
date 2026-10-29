__int64 __fastcall sub_1A060(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rbx

  if ( (*(_BYTE *)(a1 + 96) & 1) == 0 )
    return 1;
  if ( !*(_QWORD *)(a1 + 24) )
    return 1;
  v2 = 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(**(_QWORD **)(a1 + 8) + 32 * v2 + 12) & 1) != 0 )
    {
      result = sub_19D60(a1, v2);
      if ( !(_BYTE)result )
        break;
    }
    if ( ++v2 >= *(_QWORD *)(a1 + 24) )
      return 1;
  }
  return result;
}

