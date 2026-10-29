unsigned __int64 __fastcall sub_1EE590(__int64 a1)
{
  unsigned __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // r12
  int v4; // r8d
  __int64 *v5; // rbx
  __int64 v6; // r15
  int *v7; // r14
  int *v8; // r13
  __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // edx
  __int64 v13; // rbp
  unsigned __int64 v14; // rbx
  void *v15; // r13
  __m128i v16; // xmm0
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r14
  unsigned int v21; // ebx
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rbp
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rbp
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // r14
  _DWORD *v39; // r10
  int v40; // eax
  unsigned int v41; // edx
  __int64 *v42; // r13
  __int64 v43; // r14
  __int64 *v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  int v52; // r9d
  __m128i v54; // [rsp+8h] [rbp-158h] BYREF
  unsigned __int64 v55; // [rsp+18h] [rbp-148h]
  _DWORD *v56; // [rsp+20h] [rbp-140h]
  __int64 (__fastcall ***v57)(); // [rsp+28h] [rbp-138h]
  __int64 *v58; // [rsp+30h] [rbp-130h]
  __int64 (__fastcall **v59)(); // [rsp+38h] [rbp-128h] BYREF
  __int64 v60; // [rsp+40h] [rbp-120h]
  __int64 v61; // [rsp+48h] [rbp-118h]
  __int128 v62; // [rsp+50h] [rbp-110h]
  char v63; // [rsp+60h] [rbp-100h]
  __int64 v64; // [rsp+68h] [rbp-F8h]
  __int64 v65; // [rsp+70h] [rbp-F0h]
  __int64 (__fastcall **v66)(); // [rsp+78h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+80h] [rbp-E0h] BYREF
  __int128 v68; // [rsp+88h] [rbp-D8h]
  __int64 v69[2]; // [rsp+98h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+A8h] [rbp-B8h] BYREF
  __int128 v71; // [rsp+B0h] [rbp-B0h]
  __int64 v72[2]; // [rsp+C0h] [rbp-A0h] BYREF
  void *v73; // [rsp+D0h] [rbp-90h]
  __m128i v74; // [rsp+D8h] [rbp-88h]
  int v75; // [rsp+E8h] [rbp-78h]
  __int64 v76; // [rsp+F0h] [rbp-70h] BYREF
  __int128 v77; // [rsp+F8h] [rbp-68h]
  __int64 v78; // [rsp+108h] [rbp-58h] BYREF
  __int128 v79; // [rsp+110h] [rbp-50h]
  unsigned __int64 v80; // [rsp+120h] [rbp-40h]

  v80 = __readfsqword(0x28u);
  v67 = 0;
  v69[0] = 0;
  v69[1] = 0;
  v70 = 0;
  v72[0] = 0;
  v72[1] = 0;
  v73 = nullptr;
  v75 = 0;
  v66 = &off_4B26C0;
  v76 = 0;
  v78 = 0;
  v68 = 0;
  v71 = 0;
  v74 = 0;
  v77 = 0;
  v79 = 0;
  v1 = *(int *)(a1 + 64);
  v55 = v1;
  if ( v1 )
  {
    v59 = nullptr;
    v57 = &v59;
    v60 = 0;
    v61 = 0;
    v58 = &v76;
    v62 = 0;
    sub_1EE250(&v76, v1, (unsigned __int64)&v59);
    if ( v61 )
    {
      *(_QWORD *)&v62 = 0;
      qfree();
    }
    qfree();
    if ( v55 != (_QWORD)v79 )
    {
      v62 = 0;
      v59 = nullptr;
      v60 = 0;
      v61 = 0;
      sub_1EE250(&v78, v55, (unsigned __int64)v57);
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree();
      }
      qfree();
    }
    if ( (int)v1 > 0 )
    {
      v2 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 64) )
        {
          if ( !under_debugger )
            sub_37CFE0(52719);
          goto LABEL_73;
        }
        v3 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v2);
        v4 = *(_DWORD *)(v3 + 72);
        v54.m128i_i64[0] = 40 * v2;
        v5 = (__int64 *)(40 * v2 + v76);
        if ( v4 )
          break;
        v6 = *(_QWORD *)(v3 + 64);
        if ( !*(_BYTE *)(v6 + 320) )
        {
          v36 = *(_QWORD *)(v6 + 440);
          if ( (int)v36 <= 0 )
            goto LABEL_20;
          v37 = 0;
          v38 = 104 * ((unsigned int)(v36 - 1) + 1LL);
          do
          {
            v39 = (_DWORD *)(v37 + *(_QWORD *)(v6 + 432));
            if ( !v39[23] )
            {
              if ( (*((_BYTE *)v39 + 25) & 1) != 0
                || (*(_BYTE *)(v6 + 2) & 8) == 0
                && (v56 = (_DWORD *)(v37 + *(_QWORD *)(v6 + 432)), (unsigned __int8)sub_368240(v6, v56, 0))
                && (v40 = sub_1BE780(v56), v39 = v56, v40 >= *(_QWORD *)(v6 + 144)) )
              {
                v41 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 480) + 130LL);
                if ( v41 < v39[22] )
                  v41 = v39[22];
                sub_1BE430(
                  (__int64)v39,
                  (__int64)v5,
                  v41,
                  *(_QWORD *)(*(_QWORD *)(v3 + 64) + 1440LL),
                  (__int64)(v39 + 20));
              }
            }
            v37 += 104;
          }
          while ( v38 != v37 );
          goto LABEL_19;
        }
        v7 = *(int **)(v6 + 456);
        v8 = &v7[*(_QWORD *)(v6 + 464)];
        if ( v7 != v8 )
        {
          for ( i = *(_QWORD *)(v3 + 64); ; i = *(_QWORD *)(v3 + 64) )
          {
            v10 = *(_QWORD *)(i + 1440);
            v11 = *(_QWORD *)(v6 + 432) + 104LL * *v7;
            v12 = *(unsigned __int8 *)(*(_QWORD *)(v3 + 480) + 130LL);
            if ( v12 < *(_DWORD *)(v11 + 88) )
              v12 = *(_DWORD *)(v11 + 88);
            sub_1BE430(v11, (__int64)v5, v12, v10, v11 + 80);
            if ( v8 == ++v7 )
              break;
          }
          goto LABEL_19;
        }
