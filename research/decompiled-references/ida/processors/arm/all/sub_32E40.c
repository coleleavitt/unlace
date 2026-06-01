__int64 __fastcall sub_32E40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int v6; // ebx
  unsigned __int64 *v8; // rax
  __int64 v9; // [rsp+8h] [rbp-1A0h] BYREF
  __int128 v10; // [rsp+10h] [rbp-198h]
  __int64 v11; // [rsp+20h] [rbp-188h]
  __int64 v12; // [rsp+28h] [rbp-180h]
  __int64 v13; // [rsp+30h] [rbp-178h]
  char v14; // [rsp+38h] [rbp-170h] BYREF
  unsigned __int64 v15; // [rsp+178h] [rbp-30h] BYREF

  v15 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 32) & 0xF) == 0xE )
    return 0;
  if ( !sub_312C0(a1, a3, 0) )
  {
    if ( !sub_32D40(a3) )
      return 0;
    if ( (get_flags_ex(*(_QWORD *)(a3 + 16), 4) & 0x10000) == 0 )
      return 0;
    v11 = -1;
    v8 = (unsigned __int64 *)&v14;
    v12 = 0;
    v13 = 0;
    v10 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( &v15 != v8 );
    if ( decode_prev_insn() == -1 || (((unsigned __int8)v13 ^ *(_BYTE *)(a3 + 32)) & 0xF) != 0 )
      return 0;
  }
  v4 = 0x100000000LL;
  v5 = *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) == 8 )
    v4 = -1;
  if ( v5 < v4
    && (get_flags_ex(*(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), 4) & 0x10000) != 0
    && (get_aflags() & 2) == 0
    && (v6 = sub_82350(a1, &v9, v5), (_BYTE)v6) )
  {
    set_auto_spd();
  }
  else
  {
    return 0;
  }
  return v6;
}
