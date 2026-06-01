__int64 __fastcall sub_13440(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // r15
  __int64 v17; // rsi
  __int64 v18; // r13
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 dword; // r12
  __int128 v26; // [rsp+10h] [rbp-1A8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-198h]
  __int64 v28; // [rsp+28h] [rbp-190h]
  __int64 v29; // [rsp+30h] [rbp-188h]
  char v30; // [rsp+38h] [rbp-180h] BYREF
  char v31; // [rsp+39h] [rbp-17Fh]
  __int16 v32; // [rsp+3Eh] [rbp-17Ah]
  __int64 v33; // [rsp+60h] [rbp-158h]
  __int64 v34; // [rsp+68h] [rbp-150h]
  __int64 v35; // [rsp+70h] [rbp-148h]
  _QWORD v36[8]; // [rsp+178h] [rbp-40h] BYREF

  v36[0] = __readfsqword(0x28u);
  *a3 = -1;
  *a4 = -1;
  v6 = *a2;
  if ( a2[1] - *a2 > 0xCu )
    return 0;
  v27 = -1;
  v11 = &v30;
  v28 = 0;
  v29 = 0;
  v26 = -1;
  do
  {
    *(_WORD *)v11 = 0;
    v11 += 40;
    *((_WORD *)v11 - 19) = 0;
    *((_WORD *)v11 - 18) = 0;
    *((_DWORD *)v11 - 2) = 0;
    *((_WORD *)v11 - 17) = 0;
    *((_OWORD *)v11 - 2) = 0;
    *((_QWORD *)v11 - 2) = 0;
  }
  while ( v36 != (_QWORD *)v11 );
  if ( (int)decode_insn(&v26, v6, v36, 0, 0, a6, 0.0) <= 0 || (_WORD)v28 != 94 )
    return 0;
  v16 = v32;
  v17 = v6 + WORD1(v28);
  if ( (v33 & 0xFFFF00000000FF00LL) != 0x400 || (v18 = v35) == 0 )
  {
    v19 = v34;
    if ( (int)decode_insn(&v26, v17, v12, v13, v14, v15, 0.0) <= 0
      || (_WORD)v28 != 5
      || v32 != v16
      || BYTE1(v33) != 4
      || HIWORD(v33) != v16 )
    {
      return 0;
    }
    v18 = (unsigned int)(v35 + (v19 << 12));
    v17 += WORD1(v28);
  }
  if ( (int)decode_insn(&v26, v17, v12, v13, v14, v15, 0.0) <= 0 )
    return 0;
  if ( (_WORD)v28 == 97 && v31 == 1 && v32 == v16 )
  {
    if ( v18 != -1 )
    {
      *a4 = v18;
      dword = (unsigned int)get_dword(v18);
      if ( (unsigned __int64)(dword - 1) <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( (unsigned __int8)is_mapped(dword) )
          *a3 = dword;
      }
    }
    goto LABEL_22;
  }
  if ( a2[1] - *a2 != 4
    || (int)decode_insn(&v26, *a2, v20, v21, v22, v23, 0.0) <= 0
    || (_WORD)v28 != 97
    || v31 != 1
    || v32 == 30 )
  {
    return 0;
  }
LABEL_22:
  v24 = a2[2];
  if ( (v24 & 0x80u) == 0LL )
  {
    LOBYTE(v24) = v24 | 0x80;
    a2[2] = v24;
    update_func(a2);
  }
  return 1;
}

