__int64 __fastcall sub_16AF0(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned __int8 a4)
{
  __int64 v7; // rdi
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int auto_state; // r15d
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // edx
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int8 v24; // al
  __int16 v25; // cx
  __int64 v26; // rcx
  __int64 flags; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r14
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  char v39; // al
  char v40; // al
  _QWORD *v41; // rdi
  __int64 v42; // rdx
  _QWORD *v43; // rax
  __int64 v44; // r13
  __int16 v45; // r14
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-88h]
  __int16 v48; // [rsp+8h] [rbp-80h]
  unsigned int v49; // [rsp+8h] [rbp-80h]
  unsigned int v50; // [rsp+Ch] [rbp-7Ch]
  __int64 v51; // [rsp+10h] [rbp-78h]
  __int64 v52; // [rsp+18h] [rbp-70h]
  _QWORD *v53; // [rsp+20h] [rbp-68h] BYREF
  __int128 v54; // [rsp+28h] [rbp-60h]
  char v55; // [rsp+38h] [rbp-50h]
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]

  v7 = *(unsigned __int16 *)(a2 + 24);
  v56 = __readfsqword(0x28u);
  v9 = has_insn_feature(v7, 2);
  if ( v9 && *(_BYTE *)(a2 + 41) == 1 )
    v9 = *(_WORD *)(a2 + 46) != 0;
  auto_state = get_auto_state();
  switch ( a3[1] )
  {
    case 2u:
      v15 = (unsigned int)(char)a3[2];
      v16 = *((_QWORD *)a3 + 2);
      if ( *(_WORD *)(a2 + 24) != 162 )
      {
        insn_add_dref(a2, v16, v15, (unsigned int)a4 + 2);
        insn_create_op_data(a2, *((_QWORD *)a3 + 2), (unsigned int)(char)a3[2], a3[5]);
        goto LABEL_7;
      }
      insn_add_dref(a2, v16, v15, 1);
      v17 = *a3;
      return sub_16A20(a1, a2, v17);
    case 3u:
      if ( !(unsigned __int8)getinf_flag(10, 512, v10, v11, v12, v13) || (unsigned int)get_auto_state() != 40 )
        goto LABEL_7;
      v19 = *(unsigned __int16 *)(a2 + 24);
      if ( (unsigned __int16)(v19 - 444) > 0x14u )
      {
        if ( (unsigned __int16)(v19 - 443) > 0x14u && (unsigned int)(v19 - 487) > 4 )
          goto LABEL_7;
      }
      else
      {
        v20 = 1398101;
        if ( !_bittest64(&v20, (unsigned int)(v19 - 444))
          && ((_WORD)v19 == 464 || !_bittest64(&v20, (unsigned int)(v19 - 443))) )
        {
          goto LABEL_7;
        }
      }
      sub_16150(a1, a2, a3, *((unsigned __int16 *)a3 + 3), 0);
      v17 = *a3;
      return sub_16A20(a1, a2, v17);
    case 4u:
      v21 = *(unsigned __int16 *)(a2 + 24);
      LOWORD(v21) = v21 - 443;
      if ( (unsigned __int16)v21 <= 0x14u )
      {
        v22 = 1398101;
        if ( _bittest64(&v22, v21) )
        {
          if ( under_debugger )
            BUG();
          interr(10488);
          goto LABEL_18;
        }
      }
      flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      v55 = 0;
      v53 = nullptr;
      v32 = flags;
      v54 = 0;
      if ( auto_state != 40
        || !(unsigned __int8)sub_26470(a1, &v53, *(_QWORD *)(a2 + 16), *((unsigned __int16 *)a3 + 3))
        || (unsigned __int8)(v55 - 10) > 1u )
      {
        goto LABEL_26;
      }
      v28 = v53;
      v29 = v54;
      v30 = *v53;
      if ( (_QWORD)v54 == 1 )
        goto LABEL_49;
      v36 = v53 + 3;
      v29 = 24 * v54;
      v28 = &v53[3 * v54];
      if ( 24LL * (_QWORD)v54 == 24 )
        goto LABEL_49;
      do
      {
        if ( v30 != *v36 )
          goto LABEL_26;
        v36 += 3;
      }
      while ( v36 != v28 );
LABEL_49:
      if ( !v30 )
        goto LABEL_26;
      v52 = *v53;
      v47 = *((_QWORD *)a3 + 2);
      v51 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      v48 = sub_26640(a1, &v53);
      v50 = *a3;
      v37 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)is_defarg(v37, v50) )
        goto LABEL_71;
      v38 = *a3;
      if ( v48 )
      {
        sub_16220(a1, a2, &v53, v48, v38, v51 & (v52 + v47));
LABEL_71:
        if ( v48 == 2 )
          insn_add_dref(a2, v53[1], 0, 1);
      }
      else
      {
        v39 = 2;
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
          v39 = 9;
        op_offset(*(_QWORD *)(a2 + 16), v38, (unsigned __int8)v39 | 0x80u, -1, v52, 0);
      }
