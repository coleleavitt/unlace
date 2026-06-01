unsigned __int64 __fastcall sub_364940(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rax
  int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // rbx
  __int64 i; // r12
  __int64 *v12; // rbp
  __int64 v13; // rcx
  __int64 j; // r15
  __int64 *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 k; // r15
  __int64 *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // r12
  int v25; // eax
  __int64 (__fastcall *v26)(__int64); // rax
  int v27; // ecx
  __int64 (__fastcall *v28)(__int64, int); // rax
  unsigned __int64 *v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  _QWORD *v32; // r8
  unsigned __int64 v33; // r15
  int v34; // esi
  _QWORD *v35; // rax
  int *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 (__fastcall *v40)(__int64); // rax
  int v41; // eax
  _QWORD **v42; // rbx
  void *v43; // rdi
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 *v47; // rdx
  __int64 v48; // rdx
  unsigned __int64 *v49; // rdx
  __int64 v50; // [rsp+0h] [rbp-B8h]
  __int64 v51; // [rsp+0h] [rbp-B8h]
  int v52; // [rsp+0h] [rbp-B8h]
  int v53; // [rsp+0h] [rbp-B8h]
  __int64 v54; // [rsp+10h] [rbp-A8h] BYREF
  int v55; // [rsp+18h] [rbp-A0h] BYREF
  void *v56; // [rsp+20h] [rbp-98h]
  int *v57; // [rsp+28h] [rbp-90h]
  int *v58; // [rsp+30h] [rbp-88h]
  __int64 v59; // [rsp+38h] [rbp-80h]
  __int64 v60; // [rsp+40h] [rbp-78h] BYREF
  __int128 v61; // [rsp+48h] [rbp-70h]
  __int64 v62; // [rsp+58h] [rbp-60h]
  __int128 v63; // [rsp+60h] [rbp-58h]
  unsigned __int64 v64; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 800);
  v64 = __readfsqword(0x28u);
  v5 = v4 + 8;
  if ( *(_BYTE *)(v4 + 520)
    || ((v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 8) + 64LL), v6 != sub_65050)
      ? (v7 = ((__int64 (*)(void))v6)(), v5 = v4 + 8)
      : (v7 = *(_DWORD *)(v4 + 152)),
        !v7) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 8) + 168LL))(v5, 0);
    v23 = *(_QWORD *)(v4 + 208);
    if ( v23 )
    {
      *(_QWORD *)(v4 + 216) = 0;
      qfree(v23);
      *(_QWORD *)(v4 + 208) = 0;
      *(_QWORD *)(v4 + 224) = 0;
    }
    *(_BYTE *)(v4 + 520) = 0;
    sub_360800(a1, a2);
  }
  else
  {
    v8 = *(__int64 **)(v4 + 192);
    v9 = *(_QWORD *)(v4 + 184);
    for ( i = v9 + 120LL * (_QWORD)v8; i != v9; *(_DWORD *)(v9 - 8) = 0 )
    {
      v8 = *(__int64 **)v9;
      if ( *(_QWORD *)v9 )
      {
        if ( (*((_DWORD *)v8 + 26))-- == 1 )
        {
          v12 = *(__int64 **)v9;
          if ( *(_QWORD *)v9 )
          {
            sub_258970(*(__int64 **)v9);
            v13 = v12[23];
            if ( v13 )
            {
              v50 = v12[24];
              if ( v50 )
              {
                for ( j = 0; j != v50; ++j )
                {
                  v15 = (__int64 *)(v13 + 24 * j);
                  v16 = *v15;
                  if ( *v15 )
                  {
                    v15[1] = 0;
                    qfree(v16);
                    v13 = v12[23];
                  }
                }
              }
              v12[24] = 0;
              qfree(v13);
            }
            v17 = v12[20];
            if ( v17 )
            {
              v12[21] = 0;
              qfree(v17);
            }
            v18 = v12[16];
            if ( v18 )
            {
              v51 = v12[17];
              if ( v51 )
              {
                for ( k = 0; k != v51; ++k )
                {
                  v20 = (__int64 *)(v18 + 32 * k);
                  v21 = *v20;
                  if ( *v20 )
                  {
                    v20[1] = 0;
                    qfree(v21);
                    v18 = v12[16];
                  }
                }
              }
              v12[17] = 0;
              qfree(v18);
            }
            sub_255050((__int64)(v12 + 2), a3);
            j__qfree((__int64)v12);
          }
        }
      }
      v22 = *(_QWORD *)(v9 + 8);
      *(_QWORD *)v9 = 0;
      if ( v22 )
      {
        *(_QWORD *)(v9 + 16) = 0;
        qfree(v22);
        *(_QWORD *)(v9 + 8) = 0;
        *(_QWORD *)(v9 + 24) = 0;
      }
      *(_QWORD *)(v9 + 104) = 0;
      v9 += 120;
      *(_OWORD *)(v9 - 72) = 0;
      *(_OWORD *)(v9 - 56) = 0;
      *(_DWORD *)(v9 - 20) = 0;
    }
  }
  v24 = 0;
  v55 = 0;
  v56 = nullptr;
  v57 = &v55;
  v58 = &v55;
  v59 = 0;
  while ( 1 )
  {
    v26 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v26 != sub_65040 )
      break;
    if ( v24 >= *(int *)(a1 + 56) )
      goto LABEL_45;
LABEL_39:
    v27 = v24;
    v28 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
    if ( v28 != sub_65090 )
    {
      v25 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD))v28)(
              a1,
              (unsigned int)v24,
              v8,
              (unsigned int)v24);
      v27 = v24;
