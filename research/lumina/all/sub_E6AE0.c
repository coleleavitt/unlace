__int64 *__fastcall sub_E6AE0(__int64 *a1, int *a2, __int64 a3, int a4, int a5)
{
  __int64 *v8; // rbx

  v8 = sub_E0F20(a1, a2, 0);
  if ( (a4 || a5 != -1) && !*(_BYTE *)(*a1 + 197) )
    sub_DBD10((__int64)a1, "syntax error after column name \"%.*s\"", *(_DWORD *)(a3 + 8), *(const char **)a3);
  if ( v8 )
    sub_DCF40((__int64)a1, v8, a3, 1);
  return v8;
}
