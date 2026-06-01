__int64 __fastcall sub_CF20(__int64 a1)
{
  _QWORD *v1; // rbp
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  void *v17; // rax
  bool v18; // zf
  unsigned __int64 *v20; // rax
  void *v21; // rax
  int flags; // eax
  __int64 not_tail; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // r13
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  unsigned int v41; // eax
  _QWORD *v42; // rax
  unsigned __int64 v43; // rsi
  _QWORD *v44; // r15
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  _QWORD *v49; // r12
  unsigned __int64 v50; // rsi
  _QWORD *v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rsi
  __int64 v60; // rdx
  unsigned __int64 *v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // edx
  unsigned __int64 v64; // rcx
  _QWORD *v65; // rdi
  unsigned int v66; // eax
  void *v67; // rax
  __int64 v68; // [rsp+0h] [rbp-88h]
  __int64 v69; // [rsp+8h] [rbp-80h]
  unsigned __int64 v70; // [rsp+8h] [rbp-80h]
  _QWORD *v71; // [rsp+8h] [rbp-80h]
  unsigned __int64 v72; // [rsp+10h] [rbp-78h]
  __int64 v73; // [rsp+18h] [rbp-70h]
  __int64 v74; // [rsp+20h] [rbp-68h]
  unsigned __int64 v75; // [rsp+30h] [rbp-58h]
  char v76; // [rsp+41h] [rbp-47h]

  v1 = (_QWORD *)(a1 + 80);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD **)(a1 + 88);
  v5 = (_QWORD *)(a1 + 80);
  while ( v3 )
  {
    while ( 1 )
    {
      v6 = v3[2];
      if ( v2 >= v3[4] )
        break;
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      if ( !v6 )
        goto LABEL_5;
    }
    v3 = (_QWORD *)v3[3];
  }
