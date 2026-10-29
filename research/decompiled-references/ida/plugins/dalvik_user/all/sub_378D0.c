__int64 __fastcall sub_378D0(__int64 a1, __int64 a2, bool *a3, __int64 a4, __int64 *a5)
{
  __int64 v9; // r14
  _QWORD *v10; // rax
  const char *v11; // rdx
  const char *v12; // rsi

  v9 = *(_QWORD *)(a4 + 8);
  if ( (debug & 0x40000) == 0 )
    goto LABEL_5;
  v10 = *(_QWORD **)(v9 + 48);
  v11 = nptr;
  if ( v10[5] )
  {
    v11 = (const char *)v10[4];
    v12 = nptr;
    if ( !v10[2] )
      goto LABEL_4;
    goto LABEL_7;
  }
  v12 = nptr;
  if ( v10[2] )
LABEL_7:
    v12 = (const char *)v10[1];
LABEL_4:
  sub_111A0((__int64)"DEXSIP: aloc_var_print_ptr_value %s`%s\n", v12, v11);
LABEL_5:
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 88LL) )
    return sub_37760(a1, a2, a3, a4, a5);
  else
    return 0;
}

