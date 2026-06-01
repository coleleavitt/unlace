__int64 __fastcall sub_3832B0(_BYTE *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rax
  _DWORD *v7; // r14
  unsigned int v8; // esi
  unsigned __int8 v9; // dl
  unsigned int v10; // esi
  char v11; // al
  char v12; // dl
  unsigned int v13; // r13d
  _DWORD *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  _QWORD *v17; // rbx
  unsigned int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // esi
  unsigned int v23; // r14d
  int v24; // eax
  unsigned __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // [rsp+8h] [rbp-98h] BYREF
  __int128 v28; // [rsp+10h] [rbp-90h]
  __int64 v29; // [rsp+20h] [rbp-80h]
  __int64 v30; // [rsp+28h] [rbp-78h]
  __int64 v31; // [rsp+30h] [rbp-70h]
  __int128 v32; // [rsp+38h] [rbp-68h]
  __int64 v33; // [rsp+48h] [rbp-58h]
  __int128 v34; // [rsp+50h] [rbp-50h]
  char v35; // [rsp+60h] [rbp-40h]
  unsigned __int64 v36; // [rsp+70h] [rbp-30h]

  v36 = __readfsqword(0x28u);
  v35 = 16;
  v28 = 0;
  v27 = nullptr;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v33 = 0;
  v32 = 0;
  v34 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_28;
  if ( a4 == -1 )
  {
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v6 = a4;
    if ( a4 >= (unsigned __int64)v28 )
    {
      if ( !under_debugger )
        sub_37CFE0(0xCCB6u, 0.0);
      BUG();
    }
    v7 = &v27[20 * a4];
    if ( *v7 == 1 && v6 != (_QWORD)v28 - 1LL )
      goto LABEL_28;
    clear_tinfo_t();
    if ( *((_QWORD *)v7 + 5) )
    {
      *((_QWORD *)v7 + 6) = 0;
      qfree();
    }
    if ( *((_QWORD *)v7 + 2) )
    {
      *((_QWORD *)v7 + 3) = 0;
      qfree();
    }
    cleanup_argloc();
    memmove(v7, v7 + 20, (char *)&v27[20 * v28] - (char *)v7 - 80);
    *(_QWORD *)&v28 = v28 - 1;
  }
  LOBYTE(v8) = v35 & 0xF0;
  if ( (v35 & 0xF0) == 0xC0 )
  {
    v8 = HIDWORD(v29);
    if ( HIDWORD(v29) > 0x10 )
    {
LABEL_14:
      if ( v8 - 208 <= 0x2F )
        goto LABEL_21;
      goto LABEL_15;
    }
  }
  else if ( (unsigned __int8)v8 > 0x10u )
  {
    v8 = (unsigned __int8)v8;
    goto LABEL_14;
  }
  v20 = getinf();
  v8 = HIDWORD(v29);
  v9 = v35 & 0xF0;
  if ( (unsigned int)(v20 - 208) > 0x2F )
  {
    if ( v9 != 0xC0 )
      v8 = v9;
    if ( v8 <= 0x10 )
      v8 = getinf();
LABEL_15:
    if ( (unsigned __int8)sub_382E00((__int64)&v27, v8, 0.0) )
      goto LABEL_50;
    v8 = HIDWORD(v29);
    v9 = v35 & 0xF0;
  }
  if ( v9 != 0xC0 )
    v8 = v9;
  if ( v8 <= 0x10 )
    v8 = getinf();
LABEL_21:
  v10 = v8 & 0xFFFFFFF0;
  if ( v10 != 64 && v10 != 208 || !(_QWORD)v28 )
  {
    if ( (unsigned __int8)sub_382E00((__int64)&v27, 16, 0.0) )
      goto LABEL_50;
    if ( !(_QWORD)v28 )
      goto LABEL_46;
    if ( (unsigned int)(*v27 - 3) <= 1 )
    {
      if ( (unsigned __int8)sub_382E00((__int64)&v27, 112, 0.0) )
        goto LABEL_50;
      v21 = sub_382E00((__int64)&v27, 128, 0.0);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 112) + 48LL) & 8) != 0 && (unsigned __int8)sub_382E00((__int64)&v27, 48, 0.0) )
        goto LABEL_50;
      if ( (_DWORD)v31 != 1 )
      {
LABEL_46:
        v11 = v35;
        if ( (v35 & 0xF0) == 0xC0 )
        {
          if ( (unsigned int)(HIDWORD(v29) - 208) <= 0x2F )
            goto LABEL_50;
        }
        else if ( (v35 & 0xF0u) - 208 <= 0x2F )
        {
          goto LABEL_50;
        }
        v12 = -16;
        goto LABEL_49;
      }
      if ( !(unsigned __int8)getinf_flag()
        || (netnode_check(), v23 = netnode_altval(), v23 <= 0x74)
        || (v24 = *(_DWORD *)(get_ph() + 4)) != 0
        && ((v25 = (unsigned int)(v24 - 13), (unsigned int)v25 > 0x3B)
         || (v26 = 0x800000000000005LL, !_bittest64(&v26, v25))
         || v23 == 117) )
      {
        v22 = 176;
        if ( (unsigned __int8)sub_382E00((__int64)&v27, 256, 0.0) )
          goto LABEL_50;
      }
      else
      {
        if ( (unsigned __int8)sub_382E00((__int64)&v27, 176, 0.0) )
          goto LABEL_50;
        v22 = 256;
      }
      v21 = sub_382E00((__int64)&v27, v22, 0.0);
    }
    if ( v21 )
      goto LABEL_50;
    goto LABEL_46;
  }
  if ( (unsigned __int8)sub_382E00((__int64)&v27, 64, 0.0) )
    goto LABEL_50;
  v11 = v35;
  if ( (v35 & 0xF0) != 0xC0 )
  {
    if ( (v35 & 0xF0u) - 208 <= 0x2F )
      goto LABEL_50;
    goto LABEL_27;
  }
  if ( (unsigned int)(HIDWORD(v29) - 208) > 0x2F )
  {
LABEL_27:
    v12 = -48;
LABEL_49:
    HIDWORD(v29) = 0;
    v35 = v12 | v11 & 0xF;
  }
LABEL_50:
  if ( !(unsigned __int8)create_tinfo() )
  {
LABEL_28:
    v13 = 0;
    goto LABEL_29;
  }
  LOBYTE(v19) = sub_327100(a1, a2);
  v13 = v19;
LABEL_29:
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v14 = v27;
  if ( v27 )
  {
    v15 = v28;
    if ( (_QWORD)v28 )
    {
      v16 = 0;
      do
      {
        v17 = &v14[20 * v16];
        clear_tinfo_t();
        if ( v17[5] )
        {
          v17[6] = 0;
          qfree();
        }
        if ( v17[2] )
        {
          v17[3] = 0;
          qfree();
        }
        ++v16;
        cleanup_argloc();
        v14 = v27;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v28 = 0;
    qfree();
  }
  return v13;
}

