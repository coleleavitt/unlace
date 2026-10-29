size_t __fastcall sub_69970(_QWORD *a1, void *a2, size_t a3)
{
  size_t v3; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  size_t v8; // rax

  v3 = 0;
  v6 = a1[39];
  v7 = a1[42];
  if ( v7 < v6 )
  {
    v8 = v6 - v7;
    if ( v8 <= a3 )
      a3 = v8;
    v3 = a3;
    memcpy(a2, (const void *)(a1[38] + v7), a3);
    a1[42] += v3;
  }
  return v3;
}

