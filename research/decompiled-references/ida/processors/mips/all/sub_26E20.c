__int64 __fastcall sub_26E20(__int64 a1, __m128i *a2, __int64 a3, double a4)
{
  bool v4; // zf
  char v5; // al
  unsigned int v6; // edx
  __int16 v7; // ax
  unsigned __int8 v8; // al
  char v9; // al
  __int64 v11; // rbx
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 260) == 2;
  v12[3] = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 616) = a3;
  if ( v4 )
  {
    v5 = sub_4BDF0(a1, a2);
  }
  else if ( get_sreg(a2[1].m128i_i64[0], 67) )
  {
    if ( *(_DWORD *)(a1 + 260) == 1 )
    {
      v5 = sub_42F80(a1, a2);
    }
    else
    {
      v5 = sub_236C0(a1, (__int64)a2, 0xFFFF);
      a2[2].m128i_i8[1] |= 4u;
    }
  }
  else
  {
    v5 = sub_1F3B0(a1, (__int64)a2, a4);
  }
  v6 = 0;
  if ( !v5 )
    return v6;
  if ( (unsigned __int8)getinf_flag(11, 4) || (v7 = *(_WORD *)(a1 + 188), (v7 & 4) != 0) )
  {
    sub_22E60(a1, a2);
    if ( (*(_WORD *)(a1 + 188) & 0x40) == 0 )
      goto LABEL_9;
LABEL_16:
    sub_1C0A0((_QWORD *)a1, (unsigned __int64)a2);
    goto LABEL_9;
  }
  if ( (v7 & 0x40) != 0 )
    goto LABEL_16;
LABEL_9:
  v12[1] = 0;
  v12[0] = off_69CD8;
  v12[2] = a1;
  v8 = getinf_flag(11, 4);
  ((void (__fastcall *)(_QWORD *, __m128i *, _QWORD))construct_macro)(v12, a2, v8);
  if ( (*(_BYTE *)(a1 + 188) & 0x40) != 0 )
    sub_1C0A0((_QWORD *)a1, (unsigned __int64)a2);
  if ( !*(_QWORD *)(a1 + 616) )
    return a2[1].m128i_u16[5];
  v9 = getinf_flag(3, 32);
  v6 = a2[1].m128i_u16[5];
  if ( v9 && (_WORD)v6 )
  {
    v11 = *(_QWORD *)(a1 + 616);
    *(_QWORD *)(v11 + 16) = get_sreg(a2[1].m128i_i64[0], 67) == 0 ? 4LL : 2LL;
    return a2[1].m128i_u16[5];
  }
  return v6;
}

