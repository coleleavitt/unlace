unsigned __int64 __fastcall sub_12D00(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v4; // [rsp+18h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  netnode_check();
  if ( *(_BYTE *)(a2 + 8) != 1 )
  {
    v2 = *(_WORD *)(a2 + 24);
    if ( v2 != 4 )
    {
      if ( v2 > 4u )
      {
        if ( v2 == 8 )
          goto LABEL_6;
      }
      else if ( v2 == 1 || v2 == 2 )
      {
        goto LABEL_6;
      }
      if ( !under_debugger )
        interr();
      BUG();
    }
  }
LABEL_6:
  netnode_supset();
  return v4 - __readfsqword(0x28u);
}

