__int64 __fastcall sub_2AECC0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v4 = 56 * a2 + *(_QWORD *)(a1 + 40);
  v5 = **(bool (__fastcall ***)(__int64))v4;
  if ( v5 == sub_2AD170 )
  {
    if ( *(_QWORD *)(v4 + 8) != *(_QWORD *)(v4 + 40) )
      goto LABEL_4;
LABEL_8:
    sub_2ADE80(a3);
  }
  if ( !((unsigned __int8 (*)(void))v5)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx();
  v6 = *(_QWORD *)(a1 + 40) + 56 * a2;
  result = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 8) = result;
  if ( v8 )
  {
    *(_QWORD *)(v6 + 24) = 0;
    result = qfree(v8);
  }
  *(_QWORD *)(v6 + 16) = 0;
  *(_DWORD *)(v6 + 48) = -2;
  *(_OWORD *)(v6 + 24) = 0;
  return result;
}

