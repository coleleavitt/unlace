_BOOL8 __fastcall sub_2B97F0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // r13
  bool (__fastcall *v10)(__int64); // rax
  __int64 v11; // rbx
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi
  __int64 v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_22;
  v6 = 192 * a3;
  v7 = 192 * a3 + *(_QWORD *)(a1 + 40);
  v8 = **(unsigned __int8 (***)(void))v7;
  if ( (char *)v8 == (char *)sub_2AD0D0 )
  {
    if ( *(_DWORD *)(v7 + 40) != 2 )
      goto LABEL_22;
  }
  else if ( !v8() )
  {
    goto LABEL_22;
  }
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(bool (__fastcall ***)(__int64))v9;
  if ( v10 == sub_2AD0D0 )
  {
    if ( *(_DWORD *)(v9 + 40) == 2 )
      goto LABEL_6;
LABEL_22:
    sub_2ADE60(a4);
  }
  if ( !v10(v6 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_22;
  v9 = v6 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v11 = *(_QWORD *)(a1 + 40) + v6;
  switch_dbctx();
  if ( (unsigned int)sub_2B9450(v11 + 8, v9 + 8, a4) )
    return 1;
  v13 = *(_QWORD *)(v11 + 80);
  if ( *(_QWORD *)(v9 + 80) )
  {
    v14 = *(const char **)(v9 + 72);
    v15 = s1;
    if ( !v13 )
      goto LABEL_11;
  }
  else
  {
    v14 = s1;
    if ( !v13 )
      goto LABEL_12;
  }
  v15 = *(const char **)(v11 + 72);
LABEL_11:
  if ( strcmp(v15, v14) )
    return 1;
LABEL_12:
  v16 = *(_QWORD *)(v11 + 112);
  if ( *(_QWORD *)(v9 + 112) )
  {
    v17 = *(const char **)(v9 + 104);
    v18 = s1;
    if ( !v16 )
      goto LABEL_14;
  }
  else
  {
    v17 = s1;
    if ( !v16 )
      goto LABEL_15;
  }
  v18 = *(const char **)(v11 + 104);
LABEL_14:
  if ( strcmp(v18, v17) )
    return 1;
LABEL_15:
  if ( (unsigned int)sub_3307E0((int *)(v11 + 48), (int *)(v9 + 48)) )
    return 1;
  return (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(
           *(_QWORD *)(a1 + 32),
           v11 + 96,
           *(unsigned int *)(a1 + 12),
           v9 + 96,
           *(unsigned int *)(a2 + 12)) != 0;
}

