__int64 __fastcall sub_2E200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // r12
  char v10; // al
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r14
  unsigned __int64 v26; // r15
  size_t v27; // r9
  __int64 v28; // rdx
  const void *v29; // r8
  void *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  const __m128i *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __m128i v37; // xmm0
  bool v38; // cf
  __int64 v39; // r15
  __int64 v40; // rax
  __int64 v41; // rdx
  const __m128i *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rcx
  __m128i v45; // xmm0
  _DWORD *v46; // rbx
  int v47; // eax
  char v48; // r13
  void (__fastcall *v49)(_QWORD *); // rdx
  void (__fastcall *v50)(_QWORD *); // rax
  _QWORD *v51; // r12
  __int64 v52; // rbp
  void *v53; // rdi
  __int64 v54; // rbp
  _QWORD *v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // [rsp+0h] [rbp-138h]
  __int64 v64; // [rsp+40h] [rbp-F8h]
  __int64 v65; // [rsp+40h] [rbp-F8h]
  const void *v66; // [rsp+48h] [rbp-F0h]
  __int64 v67; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD v69[2]; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v70; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+80h] [rbp-B8h] BYREF
  int v72; // [rsp+88h] [rbp-B0h]
  __int16 v73; // [rsp+8Ch] [rbp-ACh]
  __int64 v74; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v75; // [rsp+98h] [rbp-A0h]
  __int64 v76; // [rsp+A8h] [rbp-90h]
  __int64 v77; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v78; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v79; // [rsp+C0h] [rbp-78h]
  __int64 v80; // [rsp+D0h] [rbp-68h]
  __int128 v81; // [rsp+D8h] [rbp-60h]
  char v82; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v83; // [rsp+F8h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 384);
  v8 = *(_QWORD *)(a1 + 392);
  v83 = __readfsqword(0x28u);
  v74 = 0;
  v76 = 0;
  v77 = 0;
  v82 = 16;
  v78 = 0;
  v80 = 0;
  v75 = 0;
  v79 = 0;
  v81 = 0;
  v9 = *(_QWORD *)(a5 + 8);
  v58 = v7 + 104 * v8;
  if ( 104 * v8 )
  {
    v10 = 64;
    if ( (*(_BYTE *)(v7 + 72) & 4) == 0 )
    {
      v10 = 32;
      if ( v8 != 1 )
        v10 = 16;
    }
  }
  else
  {
    if ( v8 != 1 )
    {
      create_tinfo(&v77, 1, 7, 0);
      goto LABEL_22;
    }
    v10 = 32;
  }
  v82 = v10;
  if ( v58 == v7 )
  {
    create_tinfo(&v77, 1, 7, 0);
    goto LABEL_39;
  }
  if ( !(unsigned __int8)sub_5D750(v7 + 48, &v77, a3, a4, a5, 0) )
  {
LABEL_5:
    v11 = 0;
    goto LABEL_6;
  }
  if ( (get_tinfo_property(v77, 2) & 0xF) == 0xB )
  {
    v69[0] = 0;
    v69[1] = 0;
    if ( (unsigned __int8)get_tinfo_details(v77, 11, v69) )
    {
      v67 = 0;
      v68 = 0;
      v70 = 0;
      copy_tinfo_t(&v70.m128i_u64[1], &v68);
      v71 = 0;
      copy_tinfo_t(&v71, &v67);
      v72 = 0;
      v73 = 0;
      clear_tinfo_t(&v68);
      clear_tinfo_t(&v67);
      copy_tinfo_t(&v70, v69);
      create_tinfo(&v77, 10, 10, &v70);
      clear_tinfo_t(&v71);
      clear_tinfo_t(&v70.m128i_u64[1]);
      clear_tinfo_t(&v70);
    }
    clear_tinfo_t(v69);
  }
  v7 += 104;
