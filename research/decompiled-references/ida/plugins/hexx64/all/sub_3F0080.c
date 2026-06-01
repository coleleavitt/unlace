__int64 __fastcall sub_3F0080(__int64 a1, __int64 a2, void *a3)
{
  unsigned __int64 *v3; // rax
  unsigned __int16 v4; // r14
  char v5; // r15
  __int64 v6; // rbp
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v11; // [rsp+8h] [rbp-200h]
  _BYTE v12[360]; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned __int64 v13; // [rsp+1C8h] [rbp-40h] BYREF

  v13 = __readfsqword(0x28u);
  memset(v12, 255, 24);
  v3 = (unsigned __int64 *)&v12[40];
  *(_QWORD *)&v12[24] = 0;
  *(_QWORD *)&v12[32] = 0;
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
  while ( &v13 != v3 );
  v4 = *(_WORD *)(a2 + 86);
  v5 = *(_BYTE *)(a2 + 85);
  if ( (unsigned int)decode_insn() && *(_WORD *)&v12[24] == 79 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v9 = *(_QWORD *)&v12[56] + 16LL * *(_QWORD *)v12;
    if ( v9 != v8 )
    {
      v8 &= v9;
      if ( v9 == -1 )
        v8 = -1;
    }
    v11 = v8;
    if ( decode_prev_insn() != -1
      && (*(_WORD *)&v12[24] == 216 || *(_WORD *)&v12[24] == 131)
      && v12[41] == 1
      && *(_WORD *)&v12[46] == v4
      && v12[45] == v5 )
    {
      qmemcpy(a3, v12, 0x168u);
      if ( decode_prev_insn() != -1
        && *(_WORD *)&v12[24] == 122
        && v12[41] == 1
        && v4 == *(unsigned __int16 *)&v12[46]
        && v12[45] == v5
        && *(_QWORD *)&v12[16] == v11 )
      {
        while ( decode_prev_insn() != -1 )
        {
          if ( *(_WORD *)&v12[24] != 129 )
          {
            if ( *(_WORD *)&v12[24] != 122 || sub_CFF70() != 1 )
              return -1;
            v6 = *(_QWORD *)&v12[16];
            while ( decode_prev_insn() != -1 )
            {
              if ( *(_WORD *)&v12[24] != 129 )
              {
                if ( *(_WORD *)&v12[24] == 423 && sub_CFF70() == 1 )
                  v6 = *(_QWORD *)&v12[16];
                break;
              }
            }
            netnode_supset();
            return v6;
          }
        }
      }
    }
  }
  return -1;
}

