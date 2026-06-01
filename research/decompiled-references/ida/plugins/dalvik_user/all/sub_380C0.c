__int64 __fastcall sub_380C0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  _QWORD *v4; // rax
  const char *v5; // rdx
  const char *v6; // rsi

  v3 = *(_QWORD *)(a1 + 8);
  if ( (debug & 0x40000) == 0 )
    goto LABEL_5;
  v4 = *(_QWORD **)(v3 + 48);
  v5 = nptr;
  if ( v4[5] )
  {
    v5 = (const char *)v4[4];
    v6 = nptr;
    if ( !v4[2] )
      goto LABEL_4;
    goto LABEL_7;
  }
  v6 = nptr;
  if ( v4[2] )
LABEL_7:
    v6 = (const char *)v4[1];
LABEL_4:
  sub_111A0((__int64)"DEXSIP: aloc_var_calc_string_length %s`%s\n", v6, v5);
LABEL_5:
  if ( *(_BYTE *)(*(_QWORD *)(v3 + 48) + 88LL) )
    return sub_37F60(a1, a2);
  else
    return 0;
}

