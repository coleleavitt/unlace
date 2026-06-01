__int64 __fastcall sub_34140(__int64 a1, __int64 a2, _QWORD *a3)
{
  char *v4; // rax
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // r12d
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  const char *v12; // rcx
  unsigned __int64 v14; // [rsp+0h] [rbp-1A0h] BYREF
  __int128 v15; // [rsp+8h] [rbp-198h] BYREF
  __int64 v16; // [rsp+18h] [rbp-188h]
  __int64 v17; // [rsp+20h] [rbp-180h]
  __int64 v18; // [rsp+28h] [rbp-178h]
  char v19; // [rsp+30h] [rbp-170h] BYREF
  _QWORD v20[6]; // [rsp+170h] [rbp-30h] BYREF

  v20[0] = __readfsqword(0x28u);
  v4 = &v19;
  v15 = -1;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  do
  {
    *(_WORD *)v4 = 0;
    v4 += 40;
    *((_WORD *)v4 - 19) = 0;
    *((_WORD *)v4 - 18) = 0;
    *((_DWORD *)v4 - 2) = 0;
    *((_WORD *)v4 - 17) = 0;
    *((_OWORD *)v4 - 2) = 0;
    *((_QWORD *)v4 - 2) = 0;
  }
  while ( v20 != (_QWORD *)v4 );
  if ( (int)decode_insn(&v15, a2, v20, 0, 0, 0, 0.0) <= 0 )
    return (unsigned int)-1;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(v5 + 104);
  if ( v6 <= (unsigned __int16)v17
    && *(_DWORD *)(v5 + 108) > (int)(unsigned __int16)v17
    && (*(_BYTE *)(*(_QWORD *)(v5 + 112) + 16LL * ((unsigned __int16)v17 - v6) + 8) & 2) != 0 )
  {
    return (unsigned int)-2;
  }
  v7 = 0;
  v14 = 0;
  sub_2AAE0(a1, &v14, (__int64)&v15, -1);
  v8 = a3[1];
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *a3 + 80 * v9;
      v11 = *(_DWORD *)(v10 + 8);
      if ( (v11 & 0xFFC0) == 0 && (v14 & (1LL << v11)) != 0 )
        break;
      v9 = (int)++v7;
      if ( (int)v7 >= v8 )
        return (unsigned int)-1;
    }
    v12 = byte_51ACD;
    if ( *(_QWORD *)(v10 + 24) )
      v12 = *(const char **)(v10 + 16);
    if ( !(unsigned __int8)sub_337D0(a1, (__int64)&v15, v10 + 64, (__int64)v12, nullptr) )
      v7 |= 0x80000000;
  }
  else
  {
    return (unsigned int)-1;
  }
  return v7;
}
