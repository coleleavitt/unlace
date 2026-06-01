__int64 __fastcall sub_5E360(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v4[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v2 + 248))(a1, v4);
  if ( !(_DWORD)result )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4[0] + 8LL))(v4[0], a2);
  return result;
}
