__int64 *sub_105970(_BYTE *a1, ...)
{
  gcc_va_list va; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v3; // [rsp+18h] [rbp-C0h]
  __int64 v4; // [rsp+28h] [rbp-B0h]
  __int128 v5; // [rsp+50h] [rbp-88h]

  va_start(va, a1);
  v4 = va_arg(va, _QWORD);
  *(double *)&v5 = va_arg(va, double);
  va_end(va);
  v3 = __readfsqword(0x28u);
  if ( (unsigned int)sub_FEBD0((__int64)a1, v4) )
    return nullptr;
  va_start(va, a1);
  return sub_1058D0(a1, (__int64)va, *(double *)&v5);
}
