__int64 __fastcall sub_38FE0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r13
  unsigned int v4; // r12d
  __int64 v6; // rdi
  __int64 (*v7)(); // rax

  v3 = *(_QWORD *)(a2 + 16);
  v4 = sub_38640(a1, (_WORD *)a2, a3);
  if ( v4 == 100 )
  {
    v6 = *(_QWORD *)(a1 + 5640);
    if ( !v6
      || (v7 = *(__int64 (**)())(*(_QWORD *)v6 + 40LL), v7 == sub_35C60)
      || !((unsigned __int8 (__fastcall *)(__int64, __int64))v7)(v6, v3) )
    {
      if ( !sub_365E0(a2) && !sub_37300() )
        return v4;
      return 0;
    }
    v4 = 0;
    if ( sub_365E0(a2) )
      return 0;
  }
  else if ( sub_365E0(a2) )
  {
    return 0;
  }
  if ( !get_func() || (get_flags_ex() & 0x10000) == 0 )
    return v4;
  return 0;
}

