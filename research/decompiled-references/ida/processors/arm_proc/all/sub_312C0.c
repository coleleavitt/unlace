char __fastcall sub_312C0(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  unsigned int v4; // eax
  __int16 v5; // ax
  unsigned __int64 *v6; // rax
  unsigned int v7; // edx
  unsigned int v9; // [rsp+Ch] [rbp-19Ch] BYREF
  __int128 v10; // [rsp+10h] [rbp-198h] BYREF
  __int64 v11; // [rsp+20h] [rbp-188h]
  __int64 v12; // [rsp+28h] [rbp-180h]
  __int64 v13; // [rsp+30h] [rbp-178h]
  char v14; // [rsp+38h] [rbp-170h] BYREF
  char v15; // [rsp+39h] [rbp-16Fh]
  __int16 v16; // [rsp+3Eh] [rbp-16Ah]
  char v17; // [rsp+61h] [rbp-147h]
  __int16 v18; // [rsp+66h] [rbp-142h]
  unsigned int v19; // [rsp+78h] [rbp-130h]
  unsigned __int64 v20; // [rsp+178h] [rbp-30h] BYREF

  v20 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 1:
      goto LABEL_25;
    case 0x17:
      if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 15 )
        goto LABEL_3;
      if ( *(_BYTE *)(a2 + 81) == 1 && *(_WORD *)(a2 + 86) == 14 )
        goto LABEL_25;
      if ( a3 )
        goto LABEL_3;
      LOBYTE(v3) = sub_2BE80(a1, *(_QWORD *)(a2 + 16), a2 + 80, 14, 0, 1);
      return v3;
    case 0x1E:
    case 0x1F:
    case 0x21:
    case 0x2A:
      if ( a3 )
        goto LABEL_3;
      if ( (*(_QWORD *)(a2 + 24) & 0xD00000FFFFLL) == 0x1000000021LL
        && *(_BYTE *)(a2 + 41) == 1
        && *(_WORD *)(a2 + 46) == 11 )
      {
        v4 = *(_DWORD *)(a2 + 104);
      }
      else
      {
        if ( !(unsigned __int8)sub_29880(a2, &v9, 1) )
          goto LABEL_3;
        v4 = v9;
      }
      return (v4 >> 15) & 1;
    case 0x29:
      v5 = *(_WORD *)(a2 + 46);
      if ( v5 == 14 )
        goto LABEL_25;
      if ( v5 == 15 )
        goto LABEL_3;
      if ( a3 )
        goto LABEL_3;
      v11 = -1;
      v12 = 0;
      v6 = (unsigned __int64 *)&v14;
      v13 = 0;
      v10 = -1;
      do
      {
        *(_WORD *)v6 = 0;
        v6 += 5;
        *((_WORD *)v6 - 19) = 0;
        *((_WORD *)v6 - 18) = 0;
        *((_DWORD *)v6 - 2) = 0;
        *((_WORD *)v6 - 17) = 0;
        *((_OWORD *)v6 - 2) = 0;
        *(v6 - 2) = 0;
      }
      while ( &v20 != v6 );
      if ( decode_prev_insn() == -1 )
        goto LABEL_3;
      if ( (v12 & 0xD00000FFFFLL) == 0x1000000021LL && v15 == 1 && v16 == 11 )
      {
        v7 = v19;
      }
      else
      {
        if ( !(unsigned __int8)sub_29880((__int64)&v10, &v9, 0) )
        {
          if ( (_WORD)v12 == 2 )
          {
LABEL_25:
            LOBYTE(v3) = 1;
            return v3;
          }
          if ( (_WORD)v12 != 23 || v15 != 1 || v16 != 14 || v17 != 1 || v18 != 15 )
          {
            LOBYTE(v3) = sub_2BE80(a1, v11, (__int64)&v14, 14, 0, 1);
            return v3;
          }
LABEL_3:
          LOBYTE(v3) = 0;
          return v3;
        }
        v7 = v9;
      }
      if ( *(unsigned __int16 *)(a2 + 46) > 0xFu )
        goto LABEL_3;
      LOBYTE(v3) = _bittest((const int *)&v7, *(unsigned __int16 *)(a2 + 46));
      return v3;
    default:
      goto LABEL_3;
  }
}

