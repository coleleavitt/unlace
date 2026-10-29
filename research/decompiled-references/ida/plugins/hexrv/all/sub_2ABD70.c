_BOOL8 __fastcall sub_2ABD70(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int8 (***v5)(void); // rdi
  unsigned __int8 (*v6)(void); // rax
  bool (__fastcall ***v7)(__int64); // rdi
  bool (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rbp
  int v12; // edx
  _BOOL8 result; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_10;
  v4 = 56 * a3;
  v5 = (unsigned __int8 (***)(void))(56 * a3 + *(_QWORD *)(a1 + 40));
  v6 = **v5;
  if ( (char *)v6 == (char *)sub_2A8990 )
  {
    if ( !(unsigned int)sub_253070((__int64)(v5 + 1), (__int64)(v5 + 4)) )
      goto LABEL_10;
  }
  else if ( !v6() )
  {
    goto LABEL_10;
  }
  v7 = (bool (__fastcall ***)(__int64))(v4 + *(_QWORD *)(a2 + 40));
  v8 = **v7;
  if ( v8 == sub_2A8990 )
  {
    if ( (unsigned int)sub_253070((__int64)(v7 + 1), (__int64)(v7 + 4)) )
      goto LABEL_6;
LABEL_10:
    sub_2A9260();
  }
  if ( !((unsigned __int8 (*)(void))v8)() )
    goto LABEL_10;
LABEL_6:
  v9 = v4 + *(_QWORD *)(a2 + 40);
  v10 = *(_QWORD *)(a1 + 40) + v4;
  v11 = v9;
  switch_dbctx();
  v12 = sub_253070(v10 + 8, v11 + 8);
  result = 1;
  if ( !v12 )
    return *(_DWORD *)(v10 + 24) != *(_DWORD *)(v11 + 24);
  return result;
}

