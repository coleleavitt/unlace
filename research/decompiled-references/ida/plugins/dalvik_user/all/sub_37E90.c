__int64 __fastcall sub_37E90(const void **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v7; // r14
  _QWORD *v8; // rax
  const char *v9; // rdx
  const char *v10; // rsi

  v7 = *(_QWORD *)(a3 + 8);
  if ( (debug & 0x40000) == 0 )
    goto LABEL_5;
  v8 = *(_QWORD **)(v7 + 48);
  v9 = nptr;
  if ( v8[5] )
  {
    v9 = (const char *)v8[4];
    v10 = nptr;
    if ( !v8[2] )
      goto LABEL_4;
    goto LABEL_7;
  }
  v10 = nptr;
  if ( v8[2] )
LABEL_7:
    v10 = (const char *)v8[1];
LABEL_4:
  sub_111A0((__int64)"DEXSIP: aloc_var_get_string %s`%s\n", v10, v9);
LABEL_5:
  if ( *(_BYTE *)(*(_QWORD *)(v7 + 48) + 88LL) )
    return sub_37BB0(a1, a2, a3, a4);
  else
    return 0;
}