LABEL_22:
  while ( v58 != v7 )
  {
    v19 = *(_QWORD *)(a5 + 8);
    if ( v19 != v9 )
    {
      v70 = 0u;
      if ( v9 >= v19 )
      {
        v20 = *(_QWORD *)(a5 + 16);
        if ( (unsigned __int64)&v70 < *(_QWORD *)a5 || (unsigned __int64)&v70 >= 16 * v20 + *(_QWORD *)a5 )
        {
          if ( v20 < v9 )
          {
            v31 = qvector_reserve(a5, 0, v9, 16);
            v32 = *(_QWORD *)(a5 + 8);
            v33 = *(_QWORD *)(a5 + 16);
            *(_QWORD *)(a5 + 16) = v20;
            v34 = *(const __m128i **)a5;
            v35 = v32 - 1;
            if ( v35 >= 0 )
            {
              v36 = v31;
              do
              {
                v37 = _mm_loadu_si128(v34);
                v36 += 16;
                ++v34;
                *(__m128i *)(v36 - 16) = v37;
                v38 = v35-- == 0;
              }
              while ( !v38 );
              v34 = *(const __m128i **)a5;
            }
            v64 = v33;
            qfree(v34);
            v19 = *(_QWORD *)(a5 + 8);
            *(_QWORD *)a5 = v31;
            *(_QWORD *)(a5 + 16) = v64;
          }
          if ( v19 < v9 )
          {
            do
            {
              v28 = v19++;
              *(__m128i *)(*(_QWORD *)a5 + 16 * v28) = _mm_load_si128(&v70);
            }
            while ( v9 != v19 );
          }
        }
        else
        {
          if ( v20 < v9 )
          {
            v39 = qvector_reserve(a5, 0, v9, 16);
            v40 = *(_QWORD *)(a5 + 8);
            v41 = *(_QWORD *)(a5 + 16);
            *(_QWORD *)(a5 + 16) = v20;
            v42 = *(const __m128i **)a5;
            v43 = v40 - 1;
            if ( v43 >= 0 )
            {
              v44 = v39;
              do
              {
                v45 = _mm_loadu_si128(v42);
                v44 += 16;
                ++v42;
                *(__m128i *)(v44 - 16) = v45;
                v38 = v43-- == 0;
              }
              while ( !v38 );
              v42 = *(const __m128i **)a5;
            }
            v65 = v41;
            qfree(v42);
            v19 = *(_QWORD *)(a5 + 8);
            *(_QWORD *)a5 = v39;
            *(_QWORD *)(a5 + 16) = v65;
          }
          if ( v19 < v9 )
          {
            do
            {
              v21 = v19++;
              v22 = (_QWORD *)(*(_QWORD *)a5 + 16 * v21);
              *v22 = 0;
              v22[1] = 0;
            }
            while ( v9 != v19 );
          }
        }
      }
      *(_QWORD *)(a5 + 8) = v9;
    }
    v23 = v75;
    v24 = v74;
    if ( *((_QWORD *)&v75 + 1) < (unsigned __int64)(v75 + 1) )
    {
      v74 = qvector_reserve(&v74, v74, v75 + 1, 80);
      v24 = v74;
      v23 = v75;
    }
    v25 = v24 + 80 * v23;
    *(_DWORD *)v25 = 0;
    *(_QWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = 0;
    *(_QWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 64) = 0;
    *(_DWORD *)(v25 + 72) = 0;
    *(_OWORD *)(v25 + 24) = 0;
    *(_OWORD *)(v25 + 48) = 0;
    *(_QWORD *)&v75 = v75 + 1;
    if ( !(unsigned __int8)sub_5D750(v7 + 48, v25 + 64, a3, a4, a5, 0) )
      goto LABEL_5;
    if ( v25 + 16 != v7 + 16 )
    {
      v26 = *(_QWORD *)(v7 + 24);
      if ( v26 && (v27 = v26 - 1, v26 != 1) )
      {
        v29 = *(const void **)(v7 + 16);
        v30 = *(void **)(v25 + 16);
        if ( *(_QWORD *)(v25 + 32) < v26 )
        {
          v66 = *(const void **)(v7 + 16);
          v30 = (void *)qvector_reserve(v25 + 16, *(_QWORD *)(v25 + 16), *(_QWORD *)(v7 + 24), 1);
          v29 = v66;
          v27 = v26 - 1;
          *(_QWORD *)(v25 + 16) = v30;
        }
        *(_QWORD *)(v25 + 24) = v26;
        memmove(v30, v29, v27);
        *(_BYTE *)(*(_QWORD *)(v25 + 16) + v26 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(v25 + 24) = 0;
      }
    }
    v7 += 104;
  }
LABEL_39:
  if ( (a6 & 1) == 0 )
    goto LABEL_40;
  v46 = *(_DWORD **)(sub_87DA0(a1 + 8) + 216);
  if ( !v46 )
    goto LABEL_40;
  v47 = v46[2];
  if ( v46[31] != 8 )
  {
    v48 = 0;
    if ( v47 )
      goto LABEL_40;
    goto LABEL_68;
  }
  if ( !v47 )
  {
    v48 = 1;
LABEL_68:
    v49 = **(void (__fastcall ***)(_QWORD *))v46;
    if ( v49 == sub_15E30 )
    {
      v50 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v46 + 16LL);
      if ( v50 == sub_15D70 )
      {
        v51 = *((_QWORD **)v46 + 16);
        *(_QWORD *)v46 = &off_C71D8;
        if ( v51 )
        {
          v52 = v51[2];
          while ( v52 )
          {
            sub_293E0(*(_QWORD **)(v52 + 24));
            v53 = (void *)v52;
            v52 = *(_QWORD *)(v52 + 16);
            operator delete(v53, 0x30u);
          }
          operator delete(v51, 0x30u);
        }
        v54 = *((_QWORD *)v46 + 19);
        while ( v54 )
        {
          v55 = (_QWORD *)v54;
          sub_29E10(*(_QWORD **)(v54 + 24));
          v56 = *(_QWORD *)(v54 + 32);
          v54 = *(_QWORD *)(v54 + 16);
          if ( v56 )
          {
            v55[5] = 0;
            qfree(v56);
          }
          operator delete(v55, 0x48u);
        }
        v57 = *((_QWORD *)v46 + 12);
        if ( v57 )
        {
          *((_QWORD *)v46 + 13) = 0;
          qfree(v57);
        }
        operator delete(v46, 0xC0u);
      }
      else
      {
        v50(v46);
      }
    }
    else
    {
      v49(v46);
    }
    if ( v48 )
      goto LABEL_82;
LABEL_40:
    v11 = create_tinfo(a2, 12, 12, &v74);
    goto LABEL_6;
  }
LABEL_82:
  v67 = 0;
  v11 = create_tinfo(&v67, 12, 12, &v74);
  if ( (_BYTE)v11 )
  {
    v68 = 0;
    v69[0] = 0;
    v70 = 0;
    copy_tinfo_t(&v70.m128i_u64[1], v69);
    v71 = 0;
    copy_tinfo_t(&v71, &v68);
    v72 = 0;
    v73 = 0;
    clear_tinfo_t(v69);
    clear_tinfo_t(&v68);
    copy_tinfo_t(&v70, &v67);
    v11 = create_tinfo(a2, 10, 10, &v70);
    clear_tinfo_t(&v71);
    clear_tinfo_t(&v70.m128i_u64[1]);
    clear_tinfo_t(&v70);
  }
  clear_tinfo_t(&v67);
LABEL_6:
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    qfree(v80);
  }
  cleanup_argloc(&v78);
  clear_tinfo_t(&v77);
  v12 = v74;
  if ( v74 )
  {
    v13 = v75;
    if ( (_QWORD)v75 )
    {
      v14 = 0;
      do
      {
        v15 = (_QWORD *)(v12 + 80 * v14);
        clear_tinfo_t(v15 + 8);
        v16 = v15[5];
        if ( v16 )
        {
          v15[6] = 0;
          qfree(v16);
        }
        v17 = v15[2];
        if ( v17 )
        {
          v15[3] = 0;
          qfree(v17);
        }
        ++v14;
        cleanup_argloc(v15);
        v12 = v74;
      }
      while ( v13 != v14 );
    }
    *(_QWORD *)&v75 = 0;
    qfree(v12);
  }
  return v11;
}
