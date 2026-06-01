__int64 __fastcall sub_20680(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v4; // rbp
  unsigned __int64 *v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  unsigned int dword; // eax
  int v11; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // esi
  int v15; // r13d
  int v16; // r9d
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 *v21; // rdi
  const char *v22; // rcx
  const char *v23; // rdx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // [rsp+0h] [rbp-1D8h]
  unsigned __int64 v28; // [rsp+8h] [rbp-1D0h]
  int v29; // [rsp+8h] [rbp-1D0h]
  int v30; // [rsp+8h] [rbp-1D0h]
  int v31; // [rsp+1Ch] [rbp-1BCh]
  __int64 v32; // [rsp+20h] [rbp-1B8h]
  int v33; // [rsp+28h] [rbp-1B0h]
  __int128 v34; // [rsp+30h] [rbp-1A8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-198h]
  __int64 v36; // [rsp+48h] [rbp-190h]
  __int64 v37; // [rsp+50h] [rbp-188h]
  char v38; // [rsp+58h] [rbp-180h] BYREF
  char v39; // [rsp+59h] [rbp-17Fh]
  __int16 v40; // [rsp+5Eh] [rbp-17Ah]
  unsigned __int64 v41; // [rsp+60h] [rbp-178h]
  __int64 v42; // [rsp+68h] [rbp-170h]
  char v43; // [rsp+81h] [rbp-157h]
  __int16 v44; // [rsp+86h] [rbp-152h]
  char v45; // [rsp+A9h] [rbp-12Fh]
  unsigned __int64 v46; // [rsp+198h] [rbp-40h] BYREF

  v46 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 38 )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  if ( *(_WORD *)(a1 + 62) != 3 )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 1 )
    return 0;
  if ( *(_WORD *)(a1 + 102) != 12 )
    return 0;
  v4 = *(unsigned __int16 *)(a1 + 42);
  v35 = -1;
  v5 = (unsigned __int64 *)&v38;
  v36 = 0;
  v6 = *(_QWORD *)(a1 + 376) + v4;
  v37 = 0;
  v34 = -1;
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
  while ( &v46 != v5 );
  if ( (int)decode_insn(&v34, v6, 0.0) <= 0 )
    return 0;
  if ( (_WORD)v36 != 71 )
    return 0;
  if ( v39 != 5 )
    return 0;
  v28 = v41;
  if ( (v41 & 3) != 0 )
    return 0;
  if ( v41 <= 0xFFFFFFFFFFFFFFEBLL )
    return 0;
  if ( v43 != 1 )
    return 0;
  if ( v44 != 3 )
    return 0;
  if ( v45 )
    return 0;
  v7 = WORD1(v36) + v6;
  if ( (int)decode_insn(&v34, v7, 0.0) <= 0 )
    return 0;
  v8 = -1;
  if ( (_WORD)v36 == 57 )
  {
    v8 = v7 + WORD1(v36);
    v7 = v42 + 16 * v34;
  }
  v9 = *(_QWORD *)(a1 + 384);
  if ( v7 >= v9 )
    return 0;
  if ( v9 - v7 <= 3 )
    return 0;
  dword = get_dword(v7);
  v11 = (unsigned __int16)dword >> 11;
  v27 = (0x400FFFFFuLL >> ((dword >> 11) & 0x1F)) & 1;
  if ( ((0x400FFFFFuLL >> ((dword >> 11) & 0x1F)) & 1) != 0 )
    return 0;
  v33 = 29;
  v32 = 0x1A00000016LL;
  v12 = (unsigned __int64)-(__int64)v28 >> 2;
  if ( v11 != 31 )
  {
    v13 = 0;
    while ( 1 )
    {
      v13 += 4;
      v14 = *(int *)((char *)&v31 + v13);
      if ( v14 >= v11 )
        break;
      if ( v13 == 12 )
        goto LABEL_28;
    }
    if ( v11 + (_DWORD)v12 - v14 == 2 )
    {
LABEL_28:
      v15 = v11;
      goto LABEL_29;
    }
    return 0;
  }
  v15 = 31;
  if ( v12 != 1 )
    return 0;
  do
  {
LABEL_29:
    v16 = *(_DWORD *)((char *)&v32 + v27);
    if ( v15 <= v16 )
    {
      v29 = v16 << 18;
      while ( 1 )
      {
        v24 = *(_QWORD *)(a1 + 384);
        v31 = v16;
        if ( v7 >= v24
          || v24 - v7 <= 3
          || ((unsigned __int16)((_WORD)v15 << 11) | (v29 - (v15 << 18)) | 0x10763) != (unsigned int)get_dword(v7) )
        {
          return 0;
        }
        v16 = v31;
        ++v15;
        v7 += 4LL;
        if ( v31 < v15 )
        {
          v30 = v31;
          if ( (int)decode_insn(&v34, v7, 0.0) <= 0 )
            return 0;
          if ( v30 == 29 )
            goto LABEL_31;
          v25 = -12;
          if ( v30 == 22 )
            v25 = -16;
          if ( (_WORD)v36 == 71 && v39 == 5 && v41 == v25 && v43 == 1 && v44 == 3 && !v45 )
          {
            v26 = WORD1(v36) + v7;
            if ( (int)decode_insn(&v34, v26, 0.0) > 0 && (_WORD)v36 == 43 )
            {
              if ( v8 == -1 )
                v8 = v26 + WORD1(v36);
              v7 = v42 + 16 * v34;
              break;
            }
          }
          return 0;
        }
      }
    }
    v27 += 4LL;
  }
  while ( v27 != 12 );
LABEL_31:
  if ( v11 != 31 )
  {
    if ( (_WORD)v36 != 38 || v39 != 1 || v40 != 10 || v43 != 1 || v44 != 29 )
      return 0;
    v7 += WORD1(v36);
  }
  v17 = *(_QWORD *)(a1 + 384);
  if ( v7 >= v17 )
    return 0;
  if ( v17 - v7 <= 3 )
    return 0;
  if ( (unsigned int)get_dword(v7) != -131220 )
    return 0;
  v18 = sub_1FA50(a1, v7 + 4);
  v19 = v18 + v7 + 4;
  v20 = v18;
  v2 = sub_1F980(*(_QWORD *)(a1 + 384), v19, 0x6Au);
  if ( !(_BYTE)v2 )
    return 0;
  if ( v8 == -1 )
    v8 = v19 + 2;
  v21 = *(__int64 **)a1;
  if ( v11 == 31 )
  {
    v23 = "a";
    if ( v20 )
      v23 = "";
    sub_200A0(v21, (__int64)"__ghssavelp%s", v23);
  }
  else
  {
    v22 = "a";
    if ( v20 )
      v22 = "";
    sub_200A0(v21, (__int64)"__ghssave%u%s", v11, v22);
  }
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v8;
  return v2;
}

