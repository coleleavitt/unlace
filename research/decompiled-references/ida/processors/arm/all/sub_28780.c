__int64 __fastcall sub_28780(__int64 a1, unsigned __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 dword; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  char *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int128 v20; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-1A8h]
  __int64 v22; // [rsp+38h] [rbp-1A0h]
  __int64 v23; // [rsp+40h] [rbp-198h]
  char v24; // [rsp+48h] [rbp-190h] BYREF
  __int64 v25; // [rsp+58h] [rbp-180h]
  char v26; // [rsp+188h] [rbp-50h] BYREF
  __int64 v27; // [rsp+190h] [rbp-48h]
  unsigned __int64 v28; // [rsp+198h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( get_bytes() != 8 )
    return 0;
  v7 = *(_QWORD *)(a4 + 16);
  if ( *(_DWORD *)(a1 + 212) )
  {
    if ( (unsigned __int64)(get_sreg(*(_QWORD *)(a4 + 16), 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v7 = *(_QWORD *)(a4 + 16);
      goto LABEL_3;
    }
    if ( v27 == 0xE12FFF1CE59FC000LL )
    {
      v18 = *(_QWORD *)(a4 + 16);
      v10 = 12;
      dword = (unsigned int)get_dword(v18 + 8);
    }
    else
    {
      if ( v27 != 0xE12FFF1CE28FC001LL )
        return 0;
      v9 = *(_QWORD *)(a4 + 16);
      v10 = 8;
      dword = v9 + 9;
    }
    if ( (dword & 1) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 32);
      v13 = dword & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_16;
    }
    return 0;
  }
LABEL_3:
  if ( v27 == 0xE51FF00446C04778LL )
  {
    v10 = 12;
    v13 = (unsigned int)get_dword(v7 + 8);
    v12 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( v27 == 0xE59FC00046C04778LL )
    {
      get_bytes();
      v7 = *(_QWORD *)(a4 + 16);
    }
    if ( (v7 & 3) != 0 )
      return 0;
    if ( (*(_QWORD *)(a4 + 24) & 0x200000000FFFFLL) != 0x29 )
      return 0;
    if ( *(_BYTE *)(a4 + 41) != 1 )
      return 0;
    if ( *(_WORD *)(a4 + 46) != 15 )
      return 0;
    v13 = v7 + 4;
    v21 = -1;
    v15 = &v24;
    v20 = -1;
    v22 = 0;
    v23 = 0;
    do
    {
      *(_WORD *)v15 = 0;
      v15 += 40;
      *((_WORD *)v15 - 19) = 0;
      *((_WORD *)v15 - 18) = 0;
      *((_DWORD *)v15 - 2) = 0;
      *((_WORD *)v15 - 17) = 0;
      *((_OWORD *)v15 - 2) = 0;
      *((_QWORD *)v15 - 2) = 0;
    }
    while ( v15 != &v26 );
    if ( !sub_28300(a1, (__int64)&v20, v7 + 4, 0, 1) )
      return 0;
    v16 = *(_QWORD *)(a4 + 16) + *(unsigned __int16 *)(a4 + 26);
    if ( (get_flags_ex(v16, 4) & 0x600) == 0 && (unsigned int)sub_28410(a1, v16) )
      create_align();
    v17 = v7 + 8;
    split_sreg_range();
    while ( (unsigned __int8)get_sreg_range() && v17 )
      del_sreg_range();
    if ( (_WORD)v22 == 3 )
    {
      v12 = *(_QWORD *)(a1 + 32);
      v19 = *(_QWORD *)(v12 + 16);
      v13 = v25 + 16 * v20;
      if ( v13 == v19 )
      {
        v10 = WORD1(v22) + 4LL;
        if ( v13 == -1 )
          return 0;
        v12 = *(_QWORD *)(a1 + 32);
      }
      else
      {
        if ( v13 == -1 )
          return 0;
        v13 &= v19;
        v10 = WORD1(v22) + 4LL;
      }
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 32);
      v10 = 4;
    }
  }
LABEL_16:
  v14 = *(_QWORD *)(v12 + 16) & v13;
  result = is_mapped();
  if ( !(_BYTE)result )
    return 0;
  if ( a2 )
    *a2 = v14;
  if ( a3 )
    *a3 = v10;
  return result;
}