LABEL_35:
      if ( v25 )
        goto LABEL_36;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      v25 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL * (int)v24 + 8);
      goto LABEL_35;
    }
LABEL_41:
    v29 = *(unsigned __int64 **)(v4 + 304);
    if ( v29 == (unsigned __int64 *)(*(_QWORD *)(v4 + 320) - 8LL) )
    {
      v45 = *(_QWORD *)(v4 + 328);
      if ( (((v45 == 0) + ((v45 - *(_QWORD *)(v4 + 296)) >> 3) - 1) << 6)
         + (((__int64)v29 - *(_QWORD *)(v4 + 312)) >> 3)
         + ((__int64)(*(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 272)) >> 3) == 0xFFFFFFFFFFFFFFFLL )
        std::__throw_length_error("cannot create std::deque larger than max_size()");
      if ( (unsigned __int64)(*(_QWORD *)(v4 + 264) - ((v45 - *(_QWORD *)(v4 + 256)) >> 3)) <= 1 )
      {
        v53 = v27;
        sub_364280(v4 + 256, 1u, 0);
        v45 = *(_QWORD *)(v4 + 328);
        v27 = v53;
      }
      v52 = v27;
      v46 = operator new(0x200u);
      v27 = v52;
      *(_QWORD *)(v45 + 8) = v46;
      **(_QWORD **)(v4 + 304) = v24;
      v47 = (__int64 *)(*(_QWORD *)(v4 + 328) + 8LL);
      *(_QWORD *)(v4 + 328) = v47;
      v30 = *v47;
      *(__m128i *)(v4 + 312) = _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)*v47,
                                 (__m128i)(unsigned __int64)(*v47 + 512));
    }
    else
    {
      *v29 = v24;
      v30 = *(_QWORD *)(v4 + 304) + 8LL;
    }
    *(_QWORD *)(v4 + 304) = v30;
    LODWORD(v60) = v27;
    sub_363A80(&v54, (int *)&v60);
LABEL_36:
    ++v24;
  }
  if ( v24 < (int)v26(a1) )
    goto LABEL_39;
LABEL_45:
  v31.m128i_i64[0] = 0;
  v60 = 0;
  v62 = 0;
  v61 = 0;
  v63 = 0;
  sub_6DDE0(a1, &v60);
  v32 = *(_QWORD **)(v4 + 304);
  if ( (_QWORD)v61 )
  {
    v33 = 0;
    do
    {
      v34 = *(_DWORD *)(v60 + 4 * v33);
      if ( v34 != -1 )
      {
        v35 = v56;
        if ( !v56 )
          goto LABEL_55;
        v36 = &v55;
        do
        {
          while ( 1 )
          {
            v37 = v35[2];
            v38 = v35[3];
            if ( v34 > *((_DWORD *)v35 + 8) )
              break;
            v36 = (int *)v35;
            v35 = (_QWORD *)v35[2];
            if ( !v37 )
              goto LABEL_53;
          }
          v35 = (_QWORD *)v35[3];
        }
        while ( v38 );
LABEL_53:
        if ( v36 == &v55 || v34 < v36[8] )
        {
LABEL_55:
          if ( v32 == (_QWORD *)(*(_QWORD *)(v4 + 320) - 8LL) )
          {
            v48 = *(_QWORD *)(v4 + 328);
            if ( (((__int64)v32 - *(_QWORD *)(v4 + 312)) >> 3)
               + ((__int64)(*(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 272)) >> 3)
               + (((v48 == 0) + ((v48 - *(_QWORD *)(v4 + 296)) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("cannot create std::deque larger than max_size()");
            if ( (unsigned __int64)(*(_QWORD *)(v4 + 264) - ((v48 - *(_QWORD *)(v4 + 256)) >> 3)) <= 1 )
            {
              sub_364280(v4 + 256, 1u, 0);
              v48 = *(_QWORD *)(v4 + 328);
            }
            *(_QWORD *)(v48 + 8) = operator new(0x200u);
            **(_QWORD **)(v4 + 304) = v34;
            v49 = (unsigned __int64 *)(*(_QWORD *)(v4 + 328) + 8LL);
            *(_QWORD *)(v4 + 328) = v49;
            v32 = (_QWORD *)*v49;
            v31 = _mm_unpacklo_epi64((__m128i)*v49, (__m128i)(*v49 + 512));
            *(__m128i *)(v4 + 312) = v31;
          }
          else
          {
            *v32 = v34;
            v32 = (_QWORD *)(*(_QWORD *)(v4 + 304) + 8LL);
          }
          *(_QWORD *)(v4 + 304) = v32;
        }
      }
      ++v33;
    }
    while ( v33 < (unsigned __int64)v61 );
  }
  v39 = (((__int64)v32 - *(_QWORD *)(v4 + 312)) >> 3)
      + ((__int64)(*(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 272)) >> 3)
      + (((*(_QWORD *)(v4 + 328) == 0) + ((__int64)(*(_QWORD *)(v4 + 328) - *(_QWORD *)(v4 + 296)) >> 3) - 1) << 6);
  v40 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v40 == sub_65040 )
    v41 = *(_DWORD *)(a1 + 56);
  else
    v41 = v40(a1);
  if ( v41 != v39 )
  {
    if ( !under_debugger )
      sub_383060(0xCBA8u, *(double *)v31.m128i_i64);
    BUG();
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  v42 = (_QWORD **)v56;
  if ( v56 )
  {
    do
    {
      sub_35E8F0(v42[3]);
      v43 = v42;
      v42 = (_QWORD **)v42[2];
      operator delete(v43, 0x28u);
    }
    while ( v42 );
  }
  return v64 - __readfsqword(0x28u);
}

