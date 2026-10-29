__int64 __fastcall sub_325110(__int64 a1)
{
  __int64 v1; // rsi
  char v2; // bp
  __int64 v3; // rax
  char v4; // r12
  char v6; // al
  __int64 v7; // rax
  char v8; // al

  v1 = 2;
  v2 = 0;
  if ( !(unsigned __int8)getinf_flag() )
  {
    v7 = getnseg();
    if ( v7 )
    {
      v8 = *(_BYTE *)(v7 + 43);
      if ( v8 )
      {
        if ( v8 == 2 )
          v1 = 4;
        else
          v1 = 2;
        setinf_flag();
      }
    }
    v2 = 1;
    sub_2B0270(
      (__int64)"AUTOHIDE REGISTRY\n"
               "The application bitness was wrongly set to 16-bit.\n"
               "The decompiler set it based on the bitness of the first segment",
      v1);
  }
  if ( (getinf() & 0xF) == 0 )
  {
    v3 = *(unsigned int *)(a1 + 152);
    v4 = 6;
    if ( (unsigned int)v3 <= 0x17 )
    {
      v4 = byte_408780[v3];
      if ( !v4 )
        v4 = 6;
    }
    v2 = set_compiler();
    if ( !v2 )
      return 0;
    sub_2B0270(
      (__int64)"AUTOHIDE REGISTRY\n"
               "The target compiler was not specified in Options, Compiler.\n"
               "The decompiler set it based on the input file format",
      2);
    *(_BYTE *)(a1 + 128) = v4;
  }
  v6 = *(_BYTE *)(a1 + 129);
  if ( (v6 & 0xF0) == 0xC0 )
  {
    if ( *(_DWORD *)(a1 + 140) > 0x10u )
      goto LABEL_9;
  }
  else if ( (*(_BYTE *)(a1 + 129) & 0xF0u) > 0x10 )
  {
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 140) = 0;
  *(_BYTE *)(a1 + 129) = v6 & 0xF | 0x30;
  if ( !(unsigned __int8)set_compiler() )
    return 0;
  if ( !v2 )
    sub_2B0270(
      (__int64)"AUTOHIDE REGISTRY\n"
               "The default calling convention was not specified in Options, Compiler.\n"
               "The decompiler set is _cdecl for your convenience.",
      1);
LABEL_9:
  sub_CC200(a1);
  return 1;
}

