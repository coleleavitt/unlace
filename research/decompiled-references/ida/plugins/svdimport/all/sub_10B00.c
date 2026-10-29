__int64 __fastcall sub_10B00(_QWORD *a1, _BYTE *a2)
{
  unsigned int v3; // r13d
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rdi
  const char *v9; // rax
  const char *v10; // r12
  size_t v11; // rax
  size_t v12; // r14
  const char *v13; // rax
  const char *v14; // r12
  size_t v15; // rax
  size_t v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // r15
  const char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // r9
  size_t v24; // rax
  size_t v25; // r14
  const char *v26; // rax
  const char *v27; // r14
  size_t v28; // rax
  size_t v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  char v33; // al
  const void *v35; // r13
  _QWORD *v36; // r12
  size_t v37; // rax
  size_t v38; // rbp
  void *v39; // rdi
  void *v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  void *v43; // rdi
  void *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // r12
  __int64 v48; // rdi
  __int64 v49; // r13
  __int64 i; // r14
  _QWORD *v51; // rbp
  void *v52; // rdi
  void *v53; // rdx
  void *v54; // rdi
  size_t v55; // r14
  void *v56; // rdi
  void *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  const char *src; // [rsp+8h] [rbp-60h]
  _BYTE *srcb; // [rsp+8h] [rbp-60h]
  void *srcc; // [rsp+8h] [rbp-60h]
  void *srca; // [rsp+8h] [rbp-60h]
  void *srce; // [rsp+8h] [rbp-60h]
  void *srcd; // [rsp+8h] [rbp-60h]
  int v70; // [rsp+14h] [rbp-54h]
  const char *v72; // [rsp+28h] [rbp-40h]
  size_t v73; // [rsp+28h] [rbp-40h]

  if ( *((_BYTE *)a1 + 40) )
  {
    v45 = a1[3];
    *((_BYTE *)a1 + 40) = 0;
    if ( v45 )
    {
      v46 = v45 - 1;
      a1[3] = v46;
      v47 = (_QWORD *)(a1[2] + 80 * v46);
      v48 = v47[6];
      if ( v48 )
      {
        v49 = v47[7];
        if ( v49 )
        {
          for ( i = 0; i != v49; ++i )
          {
            v51 = (_QWORD *)(v48 + 48 * i);
            if ( v51[3] )
            {
              v51[4] = 0;
              qfree();
            }
            if ( *v51 )
            {
              v51[1] = 0;
              qfree();
            }
            v48 = v47[6];
          }
        }
        v47[7] = 0;
        qfree();
      }
      if ( v47[3] )
      {
        v47[4] = 0;
        qfree();
      }
      if ( *v47 )
      {
        v47[1] = 0;
        qfree();
      }
    }
  }
  while ( 1 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    if ( !(_BYTE)v3 )
      return v3;
    v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
    if ( v4 == 2 )
    {
      *((_BYTE *)a1 + 40) = 1;
      v33 = 0;
LABEL_26:
      *a2 = v33;
      return v3;
    }
    if ( v4 == 3 )
    {
      if ( a1[3] )
      {
        v35 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1);
        v36 = (_QWORD *)(a1[2] + 80LL * a1[3] - 80);
        if ( v35 && (v37 = strlen((const char *)v35), (v38 = v37) != 0) )
        {
          v54 = (void *)v36[3];
          v55 = v37 + 1;
          if ( v36[5] < v37 + 1 )
          {
            v62 = qvector_reserve();
            v36[3] = v62;
            v54 = (void *)v62;
          }
          v36[4] = v55;
          memmove(v54, v35, v38);
          *(_BYTE *)(v36[3] + v38) = 0;
        }
        else
        {
          v36[4] = 0;
        }
      }
    }
    else if ( v4 == 1 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 120LL))(*a1) )
    {
      v5 = a1[3];
      v6 = a1[2];
      if ( a1[4] < (unsigned __int64)(v5 + 1) )
      {
        v60 = qvector_reserve();
        v5 = a1[3];
        a1[2] = v60;
        v6 = v60;
      }
      v7 = v6 + 80 * v5;
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 48) = 0;
      *(_QWORD *)(v7 + 72) = 0;
      *(_OWORD *)(v7 + 8) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      *(_OWORD *)(v7 + 56) = 0;
      v8 = *a1;
      ++a1[3];
      v9 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 104LL))(v8);
      v10 = v9;
      if ( v9 && (v11 = strlen(v9), (v12 = v11) != 0) )
      {
        v56 = *(void **)v7;
        v57 = (void *)(v11 + 1);
        if ( *(_QWORD *)(v7 + 16) < v11 + 1 )
        {
          srce = (void *)(v11 + 1);
          v61 = qvector_reserve();
          v57 = srce;
          *(_QWORD *)v7 = v61;
          v56 = (void *)v61;
        }
        *(_QWORD *)(v7 + 8) = v57;
        memmove(v56, v10, v12);
        *(_BYTE *)(*(_QWORD *)v7 + v12) = 0;
      }
      else
      {
        *(_QWORD *)(v7 + 8) = 0;
      }
      v13 = (const char *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 112LL))(*a1);
      v14 = v13;
      if ( v13 && (v15 = strlen(v13), (v16 = v15) != 0) )
      {
        v52 = *(void **)(v7 + 24);
        v53 = (void *)(v15 + 1);
        if ( *(_QWORD *)(v7 + 40) < v15 + 1 )
        {
          srcd = (void *)(v15 + 1);
          v63 = qvector_reserve();
          v53 = srcd;
          *(_QWORD *)(v7 + 24) = v63;
          v52 = (void *)v63;
        }
        *(_QWORD *)(v7 + 32) = v53;
        memmove(v52, v14, v16);
        *(_BYTE *)(*(_QWORD *)(v7 + 24) + v16) = 0;
      }
      else
      {
        *(_QWORD *)(v7 + 32) = 0;
      }
      v17 = 0;
      v70 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 32LL))(*a1);
      if ( v70 > 0 )
      {
        do
        {
          while ( 1 )
          {
            v30 = *(_QWORD *)(v7 + 56);
            v31 = *(_QWORD *)(v7 + 48);
            if ( *(_QWORD *)(v7 + 64) < (unsigned __int64)(v30 + 1) )
            {
              v32 = qvector_reserve();
              v30 = *(_QWORD *)(v7 + 56);
              *(_QWORD *)(v7 + 48) = v32;
              v31 = v32;
            }
            v18 = v31 + 48 * v30;
            *(_QWORD *)v18 = 0;
            *(_QWORD *)(v18 + 24) = 0;
            *(_OWORD *)(v18 + 8) = 0;
            *(_OWORD *)(v18 + 32) = 0;
            ++*(_QWORD *)(v7 + 56);
            v19 = (const char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 40LL))(*a1, v17);
            if ( v19 && (src = v19, v24 = strlen(v19), v23 = src, (v25 = v24) != 0) )
            {
              v43 = *(void **)v18;
              v44 = (void *)(v24 + 1);
              if ( *(_QWORD *)(v18 + 16) < v24 + 1 )
              {
                v72 = src;
                srcc = (void *)(v24 + 1);
                v58 = qvector_reserve();
                v23 = v72;
                v44 = srcc;
                *(_QWORD *)v18 = v58;
                v43 = (void *)v58;
              }
              *(_QWORD *)(v18 + 8) = v44;
              memmove(v43, v23, v25);
              *(_BYTE *)(*(_QWORD *)v18 + v25) = 0;
            }
            else
            {
              *(_QWORD *)(v18 + 8) = 0;
            }
            v26 = (const char *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, const char *))(*(_QWORD *)*a1 + 48LL))(
                                  *a1,
                                  v17,
                                  v20,
                                  v21,
                                  v22,
                                  v23);
            v27 = v26;
            if ( v26 )
            {
              v28 = strlen(v26);
              v29 = v28;
              if ( v28 )
                break;
            }
            *(_QWORD *)(v18 + 32) = 0;
            if ( v70 == ++v17 )
              goto LABEL_35;
          }
          v39 = *(void **)(v18 + 24);
          v40 = (void *)(v28 + 1);
          if ( *(_QWORD *)(v18 + 40) < v28 + 1 )
          {
            v73 = v28;
            srca = (void *)(v28 + 1);
            v59 = qvector_reserve();
            v29 = v73;
            v40 = srca;
            *(_QWORD *)(v18 + 24) = v59;
            v39 = (void *)v59;
          }
          *(_QWORD *)(v18 + 32) = v40;
          ++v17;
          srcb = (_BYTE *)v29;
          memmove(v39, v27, v29);
          srcb[*(_QWORD *)(v18 + 24)] = 0;
        }
        while ( v70 != v17 );
      }
LABEL_35:
      v41 = a1[3];
      if ( v41 > 1 )
      {
        v42 = a1[2] + 16 * (5 * v41 - 10);
        if ( v42 )
          *(_QWORD *)(v7 + 72) = *(_QWORD *)(v42 + 72);
      }
      v33 = v3;
      goto LABEL_26;
    }
  }
}

