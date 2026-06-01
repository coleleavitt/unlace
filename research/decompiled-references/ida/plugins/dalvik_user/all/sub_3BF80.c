__int64 __fastcall sub_3BF80(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rbp
  _QWORD *v5; // rax
  const char *v6; // rdx
  const char *v7; // rsi

  v4 = *(_QWORD *)(a3 + 8);
  if ( (debug & 0x40000) == 0 )
    goto LABEL_5;
  v5 = *(_QWORD **)(v4 + 48);
  v6 = nptr;
  if ( v5[5] )
  {
    v6 = (const char *)v5[4];
    v7 = nptr;
    if ( !v5[2] )
      goto LABEL_4;
    goto LABEL_7;
  }
  v7 = nptr;
  if ( v5[2] )
LABEL_7:
    v7 = (const char *)v5[1];
LABEL_4:
  sub_111A0((__int64)"DEXSIP: aloc_var_deref_ptr %s`%s\n", v7, v6);
LABEL_5:
  if ( *(_BYTE *)(*(_QWORD *)(v4 + 48) + 88LL) )
    return sub_3BAC0(a1, a2);
  else
    return 0;
}

