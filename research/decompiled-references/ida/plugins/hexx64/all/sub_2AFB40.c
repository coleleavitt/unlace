unsigned __int64 __fastcall sub_2AFB40(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int8 (***v4)(void); // rdi
  unsigned __int8 (*v5)(void); // rax
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_6;
  v4 = (unsigned __int8 (***)(void))(56 * a2 + *(_QWORD *)(a1 + 40));
  v5 = **v4;
  if ( (char *)v5 != (char *)sub_2AD640 )
  {
    if ( v5() )
      goto LABEL_4;
LABEL_6:
    sub_2ADE80(a3);
  }
  if ( !(unsigned int)sub_257C40((__int64)(v4 + 1), (__int64)(v4 + 4)) )
    goto LABEL_6;
LABEL_4:
  switch_dbctx();
  result = 56 * a2 + *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(result + 32);
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 48) = -2;
  *(_QWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 16) = *(_DWORD *)(result + 40);
  return result;
}

