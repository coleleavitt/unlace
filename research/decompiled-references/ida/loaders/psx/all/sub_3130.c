__int64 __fastcall sub_3130(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        const char *a11)
{
  __int64 eah; // r12
  double v13; // xmm4_8
  double v14; // xmm5_8
  double v15; // xmm4_8
  double v16; // xmm5_8
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned __int64 v20; // rbp
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 i; // rbp
  _QWORD *v28; // rbx
  __int64 v29; // r13
  unsigned __int64 v30; // rbp
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rbp
  __int64 j; // r15
  _QWORD *v38; // rbx
  __int64 v39; // [rsp+10h] [rbp-58h]
  __int64 v40; // [rsp+10h] [rbp-58h]

  set_processor_type();
  setinf_flag();
  setinf_flag();
  eah = get_eah();
  if ( !strcmp(a11, "Sony Playstation PSX image") )
  {
    sub_2860(eah, a1, *(double *)a2.m128_u64, *(double *)a3.m128_u64, a4, a5, v13, v14, a8, a9);
  }
  else if ( !strcmp(a11, "Sony Playstation PSX object file") )
  {
    sub_4770(a1, a2, a3, a4, a5, v15, v16, a8, a9);
  }
  else if ( !strcmp(a11, "Sony Playstation PSX library file") )
  {
    sub_62F0(a1, *(double *)a2.m128_u64, *(double *)a3.m128_u64, a4, a5, v17, v18, a8, a9);
  }
  else
  {
    file2base();
    v39 = qvector_reserve();
    *(_OWORD *)(v39 + 8) = 0;
    *(_QWORD *)v39 = 0;
    *(_QWORD *)(v39 + 24) = 0;
    *(_QWORD *)(v39 + 48) = 0;
    *(_DWORD *)(v39 + 72) = -1;
    *(_OWORD *)(v39 + 32) = 0;
    *(_OWORD *)(v39 + 56) = 0;
    v20 = *(_QWORD *)(v39 + 8);
    v21 = v20 + 8;
    if ( v20 >= 0xFFFFFFFFFFFFFFF8LL )
    {
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      v22 = qvector_reserve();
      v23 = *(_QWORD *)(v39 + 8);
      *(_QWORD *)v39 = v22;
      memset((void *)(v22 + v23), 0, v20 + 8 - v23);
    }
    v24 = (_QWORD *)(*(_QWORD *)v39 + v20);
    *(_QWORD *)(v39 + 8) = v21;
    *v24 = 0x6465736E6563694CLL;
    v25 = v39;
    v26 = bin_search();
    if ( v39 )
    {
      for ( i = 0; i != 1; ++i )
      {
        v28 = (_QWORD *)(v25 + 80 * i);
        if ( v28[6] )
        {
          v28[7] = 0;
          qfree();
        }
        if ( v28[3] )
        {
          v28[4] = 0;
          qfree();
        }
        if ( *v28 )
        {
          v28[1] = 0;
          qfree();
        }
        v25 = v39;
      }
      qfree();
    }
    if ( v26 == -1 )
      goto LABEL_24;
    do
      v29 = v26--;
    while ( (unsigned __int8)get_byte() );
    set_selector();
    add_segm();
    if ( v29 != 3217555456LL )
    {
LABEL_24:
      set_selector();
      add_segm();
    }
    enable_flags();
    set_selector();
    add_segm();
    while ( 1 )
    {
      v40 = qvector_reserve();
      *(_OWORD *)(v40 + 8) = 0;
      *(_QWORD *)v40 = 0;
      *(_QWORD *)(v40 + 24) = 0;
      *(_QWORD *)(v40 + 48) = 0;
      *(_DWORD *)(v40 + 72) = -1;
      *(_OWORD *)(v40 + 32) = 0;
      *(_OWORD *)(v40 + 56) = 0;
      v30 = *(_QWORD *)(v40 + 8);
      v31 = v30 + 2;
      if ( v30 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v31 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v32 = qvector_reserve();
        v33 = *(_QWORD *)(v40 + 8);
        *(_QWORD *)v40 = v32;
        memset((void *)(v32 + v33), 0, v30 + 2 - v33);
      }
      v34 = *(_QWORD *)v40;
      *(_QWORD *)(v40 + 8) = v31;
      *(_WORD *)(v34 + v30) = 10173;
      v35 = v40;
      v36 = bin_search();
      if ( v40 )
      {
        for ( j = 0; j != 1; ++j )
        {
          v38 = (_QWORD *)(v35 + 80 * j);
          if ( v38[6] )
          {
            v38[7] = 0;
            qfree();
          }
          if ( v38[3] )
          {
            v38[4] = 0;
            qfree();
          }
          if ( *v38 )
          {
            v38[1] = 0;
            qfree();
          }
          v35 = v40;
        }
        qfree();
      }
      if ( v36 == -1 )
        break;
      if ( (v36 & 3) == 2 && (get_word() & 0x8000u) != 0LL )
      {
        show_auto();
        auto_mark_range();
      }
    }
    setinf();
    setinf();
    create_filename_cmt();
    create_strlit();
  }
  if ( *(_DWORD *)(get_ph() + 4) != 12 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  return sub_26F0(0xBB8u, "psx.cfg");
}

