__int64 __fastcall sub_1679D0(void *src, __int64 *a2)
{
  size_t v4; // rax
  size_t v5; // r12
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( (unsigned __int64)a2[1] <= 1 )
  {
    if ( src && (v4 = strlen((const char *)src), (v5 = v4) != 0) )
    {
      v6 = (void *)*a2;
      v7 = v4 + 1;
      if ( a2[2] < v4 + 1 )
      {
        v8 = sub_1987B0(a2, *a2, v4 + 1, 1);
        *a2 = v8;
        v6 = (void *)v8;
      }
      a2[1] = v7;
      memmove(v6, src, v5);
      *(_BYTE *)(*a2 + v5) = 0;
    }
    else
    {
      a2[1] = 0;
    }
  }
  return sub_4BC40((__int64 (__fastcall ***)(_QWORD))"%s\n", (const char *)src);
}