LABEL_5:
  if ( *(_QWORD **)(a1 + 96) == v5 || (v7 = std::_Rb_tree_decrement(), *(_QWORD *)(v7 + 40) < v2) )
  {
    flags = get_flags_ex();
    v9 = flags & 0x1000;
    v73 = flags & 0x10000;
    if ( (flags & 0x10000) != 0 )
    {
      if ( (flags & 0x1000) == 0 )
      {
        if ( *(_QWORD *)(a1 + 56) == -1 )
          *(_QWORD *)(a1 + 56) = *(_QWORD *)a1;
        v9 = 1;
LABEL_34:
        not_tail = prev_not_tail();
        v24 = not_tail;
        if ( not_tail != -1 )
        {
          v25 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)a1 = not_tail;
          if ( v25 )
          {
            if ( (int)get_func_chunknum() >= 0 )
              goto LABEL_37;
          }
          else
          {
            v61 = *(unsigned __int64 **)(a1 + 40);
            if ( v24 >= *v61 && v24 < v61[1] )
            {
LABEL_37:
              v26 = *(_DWORD *)(a1 + 28);
              v27 = *(_DWORD *)(a1 + 64);
              if ( !v26 || v27 < v26 )
              {
                v62 = *(_QWORD **)(a1 + 136);
                v63 = v27 + 1;
                v64 = *(_QWORD *)a1;
                *(_DWORD *)(a1 + 64) = v63;
                v65 = (_QWORD *)(a1 + 128);
                if ( v62 )
                {
                  do
                  {
                    if ( v62[4] >= v64 )
                    {
                      v65 = v62;
                      v62 = (_QWORD *)v62[2];
                    }
                    else
                    {
                      v62 = (_QWORD *)v62[3];
                    }
                  }
                  while ( v62 );
                  if ( (_QWORD *)(a1 + 128) != v65 && v64 >= v65[4] )
                  {
                    v66 = *((_DWORD *)v65 + 11);
                    if ( v66 < v63 )
                      *(_DWORD *)(a1 + 64) = v66;
                    v67 = (void *)std::_Rb_tree_rebalance_for_erase();
                    operator delete(v67, 0x30u);
                    --*(_QWORD *)(a1 + 160);
                  }
                }
                return 21;
              }
            }
          }
        }
LABEL_39:
        v28 = *(_QWORD *)(a1 + 56);
LABEL_77:
        v42 = *(_QWORD **)(a1 + 88);
        if ( !v42 )
          goto LABEL_108;
        v43 = *(_QWORD *)a1;
        v44 = v1;
        do
        {
          while ( 1 )
          {
            v45 = v42[2];
            v46 = v42[3];
            if ( v42[4] < v43 )
              break;
            v44 = v42;
            v42 = (_QWORD *)v42[2];
            if ( !v45 )
              goto LABEL_82;
          }
          v42 = (_QWORD *)v42[3];
        }
        while ( v46 );
LABEL_82:
        if ( v1 == v44 )
        {
LABEL_108:
          v68 = a1 + 72;
          v57 = operator new(0x30u);
          v53 = *(_QWORD *)a1;
          v18 = *(_QWORD *)(a1 + 112) == 0;
          *(_QWORD *)(v57 + 40) = 0;
          v49 = (_QWORD *)v57;
          *(_QWORD *)(v57 + 32) = v53;
          if ( !v18 )
          {
            v51 = *(_QWORD **)(a1 + 104);
            v44 = nullptr;
            if ( v51[4] < v53 )
            {
LABEL_89:
              if ( v51 )
              {
LABEL_90:
                v44 = v49;
                std::_Rb_tree_insert_and_rebalance();
                ++*(_QWORD *)(v68 + 40);
                goto LABEL_91;
              }
LABEL_99:
              if ( v49 )
                operator delete(v49, 0x30u);
              goto LABEL_91;
            }
          }
        }
        else
        {
          if ( v43 >= v44[4] )
          {
LABEL_91:
            v44[5] = v28;
            goto LABEL_10;
          }
          v68 = a1 + 72;
          v47 = operator new(0x30u);
          v48 = *(_QWORD *)a1;
          *(_QWORD *)(v47 + 40) = 0;
          v49 = (_QWORD *)v47;
          *(_QWORD *)(v47 + 32) = v48;
          v50 = v44[4];
          if ( v48 >= v50 )
          {
            if ( v50 >= v48 )
              goto LABEL_99;
            if ( *(_QWORD **)(a1 + 104) != v44 )
            {
              v72 = v48;
              v58 = std::_Rb_tree_increment();
              v53 = v72;
              v51 = (_QWORD *)v58;
              if ( v72 >= *(_QWORD *)(v58 + 32) )
                goto LABEL_110;
              if ( v44[3] )
              {
                v44 = (_QWORD *)v58;
                goto LABEL_89;
              }
            }
            if ( v44 )
              goto LABEL_90;
            goto LABEL_99;
          }
          v51 = v44;
          if ( *(_QWORD **)(a1 + 96) == v44 )
            goto LABEL_89;
          v70 = v48;
          v52 = std::_Rb_tree_decrement();
          v53 = v70;
          v51 = (_QWORD *)v52;
          if ( *(_QWORD *)(v52 + 32) < v70 )
          {
            if ( *(_QWORD *)(v52 + 24) )
              v51 = v44;
            else
              v44 = nullptr;
            goto LABEL_89;
          }
        }
LABEL_110:
        v44 = sub_B6C0(v68, v53);
        goto LABEL_89;
      }
      v9 = 1;
    }
    else
    {
      if ( (flags & 0x1000) == 0 )
      {
        v28 = *(_QWORD *)(a1 + 56);
        if ( v28 != -1 )
          goto LABEL_77;
        *(_QWORD *)(a1 + 56) = *(_QWORD *)a1;
        goto LABEL_39;
      }
      v9 = 0;
    }
    if ( (~(_WORD)flags & 0x600) == 0 && (flags & 0x10000000) != 0 || !(unsigned __int8)xrefblk_t_first_to() )
    {
LABEL_72:
      if ( *(_QWORD *)(a1 + 56) == -1 )
        *(_QWORD *)(a1 + 56) = *(_QWORD *)a1;
      if ( !v73 )
        goto LABEL_39;
      goto LABEL_34;
    }
    while ( 1 )
    {
      if ( (unsigned __int8)(v76 - 18) <= 1u )
      {
        if ( *(_BYTE *)(a1 + 24) && (v9 || (int)get_flags_ex() < 0) )
          return 0;
        v29 = *(_QWORD **)(a1 + 88);
        ++v9;
        v30 = v1;
        if ( v29 )
        {
          do
          {
            while ( 1 )
            {
              v31 = v29[2];
              v32 = v29[3];
              if ( v75 >= v29[4] )
                break;
              v30 = v29;
              v29 = (_QWORD *)v29[2];
              if ( !v31 )
                goto LABEL_53;
            }
            v29 = (_QWORD *)v29[3];
          }
          while ( v32 );
        }
LABEL_53:
        if ( *(_QWORD **)(a1 + 96) == v30 || *(_QWORD *)(std::_Rb_tree_decrement() + 40) < v75 )
          break;
      }
LABEL_71:
      if ( !(unsigned __int8)xrefblk_t_next_to() )
        goto LABEL_72;
    }
    v33 = *(_QWORD **)(a1 + 136);
    if ( !v33 )
      goto LABEL_96;
    v34 = (_QWORD *)(a1 + 128);
    do
    {
      while ( 1 )
      {
        v35 = v33[2];
        v36 = v33[3];
        if ( v33[4] < v75 )
          break;
        v34 = v33;
        v33 = (_QWORD *)v33[2];
        if ( !v35 )
          goto LABEL_60;
      }
      v33 = (_QWORD *)v33[3];
    }
    while ( v36 );
