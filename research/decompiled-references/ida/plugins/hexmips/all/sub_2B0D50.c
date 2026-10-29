unsigned __int64 __fastcall sub_2B0D50(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  bool (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbx
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( a2 >= *(_QWORD *)(a1 + 48) )
    goto LABEL_8;
  v3 = (a2 << 6) + *(_QWORD *)(a1 + 40);
  v4 = **(bool (__fastcall ***)(__int64))v3;
  if ( v4 == sub_2A8940 )
  {
    if ( *(_QWORD *)(v3 + 8) != *(_QWORD *)(v3 + 48) )
      goto LABEL_4;
LABEL_8:
    sub_2A9600();
  }
  if ( !((unsigned __int8 (*)(void))v4)() )
    goto LABEL_8;
LABEL_4:
  switch_dbctx();
  v5 = *(_QWORD *)(a1 + 40) + (a2 << 6);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v5 + 48);
  if ( *(_QWORD *)(v5 + 16) )
  {
    *(_QWORD *)(v5 + 24) = 0;
    qfree();
  }
  *(_QWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  copy_tinfo_t();
  clear_tinfo_t();
  *(_DWORD *)(v5 + 56) = -2;
  return v7 - __readfsqword(0x28u);
}

