__int64 __fastcall sub_7EFC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  char v15; // [rsp+0h] [rbp-28h]

  v4 = qlsize(a1);
  v6 = qlseek(a1, 0, 1, v5);
  if ( v4 < v6 )
    return 0;
  v7 = a3 * a2;
  if ( v4 - v6 < a3 * a2 )
    return 0;
  v8 = qalloc(v7);
  v13 = v8;
  if ( !v8 )
    sub_7EF00((__int64)"coff symbols", 0, v9, v10, v11, v12, v15);
  if ( qlread(a1, v8, v7) != v7 )
    sub_299B0();
  return v13;
}

