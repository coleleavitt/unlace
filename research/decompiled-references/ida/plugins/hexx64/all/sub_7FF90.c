unsigned __int64 __fastcall sub_7FF90(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 i; // r12
  __int64 v4; // rax
  __int128 v5; // rt0
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v2 = pack_dd();
  sub_7F760(a1, (__int64)&v7, v2 - (_QWORD)&v7);
  for ( i = *(_QWORD *)(a2 + 24); a2 + 8 != i; i = std::_Rb_tree_increment() )
  {
    v4 = a1[5] - *(_QWORD *)(i + 32);
    if ( v4 < 0 )
      v4 = *(_QWORD *)(i + 32) - a1[5];
    *(_QWORD *)&v5 = *(_QWORD *)(i + 32) - a1[5];
    *((_QWORD *)&v5 + 1) = v4;
    sub_7F940(a1, v5 >> 63);
  }
  return v8 - __readfsqword(0x28u);
}

