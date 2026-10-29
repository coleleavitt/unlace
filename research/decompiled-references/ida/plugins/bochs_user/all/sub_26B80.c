__int64 __fastcall sub_26B80(__int64 a1, __int64 a2)
{
  char v2; // cl
  char v3; // al
  __int64 result; // rax
  _QWORD v5[37]; // [rsp+0h] [rbp-128h] BYREF

  v2 = 4;
  v3 = *(_BYTE *)(a2 + 14);
  v5[33] = __readfsqword(0x28u);
  if ( v3 != 112 )
    v2 = (v3 != 118) + 6;
  result = sub_26920(a1, a2, (_DWORD *)(a2 + 8), v2);
  if ( !(_DWORD)result )
  {
    qsnprintf();
    result = sub_266F0(a1, (__int64)v5, 6);
    if ( !(_DWORD)result )
      return sub_2B380(a1 + 16, *(_QWORD *)(a1 + 72));
  }
  return result;
}

