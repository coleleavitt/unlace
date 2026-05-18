__int64 *__fastcall sub_E3110(_BYTE *a1, int a2, int a3)
{
  __int16 v4; // r15
  __int64 v5; // r13
  size_t v6; // rbp
  __int64 *v7; // rax
  __int64 *v8; // rbx
  void *v10; // rdi
  char v11; // al

  v4 = a3;
  v5 = a2 + a3;
  v6 = 9 * (a2 + a3) - 8;
  v7 = sub_DBF10((__int64)a1, v6 + 40);
  v8 = v7;
  if ( v7 )
  {
    *((_WORD *)v7 + 3) = a2;
    *((_WORD *)v7 + 4) = v4 + a2;
    v10 = v7 + 5;
    v7[3] = (__int64)&v7[v5 + 4];
    v11 = a1[100];
    v8[2] = (__int64)a1;
    *(_DWORD *)v8 = 1;
    *((_BYTE *)v8 + 4) = v11;
    memset(v10, 0, v6);
  }
  else if ( !a1[103] && !a1[104] )
  {
    sub_DBE60((__int64)a1);
  }
  return v8;
}