LABEL_26:
      if ( *(_WORD *)(a2 + 24) != 4 )
      {
        if ( (unsigned __int8)op_adds_xrefs(v32, *a3) )
        {
          v34 = sub_1E130(a2, a3);
          v35 = insn_add_off_drefs(a2, a3, (unsigned int)a4 + 2, v34);
          if ( v35 != -1 )
            insn_create_op_data(a2, v35, (unsigned int)(char)a3[2], a3[5]);
        }
      }
      if ( (unsigned __int8)getinf_flag(10, 512, v28, v29, v30, v31) && (unsigned int)get_auto_state() == 40 )
        sub_16150(a1, a2, a3, *((unsigned __int16 *)a3 + 3), *((_QWORD *)a3 + 2));
      if ( v53 )
      {
        *(_QWORD *)&v54 = 0;
        qfree(v53);
      }
      goto LABEL_7;
    case 5u:
LABEL_18:
      v23 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
      if ( (unsigned __int8)op_adds_xrefs(v23, *a3) )
      {
        v33 = sub_1E130(a2, a3);
        insn_add_off_drefs(a2, a3, 1, v33);
      }
      v24 = *a3;
      v25 = *(_WORD *)(a2 + 24);
      v17 = *a3;
      if ( v25 == 19 )
      {
        if ( v24 == 2 && *(_BYTE *)(a2 + 81) == 1 )
        {
          v26 = *(unsigned __int16 *)(a2 + 86);
LABEL_34:
          v55 = 0;
          v53 = nullptr;
          v54 = 0;
          if ( auto_state == 40 )
          {
            v40 = sub_26470(a1, &v53, *(_QWORD *)(a2 + 16), v26);
            v41 = v53;
            if ( v40 && (unsigned __int8)(v55 - 10) <= 1u )
            {
              v42 = *v53;
              if ( (_QWORD)v54 == 1 || (v43 = v53 + 3, 24LL * (_QWORD)v54 == 24) )
              {
LABEL_68:
                v44 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*((_QWORD *)a3 + 1) + v42);
                v45 = sub_26640(a1, &v53);
                if ( v45 )
                {
                  v49 = *a3;
                  v46 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
                  if ( !(unsigned __int8)is_defarg(v46, v49) && (unsigned __int8)is_mapped(v44) )
                    sub_16220(a1, a2, &v53, v45, *a3, v44);
                  if ( v45 == 2 )
                    insn_add_dref(a2, v53[1], 0, 1);
                }
                insn_add_dref(a2, v44, 0, 1);
                v41 = v53;
              }
              else
              {
                while ( *v43 == v42 )
                {
                  v43 += 3;
                  if ( v43 == &v53[3 * (_QWORD)v54] )
                    goto LABEL_68;
                }
              }
            }
            if ( v41 )
            {
              *(_QWORD *)&v54 = 0;
              qfree(v41);
            }
            v24 = *a3;
          }
          v17 = v24;
        }
      }
      else if ( v25 == 539 && v24 == 1 )
      {
        v26 = 3;
        goto LABEL_34;
      }
      return sub_16A20(a1, a2, v17);
    case 7u:
      insn_add_cref(a2, *((_QWORD *)a3 + 2), (unsigned int)(char)a3[2], v9 == 0 ? 19 : 17);
      v17 = *a3;
      return sub_16A20(a1, a2, v17);
    default:
LABEL_7:
      v17 = *a3;
      return sub_16A20(a1, a2, v17);
  }
}

