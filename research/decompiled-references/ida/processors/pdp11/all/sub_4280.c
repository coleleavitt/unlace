__int64 __fastcall sub_4280(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, char a5)
{
  int v7; // ecx
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax
  char v14; // al
  __int64 v15; // rdx
  int v16; // eax
  const char *v17; // rdi
  int v18; // esi
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int16 v21; // ax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // [rsp+8h] [rbp-1B0h]
  _QWORD v25[45]; // [rsp+20h] [rbp-198h] BYREF
  unsigned __int64 v26; // [rsp+188h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v7 = a3[1];
  switch ( (char)v7 )
  {
    case 1:
      if ( *((_WORD *)a3 + 3) )
        return v26 - __readfsqword(0x28u);
      if ( !*(_BYTE *)(a2 + 81) )
      {
        if ( *(_WORD *)(a2 + 24) != 32 )
          goto LABEL_35;
        if ( *(_BYTE *)(a2 + 28) )
          *(_WORD *)(a1 + 142) &= 0xFF00u;
        else
          *(_WORD *)(a1 + 142) = 0;
        goto LABEL_36;
      }
      if ( a3 != (unsigned __int8 *)(a2 + 80) )
        return v26 - __readfsqword(0x28u);
      v14 = *(_BYTE *)(a2 + 28);
      if ( *(_WORD *)(a2 + 24) != 48 )
      {
        if ( !v14 )
          goto LABEL_35;
        *(_WORD *)(a1 + 142) |= 0xFFu;
        goto LABEL_36;
      }
      if ( v14 || *(_BYTE *)(a2 + 41) != 5 )
        goto LABEL_35;
      v23 = *(_QWORD *)(a2 + 48);
      *(_WORD *)(a1 + 142) = v23;
      if ( (v23 & 1) != 0 )
        goto LABEL_36;
      *(_WORD *)(a1 + 144) = get_word();
      return v26 - __readfsqword(0x28u);
    case 2:
    case 6:
    case 7:
      if ( (_BYTE)v7 != 6 )
        map_code_ea();
      v11 = *((_WORD *)a3 + 3);
      if ( v11 )
        goto LABEL_7;
      return insn_add_cref();
    case 3:
      v13 = *((_WORD *)a3 + 3);
      if ( (v13 & 7) != 0 )
        return v26 - __readfsqword(0x28u);
      if ( v13 == 8 && a5 != 1 )
        return sub_41C0(a1, a2, (__int64)a3, 0);
      if ( !*(_BYTE *)(a2 + 81) || a3 == (unsigned __int8 *)(a2 + 80) )
      {
LABEL_35:
        *(_WORD *)(a1 + 142) = -1;
LABEL_36:
        *(_WORD *)(a1 + 144) = -1;
      }
      return v26 - __readfsqword(0x28u);
    case 4:
      set_immd();
      if ( !a5 && *((_WORD *)a3 + 3) == 48 )
      {
        v21 = *((_WORD *)a3 + 8);
        if ( v21 <= 1u )
          sub_41C0(a1, a2, (__int64)a3, v21);
      }
      if ( a4 )
        return v26 - __readfsqword(0x28u);
      get_flags_ex();
      if ( !(unsigned __int8)is_off() || !(unsigned __int8)get_refinfo() || v24 == -1 )
        return v26 - __readfsqword(0x28u);
      v11 = *((_WORD *)a3 + 3);
LABEL_7:
      if ( (~(_BYTE)v11 & 0x38) == 0 )
        goto LABEL_41;
      v12 = *(_WORD *)(a2 + 24);
      if ( v12 == 9 )
        return insn_add_cref();
      if ( v12 == 31 || v12 == 105 )
      {
        insn_add_cref();
        if ( !(unsigned __int8)func_does_return() )
          *(_BYTE *)(a1 + 140) = 0;
        return v26 - __readfsqword(0x28u);
      }
      else
      {
LABEL_41:
        insn_create_op_data();
        return insn_add_dref();
      }
    case 5:
      if ( a3[32] )
        return v26 - __readfsqword(0x28u);
      set_immd();
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v26 - __readfsqword(0x28u);
      return insn_add_off_drefs();
    case 8:
      return v26 - __readfsqword(0x28u);
    case 9:
      if ( *(_WORD *)(a2 + 24) == 73 && get_cmt() <= 0 )
      {
        v19 = *a3;
        qmemcpy(v25, (const void *)a2, sizeof(v25));
        v20 = v25[5 * v19 + 6];
        if ( (unsigned __int64)(v20 - 252) <= 1 )
        {
          if ( v20 == 253 )
            v22 = *(unsigned __int8 *)(a1 + 145);
          else
            v22 = *(unsigned __int8 *)(a1 + 143);
          v25[11] = v22;
          BYTE1(v25[10]) = 5;
        }
        if ( get_predef_insn_cmt() > 0 )
          set_cmt();
      }
      return v26 - __readfsqword(0x28u);
    default:
      v15 = *(_QWORD *)(a1 + 16);
      v16 = *(unsigned __int16 *)(a2 + 24);
      v17 = nullptr;
      v18 = *(_DWORD *)(v15 + 104);
      if ( v16 >= v18 && v16 < *(_DWORD *)(v15 + 108) )
        v17 = *(const char **)(*(_QWORD *)(v15 + 112) + 16LL * (v16 - v18));
      return sub_40F0((__int64)"%llo (%s): bad optype %d", *(_QWORD *)(a2 + 8), v17, v7);
  }
}

