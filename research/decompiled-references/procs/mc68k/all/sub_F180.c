__int64 __fastcall sub_F180(unsigned __int64 *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rdi
  void *v20; // rax
  bool v21; // zf
  unsigned __int64 *v23; // rax
  void *v24; // rax
  int flags; // eax
  unsigned __int64 v26; // rdi
  __int64 not_tail; // rax
  unsigned __int64 v28; // rdi
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  unsigned __int64 v35; // r15
  _QWORD *v36; // rdi
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _BOOL8 v48; // rdi
  unsigned int v49; // eax
  _QWORD *v50; // rax
  _QWORD *v51; // r15
  _QWORD *v52; // rax
  _QWORD *v53; // r12
  __int64 v54; // rax
  _BOOL8 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  _QWORD *v67; // rsi
  unsigned __int64 v68; // rcx
  _QWORD *v69; // rdi
  __int64 v70; // r9
  unsigned int v71; // eax
  void *v72; // rax
  _QWORD *v73; // [rsp+0h] [rbp-88h]
  __int64 v74; // [rsp+0h] [rbp-88h]
  __int64 v75; // [rsp+8h] [rbp-80h]
  unsigned __int64 v76; // [rsp+8h] [rbp-80h]
  unsigned __int64 v77; // [rsp+8h] [rbp-80h]
  unsigned __int64 v78; // [rsp+8h] [rbp-80h]
  unsigned __int64 v79; // [rsp+10h] [rbp-78h]
  __int64 v80; // [rsp+18h] [rbp-70h]
  unsigned __int64 v81; // [rsp+20h] [rbp-68h]
  _QWORD *v82; // [rsp+28h] [rbp-60h]
  _QWORD v83[2]; // [rsp+30h] [rbp-58h] BYREF
  char v84; // [rsp+41h] [rbp-47h]
  unsigned __int64 v85; // [rsp+48h] [rbp-40h]

  v5 = a1 + 10;
  v6 = (_QWORD *)*a1;
  v7 = (_QWORD *)a1[11];
  v85 = __readfsqword(0x28u);
  v9 = a1 + 10;
  while ( v7 )
  {
    while ( 1 )
    {
      a4 = v7[2];
      a3 = v7[3];
      if ( (unsigned __int64)v6 >= v7[4] )
        break;
      v9 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !a4 )
        goto LABEL_5;
    }
    v7 = (_QWORD *)v7[3];
  }
