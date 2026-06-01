__int64 __fastcall sub_7740(__int64 a1, __int64 a2)
{
  unsigned int wide_byte; // eax
  __int64 v4; // rbp
  __int64 v6; // rdx
  int v7; // ecx
  __int16 v8; // si
  __int64 v9; // rcx
  int v10; // edx
  unsigned int v11; // r13d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v16 = a2;
  v17 = a2 + 40;
  wide_byte = get_wide_byte();
  LODWORD(v4) = wide_byte >> 23;
  ++*(_WORD *)(a2 + 26);
  if ( *(_DWORD *)(a1 + 232) <= (signed int)(wide_byte >> 23) )
  {
    *(_WORD *)(a2 + 24) = 0;
    return 0;
  }
  v6 = 120LL * (unsigned int)v4;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 224) + v6);
  *(_WORD *)(a2 + 24) = v7;
  v8 = v7;
  if ( (_WORD)v7 == 91 )
  {
    v9 = *(_QWORD *)(a1 + 224);
    v4 = *(int *)(v9 + v6 + 4);
    v10 = *(_DWORD *)(v9 + 120 * v4);
    *(_WORD *)(a2 + 24) = v10;
    v8 = v10;
  }
  if ( !v8 )
    return 0;
  v11 = wide_byte;
  if ( !(unsigned int)sub_75E0(a1, (__int64)&v16, wide_byte, v4, 0, 2) )
    return 0;
  v12 = *(_QWORD *)(a1 + 224);
  v13 = v12 + 120LL * (int)v4;
  if ( *(_BYTE *)(v13 + 112) )
  {
    v14 = v17;
    v17 += 40;
    v15 = *(int *)(v13 + 4);
    *(_BYTE *)(a2 + 32) = *(_BYTE *)(v12 + 120 * v15 + 56);
    *(_BYTE *)(a2 + 33) = *(_BYTE *)(v14 + 40);
    if ( !(unsigned int)sub_7690(a1, (__int64)&v16, v11, v15, 0, 2) )
      return 0;
  }
  return *(unsigned __int16 *)(a2 + 26);
}

