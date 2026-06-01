bool sub_18130(__int64 a1, int a2, ...)
{
  gcc_va_list va; // [rsp+8h] [rbp-4F0h] BYREF
  char v4[1032]; // [rsp+20h] [rbp-4D8h] BYREF
  unsigned __int64 v5; // [rsp+428h] [rbp-D0h]

  va_start(va, a2);
  v5 = __readfsqword(0x28u);
  sub_17D20(a1, (int)v4, 1024, a2, (int *)va);
  sub_DB10((__int64)"%s", v4);
  return a2 <= 18;
}

