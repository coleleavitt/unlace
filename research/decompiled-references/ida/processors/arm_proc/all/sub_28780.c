__int64 __fastcall sub_28780(__int64 a1, unsigned __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 dword; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r14
  char *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-1A8h]
  __int64 v20; // [rsp+38h] [rbp-1A0h]
  __int64 v21; // [rsp+40h] [rbp-198h]
  char v22; // [rsp+48h] [rbp-190h] BYREF
  __int64 v23; // [rsp+58h] [rbp-180h]
  char v24; // [rsp+188h] [rbp-50h] BYREF
  __int64 v25; // [rsp+190h] [rbp-48h]
  unsigned __int64 v26; // [rsp+198h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( get_bytes() != 8 )
    return 0;
  v6 = *(_QWORD *)(a4 + 16);
  if ( *(_DWORD *)(a1 + 212) )
  {
    if ( (unsigned __int64)(get_sreg() - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v6 = *(_QWORD *)(a4 + 16);
      goto LABEL_3;
    }
    if ( v25 == 0xE12FFF1CE59FC000LL )
    {
      v9 = 12;
      dword = (unsigned int)get_dword();
    }
    else
    {
      if ( v25 != 0xE12FFF1CE28FC001LL )
        return 0;
      v8 = *(_QWORD *)(a4 + 16);
      v9 = 8;
      dword = v8 + 9;
    }
    if ( (dword & 1) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v12 = dword & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_16;
    }
    return 0;
  }
LABEL_3:
  if ( v25 == 0xE51FF00446C04778LL )
  {
    v9 = 12;
    v12 = (unsigned int)get_dword();
    v11 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( v25 == 0xE59FC00046C04778LL )
    {
      get_bytes();
      v6 = *(_QWORD *)(a4 + 16);
    }
    if ( (v6 & 3) != 0 )
      return 0;
    if ( (*(_QWORD *)(a4 + 24) & 0x200000000FFFFLL) != 0x29 )
      return 0;
    if ( *(_BYTE *)(a4 + 41) != 1 )
      return 0;
    if ( *(_WORD *)(a4 + 46) != 15 )
      return 0;
    v12 = v6 + 4;
    v19 = -1;
    v14 = &v22;
    v18 = -1;
    v20 = 0;
    v21 = 0;
    do
    {
      *(_WORD *)v14 = 0;
      v14 += 40;
      *((_WORD *)v14 - 19) = 0;
      *((_WORD *)v14 - 18) = 0;
      *((_DWORD *)v14 - 2) = 0;
      *((_WORD *)v14 - 17) = 0;
      *((_OWORD *)v14 - 2) = 0;
      *((_QWORD *)v14 - 2) = 0;
    }
    while ( v14 != &v24 );
    if ( !sub_28300(a1, (__int64)&v18, v6 + 4, 0, 1) )
      return 0;
    v15 = *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26);
    if ( (get_flags_ex() & 0x600) == 0 && (unsigned int)sub_28410(a1, v15) )
      create_align();
    v16 = v6 + 8;
    split_sreg_range();
    while ( (unsigned __int8)get_sreg_range() && v16 )
      del_sreg_range();
    if ( (_WORD)v20 == 3 )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v17 = *(_QWORD *)(v11 + 16);
      v12 = v23 + 16 * v18;
      if ( v12 == v17 )
      {
        v9 = WORD1(v20) + 4LL;
        if ( v12 == -1 )
          return 0;
        v11 = *(_QWORD *)(a1 + 32);
      }
      else
      {
        if ( v12 == -1 )
          return 0;
        v12 &= v17;
        v9 = WORD1(v20) + 4LL;
      }
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 32);
      v9 = 4;
    }
  }
LABEL_16:
  v13 = *(_QWORD *)(v11 + 16) & v12;
  result = is_mapped();
  if ( !(_BYTE)result )
    return 0;
  if ( a2 )
    *a2 = v13;
  if ( a3 )
    *a3 = v9;
  return result;
}

