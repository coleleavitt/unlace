const char *__fastcall sub_BAA10(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  const char *result; // rax
  const char *v5; // rbp
  size_t v6; // r12
  void *v7; // rdi
  const char *v8; // r13
  __int64 v9; // rax

  v3 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 24) = sub_EA660(v3);
  result = (const char *)sub_EEFB0(v3);
  if ( result && (v5 = result, result = (const char *)strlen(result), (v6 = (size_t)result) != 0) )
  {
    v7 = *(void **)a1;
    v8 = result + 1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(result + 1) )
    {
      v9 = sub_1987B0(a1, *(_QWORD *)a1, result + 1, 1);
      *(_QWORD *)a1 = v9;
      v7 = (void *)v9;
    }
    *(_QWORD *)(a1 + 8) = v8;
    memmove(v7, v5, v6);
    result = *(const char **)a1;
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return result;
}
