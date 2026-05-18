unsigned __int64 sub_E8BB0(unsigned int a1, _BYTE *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]
  __int128 v5; // [rsp+50h] [rbp-88h]

  va_start(va, a2);
  *(double *)&v5 = va_arg(va, double);
  va_end(va);
  v4 = __readfsqword(0x28u);
  if ( qword_2415F8 )
  {
    va_start(va, a2);
    sub_E8B10(a1, a2, (__int64)va, *(double *)&v5);
  }
  return __readfsqword(0x28u) ^ v4;
}
