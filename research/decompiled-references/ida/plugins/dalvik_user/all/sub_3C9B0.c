__int64 __fastcall sub_3C9B0(__int64 a1, char *a2, __int64 a3, __int64 *a4, __int64 a5, const char **a6)
{
  __int64 v11; // r8
  const char *v12; // rcx
  _QWORD *v13; // rax
  const char *v14; // rdx
  const char *v15; // rsi
  __int64 v17; // [rsp+8h] [rbp-40h]

  v11 = *(_QWORD *)(a3 + 8);
  if ( (debug & 0x40000) == 0 )
    goto LABEL_7;
  v12 = nptr;
  if ( a6[1] )
    v12 = *a6;
  v13 = *(_QWORD **)(v11 + 48);
  v14 = nptr;
  if ( v13[5] )
  {
    v14 = (const char *)v13[4];
    v15 = nptr;
    if ( !v13[2] )
      goto LABEL_6;
    goto LABEL_9;
  }
  v15 = nptr;
  if ( v13[2] )
LABEL_9:
    v15 = (const char *)v13[1];
LABEL_6:
  v17 = v11;
  sub_111A0((__int64)"DEXSIP: aloc_var_deref_field %s`%s fld=%s\n", v15, v14, v12);
  v11 = v17;
LABEL_7:
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 48) + 88LL) )
    return sub_3C4D0(a1, a2, a3, a4, a5, (__int64)a6);
  else
    return 0;
}

