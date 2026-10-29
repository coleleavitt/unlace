__int64 __fastcall sub_3F0090(__int64 *a1)
{
  __int64 result; // rax
  _QWORD v2[9]; // [rsp+0h] [rbp-48h] BYREF

  v2[5] = __readfsqword(0x28u);
  qsnprintf();
  result = sub_335C70(a1[1], a1[5], (__int64)v2, (_BYTE *)(a1[100] + 280), 0, 0, 1);
  *(_DWORD *)(*(_QWORD *)(result + 72) + 280LL) |= 0x14u;
  return result;
}

