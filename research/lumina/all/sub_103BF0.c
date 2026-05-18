unsigned __int64 sub_103BF0(int a1, _QWORD *a2, _BYTE *a3, ...)
{
  __int64 v4; // rbp
  __int64 v6; // rdi
  const char *v7; // rdi
  _BYTE *v8; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-D0h]
  __int128 v11; // [rsp+60h] [rbp-98h]

  va_start(va, a3);
  *(double *)&v11 = va_arg(va, double);
  va_end(va);
  v10 = __readfsqword(0x28u);
  v4 = a2[3];
  if ( (unsigned __int64)(v4 + a1) >= a2[2] )
  {
    v8 = a3;
    if ( (unsigned int)sub_102660((__int64)a2, (unsigned int)a1) )
      return __readfsqword(0x28u) ^ v10;
    v4 = a2[3];
    a3 = v8;
  }
  v6 = a2[1];
  va_start(va, a3);
  v7 = (const char *)(v4 + v6);
  if ( a1 > 0 )
  {
    sub_E8930(a1, (__int64)v7, a3, (__int64)va, *(double *)&v11);
    v4 = a2[3];
    v7 = (const char *)(v4 + a2[1]);
  }
  a2[3] = (int)strlen(v7) + v4;
  return __readfsqword(0x28u) ^ v10;
}
