void __fastcall __noreturn sub_15B30(__int64 a1, __int64 a2)
{
  const char *v2; // rsi
  _QWORD v3[19]; // [rsp+0h] [rbp-98h] BYREF

  v3[17] = __readfsqword(0x28u);
  v2 = (const char *)sub_19470(a1, a2, v3);
  sub_12DB0((__int64)"Illegal declaration size%s", v2);
}

