__int64 __fastcall sub_5E250(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v4[1] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v2 + 248))(a1, v4);
  if ( !(_DWORD)result )
  {
    if ( *(_WORD *)(v4[0] + 84LL) == 4613 )
      *a2 = *(unsigned __int8 *)(v4[0] + 92LL);
    else
      return 1;
  }
  return result;
}

