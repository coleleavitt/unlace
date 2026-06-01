__int64 __fastcall sub_26A90(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  _QWORD v4[37]; // [rsp+0h] [rbp-128h] BYREF

  v2 = *(_BYTE *)(a2 + 14);
  v4[33] = __readfsqword(0x28u);
  if ( v2 == 118 || v2 == 112 || (result = 13, v2 == 108) )
  {
    qsnprintf();
    result = sub_266F0(a1, (__int64)v4, 5);
    if ( !(_DWORD)result )
      return sub_2B380(a1 + 16, *(_QWORD *)(a1 + 72));
  }
  return result;
}

