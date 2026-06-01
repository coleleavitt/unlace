unsigned __int64 __fastcall sub_C1C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rbx
  bool v4; // zf
  int v5; // r13d
  __int64 v6; // rbx
  bool v7; // r15
  bool v8; // al
  __int64 v10; // [rsp+30h] [rbp-F8h]
  __int64 v11; // [rsp+50h] [rbp-D8h]
  char v12[136]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 v13; // [rsp+E8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 16);
  v13 = __readfsqword(0x28u);
  v3 = (_QWORD *)getseg();
  if ( (getinf() & 0x200) == 0 || !v3 )
    return v13 - __readfsqword(0x28u);
  v4 = *v3 == v2;
  v5 = 544;
  v6 = 4352;
  v7 = v4;
  do
  {
    if ( v5 == 546 )
      goto LABEL_5;
    while ( 1 )
    {
LABEL_6:
      if ( !(unsigned __int8)get_sreg_range() || v10 == -1 )
        goto LABEL_10;
      v8 = v7;
      if ( !v2 )
      {
        if ( !(unsigned __int8)get_prev_sreg_range() )
          goto LABEL_13;
        v8 = v7 || v10 != v11;
      }
      if ( !v8 )
        goto LABEL_10;
LABEL_13:
      if ( v5 != 544 )
        break;
      v6 += 8;
      v5 = 545;
      sub_AE60(a2, (__int64)"Register window: (%d, %d)", BYTE1(v10), (unsigned __int8)v10);
    }
    if ( v5 == 545 )
    {
      sub_AE60(a2, (__int64)"Register page: %d", v10);
      v6 += 8;
LABEL_5:
      v6 += 8;
      v5 = 547;
      goto LABEL_6;
    }
    btoa64();
    sub_AE60(
      a2,
      (__int64)"assume %s: %s (page 0x%a)",
      *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + v6),
      v12,
      0.0);
LABEL_10:
    ++v5;
    v6 += 8;
  }
  while ( v5 != 551 );
  return v13 - __readfsqword(0x28u);
}

