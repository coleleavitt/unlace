_BOOL8 __fastcall sub_2B0A50(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  __int64 v5; // rbx
  unsigned __int8 (***v6)(void); // rdi
  unsigned __int8 (*v7)(void); // rax
  bool (__fastcall ***v8)(__int64); // rdi
  bool (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // edx
  _BOOL8 result; // rax

  if ( a3 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_10;
  v5 = 56 * a3;
  v6 = (unsigned __int8 (***)(void))(56 * a3 + *(_QWORD *)(a1 + 40));
  v7 = **v6;
  if ( (char *)v7 == (char *)sub_2AD640 )
  {
    if ( !(unsigned int)sub_257C40((__int64)(v6 + 1), (__int64)(v6 + 4)) )
      goto LABEL_10;
  }
  else if ( !v7() )
  {
    goto LABEL_10;
  }
  v8 = (bool (__fastcall ***)(__int64))(v5 + *(_QWORD *)(a2 + 40));
  v9 = **v8;
  if ( v9 == sub_2AD640 )
  {
    if ( (unsigned int)sub_257C40((__int64)(v8 + 1), (__int64)(v8 + 4)) )
      goto LABEL_6;
LABEL_10:
    sub_2ADE60(a4);
  }
  if ( !((unsigned __int8 (*)(void))v9)() )
    goto LABEL_10;
LABEL_6:
  v10 = v5 + *(_QWORD *)(a2 + 40);
  v11 = *(_QWORD *)(a1 + 40) + v5;
  v12 = v10;
  switch_dbctx();
  v13 = sub_257C40(v11 + 8, v12 + 8);
  result = 1;
  if ( !v13 )
    return *(_DWORD *)(v11 + 24) != *(_DWORD *)(v12 + 24);
  return result;
}

