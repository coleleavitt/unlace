_BOOL8 __fastcall sub_2B1F20(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int8 (*v8)(void); // rax
  __int64 v9; // r13
  bool (__fastcall *v10)(__int64); // rax
  _QWORD *v11; // rbx
  _BOOL8 result; // rax
  __int64 v13; // rax
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // edx

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_16;
  v6 = a3 << 6;
  v7 = (a3 << 6) + *(_QWORD *)(a1 + 40);
  v8 = **(unsigned __int8 (***)(void))v7;
  if ( (char *)v8 == (char *)sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 48) )
      goto LABEL_16;
  }
  else if ( !v8() )
  {
    goto LABEL_16;
  }
  v9 = v6 + *(_QWORD *)(a2 + 40);
  v10 = **(bool (__fastcall ***)(__int64))v9;
  if ( v10 == sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v9 + 8) != *(_QWORD *)(v9 + 48) )
      goto LABEL_6;
LABEL_16:
    sub_2ADE60(a4);
  }
  if ( !v10(v6 + *(_QWORD *)(a2 + 40)) )
    goto LABEL_16;
  v9 = v6 + *(_QWORD *)(a2 + 40);
LABEL_6:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 40) + v6);
  switch_dbctx();
  result = 1;
  if ( v11[1] != *(_QWORD *)(v9 + 8) )
    return result;
  v13 = v11[3];
  if ( *(_QWORD *)(v9 + 24) )
  {
    v14 = *(const char **)(v9 + 16);
    v15 = s1;
    if ( !v13 )
      goto LABEL_11;
  }
  else
  {
    v14 = s1;
    if ( !v13 )
      return (*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(
               *(_QWORD *)(a1 + 32),
               v11 + 5,
               *(unsigned int *)(a1 + 12),
               v9 + 40,
               *(unsigned int *)(a2 + 12)) != 0;
  }
  v15 = (const char *)v11[2];
LABEL_11:
  v16 = strcmp(v15, v14);
  result = 1;
  if ( !v16 )
    return (*(unsigned int (__fastcall **)(_QWORD, _QWORD *, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 40LL))(
             *(_QWORD *)(a1 + 32),
             v11 + 5,
             *(unsigned int *)(a1 + 12),
             v9 + 40,
             *(unsigned int *)(a2 + 12)) != 0;
  return result;
}

