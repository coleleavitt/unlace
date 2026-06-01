__int64 __fastcall sub_A480(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbp
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  void *v20; // rax
  bool v21; // zf
  __int64 result; // rax
  unsigned __int64 *v23; // rax
  void *v24; // rax
  int flags; // eax
  __int64 v26; // rdi
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  __int64 not_tail; // rax
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // r13
  _QWORD *v38; // rax
  _QWORD *v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // r12
  __int64 v42; // rax
  _BOOL8 v43; // rdi
  _QWORD *v44; // rax
  _QWORD *v45; // r15
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _BOOL8 v55; // rdi
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  unsigned __int64 *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  _QWORD *v66; // rsi
  _QWORD *v67; // rdi
  __int64 v68; // r9
  unsigned int v69; // eax
  void *v70; // rax
  _QWORD *v71; // [rsp+8h] [rbp-90h]
  __int64 v72; // [rsp+8h] [rbp-90h]
  unsigned __int64 v73; // [rsp+10h] [rbp-88h]
  __int64 v74; // [rsp+10h] [rbp-88h]
  unsigned __int64 v75; // [rsp+10h] [rbp-88h]
  _QWORD *v76; // [rsp+18h] [rbp-80h]
  void *v77; // [rsp+18h] [rbp-80h]
  __int64 v78; // [rsp+20h] [rbp-78h]
  unsigned __int64 v79; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v80[2]; // [rsp+40h] [rbp-58h] BYREF
  char v81; // [rsp+51h] [rbp-47h]
  unsigned __int64 v82; // [rsp+58h] [rbp-40h]

  v5 = a1 + 10;
  v6 = *a1;
  v7 = (_QWORD *)a1[11];
  v82 = __readfsqword(0x28u);
  v9 = a1 + 10;
  while ( v7 )
  {
    while ( 1 )
    {
      a4 = v7[2];
      a3 = v7[3];
      if ( v6 >= v7[4] )
        break;
      v9 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !a4 )
        goto LABEL_5;
    }
    v7 = (_QWORD *)v7[3];
  }
