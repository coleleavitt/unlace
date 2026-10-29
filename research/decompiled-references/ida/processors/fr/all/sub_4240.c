__int64 __fastcall sub_4240(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // kr08_8
  __int64 v4; // rbp
  __int16 v5; // ax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD v10[4]; // [rsp+28h] [rbp-170h] BYREF
  _QWORD v11[6]; // [rsp+168h] [rbp-30h] BYREF

  v11[0] = __readfsqword(0x28u);
  v3 = v2;
  v4 = a1;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 8:
      return v11[0] - __readfsqword(0x28u);
    case 2:
      insn_add_dref();
      return insn_create_op_data();
    case 5:
      if ( *(_WORD *)(a1 + 24) == 44 && *(_BYTE *)(a1 + 41) == 5 && *(_BYTE *)(a1 + 81) == 1 )
      {
        v8 = v10;
        do
        {
          *(_WORD *)v8 = 0;
          v8 += 5;
          *((_WORD *)v8 - 19) = 0;
          *((_WORD *)v8 - 18) = 0;
          *((_DWORD *)v8 - 2) = 0;
          *((_WORD *)v8 - 17) = 0;
          *((_OWORD *)v8 - 2) = 0;
          *(v8 - 2) = 0;
        }
        while ( v11 != v8 );
        decode_insn();
        get_flags_ex();
      }
      set_immd();
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        goto LABEL_4;
      goto LABEL_22;
    case 7:
      return insn_add_cref();
    default:
      v4 = v3;
      if ( under_debugger )
        BUG();
      interr();
LABEL_22:
      insn_add_off_drefs();
LABEL_4:
      v5 = *(_WORD *)(v4 + 24);
      if ( v5 == 46 )
      {
        if ( (*(_QWORD *)(v4 + 80) & 0xFFFF00000000FF00LL) != 0x1000000000100LL )
          return v11[0] - __readfsqword(0x28u);
        v9 = v10;
        do
        {
          *(_WORD *)v9 = 0;
          v9 += 5;
          *((_WORD *)v9 - 19) = 0;
          *((_WORD *)v9 - 18) = 0;
          *((_DWORD *)v9 - 2) = 0;
          *((_WORD *)v9 - 17) = 0;
          *((_OWORD *)v9 - 2) = 0;
          *(v9 - 2) = 0;
        }
        while ( v9 != v11 );
        goto LABEL_14;
      }
      if ( v5 == 44 && *(_BYTE *)(v4 + 81) == 1 && (unsigned __int16)(*(_WORD *)(v4 + 86) - 1) <= 1u )
      {
        v7 = v10;
        do
        {
          *(_WORD *)v7 = 0;
          v7 += 5;
          *((_WORD *)v7 - 19) = 0;
          *((_WORD *)v7 - 18) = 0;
          *((_DWORD *)v7 - 2) = 0;
          *((_WORD *)v7 - 17) = 0;
          *((_OWORD *)v7 - 2) = 0;
          *(v7 - 2) = 0;
        }
        while ( v7 != v11 );
LABEL_14:
        decode_insn();
      }
      return v11[0] - __readfsqword(0x28u);
  }
}

