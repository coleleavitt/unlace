unsigned __int64 __fastcall sub_35F6C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  __int64 *v7; // rdx
  __int64 v8; // rbx
  __int64 i; // r12
  __int64 *v11; // rbp
  __int64 v12; // rcx
  __int64 j; // r15
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  __int64 k; // r15
  _QWORD *v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // r12
  int v20; // eax
  __int64 (__fastcall *v21)(__int64); // rax
  int v22; // ecx
  __int64 (__fastcall *v23)(__int64, int); // rax
  unsigned __int64 *v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // r8
  unsigned __int64 v27; // r15
  int v28; // esi
  _QWORD *v29; // rax
  int *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64); // rax
  int v35; // eax
  _QWORD **v36; // rbx
  void *v37; // rdi
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 *v41; // rdx
  __int64 v42; // rdx
  unsigned __int64 *v43; // rdx
  __int64 v44; // [rsp+0h] [rbp-B8h]
  __int64 v45; // [rsp+0h] [rbp-B8h]
  int v46; // [rsp+0h] [rbp-B8h]
  int v47; // [rsp+0h] [rbp-B8h]
  __int64 v48; // [rsp+10h] [rbp-A8h] BYREF
  int v49; // [rsp+18h] [rbp-A0h] BYREF
  void *v50; // [rsp+20h] [rbp-98h]
  int *v51; // [rsp+28h] [rbp-90h]
  int *v52; // [rsp+30h] [rbp-88h]
  __int64 v53; // [rsp+38h] [rbp-80h]
  __int64 v54; // [rsp+40h] [rbp-78h] BYREF
  __int128 v55; // [rsp+48h] [rbp-70h]
  __int64 v56; // [rsp+58h] [rbp-60h]
  __int128 v57; // [rsp+60h] [rbp-58h]
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 800);
  v58 = __readfsqword(0x28u);
  v4 = v3 + 8;
  if ( *(_BYTE *)(v3 + 520)
    || ((v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 64LL), v5 != sub_60CD0)
      ? (v6 = ((__int64 (*)(void))v5)(), v4 = v3 + 8)
      : (v6 = *(_DWORD *)(v3 + 152)),
        !v6) )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v3 + 8) + 168LL))(v4, 0);
    if ( *(_QWORD *)(v3 + 208) )
    {
      *(_QWORD *)(v3 + 216) = 0;
      qfree();
      *(_QWORD *)(v3 + 208) = 0;
      *(_QWORD *)(v3 + 224) = 0;
    }
    *(_BYTE *)(v3 + 520) = 0;
    sub_35B580(a1, a2);
  }
  else
  {
    v7 = *(__int64 **)(v3 + 192);
    v8 = *(_QWORD *)(v3 + 184);
    for ( i = v8 + 120LL * (_QWORD)v7; i != v8; *(_DWORD *)(v8 - 8) = 0 )
    {
      v7 = *(__int64 **)v8;
      if ( *(_QWORD *)v8 )
      {
        if ( (*((_DWORD *)v7 + 26))-- == 1 )
        {
          v11 = *(__int64 **)v8;
          if ( *(_QWORD *)v8 )
          {
            sub_253D70(*(__int64 **)v8);
            v12 = v11[23];
            if ( v12 )
            {
              v44 = v11[24];
              if ( v44 )
              {
                for ( j = 0; j != v44; ++j )
                {
                  v14 = (_QWORD *)(v12 + 24 * j);
                  if ( *v14 )
                  {
                    v14[1] = 0;
                    qfree();
                    v12 = v11[23];
                  }
                }
              }
              v11[24] = 0;
              qfree();
            }
            if ( v11[20] )
            {
              v11[21] = 0;
              qfree();
            }
            v15 = v11[16];
            if ( v15 )
            {
              v45 = v11[17];
              if ( v45 )
              {
                for ( k = 0; k != v45; ++k )
                {
                  v17 = (_QWORD *)(v15 + 32 * k);
                  if ( *v17 )
                  {
                    v17[1] = 0;
                    qfree();
                    v15 = v11[16];
                  }
                }
              }
              v11[17] = 0;
              qfree();
            }
            sub_250450((__int64)(v11 + 2));
            j__qfree();
          }
        }
      }
      v18 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)v8 = 0;
      if ( v18 )
      {
        *(_QWORD *)(v8 + 16) = 0;
        qfree();
        *(_QWORD *)(v8 + 8) = 0;
        *(_QWORD *)(v8 + 24) = 0;
      }
      *(_QWORD *)(v8 + 104) = 0;
      v8 += 120;
      *(_OWORD *)(v8 - 72) = 0;
      *(_OWORD *)(v8 - 56) = 0;
      *(_DWORD *)(v8 - 20) = 0;
    }
  }
  v19 = 0;
  v49 = 0;
  v50 = nullptr;
  v51 = &v49;
  v52 = &v49;
  v53 = 0;
  while ( 1 )
  {
    v21 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
    if ( v21 != sub_60CC0 )
      break;
    if ( v19 >= *(int *)(a1 + 56) )
      goto LABEL_45;
LABEL_39:
    v22 = v19;
    v23 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 96LL);
    if ( v23 != sub_60D10 )
    {
      v20 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *, _QWORD))v23)(
              a1,
              (unsigned int)v19,
              v7,
              (unsigned int)v19);
      v22 = v19;
LABEL_35:
      if ( v20 )
        goto LABEL_36;
      goto LABEL_41;
    }
    if ( *(_QWORD *)(a1 + 56) )
    {
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 24LL * (int)v19 + 8);
      goto LABEL_35;
    }
