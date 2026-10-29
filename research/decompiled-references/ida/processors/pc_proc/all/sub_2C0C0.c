__int64 __fastcall sub_2C0C0(__int64 a1, __int64 a2)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // r12
  _BYTE v5[360]; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 v6; // [rsp+168h] [rbp-30h] BYREF

  v6 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a2 + 32) == 34
    && *(_WORD *)(a2 + 24) == 122
    && *(_BYTE *)(a2 + 81) == 2
    && *(_QWORD *)(a2 + 96) == 2208 )
  {
    v3 = (unsigned __int64 *)&v5[40];
    memset(v5, 255, 24);
    *(_QWORD *)&v5[24] = 0;
    *(_QWORD *)&v5[32] = 0;
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
    while ( &v6 != v3 );
    v4 = 32;
    while ( (unsigned int)decode_insn() )
    {
      if ( *(_WORD *)&v5[24] == 86 && v5[41] == 7 && *(_QWORD *)&v5[56] == *(_QWORD *)(a2 + 8) )
      {
        sub_2A980(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)&v5[16] + *(unsigned __int16 *)&v5[26] - *(_QWORD *)(a2 + 16), 0);
        qmemcpy((void *)a2, v5, 0x168u);
        return 1;
      }
      if ( !--v4 )
        return 0;
    }
  }
  return 0;
}

