unsigned __int64 sub_24A10(__int64 a1, ...)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  const char *v5; // rsi
  __int64 v7; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v8; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+48h] [rbp-B0h]
  __int64 v12; // [rsp+50h] [rbp-A8h]
  __int64 v13; // [rsp+58h] [rbp-A0h]
  __int64 v14; // [rsp+60h] [rbp-98h]
  __int64 v15; // [rsp+68h] [rbp-90h]

  va_start(va, a1);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  v15 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v10 = __readfsqword(0x28u);
  v7 = 0;
  v8 = 0;
  sub_B070(&v7);
  v5 = s;
  if ( (_QWORD)v8 )
    LODWORD(v5) = v7;
  sub_274C0((unsigned int)"%s\n", (_DWORD)v5, v1, v2, v3, v4, v7);
  sub_9FF0((__int64)"%s");
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree();
  }
  return v10 - __readfsqword(0x28u);
}

