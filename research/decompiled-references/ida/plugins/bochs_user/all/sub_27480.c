__int64 __fastcall sub_27480(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[37]; // [rsp+0h] [rbp-128h] BYREF

  v2[33] = __readfsqword(0x28u);
  qsnprintf();
  result = sub_266F0(a1, (__int64)v2, 25);
  if ( !(_DWORD)result )
    return sub_2BAB0(a1 + 16, *(_QWORD *)(a1 + 72));
  return result;
}

