_BOOL8 __fastcall sub_FEE0(__int64 a1, __int64 *a2, __int64 a3)
{
  const char *v3; // rax
  const char *v4; // rbp
  size_t v5; // rax
  size_t v6; // r12
  _BOOL8 result; // rax
  void *v8; // rdi
  size_t v9; // r13
  __int64 v10; // rax

  v3 = (const char *)strarray(&unk_216A0, 551, *(unsigned __int16 *)(a3 + 24));
  if ( v3 && (v4 = v3, v5 = strlen(v3), (v6 = v5) != 0) )
  {
    v8 = (void *)*a2;
    v9 = v5 + 1;
    if ( a2[2] < v5 + 1 )
    {
      v10 = qvector_reserve(a2, *a2, v5 + 1, 1);
      *a2 = v10;
      v8 = (void *)v10;
    }
    a2[1] = v9;
    memmove(v8, v4, v6);
    *(_BYTE *)(*a2 + v6) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  result = 0;
  if ( a2 )
    return (unsigned __int64)a2[1] > 1;
  return result;
}
