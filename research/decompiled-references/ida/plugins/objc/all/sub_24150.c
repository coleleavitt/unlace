char __fastcall sub_24150(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char result; // al
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a1;
  v4 = a1[76] + a3;
  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64))(v3 + 136))(a1, v6, v4);
  if ( result )
  {
    if ( (unsigned int)callui(1004) )
      return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 408LL))(a1, a2, v6[0]);
    else
      return sub_158A0();
  }
  return result;
}
