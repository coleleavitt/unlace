unsigned __int64 __fastcall sub_1B600(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  int v8; // r12d
  unsigned __int64 *v9; // rax
  int v10; // eax
  unsigned __int64 v11; // r12
  int *v12; // rbp
  int *v13; // rax
  bool v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbp
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r14
  int *v21; // rbx
  unsigned __int64 v22; // rdx
  char v23; // cl
  int *v24; // rax
  bool v25; // dl
  __int64 v26; // rax
  int *v27; // rbx
  unsigned __int64 v28; // rdx
  char v29; // cl
  int *v30; // rax
  bool v31; // r15
  __int64 v32; // rax
  __int64 i; // rbx
  __int64 v34; // rbp
  __int64 j; // rbx
  __int64 v36; // rbp
  int *v37; // rbx
  unsigned __int64 v38; // rdx
  char v39; // cl
  int *v40; // rax
  bool v41; // r14
  __int64 v42; // rax
  bool v44; // [rsp+Fh] [rbp-239h]
  int v45; // [rsp+18h] [rbp-230h] BYREF
  int *v46; // [rsp+20h] [rbp-228h]
  int *v47; // [rsp+28h] [rbp-220h]
  int *v48; // [rsp+30h] [rbp-218h]
  __int64 v49; // [rsp+38h] [rbp-210h]
  int v50; // [rsp+48h] [rbp-200h] BYREF
  int *v51; // [rsp+50h] [rbp-1F8h]
  int *v52; // [rsp+58h] [rbp-1F0h]
  int *v53; // [rsp+60h] [rbp-1E8h]
  __int64 v54; // [rsp+68h] [rbp-1E0h]
  int v55; // [rsp+78h] [rbp-1D0h] BYREF
  int *v56; // [rsp+80h] [rbp-1C8h]
  int *v57; // [rsp+88h] [rbp-1C0h]
  int *v58; // [rsp+90h] [rbp-1B8h]
  __int64 v59; // [rsp+98h] [rbp-1B0h]
  __int128 v60; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-198h]
  __int64 v62; // [rsp+B8h] [rbp-190h]
  __int64 v63; // [rsp+C0h] [rbp-188h]
  _BYTE v64[16]; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int64 v65; // [rsp+D8h] [rbp-170h]
  unsigned __int64 v66; // [rsp+208h] [rbp-40h] BYREF

  v1 = 117;
  v66 = __readfsqword(0x28u);
  v45 = 0;
  v46 = nullptr;
  v47 = &v45;
  v48 = &v45;
  v49 = 0;
  v4 = netnode_supfirst(*(_QWORD *)(a1 + 104), 117);
