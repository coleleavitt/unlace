unsigned __int64 __fastcall sub_1FCC0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 i; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 *v8; // rax
  __int128 v10; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v11; // [rsp+20h] [rbp-198h]
  __int64 v12; // [rsp+28h] [rbp-190h]
  __int64 v13; // [rsp+30h] [rbp-188h]
  char v14; // [rsp+38h] [rbp-180h] BYREF
  char v15; // [rsp+39h] [rbp-17Fh]
  __int16 v16; // [rsp+3Eh] [rbp-17Ah]
  __int64 v17; // [rsp+40h] [rbp-178h]
  char v18; // [rsp+61h] [rbp-157h]
  __int16 v19; // [rsp+66h] [rbp-152h]
  char v20; // [rsp+6Bh] [rbp-14Dh]
  char v21; // [rsp+89h] [rbp-12Fh]
  __int16 v22; // [rsp+8Eh] [rbp-12Ah]
  unsigned __int64 v23; // [rsp+178h] [rbp-40h] BYREF

  v23 = __readfsqword(0x28u);
  v2 = getseg(a2);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8) - a2;
    if ( v3 > 0x81 )
    {
      v4 = 64;
    }
    else
    {
      v4 = v3 >> 1;
      if ( !v4 )
        return v23 - __readfsqword(0x28u);
    }
    v5 = a2;
    for ( i = 0; i < v4; ++i )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (a2 + (unsigned __int16)get_word(v5));
      if ( v5 >= v7 )
        break;
      v8 = (unsigned __int64 *)&v14;
      v11 = -1;
      v12 = 0;
      v13 = 0;
      v10 = -1;
      do
      {
        *(_WORD *)v8 = 0;
        v8 += 5;
        *((_WORD *)v8 - 19) = 0;
        *((_WORD *)v8 - 18) = 0;
        *((_DWORD *)v8 - 2) = 0;
        *((_WORD *)v8 - 17) = 0;
        *((_OWORD *)v8 - 2) = 0;
        *(v8 - 2) = 0;
      }
      while ( &v23 != v8 );
      if ( (int)decode_insn(&v10, v7, 0.0) <= 0 )
        break;
      if ( (_WORD)v12 == 77 )
      {
        if ( v18 != 9 )
          goto LABEL_42;
        if ( (v20 & 0x20) == 0 )
          return v23 - __readfsqword(0x28u);
      }
      else if ( (unsigned __int16)v12 > 0x4Du )
      {
        if ( (_WORD)v12 == 78 )
        {
          if ( v21 != 1 || v22 != 31 )
            return v23 - __readfsqword(0x28u);
          if ( v18 != 9 )
LABEL_42:
            sub_1F960();
          if ( v20 >= 0 )
            return v23 - __readfsqword(0x28u);
        }
        else if ( (unsigned __int16)(v12 - 84) > 1u )
        {
          return v23 - __readfsqword(0x28u);
        }
      }
      else if ( (_WORD)v12 == 9 )
      {
        if ( v15 != 1 || v16 != 48 || v18 != 1 || v19 != 31 )
          return v23 - __readfsqword(0x28u);
      }
      else if ( (unsigned __int16)(v12 - 70) > 1u
             || v15 != 5
             || v18 != 1
             || v19 != 3
             || v21 && (v21 != 1 || v22 != 3)
             || v17 >= 0 )
      {
        return v23 - __readfsqword(0x28u);
      }
      create_data(v5, 0x10000000, 2, -1);
      auto_mark_range(v7, v7 + 1, 20);
      auto_mark_range(v7, v7 + 1, 30);
      op_offset(v5, 0, 1, -1, a2, 0);
      if ( v7 < a2 + 2 * v4 )
        v4 = (v7 - a2) >> 1;
      v5 += 2LL;
    }
  }
  return v23 - __readfsqword(0x28u);
}
