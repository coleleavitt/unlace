const char *__fastcall sub_3B48C0(__int64 a1, __int64 a2)
{
  const char *result; // rax
  const char *v3; // rbx
  size_t v4; // r12
  char *v5; // rdi
  const char *v6; // r13
  __int64 v7; // rax

  result = (const char *)sub_3A42D0(*(_DWORD *)(a1 + 40));
  if ( result && (v3 = result, result = (const char *)strlen(result), (v4 = (size_t)result) != 0) )
  {
    v5 = *(char **)a2;
    v6 = result + 1;
    if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(result + 1) )
    {
      v7 = qvector_reserve();
      *(_QWORD *)a2 = v7;
      v5 = (char *)v7;
    }
    *(_QWORD *)(a2 + 8) = v6;
    memmove(v5, v3, v4);
    result = *(const char **)a2;
    *(_BYTE *)(*(_QWORD *)a2 + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0;
  }
  return result;
}

