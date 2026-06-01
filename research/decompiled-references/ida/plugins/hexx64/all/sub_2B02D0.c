__int64 __fastcall sub_2B02D0(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbx
  unsigned __int8 (***v7)(void); // rdi
  unsigned __int8 (*v8)(void); // rax
  unsigned __int8 (***v9)(void); // rdi
  unsigned __int8 (*v10)(void); // rax
  __int64 result; // rax
  __int64 v12; // rbx

  v4 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v4 || *(_QWORD *)(a2 + 48) != v4 )
    goto LABEL_9;
  v6 = 56 * a3;
  v7 = (unsigned __int8 (***)(void))(56 * a3 + *(_QWORD *)(a1 + 40));
  v8 = **v7;
  if ( (char *)v8 == (char *)sub_2AD590 )
  {
    if ( !(unsigned int)sub_257C70((__int64)(v7 + 1), (__int64)(v7 + 4)) )
      goto LABEL_9;
  }
  else if ( !v8() )
  {
    goto LABEL_9;
  }
  v9 = (unsigned __int8 (***)(void))(v6 + *(_QWORD *)(a2 + 40));
  v10 = **v9;
  if ( (char *)v10 != (char *)sub_2AD590 )
  {
    if ( v10() )
      goto LABEL_7;
LABEL_9:
    sub_2ADE40(a4);
  }
  if ( !(unsigned int)sub_257C70((__int64)(v9 + 1), (__int64)(v9 + 4)) )
    goto LABEL_9;
LABEL_7:
  switch_dbctx();
  result = v6 + *(_QWORD *)(a1 + 40);
  v12 = *(_QWORD *)(a2 + 40) + v6;
  *(_QWORD *)(result + 8) = *(_QWORD *)(v12 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(v12 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(v12 + 24);
  return result;
}

