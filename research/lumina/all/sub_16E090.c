__int64 __fastcall sub_16E090(const char *src, _QWORD *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  __int64 result; // rax
  void *v6; // rdi
  size_t v7; // r13
  __int64 v8; // rax

  if ( !src || (v3 = strlen(src), (v4 = v3) == 0) )
  {
    a2[18] = 0;
    result = sub_197CF0(src);
    if ( (_BYTE)result )
      return result;
    goto LABEL_8;
  }
  v6 = (void *)a2[17];
  v7 = v3 + 1;
  if ( a2[19] < v3 + 1 )
  {
    v8 = sub_1987B0(a2 + 17, a2[17], v7, 1);
    a2[17] = v8;
    v6 = (void *)v8;
  }
  a2[18] = v7;
  memmove(v6, src, v4);
  *(_BYTE *)(a2[17] + v4) = 0;
  result = sub_197CF0(src);
  if ( !(_BYTE)result )
  {
LABEL_8:
    result = sub_197B20(src, 511);
    if ( (_DWORD)result )
      sub_2F260((__int64)"Cannot create directory '%s' for bad requests", src);
  }
  return result;
}
