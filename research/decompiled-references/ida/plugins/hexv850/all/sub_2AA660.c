__int64 __fastcall sub_2AA660(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi

  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v3 = 48 * a2 + *(_QWORD *)(a1 + 40);
  v4 = **(bool (__fastcall ***)(__int64))v3;
  if ( v4 == sub_2A7DA0 )
  {
    if ( *(_DWORD *)(v3 + 8) != *(_DWORD *)(v3 + 40) )
      goto LABEL_4;
LABEL_8:
    sub_2A8AC0();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx();
  v5 = *(_QWORD *)(a1 + 40) + 48 * a2;
  result = *(unsigned int *)(v5 + 40);
  v7 = *(_QWORD *)(v5 + 16);
  *(_DWORD *)(v5 + 8) = result;
  if ( v7 )
  {
    *(_QWORD *)(v5 + 24) = 0;
    result = qfree();
  }
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 44) = -2;
  *(_OWORD *)(v5 + 24) = 0;
  return result;
}

