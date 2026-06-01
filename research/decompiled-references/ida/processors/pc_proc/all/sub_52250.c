__int64 __fastcall sub_52250(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // al
  unsigned __int8 byte; // bp
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  v4 = can_be_off32();
  if ( !v4 )
    return a2 - 1LL;
  v5 = v4;
  if ( v4 == -1 )
  {
    if ( a3 )
    {
      if ( !(unsigned __int8)get_fixups() )
      {
        byte = get_byte();
        if ( byte <= 0x15u )
        {
          v10[0] = a1 + 1;
          if ( (unsigned __int8)get_byte() && (unsigned __int8)sub_520F0(v10, byte) )
            return a1;
          return v5;
        }
      }
    }
    return -1;
  }
  if ( (unsigned __int8)segtype() == 1 )
    return 0;
  v6 = getseg();
  if ( !v6 )
    return -1;
  if ( !*(_BYTE *)(v6 + 43) )
    return -1;
  v7 = *(_BYTE *)(v6 + 184);
  if ( v7 )
  {
    if ( (unsigned __int8)(v7 - 2) > 1u )
      return -1;
  }
  return v5;
}

