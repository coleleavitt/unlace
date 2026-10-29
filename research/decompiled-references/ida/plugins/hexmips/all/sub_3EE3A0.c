unsigned __int64 __fastcall sub_3EE3A0(__int64 a1, int a2, int a3, int a4, double a5)
{
  unsigned __int16 v5; // ax
  __int64 v6; // rbp
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned __int16 v10; // ax

  if ( ((*(_WORD *)(a1 + 890) - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC67u, a5);
LABEL_23:
    BUG();
  }
  v5 = *(_WORD *)(a1 + 48);
  v6 = a3;
  if ( v5 == 68 )
    goto LABEL_10;
  if ( v5 <= 0x44u )
  {
    if ( v5 != 66 )
    {
      if ( (v5 & 0xFFFD) != 0x41 )
        goto LABEL_6;
      goto LABEL_11;
    }
LABEL_10:
    v8 = 17;
    v9 = 15;
    goto LABEL_12;
  }
  if ( v5 != 1697 )
  {
    if ( v5 != 1698 )
    {
LABEL_6:
      if ( !under_debugger )
        sub_37E160(0xCC68u, a5);
      goto LABEL_23;
    }
    goto LABEL_10;
  }
LABEL_11:
  v8 = 18;
  v9 = 16;
LABEL_12:
  if ( sub_CBD70() == 2 )
  {
    v10 = *(_WORD *)(a1 + 48);
    if ( v10 <= 0x44u )
    {
      if ( v10 > 0x42u )
        return sub_3EAB70(a1, v9, *(unsigned __int16 *)(a1 + 890), (int)v6, a4, a2, 0);
      goto LABEL_21;
    }
    if ( (unsigned __int16)(v10 - 1697) > 1u )
    {
LABEL_21:
      if ( !under_debugger )
        sub_37E160(0xCE2Bu, a5);
      goto LABEL_23;
    }
    return sub_3EAB70(a1, v8, *(unsigned __int16 *)(a1 + 890), (int)v6, a4, a2, 0);
  }
  else
  {
    sub_3EAB70(a1, v9, *(unsigned __int16 *)(a1 + 890), a2, v6, *(int *)(*(_QWORD *)(a1 + 832) + 616LL), 0);
    sub_3EAB70(a1, v8, *(unsigned __int16 *)(a1 + 890), a2, v6, *(int *)(*(_QWORD *)(a1 + 832) + 612LL), 0);
    sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 616LL));
    return sub_3EE280(a1, *(unsigned __int16 *)(a1 + 890), *(_DWORD *)(*(_QWORD *)(a1 + 832) + 612LL));
  }
}

