__int64 __fastcall sub_27060(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  _QWORD v5[37]; // [rsp+0h] [rbp-128h] BYREF

  v5[33] = __readfsqword(0x28u);
  qsnprintf();
  *a3 = 0;
  result = sub_266F0(a1, (__int64)v5, 29);
  if ( !(_DWORD)result )
    return sub_2B4A0(a1 + 16, *(_QWORD *)(a1 + 72), a3);
  return result;
}

