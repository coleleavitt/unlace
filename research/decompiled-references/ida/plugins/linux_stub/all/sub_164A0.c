unsigned __int64 __fastcall sub_164A0(__int64 a1)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, unsigned __int8, __int64); // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_267D0(v4, 11);
  v1 = a1 + 864;
  v2 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)v1 + 16LL);
  if ( v2 == sub_A820 )
    sub_23190(v1, 11, v4, 0);
  else
    v2(v1, 11u, (__int64)v4);
  qfree();
  if ( v4[0] )
  {
    v4[1] = 0;
    qfree();
  }
  return v5 - __readfsqword(0x28u);
}

