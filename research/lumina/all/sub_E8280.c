__int64 sub_E8280(__int64 a1, _BYTE *a2, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-C0h]
  __int128 v5; // [rsp+50h] [rbp-88h]

  va_start(va, a2);
  *(double *)&v5 = va_arg(va, double);
  va_end(va);
  va_start(va, a2);
  v4 = __readfsqword(0x28u);
  return sub_DBC60(a1, a2, (__int64)va, *(double *)&v5);
}