LABEL_2:
  while ( 2 )
  {
    if ( v4 != -1 )
    {
LABEL_3:
      v7 = node2ea(v4, v1, v2, v3, v5, v6);
      v4 = netnode_supnext(*(_QWORD *)(a1 + 104), v4, 117);
      v8 = 10;
      while ( 1 )
      {
        v9 = (unsigned __int64 *)v64;
        v61 = -1;
        v62 = 0;
        v63 = 0;
        v60 = -1;
        do
        {
          *(_WORD *)v9 = 0;
          v9 += 5;
          *((_WORD *)v9 - 19) = 0;
          *((_WORD *)v9 - 18) = 0;
          *((_DWORD *)v9 - 2) = 0;
          *((_WORD *)v9 - 17) = 0;
          *((_OWORD *)v9 - 2) = 0;
          *(v9 - 2) = 0;
        }
        while ( &v66 != v9 );
        v1 = 4;
        if ( (~((unsigned __int16)get_flags_ex(v7, 4, 0) >> 8) & 6) != 0 )
          goto LABEL_2;
        v1 = v7;
        if ( (int)decode_insn(&v60, v7, v2, 0.0) <= 0 )
          goto LABEL_2;
        v10 = sub_15C30(v62);
        if ( v10 == -1 )
          goto LABEL_2;
        if ( v10 )
          break;
        v7 += WORD1(v62);
        if ( !--v8 )
          goto LABEL_2;
      }
      if ( v64[1] != 7 )
        continue;
      v11 = v65;
      if ( v65 == -1 )
        continue;
      v12 = v46;
      if ( v46 )
      {
        while ( 1 )
        {
          v2 = *((_QWORD *)v12 + 4);
          v1 = *((_QWORD *)v12 + 2);
          v3 = 0;
          v13 = *((int **)v12 + 3);
          if ( v65 < v2 )
          {
            v13 = *((int **)v12 + 2);
            v3 = 1;
          }
          if ( !v13 )
            break;
          v12 = v13;
        }
        if ( !(_BYTE)v3 )
        {
LABEL_19:
          if ( v2 >= v11 )
            continue;
          goto LABEL_20;
        }
        if ( v47 == v12 )
        {
LABEL_20:
          v14 = 1;
          if ( v12 != &v45 )
            v14 = v11 < *((_QWORD *)v12 + 4);
LABEL_22:
          v15 = operator new(0x28u);
          *(_QWORD *)(v15 + 32) = v11;
          v1 = v15;
          std::_Rb_tree_insert_and_rebalance(v14, v15, v12, &v45);
          ++v49;
          if ( v4 != -1 )
            goto LABEL_3;
          break;
        }
      }
      else
      {
        v12 = v47;
        if ( v47 == &v45 )
        {
          v14 = 1;
          goto LABEL_22;
        }
        v12 = &v45;
      }
      v2 = *(_QWORD *)(std::_Rb_tree_decrement(v12) + 32);
      goto LABEL_19;
    }
    break;
  }
  v16 = 117;
  netnode_supdel_all(*(_QWORD *)(a1 + 104), 117);
  if ( !v49 )
    goto LABEL_79;
  v18 = (__int64)v47;
  v50 = 0;
  v51 = nullptr;
  v52 = &v50;
  v53 = &v50;
  v54 = 0;
  v55 = 0;
  v56 = nullptr;
  v57 = &v55;
  v58 = &v55;
  v59 = 0;
  if ( v47 == &v45 )
    goto LABEL_78;
  do
  {
    v19 = *(_QWORD *)(v18 + 32);
    v20 = sub_15C80(v19, v16, v17);
    if ( v20 != -1 )
    {
      v21 = v56;
      if ( v56 )
      {
        while ( 1 )
        {
          v22 = *((_QWORD *)v21 + 4);
          v16 = *((_QWORD *)v21 + 2);
          v23 = 0;
          v24 = *((int **)v21 + 3);
          if ( v19 < v22 )
          {
            v24 = *((int **)v21 + 2);
            v23 = 1;
          }
          if ( !v24 )
            break;
          v21 = v24;
        }
        if ( !v23 )
        {
LABEL_33:
          if ( v22 >= v19 )
            goto LABEL_37;
          goto LABEL_34;
        }
        if ( v57 == v21 )
        {
LABEL_34:
          v25 = 1;
          if ( v21 != &v55 )
            v25 = v19 < *((_QWORD *)v21 + 4);
          goto LABEL_36;
        }
      }
      else
      {
        v21 = &v55;
        if ( v57 == &v55 )
        {
          v21 = &v55;
          v25 = 1;
LABEL_36:
          v44 = v25;
          v26 = operator new(0x28u);
          *(_QWORD *)(v26 + 32) = v19;
          v16 = v26;
          std::_Rb_tree_insert_and_rebalance(v44, v26, v21, &v55);
          ++v59;
LABEL_37:
          v27 = v51;
          if ( v51 )
          {
            while ( 1 )
            {
              v28 = *((_QWORD *)v27 + 4);
              v16 = *((_QWORD *)v27 + 2);
              v29 = 0;
              v30 = *((int **)v27 + 3);
              if ( v20 < v28 )
              {
                v30 = *((int **)v27 + 2);
                v29 = 1;
              }
              if ( !v30 )
                break;
              v27 = v30;
            }
            if ( !v29 )
            {
LABEL_44:
              if ( v28 >= v20 )
                goto LABEL_48;
              goto LABEL_45;
            }
            if ( v52 == v27 )
            {
LABEL_45:
              v31 = 1;
              if ( v27 != &v50 )
                v31 = v20 < *((_QWORD *)v27 + 4);
              goto LABEL_47;
            }
          }
          else
          {
            v27 = v52;
            if ( v52 == &v50 )
            {
              v31 = 1;
LABEL_47:
              v32 = operator new(0x28u);
              *(_QWORD *)(v32 + 32) = v20;
              v16 = v32;
              std::_Rb_tree_insert_and_rebalance(v31, v32, v27, &v50);
              ++v54;
              goto LABEL_48;
            }
            v27 = &v50;
          }
          v28 = *(_QWORD *)(std::_Rb_tree_decrement(v27) + 32);
          goto LABEL_44;
        }
      }
      v22 = *(_QWORD *)(std::_Rb_tree_decrement(v21) + 32);
      goto LABEL_33;
    }
    v37 = v51;
    if ( v51 )
    {
      while ( 1 )
      {
        v38 = *((_QWORD *)v37 + 4);
        v16 = *((_QWORD *)v37 + 2);
        v39 = 0;
        v40 = *((int **)v37 + 3);
        if ( v19 < v38 )
        {
          v40 = *((int **)v37 + 2);
          v39 = 1;
        }
        if ( !v40 )
          break;
        v37 = v40;
      }
      if ( v39 )
      {
        if ( v52 == v37 )
        {
LABEL_71:
          v41 = 1;
          if ( v37 != &v50 )
            v41 = v19 < *((_QWORD *)v37 + 4);
          goto LABEL_73;
        }
LABEL_81:
        v38 = *(_QWORD *)(std::_Rb_tree_decrement(v37) + 32);
      }
      if ( v38 >= v19 )
        goto LABEL_48;
      goto LABEL_71;
    }
    v37 = &v50;
    if ( v52 != &v50 )
      goto LABEL_81;
    v41 = 1;
LABEL_73:
    v42 = operator new(0x28u);
    *(_QWORD *)(v42 + 32) = v19;
    v16 = v42;
    std::_Rb_tree_insert_and_rebalance(v41, v42, v37, &v50);
    ++v54;
LABEL_48:
    v18 = std::_Rb_tree_increment(v18);
  }
  while ( (int *)v18 != &v45 );
  for ( i = (__int64)v52; (int *)i != &v50; i = std::_Rb_tree_increment(i) )
  {
    while ( 1 )
    {
      v34 = *(_QWORD *)(i + 32);
      if ( (unsigned __int8)sub_1A5E0(v34) )
        break;
      i = std::_Rb_tree_increment(i);
      if ( (int *)i == &v50 )
        goto LABEL_54;
    }
    auto_mark_range(v34, v34 + 1, 20);
    auto_mark_range(v34, v34 + 1, 30);
  }
LABEL_54:
  for ( j = (__int64)v57; (int *)j != &v55; j = std::_Rb_tree_increment(j) )
  {
    v36 = *(_QWORD *)(j + 32);
    if ( (unsigned __int8)sub_1A5E0(v36) )
    {
      auto_mark_range(v36, v36 + 1, 20);
      auto_mark_range(v36, v36 + 1, 30);
    }
  }
LABEL_78:
  sub_1AFB0(v56);
  sub_1AFB0(v51);
LABEL_79:
  sub_1AFB0(v46);
  return v66 - __readfsqword(0x28u);
}

