__int64 __fastcall sub_20340(__int64 a1)
{
  __int16 v3; // ax
  int v4; // r12d
  unsigned __int64 i; // rbp
  unsigned int v6; // r13d
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rdi
  int v13; // r12d
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int dword; // eax
  int v17; // edx
  int v18; // ecx
  __int128 v19; // [rsp+0h] [rbp-198h] BYREF
  __int64 v20; // [rsp+10h] [rbp-188h]
  __int64 v21; // [rsp+18h] [rbp-180h]
  __int64 v22; // [rsp+20h] [rbp-178h]
  _BYTE v23[8]; // [rsp+28h] [rbp-170h] BYREF
  __int64 v24; // [rsp+30h] [rbp-168h]
  char v25; // [rsp+51h] [rbp-147h]
  __int16 v26; // [rsp+56h] [rbp-142h]
  char v27; // [rsp+79h] [rbp-11Fh]
  unsigned __int64 v28; // [rsp+168h] [rbp-30h] BYREF

  v28 = __readfsqword(0x28u);
  if ( *(_WORD *)(a1 + 40) != 42
    || *(_BYTE *)(a1 + 57) != 4
    || *(_QWORD *)(a1 + 72)
    || *(_WORD *)(a1 + 62) != 3
    || *(_BYTE *)(a1 + 97) != 1 )
  {
    return 0;
  }
  v3 = *(_WORD *)(a1 + 102);
  if ( v3 == 29 )
  {
    v4 = 1;
    for ( i = *(_QWORD *)(a1 + 376) + *(unsigned __int16 *)(a1 + 42); ; i += 4LL )
    {
      v15 = *(_QWORD *)(a1 + 384);
      if ( i >= v15 || v15 - i <= 3 )
        break;
      dword = get_dword(i);
      if ( v4 == 10 )
      {
        v17 = 4096;
      }
      else
      {
        if ( v4 == 11 )
        {
          v18 = 2883584;
LABEL_34:
          v6 = 29;
          if ( (v18 | 0x1FF23) == dword )
          {
            ++v4;
            i += 4LL;
            v6 = 31;
          }
          goto LABEL_10;
        }
        v17 = -2048 * v4 + 59392;
      }
      v18 = v4 << 18;
      if ( ((v4 << 18) | v17 | 0x10723) != dword )
        goto LABEL_34;
      ++v4;
    }
    return 0;
  }
  if ( v3 != 31 )
    return 0;
  v4 = 1;
  i = *(_QWORD *)(a1 + 376) + *(unsigned __int16 *)(a1 + 42);
  v6 = 31;
LABEL_10:
  v20 = -1;
  v7 = (unsigned __int64 *)v23;
  v21 = 0;
  v22 = 0;
  v19 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 5;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *(v7 - 2) = 0;
  }
  while ( &v28 != v7 );
  if ( (int)decode_insn(&v19, i, 0.0) <= 0 )
    return 0;
  if ( (_WORD)v21 != 71 )
    return 0;
  if ( v23[1] != 5 )
    return 0;
  if ( v24 != 4 * v4 )
    return 0;
  if ( v25 != 1 )
    return 0;
  if ( v26 != 3 )
    return 0;
  if ( v27 )
    return 0;
  v8 = WORD1(v21) + i;
  v9 = *(_QWORD *)(a1 + 384);
  if ( v8 >= v9 || v9 - v8 == 1 || (unsigned __int16)get_word(v8) != 127 )
    return 0;
  v12 = *(__int64 **)a1;
  if ( v4 == 1 )
  {
    if ( v6 == 31 )
      sub_1F9B0(v12, "__ghsloadlp");
    else
      sub_200A0(v12, (__int64)"__return_r%u", 29);
  }
  else
  {
    v13 = v4 - (v6 == 31);
    v14 = (unsigned int)(30 - v13);
    if ( v13 == 11 )
      v14 = 2;
    sub_200A0(v12, (__int64)"__return_r%u_r%u", v14, v6, v10, v11, v19, v20);
  }
  **(_QWORD **)(a1 + 8) = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v8 + 2;
  return 1;
}