LABEL_20:
        sub_5F800(v69, v5);
        sub_3113F0(&v70, v5 + 2);
        if ( v55 == ++v2 )
          goto LABEL_21;
      }
      v63 = 0;
      v42 = (__int64 *)(v78 + v54.m128i_i64[0]);
      v60 = 0;
      v61 = 0;
      v62 = 0u;
      v64 = 40 * v2 + v76;
      v65 = v78 + v54.m128i_i64[0];
      v59 = off_4B2670;
      sub_1E9470(v3, (__int64)v57);
      v43 = *(_QWORD *)(*(_QWORD *)(v3 + 480) + 112LL);
      v44 = (__int64 *)(v43 + 104);
      sub_5FBC0(v5, (__int64 *)(v43 + 104), v45, v46, v47, v48);
      v43 += 120;
      sub_3123A0(v5 + 2, v43);
      sub_5FBC0(v42, v44, v49, v50, v51, v52);
      sub_3123A0(v42 + 2, v43);
LABEL_19:
      v5 = (__int64 *)(v76 + v54.m128i_i64[0]);
      goto LABEL_20;
    }
LABEL_21:
    v13 = v76;
  }
  else
  {
    v13 = 0;
  }
  v58 = &v76;
  sub_5FE50(v72, (__int64 *)v13);
  v14 = *(_QWORD *)(v13 + 24);
  v15 = nullptr;
  if ( v14 )
  {
    v58 = &v76;
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, *(const void **)(v13 + 16), 16 * v14);
  }
  v16 = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
  if ( v73 )
  {
    v54 = v16;
    v74.m128i_i64[0] = 0;
    qfree();
    v16 = _mm_load_si128(&v54);
  }
  v73 = v15;
  v74 = v16;
  v17 = *(int *)(a1 + 64);
  v58 = &v76;
  sub_1EE250(&v67, v17, (unsigned __int64)v69);
  v18 = sub_62660((_QWORD *)a1);
  sub_30B920(v18, &v66);
  v19 = *(_DWORD *)(a1 + 64);
  v20 = 40;
  v21 = 1;
  if ( v19 > 1 )
  {
    while ( v21 < v19 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v21);
      v63 = 0;
      v60 = 0;
      v62 = 0u;
      v64 = v20 + v67;
      v65 = 0;
      v59 = off_4B2698;
      v61 = v22;
      sub_1E9470(v22, (__int64)&v59);
      v19 = *(_DWORD *)(a1 + 64);
      ++v21;
      v20 += 40;
      if ( v19 <= (int)v21 )
        goto LABEL_29;
    }
    if ( !under_debugger )
      sub_37CFE0(52719);
LABEL_73:
    BUG();
  }
LABEL_29:
  v23 = v78;
  v66 = &off_4B26C0;
  if ( v78 )
  {
    v24 = v79;
    if ( (_QWORD)v79 )
    {
      v25 = 0;
      do
      {
        v26 = v23 + 40 * v25;
        if ( *(_QWORD *)(v26 + 16) )
        {
          *(_QWORD *)(v26 + 24) = 0;
          qfree();
        }
        ++v25;
        qfree();
        v23 = v78;
      }
      while ( v24 != v25 );
    }
    *(_QWORD *)&v79 = 0;
    qfree();
  }
  v27 = v76;
  if ( v76 )
  {
    v28 = v77;
    if ( (_QWORD)v77 )
    {
      v29 = 0;
      do
      {
        v30 = v27 + 40 * v29;
        if ( *(_QWORD *)(v30 + 16) )
        {
          *(_QWORD *)(v30 + 24) = 0;
          qfree();
        }
        ++v29;
        qfree();
        v27 = v76;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  v66 = (__int64 (__fastcall **)())&unk_4BED48;
  if ( v73 )
  {
    v74.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  qfree();
  v31 = v67;
  if ( v67 )
  {
    v32 = v68;
    if ( (_QWORD)v68 )
    {
      v33 = 0;
      do
      {
        v34 = v31 + 40 * v33;
        if ( *(_QWORD *)(v34 + 16) )
        {
          *(_QWORD *)(v34 + 24) = 0;
          qfree();
        }
        ++v33;
        qfree();
        v31 = v67;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v68 = 0;
    qfree();
  }
  return v80 - __readfsqword(0x28u);
}

