__int64 __fastcall sub_3EB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 next_fixup_ea; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 i; // rsi
  unsigned __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned __int64 v16; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v4 = a2;
  v16 = __readfsqword(0x28u);
  netnode_check(&v12, "$ epoc", 0, 0);
  qword_132C8 = v12;
  if ( a1 != -1 || a3 )
  {
    v4 = a2 - a1;
    v6 = a3 + a2;
    netnode_altshift(v12, a1, a2, a3, 65);
    if ( a2 )
    {
      v8 = a2 - 1;
      next_fixup_ea = get_next_fixup_ea(a2 - 1);
      if ( next_fixup_ea >= v6 )
        goto LABEL_11;
      goto LABEL_6;
    }
  }
  else
  {
    netnode_altshift(v12, 0, a2, -1, 65);
    v6 = -1;
  }
  next_fixup_ea = get_first_fixup_ea();
  if ( next_fixup_ea >= v6 )
  {
LABEL_12:
    v10 = netnode_supfirst(qword_132C8, 65);
    goto LABEL_15;
  }
  v3 = 0;
  do
  {
LABEL_6:
    v12 = 0;
    v14 = 0;
    v15 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_FDA0);
    if ( (unsigned __int8)((__int64 (__fastcall *)(__int64 *, unsigned __int64))get_fixup)(&v12, next_fixup_ea) )
    {
      v14 = (unsigned int)(v14 + v4);
      set_fixup(next_fixup_ea, &v12);
      add_dword(next_fixup_ea, v4);
    }
    next_fixup_ea = get_next_fixup_ea(next_fixup_ea);
  }
  while ( next_fixup_ea < v6 );
  if ( !v3 )
    goto LABEL_12;
  v8 = v3 - 1;
LABEL_11:
  for ( i = v8; ; i = v10 )
  {
    v10 = netnode_supnext(qword_132C8, i, 65);
LABEL_15:
    if ( v10 >= v6 )
      break;
    add_dword(v10, v4);
  }
  return 1;
}
