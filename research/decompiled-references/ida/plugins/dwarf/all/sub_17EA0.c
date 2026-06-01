bool sub_17EA0(__int64 a1, int a2, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-4F0h] BYREF
  _BYTE v4[1032]; // [rsp+20h] [rbp-4D8h] BYREF
  unsigned __int64 v5; // [rsp+428h] [rbp-D0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  sub_17A90(a1, (__int64)v4, 1024, a2, (int *)va);
  sub_17040();
  return a2 <= 18;
}

