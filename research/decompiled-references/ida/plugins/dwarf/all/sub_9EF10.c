void __fastcall sub_9EF10(__int64 *a1, const char *a2, int a3)
{
  size_t v5; // rax
  size_t v6; // r13
  void *v7; // rdi
  size_t v8; // r14
  __int64 v9; // rax

  if ( !a2 || (v5 = strlen(a2), (v6 = v5) == 0) )
  {
    a1[1] = 0;
    if ( a3 < 0 )
      return;
LABEL_8:
    sub_1F510(a1, (__int64)"_%d", a3);
    return;
  }
  v7 = (void *)*a1;
  v8 = v5 + 1;
  if ( a1[2] < v5 + 1 )
  {
    v9 = qvector_reserve(a1, *a1, v5 + 1, 1);
    *a1 = v9;
    v7 = (void *)v9;
  }
  a1[1] = v8;
  memmove(v7, a2, v6);
  *(_BYTE *)(*a1 + v6) = 0;
  if ( a3 >= 0 )
    goto LABEL_8;
}

