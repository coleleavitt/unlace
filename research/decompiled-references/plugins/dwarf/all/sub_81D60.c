__int64 __fastcall sub_81D60(const char *a1)
{
  unsigned int v1; // ebx
  char *v2; // rax
  _BYTE *v3; // rdx
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v1 = 0;
  if ( !a1 )
    return v1;
  v2 = strrchr(a1, 58);
  if ( !v2 )
    return v1;
  v3 = v2 + 1;
  v4 = v2[1];
  if ( !(_BYTE)v4 )
    return 1;
  while ( 1 )
  {
    if ( v4 > 0x7F )
      return 0;
    ++v3;
    v5 = v4 - 48;
    v4 = (char)*v3;
    if ( !*v3 )
      break;
    if ( v5 > 9 )
      return 0;
  }
  LOBYTE(v1) = v5 <= 9;
  return v1;
}
