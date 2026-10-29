__int64 __fastcall sub_98D0(__int64 a1, const void *a2, double a3)
{
  __int64 v4; // r13
  int v5; // r12d
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp-8h] [rbp-1A0h]
  _QWORD v12[51]; // [rsp+0h] [rbp-198h] BYREF

  v12[45] = __readfsqword(0x28u);
  qmemcpy(v12, a2, 0x168u);
  if ( (v12[5] & 0xFFFF00000000FF00LL) != 0x2000000000300LL )
    return 0;
  v4 = SLOBYTE(v12[9]);
  if ( !(unsigned int)sub_7160((__int64)v12, 1, 44, 1, SLOBYTE(v12[9]), 3, 4) )
    return 0;
  if ( (_BYTE)v4 != LOBYTE(v12[14]) )
    return 0;
  if ( !(unsigned int)sub_7160((__int64)v12, 1, 1, 1, v4, 5, -1) )
    return 0;
  *(_QWORD *)(a1 + 8) = (v12[2] & 0xFFFF0000) + v12[11];
  op_offset();
  if ( !(unsigned int)sub_7160((__int64)v12, 1, 6, 1, v4, 5, 1) )
    return 0;
  if ( !(unsigned int)sub_7160((__int64)v12, 1, 43, 1, 2 * (int)v4 - 31, 5, 0) )
  {
    if ( (LOWORD(v12[3]) != 50 || decode_prev_insn() != -1) && LOWORD(v12[3]) == 11
      || (unsigned int)sub_7160((__int64)v12, 0, 37, 0, -1, 0, -1)
      && (unsigned int)sub_7160((__int64)v12, 1, 15, 0, -1, 0, -1) )
    {
      if ( (unsigned int)sub_7160((__int64)v12, 1, 27, 1, -1, 5, -1) )
      {
        v8 = HIWORD(v12[5]);
        *(_WORD *)(a1 + 4) = LOWORD(v12[11]) + 1;
        if ( !(unsigned int)sub_7160((__int64)v12, 1, 9, 0, -1, 0, -1) )
          goto LABEL_16;
        *(_QWORD *)(a1 + 24) = v12[7];
        if ( !(unsigned int)sub_7160((__int64)v12, 1, 67, 1, v8, 5, -1) )
        {
          v11 = v9;
          if ( !(unsigned int)sub_7160((__int64)v12, 0, 3, 1, v8, 5, -1) )
          {
            sub_7480((__int64)"no sub/add, may start with 0", v11);
            return 0;
          }
        }
        goto LABEL_28;
      }
      goto LABEL_32;
    }
LABEL_31:
    sub_7480((__int64)"%a: no bg, may be signed", a3);
    return 0;
  }
  v5 = HIWORD(v12[5]);
  if ( (decode_prev_insn() != -1 && LOWORD(v12[3]) == 50 && decode_prev_insn() == -1 || LOWORD(v12[3]) != 11)
    && (!(unsigned int)sub_7160((__int64)v12, 0, 37, 0, -1, 0, -1)
     || !(unsigned int)sub_7160((__int64)v12, 1, 15, 0, -1, 0, -1)) )
  {
    goto LABEL_31;
  }
  v6 = v5 - 1;
  if ( !(unsigned int)sub_7160((__int64)v12, 1, 27, 1, v6, 5, -1) )
  {
LABEL_32:
    sub_7480((__int64)"%a: no cmp", a3);
    return 0;
  }
  *(_WORD *)(a1 + 4) = LOWORD(v12[11]) + 1;
  if ( (unsigned int)sub_7160((__int64)v12, 1, 9, 0, -1, 0, -1) )
  {
    *(_QWORD *)(a1 + 24) = v12[7];
    if ( !(unsigned int)sub_7160((__int64)v12, 1, 67, 1, v6, 5, -1)
      && !(unsigned int)sub_7160((__int64)v12, 0, 3, 1, v6, 5, -1) )
    {
      sub_7480((__int64)"%a: no sub/add, may start with 0", a3);
      return 0;
    }
LABEL_28:
    v10 = v12[11];
    if ( LOWORD(v12[3]) != 67 )
      v10 = -v12[11];
    *(_QWORD *)(a1 + 16) = v10;
    v7 = v12[2];
    goto LABEL_17;
  }
LABEL_16:
  *(_QWORD *)(a1 + 16) = 0;
  v7 = v12[2] + WORD1(v12[3]);
LABEL_17:
  *(_QWORD *)(a1 + 32) = v7;
  if ( (unsigned __int8)get_byte() == 0xFE )
    insn_add_cref();
  return 1;
}

