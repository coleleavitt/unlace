size_t __fastcall sub_16E170(const char *src, _QWORD *a2)
{
  size_t result; // rax
  size_t v4; // r12
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax

  result = sub_197CF0(src);
  if ( !(_BYTE)result )
  {
    result = sub_197B20(src, 511);
    if ( (_DWORD)result )
      sub_2F260((__int64)"Cannot create directory '%s' for recording conversations into", src);
  }
  if ( src && (result = strlen(src), (v4 = result) != 0) )
  {
    v5 = (void *)a2[23];
    v6 = result + 1;
    if ( a2[25] < result + 1 )
    {
      v7 = sub_1987B0(a2 + 23, a2[23], v6, 1);
      a2[23] = v7;
      v5 = (void *)v7;
    }
    a2[24] = v6;
    memmove(v5, src, v4);
    result = a2[23];
    *(_BYTE *)(result + v4) = 0;
  }
  else
  {
    a2[24] = 0;
  }
  return result;
}
