__int64 __fastcall sub_1FD30(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  char v3; // dl
  unsigned int v4; // esi

  result = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)result )
    return (a2 & 0x20) != 0;
  v3 = *(_BYTE *)(a1 + 17);
  if ( v3 == 3 )
    return (a2 & 4) != 0;
  if ( v3 == 2 )
    return (a2 & 8) != 0;
  v4 = (a2 >> 4) & 1;
  if ( v3 == 1 )
    return v4;
  return result;
}

