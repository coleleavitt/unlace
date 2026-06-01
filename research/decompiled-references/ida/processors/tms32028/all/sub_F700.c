__int64 __fastcall sub_F700(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 *v4; // rax
  unsigned int (__fastcall *v5)(__int64, __int64, _UNKNOWN **); // rax

  *(_WORD *)(a1 + 248) = get_wide_byte();
  *(_WORD *)(a2 + 26) = 1;
  v2 = sub_12270(*(_QWORD *)(a2 + 16));
  v3 = *(unsigned __int8 *)(a1 + 249);
  if ( !v2 )
  {
    v4 = &qword_1EF00;
    while ( ((unsigned __int8)v3 & *(_BYTE *)v4) != *((_BYTE *)v4 + 1) )
    {
      v4 += 5;
      if ( v4 == &qword_1EFB0[3] )
        goto LABEL_5;
    }
    if ( ((unsigned int (__fastcall *)(__int64, __int64, __int64 *))v4[1])(a1, a2, v4 + 1) )
      goto LABEL_7;
    v3 = *(unsigned __int8 *)(a1 + 249);
  }
LABEL_5:
  v5 = (unsigned int (__fastcall *)(__int64, __int64, _UNKNOWN **))*(&off_25AE0 + 4 * v3);
  if ( v5 && v5(a1, a2, &off_25AE0 + 4 * (unsigned __int8)v3) )
  {
LABEL_7:
    getinf_flag();
    construct_macro();
    return *(unsigned __int16 *)(a2 + 26);
  }
  return 0;
}