LABEL_60:
    if ( (_QWORD *)(a1 + 128) == v34 )
    {
LABEL_96:
      v69 = a1 + 120;
      v54 = operator new(0x30u);
      v18 = *(_QWORD *)(a1 + 160) == 0;
      *(_QWORD *)(v54 + 32) = v75;
      v38 = (_QWORD *)v54;
      *(_DWORD *)(v54 + 44) = -1;
      if ( v18 || (v40 = *(_QWORD *)(a1 + 152), v34 = nullptr, *(_QWORD *)(v40 + 32) >= v75) )
      {
        v55 = sub_B780(v69, v75);
        v40 = v56;
        v34 = v55;
      }
LABEL_67:
      if ( v40 )
      {
LABEL_68:
        std::_Rb_tree_insert_and_rebalance();
        v34 = v38;
        ++*(_QWORD *)(v69 + 40);
LABEL_69:
        v41 = *(_DWORD *)(a1 + 64);
        if ( v41 < *((_DWORD *)v34 + 11) )
          *((_DWORD *)v34 + 11) = v41;
        goto LABEL_71;
      }
LABEL_94:
      if ( v38 )
      {
        v71 = v34;
        operator delete(v38, 0x30u);
        v34 = v71;
      }
      goto LABEL_69;
    }
    if ( v75 >= v34[4] )
      goto LABEL_69;
    v74 = (__int64)v34;
    v69 = a1 + 120;
    v37 = operator new(0x30u);
    v34 = (_QWORD *)v74;
    *(_QWORD *)(v37 + 32) = v75;
    v38 = (_QWORD *)v37;
    *(_DWORD *)(v37 + 44) = -1;
    v39 = *(_QWORD *)(v74 + 32);
    if ( v75 < v39 )
    {
      v40 = v74;
      if ( *(_QWORD *)(a1 + 144) == v74 )
        goto LABEL_67;
      v40 = std::_Rb_tree_decrement();
      if ( *(_QWORD *)(v40 + 32) < v75 )
      {
        v34 = nullptr;
        if ( *(_QWORD *)(v40 + 24) )
        {
          v34 = (_QWORD *)v74;
          v40 = v74;
        }
        goto LABEL_67;
      }
LABEL_116:
      v59 = sub_B780(a1 + 120, v75);
      v40 = v60;
      v34 = v59;
      goto LABEL_67;
    }
    if ( v39 >= v75 )
      goto LABEL_94;
    if ( *(_QWORD *)(a1 + 152) != v74 )
    {
      v40 = std::_Rb_tree_increment();
      if ( v75 >= *(_QWORD *)(v40 + 32) )
        goto LABEL_116;
      v34 = (_QWORD *)v74;
      if ( *(_QWORD *)(v74 + 24) )
      {
        v34 = (_QWORD *)v40;
        goto LABEL_67;
      }
    }
    if ( v34 )
      goto LABEL_68;
    goto LABEL_94;
  }
  v8 = *(_QWORD *)(a1 + 56);
  if ( v8 != -1 )
    *(_QWORD *)(v7 + 40) = v8;
  v9 = 0;
LABEL_10:
  if ( !*(_QWORD *)(a1 + 160) )
    return 0;
  while ( 1 )
  {
    v10 = *(_QWORD **)(a1 + 136);
    if ( v10 )
    {
      v11 = (_QWORD *)(a1 + 128);
      do
      {
        while ( 1 )
        {
          v12 = v10[2];
          v13 = v10[3];
          if ( *(_QWORD *)(a1 + 48) >= v10[4] )
            break;
          v11 = v10;
          v10 = (_QWORD *)v10[2];
          if ( !v12 )
            goto LABEL_16;
        }
        v10 = (_QWORD *)v10[3];
      }
      while ( v13 );
    }
    else
    {
      v11 = (_QWORD *)(a1 + 128);
    }
LABEL_16:
    v14 = *(_QWORD *)(a1 + 144);
    if ( v11 != (_QWORD *)v14 )
      v14 = std::_Rb_tree_decrement();
    v15 = *(_QWORD *)(v14 + 32);
    v16 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)a1 = v15;
    if ( !v16 )
      break;
    if ( (int)get_func_chunknum() >= 0 )
      goto LABEL_25;
LABEL_20:
    v17 = (void *)std::_Rb_tree_rebalance_for_erase();
    operator delete(v17, 0x30u);
    v18 = (*(_QWORD *)(a1 + 160))-- == 1;
    if ( v18 )
      return 0;
  }
  v20 = *(unsigned __int64 **)(a1 + 40);
  if ( v15 < *v20 || v15 >= v20[1] )
    goto LABEL_20;
LABEL_25:
  *(_QWORD *)(a1 + 56) = -1;
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(v14 + 44);
  v21 = (void *)std::_Rb_tree_rebalance_for_erase();
  operator delete(v21, 0x30u);
  --*(_QWORD *)(a1 + 160);
  if ( v9 != 1 || *(_QWORD *)(a1 + 160) )
    return 18;
  return 21;
}

