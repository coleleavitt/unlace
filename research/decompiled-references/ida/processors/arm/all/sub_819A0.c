__int64 __fastcall sub_819A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  v3 = *(_WORD *)(a3 + 24);
  if ( v3 == 43 )
    goto LABEL_8;
  if ( v3 <= 0x2Bu )
  {
    if ( v3 == 4 )
    {
      if ( sub_25E60(*(_QWORD *)(a1 + 8), a3) )
        goto LABEL_9;
      return 0;
    }
    if ( v3 != 42 )
      return 0;
LABEL_8:
    bitcount();
    goto LABEL_9;
  }
  if ( v3 == 370 || v3 == 371 )
  {
    sub_29380(a3);
LABEL_9:
    reg_finder_emulate_binary_op();
    return 1;
  }
  return 0;
}
