__int64 __fastcall sub_3C3F0(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, unsigned __int64 a5, double a6)
{
  __int64 v10; // r8
  _QWORD *v11; // rax
  const char *v12; // rdx
  const char *v13; // rsi
  __int64 v15; // [rsp+8h] [rbp-40h]

  v10 = *(_QWORD *)(a3 + 8);
  if ( (debug & 0x40000) == 0 )
    goto LABEL_5;
  v11 = *(_QWORD **)(v10 + 48);
  v12 = nptr;
  if ( v11[5] )
  {
    v12 = (const char *)v11[4];
    v13 = nptr;
    if ( !v11[2] )
      goto LABEL_4;
    goto LABEL_7;
  }
  v13 = nptr;
  if ( v11[2] )
LABEL_7:
    v13 = (const char *)v11[1];
LABEL_4:
  v15 = v10;
  sub_111A0((__int64)"DEXSIP: aloc_var_deref_array %s`%s n=%a\n", v13, v12, a6);
  v10 = v15;
LABEL_5:
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 48) + 88LL) )
    return sub_3C030(a1, a2, a3, a4, a5);
  else
    return 0;
}

