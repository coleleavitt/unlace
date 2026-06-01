unsigned __int64 __fastcall sub_2B55D0(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rdi
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v4 = (a2 << 6) + *(_QWORD *)(a1 + 40);
  v5 = **(bool (__fastcall ***)(__int64))v4;
  if ( v5 == sub_2AD1C0 )
  {
    if ( *(_QWORD *)(v4 + 8) != *(_QWORD *)(v4 + 48) )
      goto LABEL_4;
LABEL_8:
    sub_2ADE80(a3);
  }
  if ( !((unsigned __int8 (*)(void))v5)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx();
  v6 = *(_QWORD *)(a1 + 40) + (a2 << 6);
  *(_QWORD *)(v6 + 8) = *(_QWORD *)(v6 + 48);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
  {
    *(_QWORD *)(v6 + 24) = 0;
    qfree(v7);
  }
  *(_QWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 24) = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  *(_DWORD *)(v6 + 56) = -2;
  return v9 - __readfsqword(0x28u);
}

