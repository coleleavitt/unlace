__int64 __fastcall sub_34B20(_QWORD **a1, __int64 a2, char a3)
{
  unsigned __int64 auto_state; // rax
  __int64 v6; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v11; // di
  char v12; // bp
  __int64 v13; // rax
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rbp
  unsigned __int64 v18; // rsi
  int v19; // r13d
  __int64 v20; // rbp
  __int64 func; // r15
  __int16 v22; // dx
  __int64 v23; // rdx
  __int64 not_tail; // r14
  __int64 data_elsize; // r14
  __int16 v26; // [rsp+Ah] [rbp-8Eh]
  __int16 v27; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 2:
      v13 = *(_QWORD *)(a2 + 16) + 16LL * (_QWORD)a1[1];
      v14 = *(_QWORD *)((*a1)[4] + 16LL);
      if ( v13 != v14 )
      {
        v14 &= v13;
        if ( v13 == -1 )
          v14 = -1;
      }
      if ( (unsigned int)get_auto_state() == 25 )
        return insn_add_dref();
      if ( (get_flags_ex() & 0x600) == 0x200 )
      {
        not_tail = prev_not_tail();
        if ( (get_flags_ex() & 0x600) != 0x400 )
          goto LABEL_39;
        if ( v14 != not_tail )
          goto LABEL_62;
      }
      else if ( (get_flags_ex() & 0x600) != 0x400 )
      {
        goto LABEL_39;
      }
      data_elsize = get_data_elsize();
      if ( data_elsize == get_dtype_size() )
        goto LABEL_39;
LABEL_62:
      if ( (unsigned __int8)is_problem_present() )
        del_items();
LABEL_39:
      insn_create_op_data();
      insn_add_dref();
      v20 = (__int64)*a1;
      if ( !(unsigned __int8)sub_262E0((__int64)(a1 + 1), (_BYTE *)a2, v14, nullptr, 0) )
        return v28 - __readfsqword(0x28u);
      return sub_34670(v20, (__int64)(a1 + 1), a2);
    case 3:
      auto_state = get_auto_state();
      if ( (unsigned int)auto_state <= 0x19 )
      {
        v6 = 34603009;
        if ( _bittest64(&v6, auto_state) )
          return v28 - __readfsqword(0x28u);
      }
      if ( *(_QWORD *)(a2 + 8) || (*((_BYTE *)a1 + 36) & 0x90) != 0 )
        return v28 - __readfsqword(0x28u);
      return sub_2DE80((__int64)*a1, (__int64)(a1 + 1), a2);
    case 4:
      v15 = get_auto_state();
      if ( (unsigned int)v15 > 0x19 || (v16 = 34603009, v17 = (__int64)(a1 + 1), !_bittest64(&v16, v15)) )
      {
        v17 = (__int64)(a1 + 1);
        sub_2E070((__int64)*a1, (__int64)(a1 + 1), a2);
      }
      get_flags_ex();
      sub_25950((__int64)*a1, v17);
      if ( (unsigned __int8)getinf_flag()
        && (unsigned int)get_auto_state() == 40
        && (!(unsigned __int8)is_defarg() || (unsigned __int8)is_stkvar()) )
      {
        func = get_func();
        if ( func )
        {
          if ( (sub_2F920(*a1, v17, a2) & 1) != 0
            || (*(_BYTE *)(func + 16) & 0x10) != 0
            && ((v26 = *(_WORD *)(a2 + 6), netnode_supval() <= 0) || (unsigned int)unpack_dd() != 1
              ? (v22 = -1)
              : (v27 = unpack_dw(), unpack_dq(), v22 = v27),
                v26 == v22) )
          {
            if ( (*((_BYTE *)a1 + 36) & 0xE0) == 0 )
              sub_266E0((__int64)*a1, func, v17, *(unsigned __int16 *)(a2 + 6), *(_QWORD *)(a2 + 16));
            if ( (unsigned __int8)sub_22060(v17, a2) )
              netnode_supdel();
            else
              netnode_supset();
          }
        }
      }
      if ( *(_WORD *)(a2 + 6) == 15 )
        return v28 - __readfsqword(0x28u);
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v28 - __readfsqword(0x28u);
      v18 = *((unsigned __int16 *)a1 + 16);
      v19 = sub_25C10(*((_WORD *)a1 + 16));
      if ( (unsigned __int16)v18 > 0x1E9u )
      {
        if ( (unsigned __int16)(v18 - 871) <= 1u )
          goto LABEL_57;
      }
      else
      {
        if ( (unsigned __int16)v18 <= 0x1D9u )
        {
          if ( (_WORD)v18 != 49 && (_WORD)v18 != 71 )
            goto LABEL_29;
          goto LABEL_57;
        }
        LOWORD(v18) = v18 - 474;
        v23 = 49923;
        if ( _bittest64(&v23, v18) )
        {
LABEL_57:
          insn_add_off_drefs();
          if ( v19 != 1 )
          {
            get_dtype_size();
            insn_add_off_drefs();
          }
          return v28 - __readfsqword(0x28u);
        }
      }
LABEL_29:
      insn_add_off_drefs();
      return v28 - __readfsqword(0x28u);
    case 5:
      get_flags_ex();
      if ( !a3 )
        return v28 - __readfsqword(0x28u);
      sub_25950((__int64)*a1, (__int64)(a1 + 1));
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v28 - __readfsqword(0x28u);
      return insn_add_off_drefs();
    case 7:
      v8 = (__int64)*a1;
      v9 = *(_QWORD *)(a2 + 16) + 16LL * (_QWORD)a1[1];
      v10 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 16LL);
      if ( v9 != v10 )
      {
        v10 &= v9;
        if ( v9 == -1 )
          v10 = -1;
      }
      sub_260B0(v8, (__int64)(a1 + 1), v10, 0);
      v11 = *((_WORD *)a1 + 16);
      if ( v11 == 4 )
      {
        v12 = sub_2C710((__int64)*a1, (__int64)(a1 + 1), v10);
LABEL_11:
        sub_26200((__int64)a1, v10, v12, 1);
        if ( v12 )
          return v28 - __readfsqword(0x28u);
        goto LABEL_12;
      }
      if ( v11 != 3 )
      {
        v12 = has_insn_feature();
        goto LABEL_11;
      }
      if ( (unsigned __int8)sub_2B170((__int64)*a1, (__int64)(a1 + 1)) )
        return sub_26200((__int64)a1, v10, 1, 1);
      if ( a1[3] != (_QWORD *)v10 && (get_flags_ex() & 0x10000) == 0 && (unsigned __int8)sub_33040((__int64)(a1 + 1)) )
      {
        auto_mark_range();
        auto_mark_range();
      }
      sub_26200((__int64)a1, v10, 0, 1);
LABEL_12:
      if ( ((_BYTE)a1[5] & 0xF) == 0xE && (unsigned __int16)(*((_WORD *)a1 + 16) - 3) <= 1u )
        *((_BYTE *)a1 + 368) = 0;
      return v28 - __readfsqword(0x28u);
    default:
      return v28 - __readfsqword(0x28u);
  }
}

