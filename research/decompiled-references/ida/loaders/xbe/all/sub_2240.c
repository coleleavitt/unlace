unsigned __int64 __fastcall sub_2240(__int64 a1, __int16 a2, double a3, double a4)
{
  __int64 v5; // rbx
  __int16 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char *v9; // r14
  __int64 selector; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v15; // rbp
  __int64 v16; // rbx
  int dword; // eax
  __int64 ioport; // rax
  void *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r14
  __int64 v22; // r13
  _QWORD *v23; // rbp
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 i; // r15
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // [rsp+8h] [rbp-630h]
  __int64 v35; // [rsp+8h] [rbp-630h]
  __int64 v36; // [rsp+10h] [rbp-628h] BYREF
  __int128 v37; // [rsp+18h] [rbp-620h]
  _BYTE v38[4]; // [rsp+30h] [rbp-608h] BYREF
  unsigned int v39; // [rsp+34h] [rbp-604h]
  int v40; // [rsp+38h] [rbp-600h]
  int v41; // [rsp+3Ch] [rbp-5FCh]
  int v42; // [rsp+40h] [rbp-5F8h]
  int v43; // [rsp+44h] [rbp-5F4h]
  _BYTE v44[260]; // [rsp+70h] [rbp-5C8h] BYREF
  int v45; // [rsp+174h] [rbp-4C4h]
  unsigned int v46; // [rsp+18Ch] [rbp-4ACh]
  int v47; // [rsp+190h] [rbp-4A8h]
  int v48; // [rsp+198h] [rbp-4A0h]
  unsigned int v49; // [rsp+19Ch] [rbp-49Ch]
  int v50; // [rsp+1C8h] [rbp-470h]
  char s1[4]; // [rsp+1F0h] [rbp-448h] BYREF
  __int16 v52; // [rsp+1F4h] [rbp-444h]
  unsigned __int64 v53; // [rsp+5F8h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  v5 = qlsize();
  qlseek(a1, 0, 0);
  lread(a1, v44, 376);
  v6 = a2 & 0x200;
  v7 = 56 * v46 + 376;
  if ( v46 > 0x4924924 || (unsigned int)v7 <= 0x177 || v7 > v5 )
    sub_1990((__int64)"Failed reading X-box XBE file header", v44, v7);
  v34 = -1;
  v8 = 0;
  if ( v46 )
  {
    while ( 1 )
    {
      v13 = (unsigned int)(v47 - v45) + 56LL * (int)v8;
      if ( v13 != qlseek(a1, v13, 0) )
        break;
      lread(a1, v38, 56);
      if ( !v6 )
      {
        qlgetz(a1, (unsigned int)(v43 - v45), s1, 1024);
        v9 = sub_1360(s1);
        selector = allocate_selector(0);
        if ( *(_DWORD *)s1 == 1952539694 )
        {
          v11 = v34;
          if ( v52 == 97 )
            v11 = selector;
          v34 = v11;
        }
        if ( __CFADD__(v40, v39) )
        {
          sub_18C0((__int64)"XBE: failed to add segment number %d %a..%a\n", v8, a3, a4);
          goto LABEL_19;
        }
        add_segm(selector, v39, v40 + v39, s1, v9, 0);
        v12 = getseg(v39);
        set_segm_addressing(v12, 1);
      }
      ++v8;
      file2base(a1, v41, v39, v42 + v39, 1);
      if ( v8 >= v46 )
        goto LABEL_16;
    }
    sub_18C0((__int64)"XBE: failed to load segment number %d\n", v8);
LABEL_16:
    if ( v6 )
      return v53 - __readfsqword(0x28u);
LABEL_19:
    sub_1510(v49);
    if ( v34 != -1 )
      set_default_dataseg(v34);
  }
  else
  {
    if ( v6 )
      return v53 - __readfsqword(0x28u);
    sub_1510(v49);
  }
  v15 = v48 ^ 0xA8FC57AB;
  v16 = v50 ^ 0x5B6D40B6u;
  if ( (unsigned __int8)is_mapped(v15) )
  {
    if ( !v48 )
      goto LABEL_23;
  }
  else
  {
    v15 = v48 ^ 0x94859D4B;
    v16 = v50 ^ 0xEFB1F152;
    if ( !v48 )
      goto LABEL_23;
  }
  setinf(15, v15);
  v32 = getseg(v15);
  v33 = 0;
  if ( v32 )
    v33 = *(_QWORD *)(v32 + 48);
  setinf(14, v33);
LABEL_23:
  if ( v50 )
  {
    add_entry(v16, v16, "kernel_thunk", 0, 0);
    v37 = 0;
    v36 = 0;
    read_ioports(&v36, 0, "xbe.cfg", 0);
    if ( (_QWORD)v37 )
    {
      while ( (unsigned __int8)is_loaded(v16) )
      {
        dword = get_dword(v16);
        if ( dword >= 0 )
          break;
        ioport = find_ioport(&v36, (unsigned int)dword);
        if ( ioport )
        {
          v19 = &unk_3205;
          if ( *(_QWORD *)(ioport + 16) )
            v19 = *(void **)(ioport + 8);
          set_name(v16, v19, 0);
          create_data(v16, 0x20000000, 4, -1);
        }
        v16 += 4;
      }
      v20 = v36;
      if ( !v36 )
        goto LABEL_51;
      v35 = v37;
      if ( (_QWORD)v37 )
      {
        v21 = 0;
        v22 = 0;
        do
        {
          v23 = (_QWORD *)(v20 + v21);
          v24 = *(_QWORD *)(v20 + v21 + 56);
          if ( v24 )
          {
            v25 = v23[8];
            if ( v25 )
            {
              for ( i = 0; i != v25; ++i )
              {
                v27 = (__int64 *)(v24 + 48 * i);
                v28 = v27[3];
                if ( v28 )
                {
                  v27[4] = 0;
                  qfree(v28);
                }
                v29 = *v27;
                if ( *v27 )
                {
                  v27[1] = 0;
                  qfree(v29);
                }
                v24 = v23[7];
              }
            }
            v23[8] = 0;
            qfree(v24);
          }
          v30 = v23[4];
          if ( v30 )
          {
            v23[5] = 0;
            qfree(v30);
          }
          v31 = v23[1];
          if ( v31 )
          {
            v23[2] = 0;
            qfree(v31);
          }
          v20 = v36;
          ++v22;
          v21 += 88;
        }
        while ( v35 != v22 );
      }
    }
    else
    {
      v20 = v36;
      if ( !v36 )
        goto LABEL_51;
    }
    *(_QWORD *)&v37 = 0;
    qfree(v20);
  }
LABEL_51:
  create_filename_cmt();
  return v53 - __readfsqword(0x28u);
}

