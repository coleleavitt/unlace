__int64 __fastcall sub_2BF40(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 *v4; // rax
  __int16 v5; // [rsp+6h] [rbp-192h] BYREF
  _BYTE v6[8]; // [rsp+8h] [rbp-190h] BYREF
  __int128 v7; // [rsp+10h] [rbp-188h]
  __int64 v8; // [rsp+20h] [rbp-178h]
  __int64 v9; // [rsp+28h] [rbp-170h]
  __int64 v10; // [rsp+30h] [rbp-168h]
  _BYTE v11[6]; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int16 v12; // [rsp+3Eh] [rbp-15Ah]
  char v13; // [rsp+61h] [rbp-137h]
  unsigned __int64 v14; // [rsp+178h] [rbp-20h] BYREF

  v14 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) != 209 )
    return 0;
  if ( *(_BYTE *)(a2 + 41) != 1 )
    return 0;
  if ( *(_WORD *)(a2 + 46) != 4 )
    return 0;
  if ( *(_BYTE *)(a2 + 81) != 5 )
    return 0;
  v3 = sub_74FC0(*(_QWORD *)(a1 + 144), v6, a2, &v5);
  if ( v3 == -1 )
    return 0;
  v8 = -1;
  v4 = (unsigned __int64 *)v11;
  v9 = 0;
  v10 = 0;
  v7 = -1;
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
  while ( &v14 != v4 );
  if ( decode_prev_insn() != -1 && (_WORD)v9 == 122 && v11[1] == 1 && v5 == v12 && v13 == 5 )
    sub_236C0();
  sub_2A980(a1, *(_QWORD *)(a2 + 16), v3 - *(_QWORD *)(a2 + 16), 0);
  *(_QWORD *)(a2 + 16) = v3 - 1;
  *(_WORD *)(a2 + 26) = 1;
  return 1;
}

