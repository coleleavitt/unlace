unsigned __int64 __fastcall sub_794F0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v2 = -*(_QWORD *)(a1 + 8);
  if ( *(__int64 *)(a1 + 8) > 0 )
    v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v3 + 1) = v2;
  sub_79340(a2, v3 >> 63);
  v4 = pack_dd();
  sub_79160(a2, (__int64)&v6, v4 - (_QWORD)&v6);
  return v7 - __readfsqword(0x28u);
}

