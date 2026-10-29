__int64 __fastcall sub_2FA00(__int64 a1, __int64 a2)
{
  char *v2; // rax
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rdx
  unsigned int v6; // r14d
  __int64 v7; // r12
  unsigned __int8 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v14; // [rsp+0h] [rbp-198h] BYREF
  __int64 v15; // [rsp+10h] [rbp-188h]
  __int64 v16; // [rsp+18h] [rbp-180h]
  __int64 v17; // [rsp+20h] [rbp-178h]
  char v18; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v19[6]; // [rsp+168h] [rbp-30h] BYREF

  v19[0] = __readfsqword(0x28u);
  v2 = &v18;
  v14 = -1;
  v15 = -1;
  v16 = 0;
  v17 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v2 != (char *)v19 );
  if ( a2 == -1 || (int)decode_insn(&v14, a2, v19, 0, 0, 0, 0.0) <= 0 )
    return -1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_DWORD *)(v3 + 104);
  if ( (unsigned __int16)v16 < v4
    || (unsigned __int16)v16 >= *(int *)(v3 + 108)
    || (*(_BYTE *)(*(_QWORD *)(v3 + 112) + 16LL * ((unsigned __int16)v16 - v4) + 8) & 2) == 0 )
  {
    if ( (unsigned __int16)v16 > 0x51u )
    {
      if ( (_WORD)v16 != 505 )
        return -1;
    }
    else
    {
      if ( (unsigned __int16)v16 <= 0x26u )
        return -1;
      v5 = 0x60003F0003FLL;
      if ( !_bittest64(&v5, (unsigned int)(unsigned __int16)v16 - 39) )
        return -1;
    }
  }
  if ( (get_flags_ex(v15 + WORD1(v16), 4) & 0x10000) == 0 )
    return -1;
  v6 = (unsigned __int16)v16;
  v7 = v15 + WORD1(v16);
  v8 = (v17 & 0x400) != 0;
  if ( (unsigned __int8)sub_1E660(a1, v16, v8) || sub_1E5E0(a1, v6, v8) )
    v7 += (int)decode_insn(&v14, v7, v9, v10, v11, v12, 0.0);
  return v7;
}
