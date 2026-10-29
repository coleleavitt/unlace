__int64 __fastcall sub_36BC0(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v4; // rdx
  int *v5; // rdi
  int *v6; // rsi
  unsigned __int64 v7; // r14
  int *v8; // r15
  int *v9; // r13
  unsigned __int64 v10; // rax
  bool v11; // al
  int *v12; // rax
  int *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  int v19; // edi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  _DWORD *v25; // rcx
  int *v26; // rax
  int *v27; // r10
  __int64 v28; // rdi
  bool v29; // r12
  int *v30; // r13
  unsigned __int64 v31; // rdi
  bool v32; // r10
  int *v33; // rax
  int *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  void *v39; // r12
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  _BOOL8 v42; // rdi
  int *i; // rax
  __int64 v44; // r10
  __int64 v45; // r9
  int *v46; // rdi
  void *v47; // rax
  int v48; // eax
  int *v49; // rax
  unsigned int v50; // ebx
  __int64 v52; // rax
  _QWORD *v53; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v54; // [rsp+18h] [rbp-C0h]
  _DWORD *v55; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v56; // [rsp+20h] [rbp-B8h]
  unsigned int v57; // [rsp+20h] [rbp-B8h]
  _DWORD *v58; // [rsp+28h] [rbp-B0h]
  char v59[8]; // [rsp+30h] [rbp-A8h] BYREF
  int v60; // [rsp+38h] [rbp-A0h] BYREF
  int *v61; // [rsp+40h] [rbp-98h]
  int *v62; // [rsp+48h] [rbp-90h]
  int *v63; // [rsp+50h] [rbp-88h]
  __int64 v64; // [rsp+58h] [rbp-80h]
  int v65; // [rsp+68h] [rbp-70h] BYREF
  int *v66; // [rsp+70h] [rbp-68h]
  int *v67; // [rsp+78h] [rbp-60h]
  int *v68; // [rsp+80h] [rbp-58h]
  __int64 v69; // [rsp+88h] [rbp-50h]
  unsigned __int64 v70; // [rsp+98h] [rbp-40h]

  v54 = a2;
  v70 = __readfsqword(0x28u);
  v53 = (_QWORD *)getseg(a2);
  if ( !v53 )
    return 0;
  v5 = nullptr;
  v60 = 0;
  v61 = nullptr;
  v6 = &v65;
  v62 = &v60;
  v63 = &v60;
  v64 = 0;
  v65 = 0;
  v66 = nullptr;
  v67 = &v65;
  v68 = &v65;
  v69 = 0;
LABEL_3:
  *(_BYTE *)(a1 + 376) = 0;
  v7 = v54;
  if ( v5 )
  {
LABEL_4:
    v8 = v5;
    v9 = &v65;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *((_QWORD *)v8 + 4);
        if ( v10 >= v7 )
          break;
        v8 = *((int **)v8 + 3);
        if ( !v8 )
          goto LABEL_9;
      }
      v4 = *((_QWORD *)v8 + 2);
      if ( v7 >= v10 )
        break;
      v9 = v8;
      v8 = *((int **)v8 + 2);
      if ( !v4 )
      {
LABEL_9:
        v11 = v9 == &v65;
        goto LABEL_10;
      }
    }
    for ( i = *((int **)v8 + 3); i; i = *((int **)i + 3) )
    {
      while ( 1 )
      {
        v44 = *((_QWORD *)i + 2);
        if ( v7 >= *((_QWORD *)i + 4) )
          break;
        v9 = i;
        i = *((int **)i + 2);
        if ( !v44 )
          goto LABEL_89;
      }
    }