LABEL_5:
  if ( (_QWORD *)a1[12] != v9 )
  {
    v10 = std::_Rb_tree_decrement(v9, a2, a3, a4, a5);
    if ( *(_QWORD *)(v10 + 40) >= v6 )
    {
      v14 = a1[7];
      if ( v14 != -1 )
        *(_QWORD *)(v10 + 40) = v14;
      v15 = 0;
LABEL_10:
      if ( a1[20] )
      {
        do
        {
          v16 = (_QWORD *)a1[17];
          if ( v16 )
          {
            a2 = a1[6];
            v17 = (__int64)(a1 + 16);
            do
            {
              while ( 1 )
              {
                v11 = v16[2];
                v14 = v16[3];
                if ( a2 >= v16[4] )
                  break;
                v17 = (__int64)v16;
                v16 = (_QWORD *)v16[2];
                if ( !v11 )
                  goto LABEL_16;
              }
              v16 = (_QWORD *)v16[3];
            }
            while ( v14 );
          }
          else
          {
            v17 = (__int64)(a1 + 16);
          }
LABEL_16:
          if ( a1[18] != v17 )
            v17 = std::_Rb_tree_decrement(v17, a2, v14, v11, v12);
          v18 = *(_QWORD *)(v17 + 32);
          v19 = a1[4];
          *a1 = v18;
          if ( v19 )
          {
            if ( (int)get_func_chunknum(v19, v18) >= 0 )
              goto LABEL_26;
          }
          else
          {
            v23 = (unsigned __int64 *)a1[5];
            if ( v18 >= *v23 && v18 < v23[1] )
            {
LABEL_26:
              a1[7] = -1;
              *((_DWORD *)a1 + 16) = *(_DWORD *)(v17 + 44);
              v24 = (void *)std::_Rb_tree_rebalance_for_erase(v17, a1 + 16, v14, v11, v12, v13);
              operator delete(v24, 0x30u);
              --a1[20];
              result = 18;
              if ( v15 == 1 && !a1[20] )
                return 21;
              return result;
            }
          }
          v20 = (void *)std::_Rb_tree_rebalance_for_erase(v17, a1 + 16, v14, v11, v12, v13);
          a2 = 48;
          operator delete(v20, 0x30u);
          v21 = a1[20]-- == 1;
        }
        while ( !v21 );
      }
      return 0;
    }
  }
  a2 = 4;
  flags = get_flags_ex(v6, 4);
  v15 = flags & 0x1000;
  v78 = flags & 0x10000;
  if ( (flags & 0x10000) != 0 )
  {
    if ( (flags & 0x1000) == 0 )
    {
      v26 = *a1;
      if ( a1[7] == -1 )
        a1[7] = v26;
      v15 = 1;
      goto LABEL_57;
    }
    v15 = 1;
  }
  else
  {
    if ( (flags & 0x1000) == 0 )
    {
      v37 = a1[7];
      if ( v37 != -1 )
        goto LABEL_64;
      a1[7] = *a1;
      goto LABEL_62;
    }
    v15 = 0;
  }
  if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
  {
    a2 = *a1;
    if ( (unsigned __int8)xrefblk_t_first_to(v80, *a1, 5) )
    {
      v71 = a1 + 16;
      while ( 1 )
      {
        if ( (unsigned __int8)(v81 - 18) <= 1u )
        {
          if ( *((_BYTE *)a1 + 24) && (v15 || (int)get_flags_ex(v80[0], 4) < 0) )
            return 0;
          v27 = v80[0];
          a2 = 4;
          ++v15;
          v79 = v80[0];
          if ( (~((unsigned __int16)get_flags_ex(v80[0], 4) >> 8) & 6) == 0 )
          {
            a2 = 1;
            sub_8A00(&v79, 1);
            v27 = v79;
          }
          v31 = (_QWORD *)a1[11];
          v32 = v5;
          while ( v31 )
          {
            while ( 1 )
            {
              a2 = v31[2];
              v28 = v31[3];
              if ( v27 >= v31[4] )
                break;
              v32 = v31;
              v31 = (_QWORD *)v31[2];
              if ( !a2 )
                goto LABEL_50;
            }
            v31 = (_QWORD *)v31[3];
          }
LABEL_50:
          if ( (_QWORD *)a1[12] == v32 || *(_QWORD *)(std::_Rb_tree_decrement(v32, a2, v28, v29, v30) + 40) < v27 )
            break;
        }
LABEL_52:
        if ( !(unsigned __int8)xrefblk_t_next_to(v80) )
          goto LABEL_53;
      }
      v44 = (_QWORD *)a1[17];
      if ( !v44 )
        goto LABEL_106;
      v45 = a1 + 16;
      do
      {
        while ( 1 )
        {
          v46 = v44[2];
          a2 = v44[3];
          if ( v44[4] < v27 )
            break;
          v45 = v44;
          v44 = (_QWORD *)v44[2];
          if ( !v46 )
            goto LABEL_89;
        }
        v44 = (_QWORD *)v44[3];
      }
      while ( a2 );
LABEL_89:
      if ( v71 == v45 )
      {
LABEL_106:
        v74 = (__int64)(a1 + 15);
        v57 = operator new(0x30u);
        v21 = a1[20] == 0;
        v76 = (_QWORD *)v57;
        *(_QWORD *)(v57 + 32) = v27;
        *(_DWORD *)(v57 + 44) = -1;
        if ( !v21 )
        {
          v51 = a1[19];
          v45 = nullptr;
          if ( *(_QWORD *)(v51 + 32) < v27 )
          {
LABEL_96:
            if ( v51 )
            {
              if ( v45 || (_QWORD *)v51 == v71 )
              {
                v55 = 1;
LABEL_100:
                v45 = v76;
                a2 = (unsigned __int64)v76;
                std::_Rb_tree_insert_and_rebalance(v55, v76, v51, v71);
                ++*(_QWORD *)(v74 + 40);
LABEL_101:
                v56 = *((_DWORD *)a1 + 16);
                if ( v56 < *((_DWORD *)v45 + 11) )
                  *((_DWORD *)v45 + 11) = v56;
                goto LABEL_52;
              }
              goto LABEL_143;
            }
            goto LABEL_104;
          }
        }
      }
      else
      {
        if ( v27 >= v45[4] )
          goto LABEL_101;
        v74 = (__int64)(a1 + 15);
        v47 = operator new(0x30u);
        *(_QWORD *)(v47 + 32) = v27;
        *(_DWORD *)(v47 + 44) = -1;
        a2 = v45[4];
        v76 = (_QWORD *)v47;
        if ( v27 >= a2 )
        {
          if ( a2 >= v27 )
            goto LABEL_104;
          if ( (_QWORD *)a1[19] == v45 )
          {
            v51 = (__int64)v45;
            if ( v45 )
            {
LABEL_143:
              a2 = *(_QWORD *)(v51 + 32);
LABEL_144:
              v55 = v27 < a2;
              goto LABEL_100;
            }
LABEL_104:
            if ( v76 )
            {
              a2 = 48;
              operator delete(v76, 0x30u);
            }
            goto LABEL_101;
          }
          v51 = std::_Rb_tree_increment(v45);
          if ( v27 < *(_QWORD *)(v51 + 32) )
          {
            if ( !v45[3] )
            {
              v51 = (__int64)v45;
              if ( v45 )
                goto LABEL_144;
              goto LABEL_104;
            }
            v45 = (_QWORD *)v51;
            goto LABEL_96;
          }
        }
        else
        {
          v51 = (__int64)v45;
          if ( (_QWORD *)a1[18] == v45 )
            goto LABEL_96;
          v51 = std::_Rb_tree_decrement(v45, a2, v48, v49, v50);
          if ( *(_QWORD *)(v51 + 32) < v27 )
          {
            if ( *(_QWORD *)(v51 + 24) )
              v51 = (__int64)v45;
            else
              v45 = nullptr;
            goto LABEL_96;
          }
        }
      }
      a2 = v27;
      v45 = sub_87C0(v74, v27, v52, v53, v54);
      v51 = v58;
      goto LABEL_96;
    }
  }
