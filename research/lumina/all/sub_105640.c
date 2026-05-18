__int64 __fastcall sub_105640(__int64 a1, double a2, __int64 a3, __int64 *a4, int a5, int a6, int a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  _BOOL8 v14; // rsi

  v8 = sub_105410(a1, a4, 0, a5, a6, a7, a2);
  v13 = *(_QWORD *)a1;
  v14 = v8 != 0;
  if ( (*(_WORD *)(*(_QWORD *)a1 + 20LL) & 0x9000) != 0 )
    return sub_C9430(v13, v14, v9, v10, v11, v12);
  *(_QWORD *)v13 = v14;
  *(_WORD *)(v13 + 20) = 4;
  return 4;
}
