__int64 __fastcall sub_70B80(double a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  __int16 flags; // r15
  _DWORD *v10; // r12
  __int64 v11; // rax
  unsigned __int64 *v12; // rax
  int *v13; // r12
  int *v14; // rbx
  unsigned __int64 v15; // rax
  int *v16; // rdx
  bool v17; // al
  int *v18; // rax
  int *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rsi
  _DWORD *v23; // r15
  __int64 v24; // rax
  int *v25; // r13
  unsigned __int64 v26; // rdx
  char v27; // cl
  int *v28; // rax
  int *v29; // rdx
  unsigned __int64 v30; // rcx
  int *v31; // rax
  __int64 v32; // rax
  int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int *v36; // rdx
  unsigned __int64 v37; // rcx
  int *v38; // rax
  __int64 v39; // rax
  int *i; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r12
  void *v44; // rax
  unsigned int v45; // ebx
  unsigned __int64 v47; // [rsp+8h] [rbp-270h]
  unsigned int insn; // [rsp+14h] [rbp-264h]
  unsigned __int8 v49; // [rsp+14h] [rbp-264h]
  _DWORD *v50; // [rsp+58h] [rbp-220h]
  char v51; // [rsp+61h] [rbp-217h]
  int v52; // [rsp+78h] [rbp-200h] BYREF
  int *v53; // [rsp+80h] [rbp-1F8h]
  int *v54; // [rsp+88h] [rbp-1F0h]
  int *v55; // [rsp+90h] [rbp-1E8h]
  __int64 v56; // [rsp+98h] [rbp-1E0h]
  int v57; // [rsp+A8h] [rbp-1D0h] BYREF
  int *v58; // [rsp+B0h] [rbp-1C8h]
  int *v59; // [rsp+B8h] [rbp-1C0h]
  int *v60; // [rsp+C0h] [rbp-1B8h]
  __int64 v61; // [rsp+C8h] [rbp-1B0h]
  __int128 v62; // [rsp+D0h] [rbp-1A8h]
  __int64 v63; // [rsp+E0h] [rbp-198h]
  __int64 v64; // [rsp+E8h] [rbp-190h]
  __int64 v65; // [rsp+F0h] [rbp-188h]
  char v66; // [rsp+F8h] [rbp-180h] BYREF
  unsigned __int64 v67; // [rsp+238h] [rbp-40h] BYREF

  v67 = __readfsqword(0x28u);
  v6 = getseg();
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 8);
    v52 = 0;
    v8 = 1;
    v53 = 0;
    v47 = v7;
    v54 = &v52;
    v55 = &v52;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &v57;
    v60 = &v57;
    v61 = 0;
LABEL_3:
    flags = get_flags_ex();
    v10 = a3;
    v11 = flags & 0x600;
    if ( v11 != 1536 )
      goto LABEL_4;
