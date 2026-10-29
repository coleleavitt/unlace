__int64 __fastcall sub_AA60(__int64 a1, _WORD *a2, double a3)
{
  unsigned int v3; // ebx
  __int16 v5; // r14
  unsigned __int16 v6; // r14
  int v7; // r15d
  __int64 insn; // r14
  int v9; // edx
  bool v10; // zf
  char v11; // al
  int v12; // [rsp+Ch] [rbp-1ACh]
  _QWORD v13[53]; // [rsp+10h] [rbp-1A8h] BYREF

  v13[45] = __readfsqword(0x28u);
  v3 = 0;
  if ( a2[12] == 75 )
  {
    qmemcpy(v13, a2, 0x168u);
    if ( BYTE1(v13[5]) == 1 )
    {
      v3 = v13[9] & 1;
      if ( (v13[9] & 1) != 0 )
      {
        v5 = HIWORD(v13[5]);
        if ( decode_prev_insn() != -1
          && LOWORD(v13[3]) == 97
          && decode_prev_insn() != -1
          && LOWORD(v13[3]) == 2
          && BYTE1(v13[5]) == 1
          && v5 == HIWORD(v13[5])
          && BYTE1(v13[10]) == 4 )
        {
          v6 = HIWORD(v13[10]);
          *(_QWORD *)(a1 + 8) = v13[12] + 16LL * v13[0];
          if ( decode_prev_insn() != -1
            && LOWORD(v13[3]) == 96
            && decode_prev_insn() != -1
            && LOWORD(v13[3]) == 8
            && BYTE1(v13[5]) == 1 )
          {
            v7 = v6;
            if ( HIWORD(v13[5]) == v6 && BYTE1(v13[10]) == 1 && v6 == HIWORD(v13[10]) )
            {
              insn = decode_prev_insn();
              if ( insn == -1 || (unsigned int)LOWORD(v13[3]) - 73 > 1 || HIDWORD(v13[3]) != 19 )
                goto LABEL_23;
              *(_QWORD *)(a1 + 24) = sub_9D60(v13, (__int64)&v13[5]);
              insn = decode_prev_insn();
              if ( insn != -1 && LOWORD(v13[3]) == 22 && BYTE1(v13[10]) == 5 )
              {
                if ( (v9 = HIWORD(v13[5]), v10 = BYTE1(v13[5]) == 1, *(_WORD *)(a1 + 4) = LOWORD(v13[11]) + 1, v10)
                  && v7 == v9
                  || (v12 = v9, decode_prev_insn() != -1)
                  && LOWORD(v13[3]) == 2
                  && (v9 = v12, BYTE1(v13[5]) == 1)
                  && v7 == HIWORD(v13[5])
                  && BYTE1(v13[10]) == 1
                  && v12 == HIWORD(v13[10]) )
                {
                  v11 = BYTE5(v13[5]);
                  *(_DWORD *)(a1 + 64) = v9;
                  *(_BYTE *)(a1 + 68) = v11;
LABEL_23:
                  sub_9BD0((__int64)"SWITCH %a: gcc_switch\n", a3);
                  *(_DWORD *)a1 &= 0xFFFFFA7B;
                  *(_QWORD *)(a1 + 32) = insn;
                  num_flag();
                  set_op_type();
                  get_default_reftype();
                  op_offset();
                  return v3;
                }
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return v3;
}

