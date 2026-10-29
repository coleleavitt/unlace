unsigned __int64 __fastcall sub_42950(__int64 a1, __int64 a2, double a3, double a4, double a5)
{
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bp
  char v7; // al
  unsigned __int8 *v8; // r14
  unsigned __int64 v9; // rax
  unsigned int v10; // r15d
  unsigned __int64 v11; // r13
  __int64 flags; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  __int16 v21; // bp
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  __int128 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v5 = sub_35120(a2);
  if ( v5 != 0xFFFF )
  {
    v6 = v5;
    if ( (v5 & 0x7F00) != 0 )
    {
      v7 = *(_BYTE *)(a2 + 81);
      v22 = 0;
      v8 = (unsigned __int8 *)(a2 + 80);
      v24 = 0;
      LODWORD(v25) = 0;
      v23 = 0;
      if ( v7 == 4 )
        goto LABEL_11;
      if ( (v6 & 2) != 0 )
      {
        if ( v7 == 1 )
        {
          sub_37AD0(a1, a2, *(unsigned __int16 *)(a2 + 86), *(unsigned __int16 *)(a2 + 126), v6);
          return v26 - __readfsqword(0x28u);
        }
        if ( v7 == 5 )
          goto LABEL_9;
        do
        {
          if ( under_debugger )
            BUG();
          interr("reg_finder_make_rfop");
LABEL_9:
          ;
        }
        while ( *(_QWORD *)(a2 + 88) );
        v8 = (unsigned __int8 *)&v22;
        LOWORD(v22) = 1025;
        BYTE5(v22) = HIBYTE(v6) - 1;
        HIWORD(v22) = *(_WORD *)(a2 + 126);
LABEL_11:
        v9 = sub_37650(a1, a2, v8);
        v10 = *v8;
        v11 = v9;
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        if ( !(unsigned __int8)op_adds_xrefs(flags, v10)
          || (v18 = sub_48680(v8, v10, v13, v14, v15, v16, v22, v23, *((_QWORD *)&v23 + 1), v24, v25),
              BYTE1(v18) |= 2u,
              v19 = insn_add_off_drefs(a2, v8, 3 - (v6 & 1u), v18),
              v20 = v19,
              v19 == -1) )
        {
          if ( v11 == -1 || (v6 & 8) != 0 )
            goto LABEL_14;
        }
        else
        {
          v21 = v6 & 8;
          if ( v11 != -1 && v11 != v19 )
          {
            sub_337D0(
              (__int64)"The offset specified for the operand #2 of the instruction at %a has a wrong target %a (the correct one is %a)\n",
              0.0,
              a4,
              a5);
            if ( !v21 )
            {
              insn_create_op_data(a2, v20, (unsigned int)(char)v8[2], v8[5]);
              goto LABEL_21;
            }
LABEL_14:
            netnode_supdel(*(_QWORD *)(a1 + 120), *(_QWORD *)(a2 + 16), 321);
            return v26 - __readfsqword(0x28u);
          }
          if ( v21 )
            goto LABEL_14;
          insn_create_op_data(a2, v19, (unsigned int)(char)v8[2], v8[5]);
          if ( v11 == -1 )
            goto LABEL_14;
        }
LABEL_21:
        if ( (unsigned __int8)sub_42790(a1, *(_QWORD *)(a2 + 16), v11, v8) )
          return v26 - __readfsqword(0x28u);
        goto LABEL_14;
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}

