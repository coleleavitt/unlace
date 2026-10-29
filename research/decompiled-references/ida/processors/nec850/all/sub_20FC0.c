__int64 __fastcall sub_20FC0(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // rax
  __int16 v6; // ax
  __int64 v7; // r14
  int v9; // r15d
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // [rsp+8h] [rbp-1B0h]
  __int128 v20; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-198h]
  __int64 v22; // [rsp+28h] [rbp-190h]
  __int64 v23; // [rsp+30h] [rbp-188h]
  _BYTE v24[8]; // [rsp+38h] [rbp-180h] BYREF
  __int64 v25; // [rsp+40h] [rbp-178h]
  __int64 v26; // [rsp+48h] [rbp-170h]
  char v27; // [rsp+61h] [rbp-157h]
  __int64 v28; // [rsp+68h] [rbp-150h]
  unsigned __int64 v29; // [rsp+178h] [rbp-40h] BYREF

  v29 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 376);
  v21 = -1;
  v22 = 0;
  v3 = sub_1FBD0(a1, v2);
  v4 = v3 + v2;
  v5 = (unsigned __int64 *)v24;
  v23 = 0;
  v20 = -1;
  do
  {
    *(_WORD *)v5 = 0;
    v5 += 5;
    *((_WORD *)v5 - 19) = 0;
    *((_WORD *)v5 - 18) = 0;
    *((_DWORD *)v5 - 2) = 0;
    *((_WORD *)v5 - 17) = 0;
    *((_OWORD *)v5 - 2) = 0;
    *(v5 - 2) = 0;
  }
  while ( &v29 != v5 );
  if ( (int)decode_insn(&v20, v4, 0.0) <= 0 )
    return 0;
  v6 = v22;
  v7 = -1;
  if ( v3 && (_WORD)v22 == 57 )
  {
    v17 = WORD1(v22);
    v18 = v26 + 16 * v20;
    if ( (int)decode_insn(&v20, v18, 0.0) <= 0 )
      return 0;
    v7 = v4 + v17;
    v6 = v22;
    v4 = v18;
  }
  if ( v6 == 77 )
  {
    if ( v27 != 9 )
      return 0;
    if ( v24[1] != 5 )
      return 0;
    if ( v25 )
      return 0;
    v19 = v28;
    v9 = bitcountr_zero(v28);
    v14 = v9;
    if ( (unsigned int)(v9 - 20) > 9 )
      return 0;
    v15 = 0;
    do
    {
      v16 = v15;
      if ( v14 < 0x20 )
        v16 = v15 | (1LL << v14);
      ++v14;
      v15 = v16;
    }
    while ( v14 != 30 );
    if ( v19 != v16 )
      return 0;
    v4 += WORD1(v22);
    if ( (int)decode_insn(&v20, v4, 0.0) <= 0 )
      return 0;
    if ( (_WORD)v22 == 57 )
    {
      if ( v7 == -1 )
        v7 = v4 + WORD1(v22);
      v4 = v26 + 16 * v20;
      if ( (int)decode_insn(&v20, v4, 0.0) <= 0 )
        return 0;
    }
  }
  else
  {
    v9 = -1;
  }
  v10 = *(_QWORD *)(a1 + 384);
  if ( v4 >= v10 || v10 - v4 <= 3 || (unsigned int)get_dword(v4) != 4130368 )
    return 0;
  v11 = v4 + 4;
  v12 = *(__int64 **)a1;
  if ( v7 == -1 )
    v7 = v11;
  v13 = v3 == 0 ? 50 : 52;
  if ( v9 == -1 )
    sub_200A0(v12, (__int64)"___ghsld%clp", v13);
  else
    sub_200A0(v12, (__int64)"___ghsld%cr%u", v13, v9);
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v7;
  return 1;
}

