__int64 __fastcall sub_389330(_BYTE *a1, __int64 a2, __int64 a3, int a4, double a5, __m128 a6)
{
  __int64 v9; // rax
  _DWORD *v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // esi
  char v17; // al
  char v18; // dl
  unsigned int v19; // r13d
  __int64 v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbp
  _QWORD *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rsi
  unsigned int v39; // r14d
  int v40; // eax
  unsigned __int64 v41; // rax
  _DWORD *v42; // [rsp+8h] [rbp-98h] BYREF
  __int128 v43; // [rsp+10h] [rbp-90h]
  __int64 v44; // [rsp+20h] [rbp-80h]
  __int64 v45; // [rsp+28h] [rbp-78h]
  __int64 v46; // [rsp+30h] [rbp-70h]
  __int128 v47; // [rsp+38h] [rbp-68h]
  __int64 v48; // [rsp+48h] [rbp-58h]
  __int128 v49; // [rsp+50h] [rbp-50h]
  char v50; // [rsp+60h] [rbp-40h]
  unsigned __int64 v51; // [rsp+70h] [rbp-30h]

  v51 = __readfsqword(0x28u);
  v50 = 16;
  v43 = 0;
  v42 = nullptr;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v48 = 0;
  v47 = 0;
  v49 = 0;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_28;
  if ( a4 == -1 )
  {
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v9 = a4;
    if ( a4 >= (unsigned __int64)v43 )
    {
      if ( !under_debugger )
        sub_383060(0xCCB6u, 0.0);
      BUG();
    }
    v10 = &v42[20 * a4];
    if ( *v10 == 1 && v9 != (_QWORD)v43 - 1LL )
      goto LABEL_28;
    clear_tinfo_t();
    v11 = *((_QWORD *)v10 + 5);
    if ( v11 )
    {
      *((_QWORD *)v10 + 6) = 0;
      qfree(v11);
    }
    v12 = *((_QWORD *)v10 + 2);
    if ( v12 )
    {
      *((_QWORD *)v10 + 3) = 0;
      qfree(v12);
    }
    cleanup_argloc();
    memmove(v10, v10 + 20, (char *)&v42[20 * v43] - (char *)v10 - 80);
    *(_QWORD *)&v43 = v43 - 1;
  }
  LOBYTE(v15) = v50 & 0xF0;
  if ( (v50 & 0xF0) == 0xC0 )
  {
    v15 = HIDWORD(v44);
    if ( HIDWORD(v44) > 0x10 )
    {
LABEL_14:
      if ( (unsigned int)(v15 - 208) <= 0x2F )
        goto LABEL_21;
      goto LABEL_15;
    }
  }
  else if ( (unsigned __int8)v15 > 0x10u )
  {
    v15 = (unsigned __int8)v15;
    goto LABEL_14;
  }
  v30 = getinf();
  v15 = HIDWORD(v44);
  v13 = (unsigned __int8)v50 & 0xF0;
  if ( (unsigned int)(v30 - 208) > 0x2F )
  {
    if ( (v50 & 0xF0) != 0xC0 )
      v15 = (unsigned __int8)v50 & 0xF0;
    if ( (unsigned int)v15 <= 0x10 )
      v15 = (unsigned int)getinf();
LABEL_15:
    if ( (unsigned __int8)sub_388E80((__int64)&v42, v15, v13, v14, 0.0) )
      goto LABEL_50;
    LODWORD(v15) = HIDWORD(v44);
    v13 = (unsigned __int8)v50 & 0xF0;
  }
  if ( (_BYTE)v13 != 0xC0 )
    LODWORD(v15) = (unsigned __int8)v13;
  if ( (unsigned int)v15 <= 0x10 )
    LODWORD(v15) = getinf();
LABEL_21:
  v16 = v15 & 0xFFFFFFF0;
  if ( v16 != 64 && v16 != 208 || !(_QWORD)v43 )
  {
    if ( (unsigned __int8)sub_388E80((__int64)&v42, 16, v13, v14, 0.0) )
      goto LABEL_50;
    if ( !(_QWORD)v43 )
      goto LABEL_46;
    if ( (unsigned int)(*v42 - 3) <= 1 )
    {
      if ( (unsigned __int8)sub_388E80((__int64)&v42, 112, v27, v28, 0.0) )
        goto LABEL_50;
      v33 = sub_388E80((__int64)&v42, 128, v31, v32, 0.0);
    }
    else
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 112) + 48LL) & 8) != 0
        && (unsigned __int8)sub_388E80((__int64)&v42, 48, v27, v28, 0.0) )
      {
        goto LABEL_50;
      }
      if ( (_DWORD)v46 != 1 )
      {
LABEL_46:
        v17 = v50;
        if ( (v50 & 0xF0) == 0xC0 )
        {
          if ( (unsigned int)(HIDWORD(v44) - 208) <= 0x2F )
            goto LABEL_50;
        }
        else if ( (v50 & 0xF0u) - 208 <= 0x2F )
        {
          goto LABEL_50;
        }
        v18 = -16;
        goto LABEL_49;
      }
      if ( !(unsigned __int8)getinf_flag()
        || (netnode_check(), v39 = netnode_altval(), v39 <= 0x74)
        || (v40 = *(_DWORD *)(get_ph() + 4)) != 0
        && ((v41 = (unsigned int)(v40 - 13), (unsigned int)v41 > 0x3B)
         || (v34 = 0x800000000000005LL, !_bittest64(&v34, v41))
         || v39 == 117) )
      {
        v38 = 176;
        if ( (unsigned __int8)sub_388E80((__int64)&v42, 256, v34, v35, 0.0) )
          goto LABEL_50;
      }
      else
      {
        if ( (unsigned __int8)sub_388E80((__int64)&v42, 176, v34, v35, 0.0) )
          goto LABEL_50;
        v38 = 256;
      }
      v33 = sub_388E80((__int64)&v42, v38, v36, v37, 0.0);
    }
    if ( v33 )
      goto LABEL_50;
    goto LABEL_46;
  }
  if ( (unsigned __int8)sub_388E80((__int64)&v42, 64, v13, v14, 0.0) )
    goto LABEL_50;
  v17 = v50;
  if ( (v50 & 0xF0) != 0xC0 )
  {
    if ( (v50 & 0xF0u) - 208 <= 0x2F )
      goto LABEL_50;
    goto LABEL_27;
  }
  if ( (unsigned int)(HIDWORD(v44) - 208) > 0x2F )
  {
LABEL_27:
    v18 = -48;
LABEL_49:
    HIDWORD(v44) = 0;
    v50 = v18 | v17 & 0xF;
  }
LABEL_50:
  if ( !(unsigned __int8)create_tinfo() )
  {
LABEL_28:
    v19 = 0;
    goto LABEL_29;
  }
  LOBYTE(v29) = sub_32CB80(a1, a2, 0.0, a6);
  v19 = v29;
LABEL_29:
  if ( v48 )
  {
    *(_QWORD *)&v49 = 0;
    qfree(v48);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v20 = (__int64)v42;
  if ( v42 )
  {
    v21 = v43;
    if ( (_QWORD)v43 )
    {
      v22 = 0;
      do
      {
        v23 = (_QWORD *)(v20 + 80 * v22);
        clear_tinfo_t();
        v24 = v23[5];
        if ( v24 )
        {
          v23[6] = 0;
          qfree(v24);
        }
        v25 = v23[2];
        if ( v25 )
        {
          v23[3] = 0;
          qfree(v25);
        }
        ++v22;
        cleanup_argloc();
        v20 = (__int64)v42;
      }
      while ( v21 != v22 );
    }
    *(_QWORD *)&v43 = 0;
    qfree(v20);
  }
  return v19;
}

