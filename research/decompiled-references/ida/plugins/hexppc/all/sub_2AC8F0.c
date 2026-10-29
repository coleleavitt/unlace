__int64 __fastcall sub_2AC8F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rbx
  unsigned __int8 (***v6)(void); // rdi
  unsigned __int8 (*v7)(void); // rax
  unsigned __int8 (***v8)(void); // rdi
  unsigned __int8 (*v9)(void); // rax
  __int64 result; // rax
  __int64 v11; // rbx

  v3 = *(_QWORD *)(a1 + 48);
  if ( a3 >= v3 || *(_QWORD *)(a2 + 48) != v3 )
    goto LABEL_9;
  v5 = 56 * a3;
  v6 = (unsigned __int8 (***)(void))(56 * a3 + *(_QWORD *)(a1 + 40));
  v7 = **v6;
  if ( (char *)v7 == (char *)sub_2A99C0 )
  {
    if ( (unsigned int)sub_253FC0((__int64)(v6 + 1), (__int64)(v6 + 4)) )
      goto LABEL_9;
  }
  else if ( v7() )
  {
    goto LABEL_9;
  }
  v8 = (unsigned __int8 (***)(void))(v5 + *(_QWORD *)(a2 + 40));
  v9 = **v8;
  if ( (char *)v9 != (char *)sub_2A99C0 )
  {
    if ( v9() )
      goto LABEL_7;
LABEL_9:
    sub_2AA1A0();
  }
  if ( !(unsigned int)sub_253FC0((__int64)(v8 + 1), (__int64)(v8 + 4)) )
    goto LABEL_9;
LABEL_7:
  switch_dbctx();
  result = v5 + *(_QWORD *)(a1 + 40);
  v11 = *(_QWORD *)(a2 + 40) + v5;
  *(_QWORD *)(result + 8) = *(_QWORD *)(v11 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(v11 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(v11 + 24);
  return result;
}

