__int64 __fastcall sub_1B600(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  void *v7; // rax
  __int64 result; // rax
  struct _Unwind_Exception *v9; // rbp

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( !a2 )
  {
    a1[3] = -1;
    goto LABEL_6;
  }
  v4 = strlen((const char *)a2);
  v5 = v4 + 1;
  v6 = v4;
  v7 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
  *a1 = (__int64)v7;
  a1[1] = v5;
  memmove(v7, (const void *)a2, v6);
  result = *a1;
  *(_BYTE *)(*a1 + v6) = 0;
  a1[3] = -1;
  if ( *(_BYTE *)a2 != 36 || *(_BYTE *)(a2 + 1) != 32 )
  {
LABEL_6:
    if ( !under_debugger )
    {
      v9 = (struct _Unwind_Exception *)interr(30221);
      v2 = *a1;
      if ( *a1 )
      {
        a1[1] = 0;
        qfree(v2);
      }
      _Unwind_Resume(v9);
    }
    BUG();
  }
  return result;
}

