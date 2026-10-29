unsigned __int64 __fastcall sub_3EDE90(__int64 a1, int a2, int a3, int a4, double a5)
{
  unsigned __int16 v5; // ax
  unsigned __int16 v7; // si
  unsigned int v8; // esi

  v5 = *(_WORD *)(a1 + 890);
  if ( ((v5 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCE2Cu, a5);
LABEL_19:
    BUG();
  }
  v7 = *(_WORD *)(a1 + 48);
  if ( v7 == 35 )
    goto LABEL_14;
  if ( v7 <= 0x23u )
  {
    if ( v7 != 11 )
    {
      if ( v7 == 34 || v7 == 10 )
      {
        v8 = 40;
        goto LABEL_7;
      }
      goto LABEL_15;
    }
LABEL_14:
    v8 = 35;
    goto LABEL_7;
  }
  if ( v7 > 0x252u )
  {
    if ( (unsigned __int16)(v7 - 595) <= 1u )
    {
      v8 = 32;
      goto LABEL_7;
    }
    goto LABEL_15;
  }
  if ( v7 <= 0x250u )
  {
LABEL_15:
    if ( !under_debugger )
      sub_37E160(0xCC28u, a5);
    goto LABEL_19;
  }
  v8 = 33;
LABEL_7:
  sub_3EAB70(a1, v8, v5, a3, a4, a2, 0);
  return sub_3EDDF0((_QWORD *)a1, 1, *(unsigned __int16 *)(a1 + 890), a2, a2, 0);
}