LABEL_5:
  if ( (_QWORD *)a1[12] == v9
    || (v10 = std::_Rb_tree_decrement(v9, a2, a3, a4, a5), *(_QWORD *)(v10 + 40) < (unsigned __int64)v6) )
  {
    a2 = (_QWORD *)&byte_4;
    flags = get_flags_ex(v6, 4, a3, a4);
    v14 = flags & 0x1000;
    v80 = flags & 0x10000;
    if ( (flags & 0x10000) != 0 )
    {
      if ( (flags & 0x1000) == 0 )
      {
        v26 = *a1;
        if ( a1[7] == -1 )
          a1[7] = v26;
        v14 = 1;
LABEL_34:
        not_tail = prev_not_tail(v26);
        a2 = (_QWORD *)not_tail;
        if ( not_tail != -1 )
        {
          v28 = a1[4];
          *a1 = not_tail;
          if ( v28 )
          {
            if ( (int)get_func_chunknum(v28, not_tail) >= 0 )
              goto LABEL_37;
          }
          else
          {
            v64 = (_QWORD *)a1[5];
            if ( (unsigned __int64)a2 >= *v64 && (unsigned __int64)a2 < v64[1] )
            {
LABEL_37:
              v29 = *((_DWORD *)a1 + 7);
              v30 = *((_DWORD *)a1 + 16);
              if ( !v29 || v30 < v29 )
              {
                v65 = (_QWORD *)a1[17];
                v66 = v30 + 1;
                v67 = a1 + 16;
                v68 = *a1;
                *((_DWORD *)a1 + 16) = v66;
                v69 = a1 + 16;
                if ( v65 )
                {
                  do
                  {
                    v70 = v65[3];
                    if ( v65[4] >= v68 )
                    {
                      v69 = v65;
                      v65 = (_QWORD *)v65[2];
                    }
                    else
                    {
                      v65 = (_QWORD *)v65[3];
                    }
                  }
                  while ( v65 );
                  if ( v67 != v69 && v68 >= v69[4] )
                  {
                    v71 = *((_DWORD *)v69 + 11);
                    if ( v71 < (unsigned int)v66 )
                      *((_DWORD *)a1 + 16) = v71;
                    v72 = (void *)std::_Rb_tree_rebalance_for_erase(v69, v67, v66, v68, v11, v70);
                    operator delete(v72, 0x30u);
                    --a1[20];
                  }
                }
                return 21;
              }
            }
          }
        }
LABEL_39:
        v31 = a1[7];
LABEL_81:
        v50 = (_QWORD *)a1[11];
        if ( !v50 )
          goto LABEL_115;
        a2 = (_QWORD *)*a1;
        v51 = v5;
        do
        {
          while ( 1 )
          {
            a4 = v50[2];
            v13 = v50[3];
            if ( v50[4] < (unsigned __int64)a2 )
              break;
            v51 = v50;
            v50 = (_QWORD *)v50[2];
            if ( !a4 )
              goto LABEL_86;
          }
          v50 = (_QWORD *)v50[3];
        }
        while ( v13 );
LABEL_86:
        if ( v5 == v51 )
        {
LABEL_115:
          v74 = (__int64)(a1 + 9);
          v60 = (_QWORD *)operator new(0x30u);
          a4 = *a1;
          v21 = a1[14] == 0;
          v60[5] = 0;
          v53 = v60;
          v60[4] = a4;
          if ( !v21 )
          {
            v13 = a1[13];
            v51 = nullptr;
            if ( *(_QWORD *)(v13 + 32) < a4 )
            {
LABEL_93:
              if ( v13 )
              {
                if ( v5 == (_QWORD *)v13 || v51 )
                {
                  v55 = 1;
LABEL_97:
                  a2 = v53;
                  v51 = v53;
                  std::_Rb_tree_insert_and_rebalance(v55, v53, v13, v5);
                  ++*(_QWORD *)(v74 + 40);
                  goto LABEL_98;
                }
                a2 = *(_QWORD **)(v13 + 32);
                v51 = (_QWORD *)v13;
LABEL_129:
                v13 = (unsigned __int64)v51;
                v55 = a4 < (unsigned __int64)a2;
                goto LABEL_97;
              }
LABEL_106:
              if ( v53 )
              {
                a2 = (_QWORD *)&dword_30;
                operator delete(v53, 0x30u);
              }
              goto LABEL_98;
            }
          }
        }
        else
        {
          if ( (unsigned __int64)a2 >= v51[4] )
          {
LABEL_98:
            v51[5] = v31;
            goto LABEL_10;
          }
          v74 = (__int64)(a1 + 9);
          v52 = (_QWORD *)operator new(0x30u);
          a4 = *a1;
          v52[5] = 0;
          v53 = v52;
          v52[4] = a4;
          a2 = (_QWORD *)v51[4];
          if ( a4 >= (unsigned __int64)a2 )
          {
            if ( (unsigned __int64)a2 >= a4 )
              goto LABEL_106;
            if ( (_QWORD *)a1[13] != v51 )
            {
              v79 = a4;
              v62 = std::_Rb_tree_increment(v51);
              a4 = v79;
              v13 = v62;
              if ( v79 >= *(_QWORD *)(v62 + 32) )
                goto LABEL_117;
              if ( v51[3] )
              {
                v51 = (_QWORD *)v62;
                goto LABEL_93;
              }
            }
            if ( v51 )
              goto LABEL_129;
            goto LABEL_106;
          }
          v13 = (unsigned __int64)v51;
          if ( (_QWORD *)a1[12] == v51 )
            goto LABEL_93;
          v76 = a4;
          v54 = std::_Rb_tree_decrement(v51, a2, v51, a4, v11);
          a4 = v76;
          v13 = v54;
          if ( *(_QWORD *)(v54 + 32) < v76 )
          {
            if ( *(_QWORD *)(v54 + 24) )
              v13 = (unsigned __int64)v51;
            else
              v51 = nullptr;
            goto LABEL_93;
          }
        }
LABEL_117:
        a2 = (_QWORD *)a4;
        v78 = a4;
        v61 = sub_AF00(v74, a4, v13, a4, v11);
        a4 = v78;
        v51 = v61;
        goto LABEL_93;
      }
      v14 = 1;
    }
    else
    {
      if ( (flags & 0x1000) == 0 )
      {
        v31 = a1[7];
        if ( v31 != -1 )
          goto LABEL_81;
        a1[7] = *a1;
        goto LABEL_39;
      }
      v14 = 0;
    }
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0
      || (a2 = (_QWORD *)*a1, !(unsigned __int8)xrefblk_t_first_to(v83, *a1, 5)) )
    {
LABEL_76:
      if ( a1[7] == -1 )
        a1[7] = *a1;
      if ( !v80 )
        goto LABEL_39;
      v26 = *a1;
      goto LABEL_34;
    }
    v73 = a1 + 16;
    while ( 1 )
    {
      if ( (unsigned __int8)(v84 - 18) <= 1u )
      {
        if ( *((_BYTE *)a1 + 24) )
        {
          if ( v14 )
            return 0;
          a2 = (_QWORD *)&byte_4;
          if ( (int)get_flags_ex(v83[0], 4, v32, v33) < 0 )
            return 0;
        }
        v34 = (_QWORD *)a1[11];
        v35 = v83[0];
        ++v14;
        v36 = v5;
        if ( v34 )
        {
          do
          {
            while ( 1 )
            {
              a2 = (_QWORD *)v34[2];
              v32 = v34[3];
              if ( v83[0] >= v34[4] )
                break;
              v36 = v34;
              v34 = (_QWORD *)v34[2];
              if ( !a2 )
                goto LABEL_54;
            }
            v34 = (_QWORD *)v34[3];
          }
          while ( v32 );
        }
LABEL_54:
        if ( (_QWORD *)a1[12] == v36 || *(_QWORD *)(std::_Rb_tree_decrement(v36, a2, v32, v33, v11) + 40) < v35 )
          break;
      }
LABEL_75:
      if ( !(unsigned __int8)xrefblk_t_next_to(v83) )
        goto LABEL_76;
    }
    v37 = (_QWORD *)a1[17];
    if ( !v37 )
      goto LABEL_103;
    v38 = (unsigned __int64)(a1 + 16);
    do
    {
      while ( 1 )
      {
        v39 = v37[2];
        a2 = (_QWORD *)v37[3];
        if ( v37[4] < v35 )
          break;
        v38 = (unsigned __int64)v37;
        v37 = (_QWORD *)v37[2];
        if ( !v39 )
          goto LABEL_61;
      }
      v37 = (_QWORD *)v37[3];
    }
    while ( a2 );
