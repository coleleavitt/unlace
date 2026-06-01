__int64 __fastcall sub_81B20(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  unsigned __int16 v5; // ax

  v4 = 0;
  if ( (*(_BYTE *)(a3 + 28) & 0x40) == 0 )
    return v4;
  v5 = *(_WORD *)(a3 + 24);
  if ( v5 > 0x75u )
  {
    if ( v5 != 343 )
    {
      if ( v5 > 0x157u )
      {
        if ( v5 != 416 )
          return v4;
      }
      else if ( (unsigned __int16)(v5 - 139) > 2u )
      {
        return v4;
      }
    }
    goto LABEL_11;
  }
  if ( v5 > 0x72u )
  {
LABEL_11:
    sub_29380(a3);
    goto LABEL_6;
  }
  if ( (unsigned __int16)(v5 - 33) <= 1u )
  {
    bitcount();
LABEL_6:
    reg_finder_emulate_binary_op();
    return 1;
  }
  return v4;
}
