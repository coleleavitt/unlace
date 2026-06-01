unsigned __int64 sub_49D0(__int64 a1, __int64 a2, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-4F0h] BYREF
  _BYTE v4[1032]; // [rsp+20h] [rbp-4D8h] BYREF
  unsigned __int64 v5; // [rsp+428h] [rbp-D0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  qvsnprintf(v4, 1024, a2, va);
  append_cmt(a1, v4, 0);
  return v5 - __readfsqword(0x28u);
}