LABEL_61:
    if ( v73 == (_QWORD *)v38 )
    {
LABEL_103:
      v75 = (__int64)(a1 + 15);
      v56 = operator new(0x30u);
      v21 = a1[20] == 0;
      *(_QWORD *)(v56 + 32) = v35;
      v43 = (_QWORD *)v56;
      *(_DWORD *)(v56 + 44) = -1;
      if ( v21 || (v44 = a1[19], v38 = 0, *(_QWORD *)(v44 + 32) >= v35) )
      {
        a2 = sub_AFC0(v75, v35, v38, v57, v58);
        v44 = v59;
        v38 = (unsigned __int64)a2;
      }
LABEL_68:
      if ( v44 )
      {
        if ( v38 || (_QWORD *)v44 == v73 )
        {
          v48 = 1;
LABEL_72:
          a2 = v43;
          std::_Rb_tree_insert_and_rebalance(v48, v43, v44, v73);
          v38 = (unsigned __int64)v43;
          ++*(_QWORD *)(v75 + 40);
LABEL_73:
          v49 = *((_DWORD *)a1 + 16);
          if ( v49 < *(_DWORD *)(v38 + 44) )
            *(_DWORD *)(v38 + 44) = v49;
          goto LABEL_75;
        }
        a2 = *(_QWORD **)(v44 + 32);
LABEL_143:
        v48 = v35 < (unsigned __int64)a2;
        goto LABEL_72;
      }
LABEL_101:
      if ( v43 )
      {
        a2 = (_QWORD *)&dword_30;
        v77 = v38;
        operator delete(v43, 0x30u);
        v38 = v77;
      }
      goto LABEL_73;
    }
    if ( v35 >= *(_QWORD *)(v38 + 32) )
      goto LABEL_73;
    v81 = v38;
    v75 = (__int64)(a1 + 15);
    v40 = operator new(0x30u);
    v38 = v81;
    *(_QWORD *)(v40 + 32) = v35;
    v43 = (_QWORD *)v40;
    *(_DWORD *)(v40 + 44) = -1;
    a2 = *(_QWORD **)(v81 + 32);
    if ( v35 < (unsigned __int64)a2 )
    {
      v44 = v81;
      if ( a1[18] == v81 )
        goto LABEL_68;
      v44 = std::_Rb_tree_decrement(v81, a2, v81, v41, v42);
      if ( *(_QWORD *)(v44 + 32) < v35 )
      {
        v38 = 0;
        if ( *(_QWORD *)(v44 + 24) )
        {
          v38 = v81;
          v44 = v81;
        }
        goto LABEL_68;
      }
LABEL_123:
      a2 = sub_AFC0((__int64)(a1 + 15), v35, v45, v46, v47);
      v44 = v63;
      v38 = (unsigned __int64)a2;
      goto LABEL_68;
    }
    if ( (unsigned __int64)a2 >= v35 )
      goto LABEL_101;
    if ( a1[19] != v81 )
    {
      v82 = *(_QWORD **)(v81 + 32);
      v44 = std::_Rb_tree_increment(v81);
      if ( v35 >= *(_QWORD *)(v44 + 32) )
        goto LABEL_123;
      v38 = v81;
      a2 = v82;
      if ( *(_QWORD *)(v81 + 24) )
      {
        v38 = v44;
        goto LABEL_68;
      }
    }
    v44 = v38;
    if ( v38 )
      goto LABEL_143;
    goto LABEL_101;
  }
  v13 = a1[7];
  if ( v13 != -1 )
    *(_QWORD *)(v10 + 40) = v13;
  v14 = 0;
