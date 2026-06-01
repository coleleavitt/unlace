__int64 __fastcall sub_123220(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  _0[3] = __readfsqword(0x28u);
  sub_11F840((__int64)_0, a3);
  v3 = sub_1230B0((unsigned __int64)_0, a2, *(_DWORD *)(a1 + 4));
  if ( (_BYTE)v3 )
  {
    LOBYTE(v5) = sub_1213D0((unsigned __int8 *)a1, a2, (__int64)_0, 0);
    v3 = v5;
  }
  sub_118BA0((__int64)_0);
  return v3;
}

