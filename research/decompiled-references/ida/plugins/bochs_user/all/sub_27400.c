__int64 __fastcall sub_27400(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[37]; // [rsp+0h] [rbp-128h] BYREF

  v2[33] = __readfsqword(0x28u);
  qsnprintf();
  result = sub_266F0(a1, (__int64)v2, 28);
  if ( !(_DWORD)result )
    return sub_2B910(a1 + 16, *(_QWORD *)(a1 + 72));
  return result;
}

