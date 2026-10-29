unsigned __int64 __fastcall sub_52E00(__int64 a1, __int64 a2, unsigned __int64 a3, double a4)
{
  const char *v4; // rax
  char *v6; // r14
  char v7; // dl
  __int64 byte; // r15
  __int64 v9; // r9
  char *v10; // rbp
  unsigned __int64 v11; // rbp
  char v12; // r8
  unsigned __int64 v13; // r15
  char v14; // r14
  __int64 bytes; // rax
  __int64 v17; // r14
  __int64 *v18; // r8
  unsigned __int64 v19; // r15
  __int64 v20; // r10
  _QWORD *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // r15
  _QWORD *v26; // rbp
  char v27; // al
  _BYTE *v28; // r9
  __int64 v29; // r14
  unsigned __int64 v30; // rbx
  __int64 v31; // r10
  unsigned __int8 v32; // al
  __int64 v33; // r15
  unsigned int v34; // edi
  unsigned int v35; // edi
  char v36; // r14
  __int64 v37; // r14
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // ebx
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // [rsp+0h] [rbp-4A8h]
  __int64 v45; // [rsp+0h] [rbp-4A8h]
  int v47; // [rsp+10h] [rbp-498h]
  unsigned __int64 v48; // [rsp+10h] [rbp-498h]
  char v49; // [rsp+10h] [rbp-498h]
  char v50; // [rsp+10h] [rbp-498h]
  __int64 v51; // [rsp+10h] [rbp-498h]
  char v52; // [rsp+10h] [rbp-498h]
  __int64 v53; // [rsp+10h] [rbp-498h]
  __int64 *v54; // [rsp+10h] [rbp-498h]
  __int64 v55; // [rsp+18h] [rbp-490h]
  char *v56; // [rsp+20h] [rbp-488h]
  __int64 v57; // [rsp+20h] [rbp-488h]
  __int64 v58; // [rsp+28h] [rbp-480h]
  unsigned __int64 v59; // [rsp+30h] [rbp-478h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-470h] BYREF
  __int64 v61; // [rsp+40h] [rbp-468h] BYREF
  __int128 v62; // [rsp+48h] [rbp-460h]
  _BYTE v63[8]; // [rsp+58h] [rbp-450h]
  _QWORD v64[128]; // [rsp+60h] [rbp-448h] BYREF
  char v65; // [rsp+467h] [rbp-41h] BYREF
  char v66[64]; // [rsp+468h] [rbp-40h] BYREF

  v4 = "_cls_";
  v6 = (char *)v64;
  *(_QWORD *)v66 = __readfsqword(0x28u);
  v59 = a2;
  v60 = 0;
  while ( 1 )
  {
    v7 = *v4++;
    *v6 = v7;
    if ( !v7 )
      break;
    ++v6;
    if ( v4 == (const char *)&unk_972CE )
    {
      v65 = 0;
      v6 = &v65;
      break;
    }
  }
  byte = (unsigned __int8)get_byte();
  v9 = (unsigned __int8)get_byte();
  if ( (unsigned __int64)(byte + v9) > 0x1F9 )
  {
LABEL_28:
    LOBYTE(v44) = 0;
    goto LABEL_29;
  }
  if ( !byte )
    goto LABEL_6;
  v45 = v9;
  bytes = get_bytes();
  v9 = v45;
  if ( byte != bytes )
  {
    if ( !v45 )
    {
      LOBYTE(v44) = 0;
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  v6 += byte;
LABEL_6:
  if ( v6 >= v66 )
  {
LABEL_131:
    if ( !under_debugger )
      interr();
    goto LABEL_140;
  }
  v10 = v6 + 1;
  *v6 = 95;
  if ( v6 + 1 >= v66 )
  {
    v65 = 0;
    v10 = &v65;
  }
  if ( !v9 )
  {
    *v10 = 0;
    set_name();
    LOBYTE(v44) = 1;
LABEL_11:
    a3 = v59;
    if ( v59 == -1 )
    {
      sub_52730((__int64)"%a: can't completely restore TMetaClass info\n", a4);
      remember_problem();
      goto LABEL_22;
    }
    v56 = (char *)v64;
    v11 = -1;
    v12 = 1;
    v13 = ~v59;
    if ( ~v59 > 3 )
      goto LABEL_13;
    goto LABEL_20;
  }
  v44 = v9;
  v38 = get_bytes();
  v9 = v44;
  if ( v44 != v38 )
    goto LABEL_28;
  v11 = (unsigned __int64)&v10[v44];
  v53 = v44;
  if ( v11 >= (unsigned __int64)v66 )
  {
    if ( !under_debugger )
    {
      interr();
      goto LABEL_139;
    }
LABEL_140:
    BUG();
  }
  *(_BYTE *)v11 = 0;
  set_name();
  LOBYTE(v44) = 1;
  v9 = v53;
LABEL_29:
  v17 = v9 + 1;
  if ( get_bytes() != v9 + 1 )
    goto LABEL_11;
  getseg();
  v62 = 0;
  a4 = 0.0;
  v61 = qvector_reserve();
  v18 = (__int64 *)v61;
  *(_OWORD *)(v61 + 8) = 0;
  *v18 = 0;
  v18[3] = 0;
  v18[6] = 0;
  *((_DWORD *)v18 + 18) = -1;
  *((_OWORD *)v18 + 2) = 0;
  *(_OWORD *)(v18 + 7) = 0;
  *(_QWORD *)&v62 = v62 + 1;
  v19 = v18[1];
  v20 = v19 + v17;
  if ( !__CFADD__(v19, v17) )
    goto LABEL_113;
  if ( v19 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_113:
    v57 = v20;
    v54 = v18;
    v39 = qvector_reserve();
    v40 = v54[1];
    *v54 = v39;
    memset((void *)(v39 + v40), 0, v57 - v40);
    v18 = v54;
    v54[1] = v57;
    goto LABEL_34;
  }
  if ( v19 != 0x7FFFFFFFFFFFFFFFLL )
    v18[1] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_34:
  v21 = (_QWORD *)(v19 + *v18);
  if ( (unsigned int)v17 >= 8 )
  {
    *v21 = v64[0];
    *(_QWORD *)((char *)v21 + v17 - 8) = *(_QWORD *)&v63[v17];
    qmemcpy(
      (void *)((unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFF8LL),
      (const void *)((char *)v64 - ((char *)v21 - ((unsigned __int64)(v21 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
      8LL * (((unsigned int)v17 + (_DWORD)v21 - (((_DWORD)v21 + 8) & 0xFFFFFFF8)) >> 3));
  }
  else if ( (v17 & 4) != 0 )
  {
    *(_DWORD *)v21 = v64[0];
    *(_DWORD *)((char *)v21 + v17 - 4) = *(_DWORD *)&v63[v17 + 4];
  }
  else if ( (_DWORD)v17 )
  {
    *(_BYTE *)v21 = v64[0];
    if ( (v17 & 2) != 0 )
      *(_WORD *)((char *)v21 + v17 - 2) = *(_WORD *)&v63[v17 + 6];
  }
  v22 = bin_search();
  v23 = v61;
  v11 = v22;
  if ( v61 )
  {
    if ( (_QWORD)v62 )
    {
      v48 = v22;
      v24 = 0;
      v25 = v62;
      do
      {
        v26 = (_QWORD *)(v23 + 80 * v24);
        if ( v26[6] )
        {
          v26[7] = 0;
          qfree();
        }
        if ( v26[3] )
        {
          v26[4] = 0;
          qfree();
        }
        if ( *v26 )
        {
          v26[1] = 0;
          qfree();
        }
        ++v24;
        v23 = v61;
      }
      while ( v25 != v24 );
      v11 = v48;
    }
    *(_QWORD *)&v62 = 0;
    qfree();
  }
  if ( v11 == -1 )
    goto LABEL_11;
  v61 = v11;
  v27 = sub_520F0(&v61, 0);
  if ( !v27 )
    goto LABEL_11;
  v49 = v27;
  sub_529A0(a2, v61 - a2, nullptr);
  create_strlit();
  v28 = (char *)v64 + v17;
  LOBYTE(v64[0]) = 95;
  v12 = v49;
  if ( (char *)v64 + v17 >= v66 )
    goto LABEL_131;
  *v28 = 95;
  v56 = v28 + 1;
  if ( v28 + 1 >= v66 )
  {
    v65 = 0;
    v56 = &v65;
  }
  a3 = v59;
  if ( v59 >= v11 )
    goto LABEL_22;
  v13 = v11 - v59;
  if ( v11 - v59 <= 3 )
  {
    v29 = -1;
    goto LABEL_66;
  }
LABEL_13:
  v47 = 0;
  v14 = v12;
  v55 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v61 = sub_52250(a3, 0, 0);
        if ( v61 == -1 )
        {
          if ( v14 )
          {
            if ( v11 == -1 )
              goto LABEL_20;
            v55 = -1;
          }
          else if ( v11 == -1 )
          {
            goto LABEL_20;
          }
          if ( !(unsigned __int8)get_fixups() )
          {
LABEL_139:
            v29 = v55;
            goto LABEL_68;
          }
          v14 = get_fixups() | (v13 == 4);
          if ( v14 )
            goto LABEL_20;
          v61 = sub_52250(a3 + 1, 0, 0);
          if ( v61 == -1 )
            goto LABEL_20;
          create_data();
          v59 = a3 + 1;
          num_flag();
          set_op_type();
          v47 = 0;
        }
        else if ( v11 == -1 )
        {
          sub_529A0(a3, 4, &v60);
        }
        v30 = v59;
        create_data();
        v31 = v61;
        if ( v61 )
          break;
        a3 = v30 + 4;
        v59 = a3;
        if ( a3 >= v11 )
          goto LABEL_123;
        v13 = v11 - a3;
        if ( v11 - a3 <= 3 )
          goto LABEL_64;
        v47 = 0;
        v14 = 0;
        v55 = -1;
      }
      if ( !*(_BYTE *)(a1 + 5504) )
      {
        v58 = v61;
        op_offset();
        v31 = v58;
      }
      if ( v14 )
        break;
      if ( v11 == -1 )
      {
        a3 = v30 + 4;
        v59 = a3;
        if ( a3 == -1 )
          goto LABEL_20;
        v13 = ~a3;
        if ( ~a3 <= 3 )
          goto LABEL_20;
        goto LABEL_102;
      }
      if ( v47 )
      {
        a3 = v30 + 4;
        ++v47;
        v59 = a3;
        if ( a3 >= v11 )
          goto LABEL_118;
        v13 = v11 - a3;
        if ( v11 - a3 <= 3 )
        {
LABEL_64:
          v29 = -1;
          goto LABEL_65;
        }
LABEL_102:
        v55 = -1;
      }
      else
      {
        a3 = v30 + 4;
        v59 = a3;
        if ( a3 >= v11 )
        {
          v47 = 1;
LABEL_118:
          if ( v47 && v11 == a3 )
          {
            v41 = v47;
            do
            {
              v59 -= 4LL;
              v42 = can_be_off32();
              sub_52B00(v42, 1);
              --v41;
            }
            while ( v41 );
          }
          goto LABEL_22;
        }
        v13 = v11 - a3;
        if ( v11 - a3 <= 3 )
        {
          v29 = v31;
LABEL_65:
          if ( v11 == -1 )
            goto LABEL_20;
LABEL_66:
          while ( 2 )
          {
            while ( 2 )
            {
              while ( 2 )
              {
                while ( 2 )
                {
                  if ( v13 == 1 )
                    goto LABEL_20;
                  if ( (unsigned __int8)get_fixups() )
                  {
                    get_fixups();
LABEL_20:
                    sub_52730((__int64)"%a: can't completely restore TMetaClass info\n", a4);
                    remember_problem();
                    if ( a3 < v60 )
                      auto_mark_range();
                    goto LABEL_22;
                  }
LABEL_68:
                  v32 = get_byte();
                  v33 = v32;
                  if ( !v32
                    || v11 < v32 + a3 + 1
                    || (unsigned __int8)get_fixups()
                    || v33 != get_bytes()
                    || (v34 = *v56, v50 = *v56, v34 > 0x7F)
                    || !isalpha(v34) && v50 != 95 )
                  {
LABEL_70:
                    create_data();
                    num_flag();
                    a3 += 2LL;
                    set_op_type();
                    v59 = a3;
                    if ( a3 >= v11 )
                      goto LABEL_22;
                    v29 = -1;
                    v12 = 0;
                    v13 = v11 - a3;
                    if ( v11 - a3 > 3 )
                      goto LABEL_13;
                    continue;
                  }
                  break;
                }
                v51 = v29;
                v56[v33] = 0;
                do
                {
                  v35 = v56[--v33];
                  if ( v35 <= 0x7F )
                  {
                    v36 = v56[v33];
                    if ( ((v36 != 95) & (isalnum(v35) == 0)) == 0 )
                      continue;
                  }
                  goto LABEL_70;
                }
                while ( v33 );
                v37 = v51;
                sub_52800(&v59, a4);
                v12 = 0;
                v52 = v44 & (v51 != -1);
                if ( !v52 )
                {
                  a3 = v59;
                  if ( v59 >= v11 )
                    goto LABEL_22;
                  v29 = -1;
                  v13 = v11 - v59;
                  if ( v11 - v59 > 3 )
                    goto LABEL_13;
                  continue;
                }
                break;
              }
              v43 = sub_52B00(v37, 1);
              v12 = 0;
              LOBYTE(v44) = v43;
              if ( v43 )
              {
                set_name();
                make_name_auto();
                a3 = v59;
                if ( v59 >= v11 )
                  goto LABEL_133;
                v29 = -1;
                v12 = 0;
                v13 = v11 - v59;
                if ( v11 - v59 > 3 )
                  goto LABEL_13;
                continue;
              }
              break;
            }
            a3 = v59;
            if ( v59 >= v11 )
            {
LABEL_133:
              LOBYTE(v44) = v52;
              goto LABEL_22;
            }
            v29 = -1;
            v13 = v11 - v59;
            LOBYTE(v44) = v52;
            if ( v11 - v59 <= 3 )
              continue;
            goto LABEL_13;
          }
        }
        v55 = v31;
        v47 = 1;
      }
    }
    a3 = v30 + 4;
    sub_52B00(v31, 1);
    v59 = a3;
    if ( a3 >= v11 )
      break;
    v13 = v11 - a3;
    if ( v11 - a3 <= 3 )
      goto LABEL_64;
  }
LABEL_123:
  if ( v11 == -1 )
    goto LABEL_20;
LABEL_22:
  if ( (_BYTE)v44 )
    make_name_auto();
  return *(_QWORD *)v66 - __readfsqword(0x28u);
}