LABEL_53:
  if ( a1[7] == -1 )
    a1[7] = *a1;
  if ( !v78 )
    goto LABEL_62;
  v26 = *a1;
LABEL_57:
  not_tail = prev_not_tail(v26);
  a2 = not_tail;
  if ( not_tail == -1 )
    goto LABEL_62;
  v34 = a1[4];
  *a1 = not_tail;
  if ( v34 )
  {
    if ( (int)get_func_chunknum(v34, not_tail) >= 0 )
      goto LABEL_60;
LABEL_62:
    v37 = a1[7];
LABEL_64:
    v38 = (_QWORD *)a1[11];
    if ( !v38 )
      goto LABEL_116;
    a2 = *a1;
    v39 = v5;
    do
    {
      while ( 1 )
      {
        v11 = v38[2];
        v14 = v38[3];
        if ( v38[4] < a2 )
          break;
        v39 = v38;
        v38 = (_QWORD *)v38[2];
        if ( !v11 )
          goto LABEL_69;
      }
      v38 = (_QWORD *)v38[3];
    }
    while ( v14 );
LABEL_69:
    if ( v5 == v39 )
    {
LABEL_116:
      v72 = (__int64)(a1 + 9);
      v59 = (_QWORD *)operator new(0x30u);
      v11 = *a1;
      v21 = a1[14] == 0;
      v59[5] = 0;
      v41 = v59;
      v59[4] = v11;
      if ( !v21 )
      {
        v14 = a1[13];
        v39 = nullptr;
        if ( *(_QWORD *)(v14 + 32) < v11 )
        {
LABEL_76:
          if ( v14 )
          {
            if ( v5 == (_QWORD *)v14 || v39 )
            {
              v43 = 1;
LABEL_80:
              a2 = (unsigned __int64)v41;
              v39 = v41;
              std::_Rb_tree_insert_and_rebalance(v43, v41, v14, v5);
              ++*(_QWORD *)(v72 + 40);
              goto LABEL_81;
            }
            a2 = *(_QWORD *)(v14 + 32);
            v39 = (_QWORD *)v14;
LABEL_146:
            v14 = (unsigned __int64)v39;
            v43 = v11 < a2;
            goto LABEL_80;
          }
LABEL_109:
          if ( v41 )
          {
            a2 = 48;
            operator delete(v41, 0x30u);
          }
          goto LABEL_81;
        }
      }
    }
    else
    {
      if ( a2 >= v39[4] )
      {
LABEL_81:
        v39[5] = v37;
        goto LABEL_10;
      }
      v72 = (__int64)(a1 + 9);
      v40 = (_QWORD *)operator new(0x30u);
      v11 = *a1;
      v40[5] = 0;
      v41 = v40;
      v40[4] = v11;
      a2 = v39[4];
      if ( v11 >= a2 )
      {
        if ( a2 >= v11 )
          goto LABEL_109;
        if ( (_QWORD *)a1[13] != v39 )
        {
          v77 = (void *)v11;
          v61 = std::_Rb_tree_increment(v39);
          v11 = (unsigned __int64)v77;
          v14 = v61;
          if ( (unsigned __int64)v77 >= *(_QWORD *)(v61 + 32) )
            goto LABEL_118;
          if ( v39[3] )
          {
            v39 = (_QWORD *)v61;
            goto LABEL_76;
          }
        }
        if ( v39 )
          goto LABEL_146;
        goto LABEL_109;
      }
      v14 = (unsigned __int64)v39;
      if ( (_QWORD *)a1[12] == v39 )
        goto LABEL_76;
      v73 = v11;
      v42 = std::_Rb_tree_decrement(v39, a2, v39, v11, v12);
      v11 = v73;
      v14 = v42;
      if ( *(_QWORD *)(v42 + 32) < v73 )
      {
        if ( *(_QWORD *)(v42 + 24) )
          v14 = (unsigned __int64)v39;
        else
          v39 = nullptr;
        goto LABEL_76;
      }
    }
LABEL_118:
    a2 = v11;
    v75 = v11;
    v60 = sub_8700(v72, v11, v14, v11, v12);
    v11 = v75;
    v39 = v60;
    goto LABEL_76;
  }
  v62 = (unsigned __int64 *)a1[5];
  if ( a2 < *v62 || a2 >= v62[1] )
    goto LABEL_62;
