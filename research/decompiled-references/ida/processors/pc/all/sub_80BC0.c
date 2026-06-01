__int64 __fastcall sub_80BC0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rdx

  v1 = *(_QWORD *)(a1 + 16) + 1LL;
  result = get_byte();
  if ( (unsigned __int8)result > 0x67u )
    goto LABEL_6;
  while ( (unsigned __int8)result <= 0x2Du )
  {
    if ( (_BYTE)result != 38 )
      return result;
LABEL_5:
    while ( 1 )
    {
      ++v1;
      result = get_byte();
      if ( (unsigned __int8)result <= 0x67u )
        break;
LABEL_6:
      if ( (_BYTE)result != 0xF0 && (unsigned __int8)(result + 14) > 1u )
        return result;
    }
  }
  v3 = 1LL << ((unsigned __int8)result - 46);
  if ( (v3 & 0x3FFFC0000LL) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 252) & 0x10) != 0 )
      goto LABEL_5;
  }
  else if ( (v3 & 0x3C0000000010101LL) != 0 )
  {
    goto LABEL_5;
  }
  return result;
}
