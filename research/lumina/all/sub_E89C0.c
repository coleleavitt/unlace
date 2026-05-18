__int64 sub_E89C0(int a1, __int64 a2, _BYTE *a3, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-C0h]
  __int128 v6; // [rsp+50h] [rbp-88h]

  va_start(va, a3);
  *(double *)&v6 = va_arg(va, double);
  va_end(va);
  va_start(va, a3);
  v5 = __readfsqword(0x28u);
  if ( a1 > 0 )
    sub_E8930(a1, a2, a3, (__int64)va, *(double *)&v6);
  return a2;
}