LABEL_60:
  v35 = *((_DWORD *)a1 + 7);
  v36 = *((_DWORD *)a1 + 16);
  if ( v35 && v36 >= v35 )
    goto LABEL_62;
  v63 = (_QWORD *)a1[17];
  v64 = v36 + 1;
  v65 = *a1;
  v66 = a1 + 16;
  *((_DWORD *)a1 + 16) = v64;
  if ( !v63 )
    goto LABEL_138;
  v67 = a1 + 16;
  do
  {
    v68 = v63[3];
    if ( v63[4] >= v65 )
    {
      v67 = v63;
      v63 = (_QWORD *)v63[2];
    }
    else
    {
      v63 = (_QWORD *)v63[3];
    }
  }
  while ( v63 );
  if ( v66 != v67 && v65 >= v67[4] )
  {
    v69 = *((_DWORD *)v67 + 11);
    if ( v69 < (unsigned int)v64 )
      *((_DWORD *)a1 + 16) = v69;
    v70 = (void *)std::_Rb_tree_rebalance_for_erase(v67, v66, v64, v65, v12, v68);
    operator delete(v70, 0x30u);
    --a1[20];
  }
  else
  {
LABEL_138:
    if ( (~((unsigned __int16)get_flags_ex(v65, 4) >> 8) & 6) == 0 )
      sub_8A00(a1, 0);
  }
  return 21;
}

