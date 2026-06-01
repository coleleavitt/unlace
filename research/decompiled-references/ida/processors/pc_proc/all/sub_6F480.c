__int64 __fastcall sub_6F480(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 result; // rax
  bool v8; // dl
  unsigned int dword; // eax
  unsigned int v10; // edx
  unsigned __int64 *v11; // rax
  char v12; // [rsp+58h] [rbp-170h] BYREF
  unsigned __int64 v13; // [rsp+198h] [rbp-30h] BYREF

  v13 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) != 16 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  v5 = sub_80350(a1, a2, a2 + 40);
  if ( v4 == v5 )
  {
    v11 = (unsigned __int64 *)&v12;
    do
    {
      *(_WORD *)v11 = 0;
      v11 += 5;
      *((_WORD *)v11 - 19) = 0;
      *((_WORD *)v11 - 18) = 0;
      *((_DWORD *)v11 - 2) = 0;
      *((_WORD *)v11 - 17) = 0;
      *((_OWORD *)v11 - 2) = 0;
      *(v11 - 2) = 0;
    }
    while ( &v13 != v11 );
    decode_insn();
    return 0xFFFFFFFFLL;
  }
  if ( (unsigned __int8)segtype() == 1 )
  {
    if ( get_ea_name() > 0 )
    {
      v6 = 6;
      if ( strncmp(nullptr, "__i686", 6u) )
      {
        if ( strncmp(nullptr, "__x86", 5u) )
          return 0xFFFFFFFFLL;
        v6 = 5;
      }
      if ( !strncmp((const char *)v6, ".get_pc_thunk.", 0xEu)
        && *(_BYTE *)(v6 + 15) == 120
        && (unsigned __int8)(*(_BYTE *)(v6 + 14) - 97) <= 3u )
      {
        result = dword_16EB10[(unsigned __int8)(*(_BYTE *)(v6 + 14) - 97)];
        v8 = (_DWORD)result != -1;
        goto LABEL_22;
      }
    }
    return 0xFFFFFFFFLL;
  }
  while ( 1 )
  {
    dword = get_dword();
    if ( dword != -1869574000 )
      break;
    v5 += 4;
  }
  v10 = dword;
  BYTE1(v10) = BYTE1(dword) & 0xC7;
  if ( v10 != -1021049717 )
    return 0xFFFFFFFFLL;
  v8 = 1;
  result = (dword >> 11) & 7;
LABEL_22:
  if ( a3 )
  {
    if ( v8 )
      *a3 = v4;
  }
  return result;
}

