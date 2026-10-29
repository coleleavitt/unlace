__int64 __fastcall sub_DBC0(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 *v6; // rbp
  unsigned __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 *v18; // rdi
  __int64 v19; // r12
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  void *v22; // rax
  bool v23; // zf
  __int64 result; // rax
  unsigned __int64 *v25; // rax
  void *v26; // rax
  __int64 flags; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 not_tail; // rax
  __int64 v32; // rdi
  unsigned int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 *v39; // rax
  unsigned __int64 v40; // r15
  __int64 *v41; // rdi
  _QWORD *v42; // rax
  unsigned __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // r13
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r8
  _BOOL8 v52; // rdi
  unsigned int v53; // eax
  __int64 *v54; // rax
  __int64 *v55; // r15
  _QWORD *v56; // rax
  _QWORD *v57; // r12
  __int64 v58; // rax
  _BOOL8 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 *v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rcx
  __int64 *v69; // rsi
  __int64 *v70; // rdi
  __int64 v71; // r9
  unsigned int v72; // eax
  void *v73; // rax
  __int64 v74; // [rsp+0h] [rbp-98h]
  __int64 *v75; // [rsp+8h] [rbp-90h]
  unsigned __int64 v76; // [rsp+8h] [rbp-90h]
  unsigned __int64 v77; // [rsp+8h] [rbp-90h]
  __int64 v78; // [rsp+10h] [rbp-88h]
  unsigned __int64 v79; // [rsp+10h] [rbp-88h]
  unsigned __int64 v80; // [rsp+10h] [rbp-88h]
  __int64 v81; // [rsp+18h] [rbp-80h]
  unsigned __int64 v82; // [rsp+20h] [rbp-78h]
  _QWORD *v83; // [rsp+28h] [rbp-70h]
  unsigned __int64 v84; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v85[2]; // [rsp+40h] [rbp-58h] BYREF
  char v86; // [rsp+51h] [rbp-47h]
  unsigned __int64 v87; // [rsp+58h] [rbp-40h]

  v6 = a1 + 10;
  v7 = *a1;
  v8 = (__int64 *)a1[11];
  v87 = __readfsqword(0x28u);
  v10 = a1 + 10;
  while ( v8 )
  {
    while ( 1 )
    {
      a4 = v8[2];
      a3 = v8[3];
      if ( v7 >= v8[4] )
        break;
      v10 = v8;
      v8 = (__int64 *)v8[2];
      if ( !a4 )
        goto LABEL_5;
    }
    v8 = (__int64 *)v8[3];
  }
LABEL_5:
  if ( (__int64 *)a1[12] != v10 )
  {
    v11 = std::_Rb_tree_decrement(v10, a2, a3, a4, a5);
    if ( *(_QWORD *)(v11 + 40) >= v7 )
    {
      v15 = a1[7];
      if ( v15 != -1 )
        *(_QWORD *)(v11 + 40) = v15;
      v16 = 0;
LABEL_10:
      if ( a1[20] )
      {
        do
        {
          v17 = (__int64 *)a1[17];
          if ( v17 )
          {
            a2 = (_QWORD *)a1[6];
            v18 = a1 + 16;
            do
            {
              while ( 1 )
              {
                v12 = v17[2];
                v15 = v17[3];
                if ( (unsigned __int64)a2 >= v17[4] )
                  break;
                v18 = v17;
                v17 = (__int64 *)v17[2];
                if ( !v12 )
                  goto LABEL_16;
              }
              v17 = (__int64 *)v17[3];
            }
            while ( v15 );
          }
          else
          {
            v18 = a1 + 16;
          }
LABEL_16:
          v19 = a1[18];
          if ( v18 != (__int64 *)v19 )
            v19 = std::_Rb_tree_decrement(v18, a2, v15, v12, v13);
          v20 = *(_QWORD *)(v19 + 32);
          v21 = a1[4];
          *a1 = v20;
          if ( v21 )
          {
            if ( (int)get_func_chunknum(v21, v20) >= 0 )
              goto LABEL_26;
          }
          else
          {
            v25 = (unsigned __int64 *)a1[5];
            if ( v20 >= *v25 && v20 < v25[1] )
            {
LABEL_26:
              a1[7] = -1;
              *((_DWORD *)a1 + 16) = *(_DWORD *)(v19 + 44);
              v26 = (void *)std::_Rb_tree_rebalance_for_erase(v19, a1 + 16, v15, v12, v13, v14);
              operator delete(v26, 0x30u);
              --a1[20];
              result = 18;
              if ( v16 == 1 && !a1[20] )
                return 21;
              return result;
            }
          }
          v22 = (void *)std::_Rb_tree_rebalance_for_erase(v19, a1 + 16, v15, v12, v13, v14);
          a2 = (_QWORD *)&dword_30;
          operator delete(v22, 0x30u);
          v23 = a1[20]-- == 1;
        }
        while ( !v23 );
      }
      return 0;
    }
  }
  a2 = (_QWORD *)&byte_4;
  flags = get_flags_ex(v7, 4);
  v16 = flags & 0x1000;
  v29 = flags & 0x10000;
  v81 = v29;
  if ( (flags & 0x10000) != 0 )
  {
    if ( (flags & 0x1000) == 0 )
    {
      v30 = *a1;
      if ( a1[7] == -1 )
        a1[7] = v30;
      v16 = 1;
      goto LABEL_35;
    }
    v16 = 1;
  }
  else
  {
    if ( (flags & 0x1000) == 0 )
    {
      v35 = a1[7];
      if ( v35 != -1 )
        goto LABEL_82;
      a1[7] = *a1;
      goto LABEL_40;
    }
    v16 = 0;
  }
  v28 = ~flags;
  BYTE1(v28) = ((unsigned __int16)~(_WORD)flags >> 8) & 6;
  if ( BYTE1(v28) || (flags & 0x10000000) == 0 )
  {
    a2 = (_QWORD *)*a1;
    if ( (unsigned __int8)xrefblk_t_first_to(v85, *a1, 5) )
    {
      v75 = a1 + 16;
      while ( 1 )
      {
        if ( (unsigned __int8)(v86 - 18) <= 1u )
        {
          if ( *((_BYTE *)a1 + 24) && (v16 || (int)get_flags_ex(v85[0], 4) < 0) )
            return 0;
          a2 = (_QWORD *)(&dword_0 + 1);
          ++v16;
          v84 = v85[0];
          sub_AF00((__int64 *)&v84, 1);
          v39 = (__int64 *)a1[11];
          v40 = v84;
          v41 = v6;
          if ( v39 )
          {
            do
            {
              while ( 1 )
              {
                a2 = (_QWORD *)v39[2];
                v36 = v39[3];
                if ( v84 >= v39[4] )
                  break;
                v41 = v39;
                v39 = (__int64 *)v39[2];
                if ( !a2 )
                  goto LABEL_55;
              }
              v39 = (__int64 *)v39[3];
            }
            while ( v36 );
          }
LABEL_55:
          if ( (__int64 *)a1[12] == v41 || *(_QWORD *)(std::_Rb_tree_decrement(v41, a2, v36, v37, v38) + 40) < v40 )
            break;
        }
LABEL_76:
        if ( !(unsigned __int8)xrefblk_t_next_to(v85) )
          goto LABEL_77;
      }
      v42 = (_QWORD *)a1[17];
      if ( !v42 )
        goto LABEL_104;
      v43 = (unsigned __int64)(a1 + 16);
      do
      {
        while ( 1 )
        {
          v44 = v42[2];
          a2 = (_QWORD *)v42[3];
          if ( v42[4] < v40 )
            break;
          v43 = (unsigned __int64)v42;
          v42 = (_QWORD *)v42[2];
          if ( !v44 )
            goto LABEL_62;
        }
        v42 = (_QWORD *)v42[3];
      }
      while ( a2 );
LABEL_62:
      if ( v75 == (__int64 *)v43 )
      {
LABEL_104:
        v78 = (__int64)(a1 + 15);
        v60 = operator new(0x30u);
        v23 = a1[20] == 0;
        *(_QWORD *)(v60 + 32) = v40;
        v48 = (_QWORD *)v60;
        *(_DWORD *)(v60 + 44) = -1;
        if ( !v23 )
        {
          v49 = a1[19];
          v43 = 0;
          if ( *(_QWORD *)(v49 + 32) < v40 )
            goto LABEL_69;
        }
      }
      else
      {
        if ( v40 >= *(_QWORD *)(v43 + 32) )
          goto LABEL_74;
        v82 = v43;
        v78 = (__int64)(a1 + 15);
        v45 = operator new(0x30u);
        v43 = v82;
        *(_QWORD *)(v45 + 32) = v40;
        v48 = (_QWORD *)v45;
        *(_DWORD *)(v45 + 44) = -1;
        a2 = *(_QWORD **)(v82 + 32);
        if ( v40 >= (unsigned __int64)a2 )
        {
          if ( (unsigned __int64)a2 >= v40 )
            goto LABEL_102;
          if ( a1[19] != v82 )
          {
            v83 = *(_QWORD **)(v82 + 32);
            v49 = std::_Rb_tree_increment(v82);
            if ( v40 >= *(_QWORD *)(v49 + 32) )
              goto LABEL_106;
            v43 = v82;
            a2 = v83;
            if ( *(_QWORD *)(v82 + 24) )
            {
              v43 = v49;
              goto LABEL_69;
            }
          }
          v49 = v43;
          if ( v43 )
            goto LABEL_144;
          goto LABEL_102;
        }
        v49 = v82;
        if ( a1[18] == v82 )
          goto LABEL_69;
        v49 = std::_Rb_tree_decrement(v82, a2, v82, v46, v47);
        if ( *(_QWORD *)(v49 + 32) < v40 )
        {
          v43 = 0;
          if ( *(_QWORD *)(v49 + 24) )
          {
            v43 = v82;
            v49 = v82;
          }
LABEL_69:
          if ( v49 )
          {
            if ( v43 || (__int64 *)v49 == v75 )
            {
              v52 = 1;
LABEL_73:
              a2 = v48;
              std::_Rb_tree_insert_and_rebalance(v52, v48, v49, v75);
              v43 = (unsigned __int64)v48;
              ++*(_QWORD *)(v78 + 40);
LABEL_74:
              v53 = *((_DWORD *)a1 + 16);
              if ( v53 < *(_DWORD *)(v43 + 44) )
                *(_DWORD *)(v43 + 44) = v53;
              goto LABEL_76;
            }
            a2 = *(_QWORD **)(v49 + 32);
LABEL_144:
            v52 = v40 < (unsigned __int64)a2;
            goto LABEL_73;
          }
LABEL_102:
          if ( v48 )
          {
            a2 = (_QWORD *)&dword_30;
            v79 = v43;
            operator delete(v48, 0x30u);
            v43 = v79;
          }
          goto LABEL_74;
        }
      }
LABEL_106:
      a2 = sub_A500(v78, v40, v43, v50, v51);
      v49 = v61;
      v43 = (unsigned __int64)a2;
      goto LABEL_69;
    }
  }
LABEL_77:
  if ( a1[7] == -1 )
    a1[7] = *a1;
  if ( !v81 )
    goto LABEL_40;
  v30 = *a1;
LABEL_35:
  not_tail = prev_not_tail(v30, a2, v28, v29, v13, v14, a6);
  a2 = (_QWORD *)not_tail;
  if ( not_tail == -1 )
    goto LABEL_40;
  v32 = a1[4];
  *a1 = not_tail;
  if ( v32 )
  {
    if ( (int)get_func_chunknum(v32, not_tail) >= 0 )
      goto LABEL_38;
LABEL_40:
    v35 = a1[7];
LABEL_82:
    v54 = (__int64 *)a1[11];
    if ( !v54 )
      goto LABEL_114;
    a2 = (_QWORD *)*a1;
    v55 = v6;
    do
    {
      while ( 1 )
      {
        v12 = v54[2];
        v15 = v54[3];
        if ( v54[4] < (unsigned __int64)a2 )
          break;
        v55 = v54;
        v54 = (__int64 *)v54[2];
        if ( !v12 )
          goto LABEL_87;
      }
      v54 = (__int64 *)v54[3];
    }
    while ( v15 );
LABEL_87:
    if ( v6 == v55 )
    {
LABEL_114:
      v74 = (__int64)(a1 + 9);
      v62 = (_QWORD *)operator new(0x30u);
      v12 = *a1;
      v23 = a1[14] == 0;
      v62[5] = 0;
      v57 = v62;
      v62[4] = v12;
      if ( !v23 )
      {
        v15 = a1[13];
        v55 = nullptr;
        if ( *(_QWORD *)(v15 + 32) < v12 )
        {
LABEL_94:
          if ( v15 )
          {
            if ( v6 == (__int64 *)v15 || v55 )
            {
              v59 = 1;
LABEL_98:
              a2 = v57;
              v55 = v57;
              std::_Rb_tree_insert_and_rebalance(v59, v57, v15, v6);
              ++*(_QWORD *)(v74 + 40);
              goto LABEL_99;
            }
            a2 = *(_QWORD **)(v15 + 32);
            v55 = (__int64 *)v15;
LABEL_141:
            v15 = (unsigned __int64)v55;
            v59 = v12 < (unsigned __int64)a2;
            goto LABEL_98;
          }
LABEL_107:
          if ( v57 )
          {
            a2 = (_QWORD *)&dword_30;
            operator delete(v57, 0x30u);
          }
          goto LABEL_99;
        }
      }
    }
    else
    {
      if ( (unsigned __int64)a2 >= v55[4] )
      {
LABEL_99:
        v55[5] = v35;
        goto LABEL_10;
      }
      v74 = (__int64)(a1 + 9);
      v56 = (_QWORD *)operator new(0x30u);
      v12 = *a1;
      v56[5] = 0;
      v57 = v56;
      v56[4] = v12;
      a2 = (_QWORD *)v55[4];
      if ( v12 >= (unsigned __int64)a2 )
      {
        if ( (unsigned __int64)a2 >= v12 )
          goto LABEL_107;
        if ( (__int64 *)a1[13] != v55 )
        {
          v80 = v12;
          v64 = std::_Rb_tree_increment(v55);
          v12 = v80;
          v15 = v64;
          if ( v80 >= *(_QWORD *)(v64 + 32) )
            goto LABEL_116;
          if ( v55[3] )
          {
            v55 = (__int64 *)v64;
            goto LABEL_94;
          }
        }
        if ( v55 )
          goto LABEL_141;
        goto LABEL_107;
      }
      v15 = (unsigned __int64)v55;
      if ( (__int64 *)a1[12] == v55 )
        goto LABEL_94;
      v76 = v12;
      v58 = std::_Rb_tree_decrement(v55, a2, v55, v12, v13);
      v12 = v76;
      v15 = v58;
      if ( *(_QWORD *)(v58 + 32) < v76 )
      {
        if ( *(_QWORD *)(v58 + 24) )
          v15 = (unsigned __int64)v55;
        else
          v55 = nullptr;
        goto LABEL_94;
      }
    }
LABEL_116:
    a2 = (_QWORD *)v12;
    v77 = v12;
    v63 = sub_A440(v74, v12, v15, v12, v13);
    v12 = v77;
    v55 = v63;
    goto LABEL_94;
  }
  v65 = (_QWORD *)a1[5];
  if ( (unsigned __int64)a2 < *v65 || (unsigned __int64)a2 >= v65[1] )
    goto LABEL_40;
LABEL_38:
  v33 = *((_DWORD *)a1 + 7);
  v34 = *((_DWORD *)a1 + 16);
  if ( v33 && v34 >= v33 )
    goto LABEL_40;
  v66 = (__int64 *)a1[17];
  v67 = v34 + 1;
  v68 = *a1;
  v69 = a1 + 16;
  *((_DWORD *)a1 + 16) = v67;
  if ( !v66 )
    goto LABEL_136;
  v70 = a1 + 16;
  do
  {
    v71 = v66[3];
    if ( v66[4] >= v68 )
    {
      v70 = v66;
      v66 = (__int64 *)v66[2];
    }
    else
    {
      v66 = (__int64 *)v66[3];
    }
  }
  while ( v66 );
  if ( v69 != v70 && v68 >= v70[4] )
  {
    v72 = *((_DWORD *)v70 + 11);
    if ( v72 < (unsigned int)v67 )
      *((_DWORD *)a1 + 16) = v72;
    v73 = (void *)std::_Rb_tree_rebalance_for_erase(v70, v69, v67, v68, v13, v71);
    operator delete(v73, 0x30u);
    --a1[20];
  }
  else
  {
LABEL_136:
    sub_AF00(a1, 0);
  }
  return 21;
}

