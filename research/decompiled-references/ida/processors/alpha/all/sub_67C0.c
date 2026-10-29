__int64 __fastcall sub_67C0(__int64 a1, _WORD *a2, __int64 a3)
{
  unsigned __int64 *v4; // rax
  __int64 sreg; // r14
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE v10[360]; // [rsp+4h] [rbp-1A8h] BYREF
  unsigned __int64 v11; // [rsp+16Ch] [rbp-40h] BYREF

  v11 = __readfsqword(0x28u);
  v4 = (unsigned __int64 *)&v10[40];
  memset(v10, 255, 24);
  *(_QWORD *)&v10[24] = 0;
  *(_QWORD *)&v10[32] = 0;
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
  while ( v4 != &v11 );
  sreg = get_sreg();
  if ( *(_WORD *)(a3 + 6) != 29 )
  {
    if ( a2[12] != 108 || sreg == -1 )
      goto LABEL_6;
    qmemcpy(v10, a2, sizeof(v10));
    while ( 1 )
    {
      if ( decode_prev_insn() == -1 )
        goto LABEL_6;
      if ( *(_WORD *)&v10[24] == 108 )
      {
        if ( *(_WORD *)&v10[46] == a2[43] )
        {
          v9 = netnode_altval();
          if ( v9 == -1 )
            goto LABEL_6;
          result = v9 + (__int16)a2[48];
LABEL_32:
          if ( result != -1 )
            return result;
          goto LABEL_6;
        }
      }
      else if ( *(_WORD *)&v10[24] == 22 || *(_WORD *)&v10[24] == 106 )
      {
        goto LABEL_23;
      }
      if ( (int)get_spoiled_reg() >= 0 )
      {
        if ( *(_WORD *)&v10[24] != 109 || *(_WORD *)&v10[86] != 29 )
          goto LABEL_6;
        result = sreg + ((__int16)a2[48] | (*(_QWORD *)&v10[96] << 16));
        goto LABEL_32;
      }
LABEL_23:
      if ( (get_flags_ex() & 0x10000) == 0 )
        goto LABEL_6;
    }
  }
  if ( a2[23] != 29 )
  {
    v8 = get_sreg();
    if ( v8 != -1 )
      return *(_QWORD *)(a3 + 16) + v8;
  }
LABEL_6:
  qmemcpy(v10, a2, sizeof(v10));
  v6 = *(__int16 *)(a3 + 16);
  while ( 1 )
  {
    if ( decode_prev_insn() == -1 )
      return -1;
    if ( *(_WORD *)&v10[24] != 22 && *(_WORD *)&v10[24] != 106 && (int)get_spoiled_reg() >= 0 )
      break;
    if ( (get_flags_ex() & 0x10000) == 0 )
      return -1;
  }
  if ( *(_WORD *)&v10[24] != 109 || *(_WORD *)&v10[86] != 31 )
    return -1;
  return v6 + (unsigned int)(*(_DWORD *)&v10[96] << 16);
}

