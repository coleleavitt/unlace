__int64 __fastcall sub_20B80(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 *v9; // rbp
  int v10; // r12d
  int v11; // ebx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbp
  __int64 *v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // [rsp+10h] [rbp-1C8h]
  int v21; // [rsp+1Ch] [rbp-1BCh]
  __int64 v22; // [rsp+20h] [rbp-1B8h] BYREF
  int v23; // [rsp+28h] [rbp-1B0h]
  char v24; // [rsp+2Ch] [rbp-1ACh] BYREF
  __int128 v25; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v26; // [rsp+40h] [rbp-198h]
  __int64 v27; // [rsp+48h] [rbp-190h]
  __int64 v28; // [rsp+50h] [rbp-188h]
  _BYTE v29[8]; // [rsp+58h] [rbp-180h] BYREF
  __int64 v30; // [rsp+60h] [rbp-178h]
  __int64 v31; // [rsp+68h] [rbp-170h]
  char v32; // [rsp+81h] [rbp-157h]
  __int16 v33; // [rsp+86h] [rbp-152h]
  char v34; // [rsp+A9h] [rbp-12Fh]
  unsigned __int64 v35; // [rsp+198h] [rbp-40h] BYREF

  v35 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 38 )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 5 )
    return 0;
  v4 = *(_QWORD *)(a1 + 64);
  if ( v4 > 9 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 1 )
    return 0;
  if ( *(_WORD *)(a1 + 102) != 12 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 42);
  v26 = -1;
  v6 = (unsigned __int64 *)v29;
  v27 = 0;
  v7 = *(_QWORD *)(a1 + 376) + v5;
  v28 = 0;
  v8 = v7;
  v25 = -1;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( &v35 != v6 );
  if ( (int)decode_insn(&v25, v7, 0.0) > 0 )
  {
    v20 = -1;
    if ( (_WORD)v27 == 57 )
    {
      v20 = v8 + WORD1(v27);
      v8 = v31 + 16 * v25;
    }
    v9 = &v22;
    v23 = 29;
    v10 = 29 - v4;
    v22 = 0x1A00000016LL;
    v21 = 29 - v4;
    do
    {
      v11 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 >= v10 )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(a1 + 384);
          if ( v8 >= v19
            || v19 - v8 <= 3
            || ((unsigned __int16)((_WORD)v10 << 11) | (-262144 * v10 + 7602176) | 0x10723) != (unsigned int)get_dword(v8) )
          {
            return 0;
          }
          ++v10;
          v8 += 4LL;
          if ( v11 < v10 )
          {
            if ( (int)decode_insn(&v25, v8, 0.0) <= 0 )
              return 0;
            if ( v11 == 29 )
              goto LABEL_16;
            if ( (_WORD)v27 != 43 )
              return 0;
            if ( v20 == -1 )
              v20 = v8 + WORD1(v27);
            v8 = v31 + 16 * v25;
            break;
          }
        }
      }
      v9 = (__int64 *)((char *)v9 + 4);
    }
    while ( &v24 != (char *)v9 );
LABEL_16:
    v12 = *(_QWORD *)(a1 + 384);
    if ( v8 >= v12 )
      return 0;
    if ( v12 - v8 == 1 )
      return 0;
    if ( (unsigned __int16)get_word(v8) != 25282 )
      return 0;
    v13 = *(_QWORD *)(a1 + 384);
    v14 = v8 + 2;
    if ( v8 + 2 >= v13 )
      return 0;
    if ( v13 - v14 == 1 )
      return 0;
    if ( (unsigned __int16)get_word(v14) != 6604 )
      return 0;
    v15 = *(_QWORD *)(a1 + 384);
    v16 = v8 + 4;
    if ( v8 + 4 >= v15 )
      return 0;
    if ( v15 - v16 <= 3 )
      return 0;
    if ( (unsigned int)get_dword(v16) != 392995 )
      return 0;
    if ( (int)decode_insn(&v25, v8 + 8, 0.0) <= 0 )
      return 0;
    if ( (_WORD)v27 != 71 )
      return 0;
    if ( v29[1] != 5 )
      return 0;
    if ( v30 != 8 )
      return 0;
    if ( v32 != 1 )
      return 0;
    if ( v33 != 3 )
      return 0;
    if ( v34 )
      return 0;
    v17 = v8 + 8 + WORD1(v27);
    v2 = sub_1F980(*(_QWORD *)(a1 + 384), v17, 0x7Fu);
    if ( !(_BYTE)v2 )
      return 0;
    v18 = *(__int64 **)a1;
    if ( v20 == -1 )
    {
      v20 = v17 + 2;
      sub_200A0(v18, (__int64)"__ghsload%u", v21);
      if ( v17 == -3 )
      {
        if ( !under_debugger )
          interr(10533);
        BUG();
      }
    }
    else
    {
      sub_200A0(v18, (__int64)"__ghsload%u", v21);
    }
    **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 376);
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v20;
  }
  else
  {
    return 0;
  }
  return v2;
}

