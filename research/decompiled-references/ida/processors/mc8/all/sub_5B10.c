__int64 __fastcall sub_5B10(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, double a5)
{
  __int64 v7; // rbx
  __int16 flags; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  char *v12; // rbp
  char *v13; // rsi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  __int16 v17; // ax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v7 = a2;
  v20 = __readfsqword(0x28u);
  flags = get_flags_ex();
  switch ( a3[1] )
  {
    case 0u:
    case 1u:
      return v20 - __readfsqword(0x28u);
    case 2u:
    case 9u:
      sub_59C0(a1, a2, *((_WORD *)a3 + 8));
      calc_dataseg();
      goto LABEL_10;
    case 3u:
      if ( *(_WORD *)(a2 + 24) != 67 )
        return v20 - __readfsqword(0x28u);
      return remember_problem();
    case 4u:
    case 5u:
      set_immd();
      if ( a4 )
        return v20 - __readfsqword(0x28u);
      if ( (*(_QWORD *)a3 & 0xFFFF00000000FF00LL) == 0x6000000000400LL )
      {
        sub_5A90(a1, a2, (__int64)a3, 3);
LABEL_10:
        insn_create_op_data();
        return insn_add_dref();
      }
      v10 = *a3;
      if ( (unsigned __int8)op_adds_xrefs() )
      {
        sub_6710(a3, v10);
        insn_add_off_drefs();
        if ( a3[1] == 4 )
          return insn_create_op_data();
      }
      return v20 - __readfsqword(0x28u);
    case 7u:
      v11 = *((_QWORD *)a3 + 2);
      s = nullptr;
      v19 = 0;
      if ( sub_6AB0(a1, &s, v11) <= 0 )
      {
        sub_59C0(a1, a2, *((_WORD *)a3 + 8));
        map_code_ea();
        v17 = *(_WORD *)(a2 + 24);
        if ( (v17 == 38 || v17 == 68 || v17 == 144) && !(unsigned __int8)func_does_return() )
          *(_BYTE *)(a1 + 2996) = 0;
        insn_add_cref();
        if ( s )
          goto LABEL_21;
      }
      else
      {
        v12 = s;
        if ( (flags & 0x800) == 0 )
        {
          if ( (_QWORD)v19 )
          {
            v13 = strchr(s, 32);
            if ( v13 )
            {
              while ( *v13 == 32 )
                ++v13;
              if ( *v13 )
              {
                set_cmt();
                v12 = s;
              }
            }
          }
        }
        if ( v12 )
        {
LABEL_21:
          *(_QWORD *)&v19 = 0;
          qfree();
        }
      }
      return v20 - __readfsqword(0x28u);
    case 8u:
      if ( *(_DWORD *)(a1 + 224) != 1 || (a3[6] & 8) == 0 || *(_WORD *)(a2 + 24) != 92 )
        return v20 - __readfsqword(0x28u);
      return split_sreg_range();
    default:
      v14 = *(_QWORD *)(a1 + 16);
      v15 = *(unsigned __int16 *)(a2 + 24);
      LODWORD(a2) = 0;
      v16 = *(_DWORD *)(v14 + 104);
      if ( v15 >= v16 && v15 < *(_DWORD *)(v14 + 108) )
        a2 = *(_QWORD *)(*(_QWORD *)(v14 + 112) + 16LL * (v15 - v16));
      return sub_58F0((__int64)"%a: %s,%d: bad optype %d", a5, *(const char **)(v7 + 16), a2, *a3);
  }
}

