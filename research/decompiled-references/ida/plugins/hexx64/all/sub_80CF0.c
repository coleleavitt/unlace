unsigned __int64 __fastcall sub_80CF0(_DWORD *a1, __int64 *a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v3 = pack_dd();
  sub_7F760(a2, (__int64)&v7, v3 - (_QWORD)&v7);
  v4 = pack_dd();
  sub_7F760(a2, (__int64)&v7, v4 - (_QWORD)&v7);
  v5 = *a1 & 0xF;
  if ( v5 == 2 )
    return sub_80350((__int64)(a1 + 2), a2);
  if ( (*a1 & 0xFu) > 2 && v5 != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xCBBAu, a3);
    BUG();
  }
  return v8 - __readfsqword(0x28u);
}

