__int64 __fastcall sub_11E80(__int64 a1, int *a2, unsigned __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int v9; // r15d
  __int64 v10; // rcx
  int v11; // r14d
  const char *v12; // rdx
  char *v13; // rdi
  char *v14; // [rsp+0h] [rbp-1C8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-1C0h]
  __int128 v16; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-198h]
  __int64 v18; // [rsp+38h] [rbp-190h]
  __int64 v19; // [rsp+40h] [rbp-188h]
  _QWORD v20[5]; // [rsp+48h] [rbp-180h] BYREF
  __int64 v21; // [rsp+70h] [rbp-158h]
  unsigned __int64 v22; // [rsp+80h] [rbp-148h]
  char v23; // [rsp+90h] [rbp-138h]
  _QWORD v24[8]; // [rsp+188h] [rbp-40h] BYREF

  v24[0] = __readfsqword(0x28u);
  v4 = v20;
  v16 = -1;
  v17 = -1;
  v18 = 0;
  v19 = 0;
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
  while ( v4 != v24 );
  if ( (int)decode_insn(&v16, a3, v24, 0.0) <= 0 )
    return 0;
  if ( (v18 & 0x1800000000LL) != 0 )
  {
    if ( (BYTE4(v18) & 0x18) != 0x10 || BYTE1(v20[0]) != 1 )
      return 0;
    if ( HIWORD(v20[0]) == 13 )
    {
      if ( (v21 & 0xFFFF00000000FF00LL) != 0x1C000000000300LL || v23 != 13 )
        return 0;
      goto LABEL_36;
    }
    if ( HIWORD(v20[0]) != 31 )
      return 0;
    v6 = 0x1C000000000300LL;
    if ( (v21 & 0xFFFF00000000FF00LL) != 0x1C000000000300LL || v23 != 12 )
      return 0;
  }
  else
  {
    if ( BYTE1(v20[0]) != 1 )
      return 0;
    if ( (v21 & 0xFFFF00000000FF00LL) != 0x1C000000000400LL )
      return 0;
    if ( v23 )
      return 0;
    if ( (v22 & 3) != 0 )
      return 0;
    v6 = HIWORD(v20[0]);
    v11 = HIWORD(v20[0]);
    if ( HIWORD(v20[0]) != (v22 >> 2) + 13 )
      return 0;
    v9 = HIWORD(v20[0]);
    if ( HIWORD(v20[0]) != 31 )
    {
      if ( HIWORD(v20[0]) != 13 )
      {
        if ( (unsigned int)HIWORD(v20[0]) - 14 <= 0xC
          && (unsigned __int8)sub_11E80(a1, &v14, v17 + WORD1(v18))
          && v11 - 1 == (_DWORD)v14 )
        {
          v14 = nullptr;
          v15 = 0;
LABEL_28:
          sub_11D90((__int64 *)&v14, (__int64)"__ac_pop_%d", v9);
          goto LABEL_29;
        }
        return 0;
      }
LABEL_36:
      if ( (unsigned __int8)sub_11E80(a1, &v14, v17 + WORD1(v18)) && (_DWORD)v14 == 31 )
      {
        v14 = nullptr;
        v9 = 13;
        v15 = 0;
        goto LABEL_28;
      }
      return 0;
    }
  }
  if ( (int)decode_insn(&v16, v17 + WORD1(v18), v6, 0.0) <= 0
    || (_WORD)v18 != 17
    || (v20[0] & 0xFFFF00000000FF00LL) != 0x1F000000000400LL
    || v20[2] )
  {
    return 0;
  }
  v14 = nullptr;
  v15 = 0;
  v14 = (char *)qvector_reserve(&v14, 0, 15, 1);
  v9 = 31;
  *(_QWORD *)&v15 = 15;
  strcpy(v14, "__ac_pop_blink");
  v10 = 0x6B6E696C625F706FLL;
LABEL_29:
  v12 = needle;
  if ( (_QWORD)v15 )
    v12 = v14;
  sub_F720(a1, a3, v12, v10, v7, v8);
  v13 = v14;
  *a2 = v9;
  if ( v13 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v13);
  }
  return 1;
}