LABEL_89:
    while ( v4 )
    {
      while ( 1 )
      {
        v45 = *(_QWORD *)(v4 + 16);
        if ( *(_QWORD *)(v4 + 32) < v7 )
          break;
        v8 = (int *)v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v45 )
          goto LABEL_92;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
LABEL_92:
    if ( v8 != v6 || v9 != &v65 )
    {
      while ( v9 != v8 )
      {
        v46 = v8;
        v8 = (int *)std::_Rb_tree_increment(v8);
        v47 = (void *)std::_Rb_tree_rebalance_for_erase(v46, &v65);
        v6 = (int *)&qword_28;
        operator delete(v47, 0x28u);
        --v69;
      }
      goto LABEL_13;
    }
LABEL_12:
    sub_32030(v5);
    v67 = &v65;
    v66 = nullptr;
    v68 = &v65;
    v69 = 0;
    goto LABEL_13;
  }
  while ( 1 )
  {
    v11 = 1;
    v9 = &v65;
LABEL_10:
    if ( v9 == v6 && v11 )
      goto LABEL_12;
LABEL_13:
    v12 = v61;
    v13 = &v60;
    if ( v61 )
    {
      do
      {
        while ( 1 )
        {
          v14 = *((_QWORD *)v12 + 2);
          v4 = *((_QWORD *)v12 + 3);
          if ( *((_QWORD *)v12 + 4) < v7 )
            break;
          v13 = v12;
          v12 = *((int **)v12 + 2);
          if ( !v14 )
            goto LABEL_18;
        }
        v12 = *((int **)v12 + 3);
      }
      while ( v4 );
LABEL_18:
      if ( v13 != &v60 && v7 >= *((_QWORD *)v13 + 5) )
        goto LABEL_66;
    }
    if ( !(unsigned int)decode_insn(a1 + 16, v7, v4, a3) )
      goto LABEL_104;
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1) )
      break;
    v6 = *(int **)(a1 + 8);
    v16 = *(unsigned __int16 *)(a1 + 40);
    v17 = *((_QWORD *)v6 + 2);
    v4 = *(unsigned __int16 *)(a1 + 40);
    v18 = *(_DWORD *)(v17 + 104);
    if ( v16 >= v18
      && v16 < *(_DWORD *)(v17 + 108)
      && (*(_BYTE *)(*(_QWORD *)(v17 + 112) + 16LL * (v16 - v18) + 8) & 1) != 0 )
    {
LABEL_65:
      if ( v13 != &v60 )
      {
LABEL_66:
        if ( v7 < *((_QWORD *)v13 + 5) )
          goto LABEL_67;
LABEL_117:
        *((_QWORD *)v13 + 5) = v54;
        v5 = v66;
        v49 = v66;
        if ( !v69 )
          goto LABEL_120;
        v6 = v67;
        v54 = *((_QWORD *)v67 + 4);
        goto LABEL_3;
      }
LABEL_67:
      v34 = v61;
      v13 = &v60;
      if ( v61 )
      {
        do
        {
          while ( 1 )
          {
            v6 = *((int **)v34 + 2);
            v35 = *((_QWORD *)v34 + 3);
            if ( *((_QWORD *)v34 + 4) < v7 )
              break;
            v13 = v34;
            v34 = *((int **)v34 + 2);
            if ( !v6 )
              goto LABEL_72;
          }
          v34 = *((int **)v34 + 3);
        }
        while ( v35 );
LABEL_72:
        if ( v13 != &v60 && v7 >= *((_QWORD *)v13 + 4) )
          goto LABEL_117;
      }
      v36 = (_QWORD *)operator new(0x30u);
      v36[4] = v7;
      v39 = v36;
      v36[5] = 0;
      if ( v13 == &v60 )
      {
        if ( !v64 )
          goto LABEL_130;
        v41 = (__int64)v63;
        v13 = nullptr;
        if ( *((_QWORD *)v63 + 4) >= v7 )
          goto LABEL_130;
LABEL_80:
        if ( !v41 )
          goto LABEL_115;
        if ( !v13 && (int *)v41 != &v60 )
        {
          v40 = *(_QWORD *)(v41 + 32);
          v13 = (int *)v41;
          goto LABEL_84;
        }
        v42 = 1;
      }
      else
      {
        v40 = *((_QWORD *)v13 + 4);
        if ( v7 < v40 )
        {
          v41 = (__int64)v13;
          if ( v13 == v62 )
            goto LABEL_80;
          v41 = std::_Rb_tree_decrement(v13, v6, v4, v40, v38);
          if ( *(_QWORD *)(v41 + 32) < v7 )
          {
            if ( *(_QWORD *)(v41 + 24) )
              v41 = (__int64)v13;
            else
              v13 = nullptr;
            goto LABEL_80;
          }
LABEL_130:
          v13 = (int *)sub_31A40((__int64)v59, v7, v4, v37, v38);
          v41 = v4;
          goto LABEL_80;
        }
        if ( v40 >= v7 )
          goto LABEL_115;
        if ( v13 != v63 )
        {
          v56 = *((_QWORD *)v13 + 4);
          v41 = std::_Rb_tree_increment(v13);
          if ( v7 >= *(_QWORD *)(v41 + 32) )
            goto LABEL_130;
          v40 = v56;
          if ( *((_QWORD *)v13 + 3) )
          {
            v13 = (int *)v41;
            goto LABEL_80;
          }
        }
        if ( !v13 )
        {
LABEL_115:
          if ( v39 )
            operator delete(v39, 0x30u);
          goto LABEL_117;
        }
LABEL_84:
        v41 = (__int64)v13;
        v42 = v7 < v40;
      }
      v13 = (int *)v39;
      std::_Rb_tree_insert_and_rebalance(v42, v39, v41, &v60);
      ++v64;
      goto LABEL_117;
    }
    if ( (_WORD)v4 == 320 )
    {
LABEL_30:
      v19 = *(_DWORD *)(a1 + 44);
      if ( (v19 & 0x300) != 0 )
      {
        if ( (v19 & 0x100) == 0 )
          goto LABEL_104;
LABEL_32:
        if ( (_WORD)v4 == 320 )
          goto LABEL_65;
        goto LABEL_33;
      }
      v23 = *(_QWORD *)(a1 + 72);
LABEL_40:
      v24 = *(_QWORD *)(*((_QWORD *)v6 + 4) + 16LL);
      v25 = (_DWORD *)(v24 & v23);
      if ( (_DWORD *)((char *)v25 + 1) == nullptr || v24 == (_QWORD)v25 )
        goto LABEL_104;
      v20 = *(unsigned __int16 *)(a1 + 42);
      v6 = (int *)(v20 + *(_QWORD *)(a1 + 32));
      if ( v6 == v25 || (v19 & 8) != 0 )
        goto LABEL_34;
      if ( (unsigned __int64)v25 < *v53 || (unsigned __int64)v25 >= v53[1] )
      {
LABEL_104:
        v49 = v66;
        v50 = 0;
        goto LABEL_105;
      }
      v26 = v61;
      if ( !v61 )
        goto LABEL_140;
      v27 = &v60;
      do
      {
        while ( 1 )
        {
          v28 = *((_QWORD *)v26 + 2);
          v6 = *((int **)v26 + 3);
          if ( *((_QWORD *)v26 + 4) < (unsigned __int64)v25 )
            break;
          v27 = v26;
          v26 = *((int **)v26 + 2);
          if ( !v28 )
            goto LABEL_50;
        }
        v26 = *((int **)v26 + 3);
      }
      while ( v6 );
LABEL_50:
      if ( v27 == &v60 || (unsigned __int64)v25 < *((_QWORD *)v27 + 5) )
      {
LABEL_140:
        LOBYTE(v6) = v7 < (unsigned __int64)v25 || (unsigned __int64)v25 < v54;
        v29 = (char)v6;
        if ( (_BYTE)v6 )
        {
          v30 = v66;
          if ( v66 )
          {
            while ( 1 )
            {
              v31 = *((_QWORD *)v30 + 4);
              v32 = 0;
              v33 = *((int **)v30 + 3);
              if ( (unsigned __int64)v25 < v31 )
              {
                v33 = *((int **)v30 + 2);
                v32 = v7 < (unsigned __int64)v25 || (unsigned __int64)v25 < v54;
              }
              if ( !v33 )
                break;
              v30 = v33;
            }
            if ( !v32 )
              goto LABEL_60;
            if ( v67 != v30 )
              goto LABEL_132;
LABEL_61:
            if ( v30 != &v65 )
              v29 = (unsigned __int64)v25 < *((_QWORD *)v30 + 4);
LABEL_63:
            v55 = v25;
            v6 = (int *)operator new(0x28u);
            *((_QWORD *)v6 + 4) = v55;
            std::_Rb_tree_insert_and_rebalance(v29, v6, v30, &v65);
            v4 = *(unsigned __int16 *)(a1 + 40);
            ++v69;
          }
          else
          {
            v30 = &v65;
            if ( v67 == &v65 )
              goto LABEL_63;
LABEL_132:
            v58 = v25;
            v57 = *(unsigned __int16 *)(a1 + 40);
            v52 = std::_Rb_tree_decrement(v30, v6, v4, v25, v15);
            v25 = v58;
            v4 = v57;
            v31 = *(_QWORD *)(v52 + 32);
LABEL_60:
            if ( v31 < (unsigned __int64)v25 )
              goto LABEL_61;
          }
        }
      }
      if ( (_WORD)v4 == 13 )
        goto LABEL_65;
      goto LABEL_32;
    }
    if ( (unsigned __int16)v4 > 0x140u )
    {
      if ( (unsigned __int16)v4 <= 0x150u )
      {
        v19 = *(_DWORD *)(a1 + 44);
        if ( (v19 & 0x300) != 0 )
          goto LABEL_111;
        v23 = *(_QWORD *)(a1 + 112);
        goto LABEL_40;
      }
      if ( (_WORD)v4 == 2082 )
      {
        v48 = *(_DWORD *)(a1 + 44);
        if ( (v48 & 0x300) == 0 )
          goto LABEL_104;
LABEL_109:
        if ( (v48 & 0x100) == 0 )
          goto LABEL_104;
      }
    }
    else
    {
      if ( (_WORD)v4 == 14 )
      {
        v19 = *(_DWORD *)(a1 + 44);
        if ( (v19 & 0x300) != 0 )
        {
LABEL_111:
          if ( (v19 & 0x100) == 0 )
            goto LABEL_104;
          goto LABEL_33;
        }
        v23 = *(_QWORD *)(a1 + 152);
        goto LABEL_40;
      }
      if ( (unsigned __int16)v4 > 0xEu )
      {
        v4 = (unsigned int)(v4 - 15);
        if ( (unsigned __int16)v4 <= 1u )
        {
          v48 = *(_DWORD *)(a1 + 44);
          if ( (v48 & 0x300) == 0 )
            goto LABEL_104;
          goto LABEL_109;
        }
      }
      else if ( (_WORD)v4 == 13 )
      {
        goto LABEL_30;
      }
    }
LABEL_33:
    v20 = *(unsigned __int16 *)(a1 + 42);
LABEL_34:
    v21 = v7 + v20;
    if ( v21 >= v53[1] )
      goto LABEL_65;
    v22 = *(unsigned __int16 *)(a1 + 40);
    v5 = v66;
    v7 = v21;
    v6 = v67;
    LOBYTE(v4) = (_WORD)v22 != 13;
    LOBYTE(v22) = (_WORD)v22 != 320;
    v4 = v22 & (unsigned int)v4;
    *(_BYTE *)(a1 + 376) = v4;
    if ( v5 )
      goto LABEL_4;
  }
  v49 = v66;
LABEL_120:
  v50 = 1;
LABEL_105:
  sub_32030(v49);
  sub_31C80(v61);
  return v50;
}

