void __noreturn sub_E890(__int64 a1, ...)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rcx
  const char *v4; // rsi
  const char *v5; // [rsp+0h] [rbp-108h] BYREF
  __int128 v6; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v8; // [rsp+38h] [rbp-D0h]
  __int64 v9; // [rsp+48h] [rbp-C0h]
  __int64 v10; // [rsp+50h] [rbp-B8h]
  __int64 v11; // [rsp+58h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h]

  va_start(va, a1);
  v9 = va_arg(va, _QWORD);
  v10 = va_arg(va, _QWORD);
  v11 = va_arg(va, _QWORD);
  v12 = va_arg(va, _QWORD);
  v1 = v12;
  v13 = va_arg(va, _QWORD);
  v2 = v13;
  va_end(va);
  va_start(va, a1);
  v8 = __readfsqword(0x28u);
  v3 = (unsigned int)dword_21864;
  v5 = nullptr;
  v6 = 0;
  if ( dword_21864 )
    sub_7750((__int64 *)&v5, (__int64)"%s (%u): FATAL: ", (const char *)qword_21880, dword_21864);
  sub_5BD0((__int64 *)&v5, a1, (const __m128i *)va, v3, v1, v2);
  v4 = s1;
  if ( (_QWORD)v6 )
    v4 = v5;
  sub_5C90((__int64)"%s", v4);
}