LABEL_41:
    v24 = *(unsigned __int64 **)(v3 + 304);
    if ( v24 == (unsigned __int64 *)(*(_QWORD *)(v3 + 320) - 8LL) )
    {
      v39 = *(_QWORD *)(v3 + 328);
      if ( (((v39 == 0) + ((v39 - *(_QWORD *)(v3 + 296)) >> 3) - 1) << 6)
         + (((__int64)v24 - *(_QWORD *)(v3 + 312)) >> 3)
         + ((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 272)) >> 3) == 0xFFFFFFFFFFFFFFFLL )
        std::__throw_length_error("cannot create std::deque larger than max_size()");
      if ( (unsigned __int64)(*(_QWORD *)(v3 + 264) - ((v39 - *(_QWORD *)(v3 + 256)) >> 3)) <= 1 )
      {
        v47 = v22;
        sub_35F000(v3 + 256, 1u, 0);
        v39 = *(_QWORD *)(v3 + 328);
        v22 = v47;
      }
      v46 = v22;
      v40 = operator new(0x200u);
      v22 = v46;
      *(_QWORD *)(v39 + 8) = v40;
      **(_QWORD **)(v3 + 304) = v19;
      v41 = (__int64 *)(*(_QWORD *)(v3 + 328) + 8LL);
      *(_QWORD *)(v3 + 328) = v41;
      v25 = *v41;
      *(__m128i *)(v3 + 312) = _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)*v41,
                                 (__m128i)(unsigned __int64)(*v41 + 512));
    }
    else
    {
      *v24 = v19;
      v25 = *(_QWORD *)(v3 + 304) + 8LL;
    }
    *(_QWORD *)(v3 + 304) = v25;
    LODWORD(v54) = v22;
    sub_35E800(&v48, (int *)&v54);
LABEL_36:
    ++v19;
  }
  if ( v19 < (int)v21(a1) )
    goto LABEL_39;
LABEL_45:
  v54 = 0;
  v56 = 0;
  v55 = 0;
  v57 = 0;
  sub_69A60(a1, &v54);
  v26 = *(_QWORD **)(v3 + 304);
  if ( (_QWORD)v55 )
  {
    v27 = 0;
    do
    {
      v28 = *(_DWORD *)(v54 + 4 * v27);
      if ( v28 != -1 )
      {
        v29 = v50;
        if ( !v50 )
          goto LABEL_55;
        v30 = &v49;
        do
        {
          while ( 1 )
          {
            v31 = v29[2];
            v32 = v29[3];
            if ( v28 > *((_DWORD *)v29 + 8) )
              break;
            v30 = (int *)v29;
            v29 = (_QWORD *)v29[2];
            if ( !v31 )
              goto LABEL_53;
          }
          v29 = (_QWORD *)v29[3];
        }
        while ( v32 );
LABEL_53:
        if ( v30 == &v49 || v28 < v30[8] )
        {
LABEL_55:
          if ( v26 == (_QWORD *)(*(_QWORD *)(v3 + 320) - 8LL) )
          {
            v42 = *(_QWORD *)(v3 + 328);
            if ( (((__int64)v26 - *(_QWORD *)(v3 + 312)) >> 3)
               + ((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 272)) >> 3)
               + (((v42 == 0) + ((v42 - *(_QWORD *)(v3 + 296)) >> 3) - 1) << 6) == 0xFFFFFFFFFFFFFFFLL )
              std::__throw_length_error("cannot create std::deque larger than max_size()");
            if ( (unsigned __int64)(*(_QWORD *)(v3 + 264) - ((v42 - *(_QWORD *)(v3 + 256)) >> 3)) <= 1 )
            {
              sub_35F000(v3 + 256, 1u, 0);
              v42 = *(_QWORD *)(v3 + 328);
            }
            *(_QWORD *)(v42 + 8) = operator new(0x200u);
            **(_QWORD **)(v3 + 304) = v28;
            v43 = (unsigned __int64 *)(*(_QWORD *)(v3 + 328) + 8LL);
            *(_QWORD *)(v3 + 328) = v43;
            v26 = (_QWORD *)*v43;
            *(__m128i *)(v3 + 312) = _mm_unpacklo_epi64((__m128i)*v43, (__m128i)(*v43 + 512));
          }
          else
          {
            *v26 = v28;
            v26 = (_QWORD *)(*(_QWORD *)(v3 + 304) + 8LL);
          }
          *(_QWORD *)(v3 + 304) = v26;
        }
      }
      ++v27;
    }
    while ( v27 < (unsigned __int64)v55 );
  }
  v33 = (((__int64)v26 - *(_QWORD *)(v3 + 312)) >> 3)
      + ((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 272)) >> 3)
      + (((*(_QWORD *)(v3 + 328) == 0) + ((__int64)(*(_QWORD *)(v3 + 328) - *(_QWORD *)(v3 + 296)) >> 3) - 1) << 6);
  v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v34 == sub_60CC0 )
    v35 = *(_DWORD *)(a1 + 56);
  else
    v35 = v34(a1);
  if ( v35 != v33 )
  {
    if ( !under_debugger )
      sub_37DDE0(52136);
    BUG();
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree();
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree();
  }
  v36 = (_QWORD **)v50;
  if ( v50 )
  {
    do
    {
      sub_359670(v36[3]);
      v37 = v36;
      v36 = (_QWORD **)v36[2];
      operator delete(v37, 0x28u);
    }
    while ( v36 );
  }
  return v58 - __readfsqword(0x28u);
}

