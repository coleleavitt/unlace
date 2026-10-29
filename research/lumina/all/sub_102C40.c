__int64 __fastcall sub_102C40(_QWORD *a1, const void *a2, unsigned int a3)
{
  size_t v3; // rbp
  __int64 v5; // rdi
  __int64 result; // rax

  v3 = a3;
  v5 = a1[3];
  if ( (unsigned __int64)a3 + v5 >= a1[2] )
  {
    result = sub_102660((__int64)a1, a3);
    if ( (_DWORD)result )
      return result;
    v5 = a1[3];
  }
  result = (__int64)memcpy((void *)(a1[1] + v5), a2, v3);
  a1[3] += v3;
  return result;
}
