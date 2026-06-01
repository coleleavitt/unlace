__int64 __fastcall sub_16220(__int64 a1, __int64 a2, _QWORD *a3, __int16 a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // r14
  __int64 v10; // rbx
  __int64 result; // rax

  v7 = 0;
  if ( a4 == 2 )
  {
    v7 = *(_QWORD *)(*a3 + 8LL);
    insn_add_dref(a2, v7, 0, 1);
  }
  op_offset(*(_QWORD *)(a2 + 16), a5, *(unsigned int *)(a1 + 460), a6, v7, 0);
  v10 = *a3;
  result = 24LL * a3[1];
  if ( result )
  {
    do
    {
      if ( (get_flags_ex(*(_QWORD *)(v10 + 8), 0) & 0xF000000) == 0 )
        op_offset(*(_QWORD *)(v10 + 8), 1, *(unsigned int *)(a1 + 452), a6, v7, 0);
      v10 += 24;
      result = *a3 + 24LL * a3[1];
    }
    while ( v10 != result );
  }
  return result;
}

