unsigned __int64 __fastcall sub_DC80(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // [rsp+10h] [rbp-38h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 16);
  v7 = __readfsqword(0x28u);
  if ( (getinf() & 0x200) != 0 && a1[20] != -1 && (unsigned __int8)get_sreg_range() && !v2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1[2] + 56LL) + 1144LL);
    v5 = *(_QWORD *)(a1[3] + 48LL);
    if ( v6 == -1 )
      sub_B9A0(a2, 0xFFFF, (__int64)byte_10819, v5, v4);
    else
      sub_B9A0(a2, 0xFFFF, (__int64)&word_1082E, v5, v4, 8, a1[20] + v6);
  }
  return v7 - __readfsqword(0x28u);
}

