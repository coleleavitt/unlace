void __fastcall sub_E6D80(__int64 *a1, _QWORD *a2, __int64 a3)
{
  const char *v3; // rcx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  const char *v8; // rdx
  _DWORD *v9; // rsi
  _QWORD *v10; // rsi

  v3 = (const char *)a2[1];
  if ( !v3 )
    return;
  v5 = *a1;
  v6 = sub_E44D0((__int64)a1, a3, v3);
  v7 = v6;
  if ( !v6 )
    return;
  if ( a2[2] )
  {
    v8 = "PARTITION clause";
LABEL_15:
    sub_DBD10((__int64)a1, "cannot override %s of window: %s", v8, (const char *)a2[1]);
    return;
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    v8 = "ORDER BY clause";
    if ( a2[3] )
      goto LABEL_15;
  }
  v8 = "frame specification";
  if ( !*(_BYTE *)(v6 + 35) )
    goto LABEL_15;
  a2[2] = sub_DD150(v5, *(_DWORD **)(v6 + 16), 0);
  v9 = *(_DWORD **)(v7 + 24);
  if ( v9 )
    a2[3] = sub_DD150(v5, v9, 0);
  v10 = (_QWORD *)a2[1];
  if ( v10 )
    sub_C9250(v5, v10);
  a2[1] = 0;
}
