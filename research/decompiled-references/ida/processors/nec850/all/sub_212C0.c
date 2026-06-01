__int64 __fastcall sub_212C0(__int64 a1)
{
  __int64 v3; // rbp
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // r13d
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char v11; // al
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned int v14; // ecx
  __int64 v15; // rdx
  __int16 v16; // ax
  unsigned __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r14
  __int128 v21; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-198h]
  __int64 v23; // [rsp+18h] [rbp-190h]
  __int64 v24; // [rsp+20h] [rbp-188h]
  char v25; // [rsp+28h] [rbp-180h] BYREF
  char v26; // [rsp+29h] [rbp-17Fh]
  __int16 v27; // [rsp+2Eh] [rbp-17Ah]
  __int64 v28; // [rsp+30h] [rbp-178h]
  __int64 v29; // [rsp+38h] [rbp-170h]
  char v30; // [rsp+51h] [rbp-157h]
  __int16 v31; // [rsp+56h] [rbp-152h]
  __int64 v32; // [rsp+58h] [rbp-150h]
  unsigned __int64 v33; // [rsp+168h] [rbp-40h] BYREF

  v33 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 85 )
    return 0;
  if ( *(_BYTE *)(a1 + 57) != 9 )
    return 0;
  if ( *(_QWORD *)(a1 + 64) != 0x80000000LL )
    return 0;
  if ( *(_BYTE *)(a1 + 97) != 5 )
    return 0;
  if ( *(_QWORD *)(a1 + 104) )
    return 0;
  v3 = *(unsigned __int16 *)(a1 + 42);
  v22 = -1;
  v4 = (unsigned __int64 *)&v25;
  v23 = 0;
  v5 = *(_QWORD *)(a1 + 376) + v3;
  v24 = 0;
  v21 = -1;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 5;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *(v4 - 2) = 0;
  }
  while ( &v33 != v4 );
  if ( (int)decode_insn(&v21, v5, 0.0) <= 0 )
    return 0;
  if ( (_WORD)v23 == 85 )
  {
    if ( v26 != 9 )
      return 0;
    if ( v30 != 5 )
      return 0;
    v12 = v32;
    if ( v32 )
      return 0;
    v13 = v28;
    v6 = bitcountr_zero(v28);
    v14 = v6;
    if ( (unsigned int)(v6 - 20) > 9 )
      return 0;
    do
    {
      v15 = v12;
      if ( v14 < 0x20 )
        v15 = v12 | (1LL << v14);
      ++v14;
      v12 = v15;
    }
    while ( v14 != 30 );
    if ( v13 != v15 )
      return 0;
    v5 += WORD1(v23);
    if ( (int)decode_insn(&v21, v5, 0.0) <= 0 )
      return 0;
    v16 = v23;
    if ( (_WORD)v23 != 57 )
    {
      if ( (_WORD)v23 != 43 )
      {
        v17 = v5;
        v7 = -1;
        goto LABEL_39;
      }
      if ( v26 != 7 )
        return 0;
      goto LABEL_51;
    }
  }
  else
  {
    v6 = -1;
    if ( (_WORD)v23 != 57 )
    {
      if ( (_WORD)v23 != 43 )
      {
        v7 = -1;
        if ( (_WORD)v23 != 82 )
          goto LABEL_14;
        v19 = v5 + WORD1(v23);
        goto LABEL_64;
      }
      v7 = -1;
      if ( v26 != 7 )
        goto LABEL_14;
      goto LABEL_51;
    }
  }
  v20 = WORD1(v23);
  v17 = v29 + 16 * v21;
  if ( (int)decode_insn(&v21, v17, 0.0) <= 0 )
    return 0;
  v16 = v23;
  v7 = v5 + v20;
  if ( (_WORD)v23 == 43 )
  {
    if ( v26 != 7 )
    {
      v5 = v17;
      if ( v6 == -1 )
        goto LABEL_14;
      return 0;
    }
    if ( v7 != -1 )
      goto LABEL_52;
    v5 = v17;
LABEL_51:
    v7 = v5 + WORD1(v23);
LABEL_52:
    v17 = v29 + 16 * v21;
    if ( (int)decode_insn(&v21, v17, 0.0) > 0 )
    {
      v16 = v23;
      goto LABEL_54;
    }
    return 0;
  }
LABEL_54:
  if ( v6 != -1 )
  {
LABEL_39:
    if ( v16 != 9 )
      return 0;
    if ( v26 != 1 )
      return 0;
    if ( v27 != 48 )
      return 0;
    if ( v30 != 1 )
      return 0;
    if ( v31 != 29 )
      return 0;
    v17 += WORD1(v23);
    if ( (int)decode_insn(&v21, v17, 0.0) <= 0 )
      return 0;
    v16 = v23;
    if ( (_WORD)v23 == 82 )
    {
      v11 = 52;
      if ( v7 == -1 )
        v7 = v17 + WORD1(v23);
      goto LABEL_25;
    }
    goto LABEL_46;
  }
  if ( v16 == 82 )
  {
    v18 = 52;
    v19 = v17 + WORD1(v23);
    if ( v7 != -1 )
    {
LABEL_57:
      sub_200A0(*(__int64 **)a1, (__int64)"___ghssv%clp", v18);
      goto LABEL_26;
    }
LABEL_64:
    v7 = v19;
    v18 = 52;
    goto LABEL_57;
  }
LABEL_46:
  v5 = v17;
  if ( v16 == 57 )
  {
    if ( v7 == -1 )
      v7 = v17 + WORD1(v23);
    v5 = v29 + 16 * v21;
  }
LABEL_14:
  v8 = *(_QWORD *)(a1 + 384);
  if ( v5 >= v8 )
    return 0;
  if ( v8 - v5 <= 3 )
    return 0;
  if ( (unsigned int)get_dword(v5) != 4216816 )
    return 0;
  v9 = *(_QWORD *)(a1 + 384);
  v10 = v5 + 4;
  if ( v5 + 4 >= v9
    || v9 - v10 <= 3
    || (unsigned int)get_dword(v10) != -172054
    || !(unsigned __int8)sub_1F980(*(_QWORD *)(a1 + 384), v5 + 8, 0x19ABu)
    || !(unsigned __int8)sub_1F980(*(_QWORD *)(a1 + 384), v5 + 10, 0x6Au) )
  {
    return 0;
  }
  if ( v7 == -1 )
    v7 = v5 + 12;
  v11 = 53;
  if ( v6 == -1 )
  {
    v18 = 53;
    goto LABEL_57;
  }
LABEL_25:
  sub_200A0(*(__int64 **)a1, (__int64)"___ghssv%cr%u", (unsigned int)v11, v6);
LABEL_26:
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v7;
  return 1;
}