LABEL_10:
  if ( !a1[20] )
    return 0;
  while ( 1 )
  {
    v15 = (_QWORD *)a1[17];
    if ( v15 )
    {
      a2 = (_QWORD *)a1[6];
      v16 = a1 + 16;
      do
      {
        while ( 1 )
        {
          a4 = v15[2];
          v13 = v15[3];
          if ( (unsigned __int64)a2 >= v15[4] )
            break;
          v16 = v15;
          v15 = (_QWORD *)v15[2];
          if ( !a4 )
            goto LABEL_16;
        }
        v15 = (_QWORD *)v15[3];
      }
      while ( v13 );
    }
    else
    {
      v16 = a1 + 16;
    }
LABEL_16:
    v17 = a1[18];
    if ( v16 != (_QWORD *)v17 )
      v17 = std::_Rb_tree_decrement(v16, a2, v13, a4, v11);
    v18 = *(_QWORD *)(v17 + 32);
    v19 = a1[4];
    *a1 = v18;
    if ( !v19 )
      break;
    if ( (int)get_func_chunknum(v19, v18) >= 0 )
      goto LABEL_25;
LABEL_20:
    v20 = (void *)std::_Rb_tree_rebalance_for_erase(v17, a1 + 16, v13, a4, v11, v12);
    a2 = (_QWORD *)&dword_30;
    operator delete(v20, 0x30u);
    v21 = a1[20]-- == 1;
    if ( v21 )
      return 0;
  }
  v23 = (unsigned __int64 *)a1[5];
  if ( v18 < *v23 || v18 >= v23[1] )
    goto LABEL_20;
LABEL_25:
  a1[7] = -1;
  *((_DWORD *)a1 + 16) = *(_DWORD *)(v17 + 44);
  v24 = (void *)std::_Rb_tree_rebalance_for_erase(v17, a1 + 16, v13, a4, v11, v12);
  operator delete(v24, 0x30u);
  --a1[20];
  if ( v14 != 1 || a1[20] )
    return 18;
  return 21;
}
