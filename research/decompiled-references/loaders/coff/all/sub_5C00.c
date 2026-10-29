__int64 __fastcall sub_5C00(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax

  v4 = qlsize();
  v5 = qlseek(a1, 0, 1);
  if ( v4 < v5 )
    return 0;
  v6 = a3 * a2;
  if ( v4 - v5 < a3 * a2 )
    return 0;
  v7 = qalloc(v6);
  v8 = v7;
  if ( !v7 )
    sub_5B40((__int64)"coff symbols");
  v9 = qlread(a1, v7, v6);
  if ( v9 != v6 )
    sub_5A70((__int64)"Read error (only %zu bytes of %zu could be read)", v9, v6);
  return v8;
}
