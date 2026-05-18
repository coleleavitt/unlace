unsigned __int64 sub_B81F0(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // rbx
  const char *v3; // rsi
  void *ptr; // [rsp+0h] [rbp-108h] BYREF
  __int128 v6; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-D0h]

  v2 = a1;
  v8 = __readfsqword(0x28u);
  if ( a1 )
    v2 = sub_17E3E0(a1) + 24;
  ptr = nullptr;
  v6 = 0;
  ptr = (void *)sub_1987B0(&ptr, 0, 15, 1);
  *(_QWORD *)&v6 = 15;
  strcpy((char *)ptr, "AUTOHIDE NONE\n");
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 8) > 1u )
      sub_2AAE0((__int64 *)&ptr);
    sub_2AAE0((__int64 *)&ptr);
  }
  va_start(va, a2);
  sub_2AA20((__int64 *)&ptr);
  v3 = s1;
  if ( (_QWORD)v6 )
    v3 = (const char *)ptr;
  sub_466E0((const __m128i *)"%s", v3);
  if ( ptr )
  {
    *(_QWORD *)&v6 = 0;
    j__free(ptr);
  }
  return v8 - __readfsqword(0x28u);
}
