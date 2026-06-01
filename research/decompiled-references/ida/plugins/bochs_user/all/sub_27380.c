__int64 __fastcall sub_27380(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v3[37]; // [rsp+0h] [rbp-128h] BYREF

  v3[33] = __readfsqword(0x28u);
  qsnprintf();
  result = sub_266F0(a1, (__int64)v3, 24);
  if ( !(_DWORD)result )
    return sub_2B8E0(a1 + 16, *(_QWORD *)(a1 + 72), a2);
  return result;
}

