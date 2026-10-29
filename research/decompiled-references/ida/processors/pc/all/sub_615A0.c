bool __fastcall sub_615A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE *v4; // rbx
  __int64 v6; // r12
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE *v10; // [rsp+8h] [rbp-450h]
  _BYTE v11[1048]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v12; // [rsp+428h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v3 = netnode_supval();
  if ( v3 <= 0 )
    return 0;
  v10 = v11;
  v4 = &v11[v3];
  if ( (unsigned int)unpack_dd() != 1 )
    return 0;
  v6 = a2 + 6;
  *(_WORD *)a2 = unpack_dw();
  *(_WORD *)(a2 + 2) = unpack_dw();
  *(_WORD *)(a2 + 4) = unpack_dw();
  v7 = v10;
  v8 = (unsigned int)unpack_dd();
  if ( __CFADD__((unsigned int)v8, v10) )
    return 0;
  if ( v4 < &v10[(unsigned int)v8] )
    return 0;
  v10 += (unsigned int)v8;
  if ( !v7 )
    return 0;
  if ( (unsigned int)v8 > 0x3FFuLL )
    v8 = 1023;
  if ( (unsigned int)v8 >= 8 )
  {
    *(_QWORD *)(a2 + 6) = *v7;
    *(_QWORD *)(v6 + v8 - 8) = *(_QWORD *)((char *)v7 + v8 - 8);
    qmemcpy(
      (void *)((a2 + 14) & 0xFFFFFFFFFFFFFFF8LL),
      (char *)v7 - (v6 - ((a2 + 14) & 0xFFFFFFFFFFFFFFF8LL)),
      8LL * (((unsigned int)v8 + (_DWORD)v6 - (((_DWORD)a2 + 14) & 0xFFFFFFF8)) >> 3));
  }
  else if ( (v8 & 4) != 0 )
  {
    *(_DWORD *)(a2 + 6) = *(_DWORD *)v7;
    *(_DWORD *)(v6 + v8 - 4) = *(_DWORD *)((char *)v7 + v8 - 4);
  }
  else if ( (_DWORD)v8 )
  {
    *(_BYTE *)(a2 + 6) = *(_BYTE *)v7;
    if ( (v8 & 2) != 0 )
      *(_WORD *)(v6 + v8 - 2) = *(_WORD *)((char *)v7 + v8 - 2);
  }
  *(_BYTE *)(a2 + v8 + 6) = 0;
  v9 = *(unsigned __int16 *)(a2 + 4);
  if ( (unsigned __int16)v9 < *(_WORD *)(a2 + 2) )
    v9 = *(unsigned __int16 *)(a2 + 2);
  return (unsigned __int16)v9 <= 0x3FFu && memchr((const void *)(a2 + v9 + 6), 0, 1024 - v9) != 0;
}
