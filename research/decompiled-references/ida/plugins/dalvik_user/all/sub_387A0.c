__int64 __fastcall sub_387A0(const char *a1, char *a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  __int64 v6; // r12
  unsigned __int8 v7; // cl
  __int64 v8; // rbx
  unsigned int type_ordinal; // eax
  int v10; // ebx
  unsigned int tinfo_property; // eax
  const char *v12; // rcx
  const char *v13; // rdx
  unsigned int v14; // r15d
  char tinfo; // r12
  int *v17; // rax
  int *v18; // rdx
  unsigned int v19; // eax
  int v20; // eax
  char v21; // r12
  _QWORD *v22; // rax
  unsigned int v23; // eax
  __int64 *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rbx
  unsigned __int64 v29; // r8
  size_t v30; // r9
  unsigned __int64 v31; // r8
  size_t v32; // r9
  const char *v33; // rsi
  int v34; // eax
  _BYTE *v35; // rsi
  _QWORD *v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  int v39; // r12d
  __int64 v40; // rax
  void *v41; // rbx
  size_t v42; // [rsp+8h] [rbp-168h]
  size_t v43; // [rsp+8h] [rbp-168h]
  unsigned __int64 v44; // [rsp+10h] [rbp-160h]
  unsigned __int64 v45; // [rsp+10h] [rbp-160h]
  unsigned __int64 v46; // [rsp+10h] [rbp-160h]
  unsigned __int64 v47; // [rsp+10h] [rbp-160h]
  void *src; // [rsp+18h] [rbp-158h]
  void *srca; // [rsp+18h] [rbp-158h]
  unsigned int v50; // [rsp+28h] [rbp-148h]
  __int64 *v51; // [rsp+28h] [rbp-148h]
  size_t n; // [rsp+30h] [rbp-140h]
  size_t na; // [rsp+30h] [rbp-140h]
  size_t nb; // [rsp+30h] [rbp-140h]
  int *v57; // [rsp+48h] [rbp-128h]
  _QWORD *v58; // [rsp+48h] [rbp-128h]
  __int64 v59; // [rsp+80h] [rbp-F0h] BYREF
  __int128 v60; // [rsp+88h] [rbp-E8h]
  _BYTE v61[24]; // [rsp+A0h] [rbp-D0h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-B8h]
  void *dest; // [rsp+C8h] [rbp-A8h] BYREF
  __int128 v64; // [rsp+D0h] [rbp-A0h]
  _OWORD v65[3]; // [rsp+E0h] [rbp-90h] BYREF
  __int64 v66; // [rsp+110h] [rbp-60h]
  int v67; // [rsp+118h] [rbp-58h]
  __int64 v68; // [rsp+120h] [rbp-50h]
  char v69; // [rsp+128h] [rbp-48h]
  unsigned __int64 v70; // [rsp+138h] [rbp-38h]

  v4 = (__int64)a1;
  v70 = __readfsqword(0x28u);
  if ( (debug & 0x40000) != 0 )
  {
    a1 = "DEXTIF: Ask for tinfo for signature: `%s do_not_expand_struct=%d\n";
    sub_111A0((__int64)"DEXTIF: Ask for tinfo for signature: `%s do_not_expand_struct=%d\n", a2, a4);
    if ( v4 )
      goto LABEL_3;
  }
  else if ( a1 )
  {
LABEL_3:
    v6 = sub_135E0(a1, a2);
    v7 = *a2 - 66;
    if ( v7 > 0x19u )
      goto LABEL_32;
    v8 = (1LL << v7) & 0x1120197;
    if ( ((1LL << v7) & 0x1120197) != 0 )
    {
      v14 = sub_33B10(v4, a2);
LABEL_31:
      clear_tinfo_t();
      return v14;
    }
    if ( *a2 == 91 )
    {
      v59 = 0;
      if ( (unsigned __int8)sub_387A0(&v59, a2 + 1, 1, 0) )
      {
        *(_OWORD *)v61 = 0u;
        copy_tinfo_t();
        tinfo = create_tinfo();
        clear_tinfo_t();
        if ( tinfo )
        {
          clear_tinfo_t();
          goto LABEL_17;
        }
      }
      clear_tinfo_t();
      goto LABEL_32;
    }
    if ( *a2 != 76 )
    {
LABEL_32:
      v14 = 0;
      goto LABEL_31;
    }
    v59 = 0;
    v60 = 0;
    sub_32350((__int64)&v59, (__int64)a2);
    type_ordinal = get_type_ordinal();
    v50 = type_ordinal;
    if ( type_ordinal )
    {
      *(_QWORD *)&v61[8] = type_ordinal;
      *(_WORD *)&v61[16] = 257;
      *(_QWORD *)v61 = get_idati();
      create_tinfo();
      if ( a4 || !get_tinfo_property() )
      {
        v20 = strcmp(a2, "Ljava/lang/String;");
        *(_WORD *)&v61[16] = 1;
        v21 = a3 & (v20 != 0);
        *(_QWORD *)&v61[8] = v50;
        *(_QWORD *)v61 = get_idati();
        create_tinfo();
        if ( v21 )
          sub_32B80();
        goto LABEL_46;
      }
      if ( (debug & 0x40000) != 0 )
        sub_111A0((__int64)"DEXTIF: resolve forward reference `%s\n", a2);
      clear_tinfo_t();
    }
    if ( !strcmp(a2, "Ljava/lang/String;") )
    {
      create_tinfo();
      *(_OWORD *)v61 = 0;
      copy_tinfo_t();
      *(_QWORD *)&v61[16] = 0;
      copy_tinfo_t();
      LODWORD(v62) = 0;
      WORD2(v62) = 0;
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      alloc_type_ordinals();
      memset(v61, 0, sizeof(v61));
      sub_135E0(0, 1);
      if ( *a2 == 76 )
        sub_32350((__int64)v61, (__int64)a2);
      v10 = save_tinfo();
      if ( *(_QWORD *)v61 )
      {
        *(_QWORD *)&v61[8] = 0;
        qfree();
      }
      if ( !v10 )
      {
        tinfo_property = get_tinfo_property();
        *(_WORD *)&v61[16] = 1;
        *(_QWORD *)&v61[8] = tinfo_property;
        *(_QWORD *)v61 = get_idati();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_15;
      }
      clear_tinfo_t();
      clear_tinfo_t();
      goto LABEL_50;
    }
    memset(v61, 0, sizeof(v61));
    if ( a2 )
    {
      n = strlen(a2);
      *(_QWORD *)v61 = qvector_reserve();
      *(_QWORD *)&v61[8] = n + 1;
      memmove(*(void **)v61, a2, n);
      *(_BYTE *)(*(_QWORD *)v61 + n) = 0;
      na = *(_QWORD *)v61;
      v17 = (int *)sub_38160((__int64)&qword_7FC40, (__int64)v61);
      v18 = v17;
      if ( na )
      {
        nb = (size_t)v17;
        *(_QWORD *)&v61[8] = 0;
        qfree();
        v18 = (int *)nb;
      }
    }
    else
    {
      v18 = (int *)sub_38160((__int64)&qword_7FC40, (__int64)v61);
    }
    if ( v18 != &dword_7FC48 )
    {
      v19 = v18[14];
      v57 = v18;
      if ( v19 || (v19 = alloc_type_ordinals(), (v57[14] = v19) != 0) )
      {
        *(_WORD *)&v61[16] = 1;
        *(_QWORD *)&v61[8] = v19;
        *(_QWORD *)v61 = get_idati();
        create_tinfo();
        *(_OWORD *)v61 = 0;
        copy_tinfo_t();
        *(_QWORD *)&v61[16] = 0;
        copy_tinfo_t();
        LODWORD(v62) = 0;
        WORD2(v62) = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
        goto LABEL_15;
      }
LABEL_50:
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        qfree();
      }
      goto LABEL_32;
    }
    sub_34710((__int64)v61, a2);
    v22 = sub_23D40(v6 + 1104, (__int64)v61);
    if ( v22 == (_QWORD *)(v6 + 1112) )
    {
      if ( *(_QWORD *)v61 )
      {
        *(_QWORD *)&v61[8] = 0;
        qfree();
        if ( (debug & 0x40000) == 0 )
        {
LABEL_61:
          if ( v50 )
          {
            *(_WORD *)&v61[16] = 1;
            *(_QWORD *)&v61[8] = v50;
            *(_QWORD *)v61 = get_idati();
            create_tinfo();
LABEL_63:
            v23 = get_tinfo_property();
            *(_WORD *)&v61[16] = 1;
            *(_QWORD *)&v61[8] = v23;
            *(_QWORD *)v61 = get_idati();
            create_tinfo();
            if ( a3 )
            {
              *(_OWORD *)v61 = 0;
              copy_tinfo_t();
              *(_QWORD *)&v61[16] = 0;
              copy_tinfo_t();
              LODWORD(v62) = 0;
              WORD2(v62) = 0;
              clear_tinfo_t();
              clear_tinfo_t();
              copy_tinfo_t();
              create_tinfo();
              clear_tinfo_t();
              clear_tinfo_t();
              clear_tinfo_t();
            }
LABEL_46:
            clear_tinfo_t();
            clear_tinfo_t();
LABEL_15:
            if ( !v59 )
            {
LABEL_17:
              if ( (debug & 0x40000) != 0 )
              {
                memset(v61, 0, sizeof(v61));
                print_tinfo();
                if ( (debug & 0x40000) != 0 )
                {
                  v12 = "";
                  if ( a3 )
                    v12 = "POINTER if object";
                  v13 = nptr;
                  if ( *(_QWORD *)&v61[8] )
                    v13 = *(const char **)v61;
                  sub_111A0((__int64)"DEXTIF: Retrieved type for `%s: %s (%s)\n", a2, v13, v12);
                }
                if ( *(_QWORD *)v61 )
                {
                  *(_QWORD *)&v61[8] = 0;
                  qfree();
                }
              }
              copy_tinfo_t();
              v14 = 1;
              goto LABEL_31;
            }
LABEL_16:
            *(_QWORD *)&v60 = 0;
            qfree();
            goto LABEL_17;
          }
          *(_QWORD *)&v61[8] = "";
          *(_WORD *)&v61[16] = 0;
          *(_QWORD *)v61 = get_idati();
          create_tinfo();
          if ( !(unsigned int)save_tinfo() )
            goto LABEL_63;
LABEL_133:
          clear_tinfo_t();
          goto LABEL_50;
        }
      }
      else if ( (debug & 0x40000) == 0 )
      {
        goto LABEL_61;
      }
      goto LABEL_59;
    }
    v24 = sub_25060((_QWORD *)(v6 + 1040), *(_QWORD *)(*(_QWORD *)(v6 + 1080) + 72LL * *((int *)v22 + 14) + 8));
    if ( *(_QWORD *)v61 )
    {
      *(_QWORD *)&v61[8] = 0;
      qfree();
    }
    if ( (debug & 0x40000) != 0 )
    {
      if ( !v24 )
      {
LABEL_59:
        sub_111A0((__int64)"DEXTIF: fields.size()=%zu\n", 0xFFFFFFFFFFFFFFFFLL);
        goto LABEL_60;
      }
      sub_111A0((__int64)"DEXTIF: fields.size()=%zu\n", v24[1]);
    }
    if ( v24 )
    {
      if ( !a4 )
      {
        sub_34710((__int64)v61, a2);
        *(_DWORD *)sub_38580(&qword_7FC40, (__int64)v61) = v50;
        if ( *(_QWORD *)v61 )
        {
          *(_QWORD *)&v61[8] = 0;
          qfree();
        }
        memset(v61, 0, sizeof(v61));
        dest = nullptr;
        LODWORD(v64) = 1;
        v62 = 0;
        create_tinfo();
        v25 = *(_QWORD *)v61;
        if ( *(_QWORD *)v61 )
        {
          if ( *(_QWORD *)&v61[8] )
          {
            v51 = v24;
            v26 = v8;
            v27 = *(_QWORD *)&v61[8];
            do
            {
              v58 = (_QWORD *)(v25 + 144 * v26);
              clear_tinfo_t();
              if ( v58[5] )
              {
                v58[6] = 0;
                qfree();
              }
              if ( v58[2] )
              {
                v58[3] = 0;
                qfree();
              }
              ++v26;
              v25 = *(_QWORD *)v61;
            }
            while ( v27 != v26 );
            v24 = v51;
          }
          *(_QWORD *)&v61[8] = 0;
          qfree();
        }
        if ( 112 * v24[1] )
        {
          v28 = *v24;
          do
          {
            v67 = -1;
            dest = nullptr;
            v66 = 1;
            v68 = 0;
            v69 = 0;
            memset(v61, 0, sizeof(v61));
            v62 = 0;
            v64 = 0;
            v65[0] = 0;
            *(_QWORD *)v61 = 8 * get_tinfo_size();
            if ( &v61[16] != (_BYTE *)(v28 + 16) )
            {
              v29 = *(_QWORD *)(v28 + 24);
              if ( v29 && (v30 = v29 - 1, v29 != 1) )
              {
                srca = *(void **)(v28 + 16);
                if ( *((_QWORD *)&v62 + 1) < v29 )
                {
                  v43 = v29 - 1;
                  v47 = *(_QWORD *)(v28 + 24);
                  *(_QWORD *)&v61[16] = qvector_reserve();
                  v30 = v43;
                  v29 = v47;
                }
                *(_QWORD *)&v62 = v29;
                v45 = v29;
                memmove(*(void **)&v61[16], srca, v30);
                *(_BYTE *)(*(_QWORD *)&v61[16] + v45 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v62 = 0;
              }
            }
            if ( &dest != (void **)(v28 + 40) )
            {
              v31 = *(_QWORD *)(v28 + 48);
              if ( v31 && (v32 = v31 - 1, v31 != 1) )
              {
                src = *(void **)(v28 + 40);
                if ( *((_QWORD *)&v64 + 1) < v31 )
                {
                  v42 = v31 - 1;
                  v46 = *(_QWORD *)(v28 + 48);
                  dest = (void *)qvector_reserve();
                  v32 = v42;
                  v31 = v46;
                }
                *(_QWORD *)&v64 = v31;
                v44 = v31;
                memmove(dest, src, v32);
                *((char *)dest + v44 - 1) = 0;
              }
              else
              {
                *(_QWORD *)&v64 = 0;
              }
            }
            v33 = nptr;
            if ( *(_QWORD *)(v28 + 48) )
              v33 = *(const char **)(v28 + 40);
            if ( !(unsigned __int8)sub_387A0(v65, v33, 1, 1) )
              create_tinfo();
            *(_QWORD *)&v61[8] = 8 * get_tinfo_size();
            v34 = set_tinfo_property4();
            if ( v34 == -3 || v34 == -21 )
            {
              get_tinfo_property();
              sub_13B20((__int64 *)&v61[16]);
              set_tinfo_property4();
            }
            clear_tinfo_t();
            if ( dest )
            {
              *(_QWORD *)&v64 = 0;
              qfree();
            }
            if ( *(_QWORD *)&v61[16] )
            {
              *(_QWORD *)&v62 = 0;
              qfree();
            }
            v28 += 112;
          }
          while ( v28 != *v24 + 112 * v24[1] );
        }
        sub_34710((__int64)v61, a2);
        v35 = v61;
        v36 = sub_38160((__int64)&qword_7FC40, (__int64)v61);
        v37 = *(_QWORD *)v61;
        v38 = v36;
        if ( *(_QWORD *)v61 )
        {
          *(_QWORD *)&v61[8] = 0;
          qfree();
        }
        if ( !*((_DWORD *)v38 + 14) )
        {
          v35 = (_BYTE *)(&dword_0 + 1);
          v37 = 0;
          alloc_type_ordinals();
        }
        memset(v61, 0, sizeof(v61));
        sub_135E0(v37, v35);
        if ( *a2 == 76 )
          sub_32350((__int64)v61, (__int64)a2);
        v39 = save_tinfo();
        if ( *(_QWORD *)v61 )
        {
          *(_QWORD *)&v61[8] = 0;
          qfree();
        }
        if ( !v39 )
        {
          v40 = std::_Rb_tree_rebalance_for_erase();
          v41 = (void *)v40;
          if ( *(_QWORD *)(v40 + 32) )
          {
            *(_QWORD *)(v40 + 40) = 0;
            qfree();
          }
          operator delete(v41, 0x40u);
          --qword_7FC68;
          *(_QWORD *)&v61[8] = (unsigned int)get_tinfo_property();
          *(_WORD *)&v61[16] = 1;
          *(_QWORD *)v61 = get_idati();
          create_tinfo();
          if ( a3 )
            sub_32B80();
          clear_tinfo_t();
          clear_tinfo_t();
          if ( !v59 )
            goto LABEL_17;
          goto LABEL_16;
        }
        goto LABEL_133;
      }
      goto LABEL_124;
    }
LABEL_60:
    if ( !a4 )
      goto LABEL_61;
LABEL_124:
    if ( (debug & 0x40000) != 0 )
      sub_111A0((__int64)"DEXTIF: define forward reference `%s\n", a2);
    goto LABEL_61;
  }
  return 0;
}

