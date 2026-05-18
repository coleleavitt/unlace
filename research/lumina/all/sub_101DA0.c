_DWORD *__fastcall sub_101DA0(const char *src, char *s, char *a3, int a4, const char **a5)
{
  int v8; // r13d
  size_t v9; // r12
  const char *v10; // rdi
  size_t v11; // rbp
  __int64 v12; // rbp
  const char **v13; // r14
  _DWORD *v14; // rax
  _DWORD *v15; // rbp
  _BYTE *v16; // rax
  __int64 v17; // r12
  const char *v18; // rsi
  void *v19; // rax

  v8 = 2 * a4;
  v9 = strlen(src);
  v10 = a3;
  v11 = v9 + strlen(s) + 10;
  v12 = strlen(a3) + v11;
  if ( v8 > 0 )
  {
    v13 = a5;
    do
    {
      v10 = *v13++;
      v12 += strlen(v10) + 1;
    }
    while ( v13 != &a5[(unsigned int)(v8 - 1) + 1] );
  }
  if ( (unsigned int)sub_FEBD0((__int64)v10, (__int64)s) )
    return nullptr;
  v14 = (_DWORD *)sub_D1E10(v12, (__int64)s);
  if ( !v14 )
    return nullptr;
  v15 = v14 + 1;
  *v14 = 0;
  v16 = (_BYTE *)sub_C7610(v14 + 1, src);
  if ( v8 > 0 )
  {
    v17 = (__int64)&a5[(unsigned int)(v8 - 1) + 1];
    do
    {
      v18 = *a5++;
      v16 = (_BYTE *)sub_C7610(v16, v18);
    }
    while ( (const char **)v17 != a5 );
  }
  *v16 = 0;
  v19 = (void *)sub_C7610(v16 + 1, s);
  *(_WORD *)sub_C7610(v19, a3) = 0;
  return v15;
}
