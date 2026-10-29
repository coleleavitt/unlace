unsigned __int64 sub_88A30(void **a1, __int64 a2, ...)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  size_t v6; // r13
  const void *v8; // r15
  void *v9; // rdi
  __int64 v10; // rax
  gcc_va_list va; // [rsp+0h] [rbp-108h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-F0h]
  __int64 v13; // [rsp+30h] [rbp-D8h]
  __int64 v14; // [rsp+38h] [rbp-D0h]
  __int64 v15; // [rsp+40h] [rbp-C8h]
  __int64 v16; // [rsp+48h] [rbp-C0h]

  va_start(va, a2);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  v2 = v14;
  v15 = va_arg(va, _QWORD);
  v3 = v15;
  v16 = va_arg(va, _QWORD);
  v4 = v16;
  va_end(va);
  v12 = __readfsqword(0x28u);
  if ( a1 != &qword_D08F0 )
  {
    v6 = n;
    if ( n > 1 )
    {
      v8 = qword_D08F0;
      v9 = *a1;
      if ( (unsigned __int64)a1[2] < n )
      {
        v10 = qvector_reserve(a1, *a1, n, 1);
        *a1 = (void *)v10;
        v9 = (void *)v10;
      }
      a1[1] = (void *)v6;
      memmove(v9, v8, v6 - 1);
      *((char *)*a1 + v6 - 1) = 0;
    }
    else
    {
      a1[1] = nullptr;
    }
  }
  va_start(va, a2);
  sub_1D680((__int64 *)&qword_D08F0, a2, (const __m128i *)va, v2, v3, v4);
  return v12 - __readfsqword(0x28u);
}

