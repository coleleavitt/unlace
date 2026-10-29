__int64 __fastcall sub_7FC0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  unsigned int v4; // ebx
  unsigned __int16 v6; // ax
  __int64 v7; // rax
  _BYTE v8[360]; // [rsp+0h] [rbp-188h] BYREF
  _QWORD v9[4]; // [rsp+168h] [rbp-20h] BYREF

  v9[0] = __readfsqword(0x28u);
  v3 = &v8[40];
  memset(v8, 255, 24);
  *(_QWORD *)&v8[24] = 0;
  *(_QWORD *)&v8[32] = 0;
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
  while ( v3 != v9 );
  LOBYTE(v3) = a3 & (*(_WORD *)(a2 + 24) == 106);
  v4 = (unsigned int)v3;
  if ( !(_BYTE)v3
    || (unsigned __int8)sub_B920(
                          *(_QWORD *)(a2 + 16),
                          1,
                          a3,
                          v9,
                          0,
                          0,
                          0.0,
                          *(_QWORD *)v8,
                          *(_QWORD *)&v8[8],
                          *(_QWORD *)&v8[16],
                          *(_QWORD *)&v8[24],
                          *(_QWORD *)&v8[32]) )
  {
    return 0;
  }
  qmemcpy(v8, (const void *)a2, sizeof(v8));
  decode_insn(a2, *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26));
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 == 173 )
  {
    if ( *(_WORD *)(a2 + 86) == *(_WORD *)&v8[86] )
    {
      *(_QWORD *)&v8[48] += *(_QWORD *)(a2 + 48);
      goto LABEL_16;
    }
  }
  else
  {
    if ( v6 > 0xADu )
    {
      if ( v6 != 178 || *(_WORD *)(a2 + 86) != *(_WORD *)&v8[86] )
        goto LABEL_12;
      *(_QWORD *)&v8[48] |= *(_QWORD *)(a2 + 48);
LABEL_16:
      *(_DWORD *)&v8[24] = 524451;
      qmemcpy((void *)a2, v8, 0x168u);
      return v4;
    }
    if ( v6 != 1 )
    {
      if ( v6 != 88 || *(_WORD *)(a2 + 46) != *(_WORD *)&v8[86] )
        goto LABEL_12;
      v7 = *(_QWORD *)(a2 + 88) | *(_QWORD *)&v8[48];
      goto LABEL_19;
    }
    if ( *(_WORD *)(a2 + 46) == *(_WORD *)&v8[86] )
    {
      v7 = *(_QWORD *)&v8[48] + *(_QWORD *)(a2 + 88);
LABEL_19:
      *(_QWORD *)&v8[48] = v7;
      *(_WORD *)&v8[86] = *(_WORD *)(a2 + 126);
      goto LABEL_16;
    }
  }
LABEL_12:
  qmemcpy((void *)a2, v8, 0x168u);
  return 0;
}
