__int64 __fastcall sub_2C480(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  __int128 v4; // [rsp+0h] [rbp-188h]
  __int64 v5; // [rsp+10h] [rbp-178h]
  __int64 v6; // [rsp+18h] [rbp-170h]
  __int64 v7; // [rsp+20h] [rbp-168h]
  _BYTE v8[6]; // [rsp+28h] [rbp-160h] BYREF
  __int16 v9; // [rsp+2Eh] [rbp-15Ah]
  __int64 v10; // [rsp+50h] [rbp-138h]
  unsigned __int64 v11; // [rsp+168h] [rbp-20h] BYREF

  v11 = __readfsqword(0x28u);
  if ( *(_WORD *)(a2 + 24) == 122
    && *(_BYTE *)(a2 + 81) == 2
    && *(_BYTE *)(a2 + 41) == 1
    && *(_WORD *)(a2 + 46) == 1
    && (unsigned __int8)(*(_BYTE *)(a2 + 32) - 33) <= 1u )
  {
    v5 = -1;
    v3 = (unsigned __int64 *)v8;
    v4 = -1;
    v6 = 0;
    v7 = 0;
    do
    {
      *(_WORD *)v3 = 0;
      v3 += 5;
      *((_WORD *)v3 - 19) = 0;
      *((_WORD *)v3 - 18) = 0;
      *((_DWORD *)v3 - 2) = 0;
      *((_WORD *)v3 - 17) = 0;
      *((_OWORD *)v3 - 2) = 0;
      *(v3 - 2) = 0;
    }
    while ( &v11 != v3 );
    if ( (unsigned int)decode_insn()
      && (_WORD)v6 == 122
      && v8[1] == 1
      && v9 == 1
      && (v10 & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
    {
      decode_insn();
    }
  }
  return 0;
}

