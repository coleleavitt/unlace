__int64 sub_188A0()
{
  int v0; // ecx
  __int64 i; // rax
  __int64 result; // rax
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v0 = 0;
  for ( i = 0; i != 8; i += 2 )
  {
    if ( (*(_WORD *)((_BYTE *)&unk_30720 + i) & (unsigned __int16)word_3A5A4) != 0 )
      v0 |= *(unsigned __int16 *)((char *)&unk_30710 + i);
  }
  result = v0 | (32 * (dword_3A5A8 & 1u));
  v3 = v0 | (32 * (dword_3A5A8 & 1)) | 0x40;
  if ( (byte_3A5B0[0] & 3) == 0 )
    result = v3;
  v4 = result;
  if ( (byte_3A5B0[0] & 0x10) != 0 )
  {
    LOBYTE(v4) = result | 0x80;
    result = v4;
  }
  v5 = result;
  if ( (dword_3A5A0 & 2) != 0 )
  {
    BYTE1(v5) = BYTE1(result) | 1;
    return v5;
  }
  return result;
}

