__int64 __fastcall sub_2CE00(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // r9
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int128 v15; // [rsp+0h] [rbp-198h] BYREF
  __int64 v16; // [rsp+10h] [rbp-188h]
  __int64 v17; // [rsp+18h] [rbp-180h]
  __int64 v18; // [rsp+20h] [rbp-178h]
  char v19; // [rsp+28h] [rbp-170h] BYREF
  __int64 v20; // [rsp+38h] [rbp-160h]
  _QWORD v21[6]; // [rsp+168h] [rbp-30h] BYREF

  v4 = *a2;
  v21[0] = __readfsqword(0x28u);
  v6 = sub_2CCD0(a1, v4);
  if ( v6 != -1 )
    goto LABEL_2;
  v16 = -1;
  v9 = &v19;
  v17 = 0;
  v18 = 0;
  v15 = -1;
  do
  {
    *(_WORD *)v9 = 0;
    v9 += 40;
    *((_WORD *)v9 - 19) = 0;
    *((_WORD *)v9 - 18) = 0;
    *((_DWORD *)v9 - 2) = 0;
    *((_WORD *)v9 - 17) = 0;
    *((_OWORD *)v9 - 2) = 0;
    *((_QWORD *)v9 - 2) = 0;
  }
  while ( v21 != (_QWORD *)v9 );
  if ( !(unsigned int)decode_insn(&v15, *a2, v21, 0, 0, v7, 0.0) || (_WORD)v17 != 115 )
    return 0;
  v13 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(v13 + 16);
  v14 = v20 + 16 * v15;
  if ( v14 != v6 )
  {
    v6 &= v14;
    if ( v14 == -1 )
      v6 = -1;
  }
  if ( (int)decode_insn(&v15, v16 + WORD1(v17), v13, v10, v11, v12, 0.0) <= 0 || (_WORD)v17 != 194 )
    return 0;
  if ( v16 + WORD1(v17) == a2[1] )
  {
LABEL_2:
    *a3 = v6;
    return 1;
  }
  return 0;
}

