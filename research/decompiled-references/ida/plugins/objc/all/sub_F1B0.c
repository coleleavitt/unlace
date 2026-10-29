__int64 __fastcall sub_F1B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a1;
  v4 = a1[76] + a3;
  v6[1] = __readfsqword(0x28u);
  v6[0] = 0;
  result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *, __int64))(v3 + 136))(a1, v6, v4);
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 408LL))(a1, a2, v6[0]);
  return result;
}
