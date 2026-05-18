__int64 __fastcall sub_19D8E0(__int64 a1, const char *a2, __int64 a3)
{
  size_t v4; // rax
  void *v5; // rsp
  const char *v6; // rax
  _BYTE v8[8]; // [rsp+0h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-28h]

  v9 = __readfsqword(0x28u);
  if ( a1 )
  {
    v4 = strlen(a2);
    v5 = alloca(v4 + 108);
    v6 = sub_19D280(a2, v8, v4 + 100);
    return __vfprintf_chk(a1, 1, v6, a3);
  }
  else
  {
    sub_18FA40(1u);
    *__errno_location() = 9;
    sub_18FA40(1u);
    return 0xFFFFFFFFLL;
  }
}