LABEL_46:
    insn = get_item_end() - (_DWORD)v10;
    if ( (flags & 0x1000) != 0 )
    {
LABEL_47:
      v25 = v58;
      if ( v58 )
      {
        while ( 1 )
        {
          v26 = *((_QWORD *)v25 + 4);
          v27 = 0;
          v28 = (int *)*((_QWORD *)v25 + 3);
          if ( (unsigned __int64)v10 < v26 )
          {
            v28 = (int *)*((_QWORD *)v25 + 2);
            v27 = 1;
          }
          if ( !v28 )
            break;
          v25 = v28;
        }
        if ( !v27 )
        {
LABEL_54:
          if ( v26 >= (unsigned __int64)v10 )
            goto LABEL_7;
LABEL_55:
          *(_QWORD *)(operator new(0x28u) + 32) = v10;
          std::_Rb_tree_insert_and_rebalance();
          ++v61;
          goto LABEL_7;
        }
        if ( v25 == v59 )
          goto LABEL_55;
      }
      else if ( v59 == &v57 )
      {
        goto LABEL_55;
      }
      v26 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
      goto LABEL_54;
    }
    while ( 1 )
    {
LABEL_7:
      if ( (*(_DWORD *)(a4 + 64) & 0xFFFFFFFD) == 1 )
      {
        v12 = (unsigned __int64 *)&v66;
        v63 = -1;
        v64 = 0;
        a1 = 0.0;
        v65 = 0;
        v62 = -1;
        do
        {
          *(_WORD *)v12 = 0;
          v12 += 5;
          *((_WORD *)v12 - 19) = 0;
          *((_WORD *)v12 - 18) = 0;
          *((_DWORD *)v12 - 2) = 0;
          *((_WORD *)v12 - 17) = 0;
          *((_OWORD *)v12 - 2) = 0;
          *(v12 - 2) = 0;
        }
        while ( &v67 != v12 );
        if ( (int)decode_insn() > 0 && (unsigned __int8)is_ret_insn() || netnode_supval() == 8 )
        {
          *(_QWORD *)(a4 + 56) = v10;
          netnode_supdel();
          v10 = (_DWORD *)((char *)v10 + insn);
LABEL_14:
          v50 = v10;
          rangeset_t_add();
          v49 = v8;
          while ( 1 )
          {
            if ( !v56 )
              goto LABEL_112;
            a3 = (_DWORD *)*((_QWORD *)v54 + 4);
            if ( !v53 )
              break;
            v13 = v53;
            v14 = &v52;
            while ( 1 )
            {
              while ( 1 )
              {
                v15 = *((_QWORD *)v13 + 4);
                if ( v15 >= (unsigned __int64)a3 )
                  break;
                v13 = (int *)*((_QWORD *)v13 + 3);
                if ( !v13 )
                  goto LABEL_22;
              }
              v16 = (int *)*((_QWORD *)v13 + 2);
              if ( (unsigned __int64)a3 >= v15 )
                break;
              v14 = v13;
              v13 = (int *)*((_QWORD *)v13 + 2);
              if ( !v16 )
              {
LABEL_22:
                v17 = v14 == &v52;
                goto LABEL_23;
              }
            }
            for ( i = (int *)*((_QWORD *)v13 + 3); i; i = (int *)*((_QWORD *)i + 3) )
            {
              while ( 1 )
              {
                v41 = *((_QWORD *)i + 2);
                if ( (unsigned __int64)a3 >= *((_QWORD *)i + 4) )
                  break;
                v14 = i;
                i = (int *)*((_QWORD *)i + 2);
                if ( !v41 )
                  goto LABEL_101;
              }
            }
LABEL_101:
            while ( v16 )
            {
              while ( 1 )
              {
                v42 = *((_QWORD *)v16 + 2);
                if ( *((_QWORD *)v16 + 4) < (unsigned __int64)a3 )
                  break;
                v13 = v16;
                v16 = (int *)*((_QWORD *)v16 + 2);
                if ( !v42 )
                  goto LABEL_104;
              }
              v16 = (int *)*((_QWORD *)v16 + 3);
            }
LABEL_104:
            if ( v54 == v13 && v14 == &v52 )
              goto LABEL_25;
            if ( v14 != v13 )
            {
              do
              {
                v43 = std::_Rb_tree_increment();
                v44 = (void *)std::_Rb_tree_rebalance_for_erase();
                operator delete(v44, 0x28u);
                --v56;
              }
              while ( (int *)v43 != v14 );
            }
LABEL_26:
            if ( (unsigned __int64)a3 < v47 )
            {
              v18 = v58;
              if ( !v58 )
                goto LABEL_34;
              v19 = &v57;
              do
              {
                while ( 1 )
                {
                  v20 = *((_QWORD *)v18 + 2);
                  v21 = *((_QWORD *)v18 + 3);
                  if ( *((_QWORD *)v18 + 4) < (unsigned __int64)a3 )
                    break;
                  v19 = v18;
                  v18 = (int *)*((_QWORD *)v18 + 2);
                  if ( !v20 )
                    goto LABEL_32;
                }
                v18 = (int *)*((_QWORD *)v18 + 3);
              }
              while ( v21 );
LABEL_32:
              if ( v19 == &v57 || (unsigned __int64)a3 < *((_QWORD *)v19 + 4) )
              {
LABEL_34:
                v8 = v49;
                goto LABEL_3;
              }
            }
          }
          v17 = 1;
          v14 = &v52;
LABEL_23:
          if ( v54 != v14 || !v17 )
            goto LABEL_26;
LABEL_25:
          sub_69F00(v53);
          v54 = &v52;
          v53 = 0;
          v55 = &v52;
          v56 = 0;
          goto LABEL_26;
        }
      }
      v22 = v10;
      if ( (unsigned __int8)xrefblk_t_first_from() )
      {
        while ( 1 )
        {
          v23 = v50;
          if ( (unsigned __int8)(v51 - 16) <= 1u )
          {
            if ( v10 >= v50 )
              v23 = (_DWORD *)v47;
            v47 = (unsigned __int64)v23;
            goto LABEL_42;
          }
          LOBYTE(v8) = (*(_DWORD *)(a4 + 64) != 2) | v8;
          if ( !(_BYTE)v8 )
            goto LABEL_41;
          if ( !*(_QWORD *)(a4 + 16) || (v22 = v50, !rangeset_t_find_range()) )
          {
            if ( (unsigned __int8)sub_70AA0(v50, v22) || (get_aflags() & 0x404) == 0 )
            {
              v29 = v53;
              if ( v53 )
              {
                while ( 1 )
                {
                  v30 = *((_QWORD *)v29 + 4);
                  v22 = 0;
                  v31 = (int *)*((_QWORD *)v29 + 3);
                  if ( (unsigned __int64)v50 < v30 )
                  {
                    v31 = (int *)*((_QWORD *)v29 + 2);
                    v22 = (int *)v8;
                  }
                  if ( !v31 )
                    break;
                  v29 = v31;
                }
                if ( (_BYTE)v22 )
                {
                  if ( v29 == v54 )
                    goto LABEL_64;
                  goto LABEL_88;
                }
              }
              else
              {
                if ( v54 == &v52 )
                {
LABEL_64:
                  v32 = operator new(0x28u);
                  *(_QWORD *)(v32 + 32) = v50;
                  v22 = (int *)v32;
                  std::_Rb_tree_insert_and_rebalance();
                  ++v56;
                  goto LABEL_65;
                }
LABEL_88:
                v30 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
              }
              if ( v30 < (unsigned __int64)v50 )
                goto LABEL_64;
LABEL_65:
              if ( (debug & 8) != 0 )
              {
                v22 = v50;
                sub_224B0((__int64)"%a: adding xref\n", a1);
              }
              goto LABEL_41;
            }
            goto LABEL_41;
          }
          v33 = v58;
          v22 = &v57;
          if ( v58 )
          {
            do
            {
              while ( 1 )
              {
                v34 = *((_QWORD *)v33 + 2);
                v35 = *((_QWORD *)v33 + 3);
                if ( *((_QWORD *)v33 + 4) < (unsigned __int64)v50 )
                  break;
                v22 = v33;
                v33 = (int *)*((_QWORD *)v33 + 2);
                if ( !v34 )
                  goto LABEL_76;
              }
              v33 = (int *)*((_QWORD *)v33 + 3);
            }
            while ( v35 );
LABEL_76:
            if ( v22 != &v57 && (unsigned __int64)v50 >= *((_QWORD *)v22 + 4) )
              goto LABEL_41;
          }
          v36 = v53;
          if ( !v53 )
            break;
          while ( 1 )
          {
            v37 = *((_QWORD *)v36 + 4);
            v22 = 0;
            v38 = (int *)*((_QWORD *)v36 + 3);
            if ( (unsigned __int64)v50 < v37 )
            {
              v38 = (int *)*((_QWORD *)v36 + 2);
              v22 = (int *)v8;
            }
            if ( !v38 )
              break;
            v36 = v38;
          }
          if ( (_BYTE)v22 )
          {
            if ( v54 == v36 )
              goto LABEL_86;
LABEL_90:
            v37 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
          }
          if ( v37 < (unsigned __int64)v50 )
            goto LABEL_86;
LABEL_41:
          v8 = 0;
LABEL_42:
          if ( !(unsigned __int8)xrefblk_t_next_from() )
            goto LABEL_43;
        }
        if ( v54 == &v52 )
        {
LABEL_86:
          v39 = operator new(0x28u);
          *(_QWORD *)(v39 + 32) = v50;
          v22 = (int *)v39;
          std::_Rb_tree_insert_and_rebalance();
          ++v56;
          goto LABEL_41;
        }
        goto LABEL_90;
      }
LABEL_43:
      v10 = (_DWORD *)((char *)v10 + insn);
      if ( (unsigned __int64)v10 >= v47 )
        break;
      v24 = get_flags_ex();
      flags = v24;
      if ( (v24 & 0x10000) == 0 )
        goto LABEL_14;
      v11 = v24 & 0x600;
      if ( v11 == 1536 )
        goto LABEL_46;
LABEL_4:
      if ( v11 || (insn = create_insn()) == 0 )
      {
        rangeset_t_add();
        v45 = 0;
        goto LABEL_113;
      }
      if ( (get_flags_ex() & 0x1000) != 0 )
        goto LABEL_47;
    }
    rangeset_t_add();
LABEL_112:
    v45 = 1;
LABEL_113:
    sub_69F00(v58);
    sub_69F00(v53);
  }
  else
  {
    return 0;
  }
  return v45;
}
