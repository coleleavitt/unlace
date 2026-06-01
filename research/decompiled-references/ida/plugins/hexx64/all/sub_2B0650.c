__int64 __fastcall sub_2B0650(__int64 a1, unsigned __int64 a2, double a3)
{
  bool (__fastcall ***v4)(__int64); // rdi
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v4 = (bool (__fastcall ***)(__int64))(88 * a2 + *(_QWORD *)(a1 + 40));
  v5 = **v4;
  if ( v5 == sub_2AD660 )
  {
    if ( (unsigned int)sub_257C40((__int64)(v4 + 1), (__int64)(v4 + 8)) )
      goto LABEL_4;
LABEL_8:
    sub_2ADE80(a3);
  }
  if ( !((unsigned __int8 (*)(void))v5)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx();
  v6 = *(_QWORD *)(a1 + 40) + 88 * a2;
  v7 = *(_QWORD *)(v6 + 64);
  v8 = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)(v6 + 8) = v7;
  result = *(unsigned int *)(v6 + 72);
  *(_DWORD *)(v6 + 16) = result;
  if ( v8 )
  {
    *(_QWORD *)(v6 + 40) = 0;
    result = qfree(v8);
  }
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 56) = 0;
  *(_DWORD *)(v6 + 80) = -2;
  *(_OWORD *)(v6 + 40) = 0;
  return result;
}

