__int64 __fastcall sub_33040(__int64 a1)
{
  unsigned __int64 *v2; // rax
  unsigned int v3; // eax
  unsigned int v4; // [rsp+Ch] [rbp-18Ch] BYREF
  __int128 v5; // [rsp+10h] [rbp-188h] BYREF
  __int64 v6; // [rsp+20h] [rbp-178h]
  __int64 v7; // [rsp+28h] [rbp-170h]
  __int64 v8; // [rsp+30h] [rbp-168h]
  _BYTE v9[6]; // [rsp+38h] [rbp-160h] BYREF
  __int16 v10; // [rsp+3Eh] [rbp-15Ah]
  unsigned int v11; // [rsp+78h] [rbp-120h]
  unsigned __int64 v12; // [rsp+178h] [rbp-20h] BYREF

  v12 = __readfsqword(0x28u);
  if ( (get_flags_ex() & 0x10000) == 0 )
    return 0;
  v6 = -1;
  v2 = (unsigned __int64 *)v9;
  v7 = 0;
  v8 = 0;
  v5 = -1;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v12 != v2 );
  if ( decode_prev_insn() == -1 || (((unsigned __int8)v8 ^ *(_BYTE *)(a1 + 32)) & 0xF) != 0 )
    return 0;
  if ( (v7 & 0xD00000FFFFLL) == 0x1000000021LL && v9[1] == 1 && v10 == 11 )
  {
    v3 = v11;
    return (v3 >> 14) & 1;
  }
  if ( !(unsigned __int8)sub_29880((__int64)&v5, &v4, 0) )
    return 0;
  v3 = v4;
  return (v3 >> 14) & 1;
}

