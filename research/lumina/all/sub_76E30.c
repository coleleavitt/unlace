unsigned __int64 __fastcall sub_76E30(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  void *v10; // rax
  void *v11; // rsi
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  size_t v21; // r12
  size_t v22; // r12
  void *v23; // rax
  void *v24; // rsi
  __int64 v25; // rax
  size_t na; // [rsp+10h] [rbp-4E8h]
  size_t n; // [rsp+10h] [rbp-4E8h]
  void *v28; // [rsp+20h] [rbp-4D8h] BYREF
  __int128 v29; // [rsp+28h] [rbp-4D0h]
  void *v30; // [rsp+38h] [rbp-4C0h] BYREF
  __int128 v31; // [rsp+40h] [rbp-4B8h]
  _BYTE v32[280]; // [rsp+50h] [rbp-4A8h] BYREF
  void *v33; // [rsp+170h] [rbp-388h] BYREF
  __int128 v34; // [rsp+178h] [rbp-380h]
  void *src; // [rsp+188h] [rbp-370h] BYREF
  size_t v36[2]; // [rsp+190h] [rbp-368h]
  void *v37; // [rsp+1A0h] [rbp-358h] BYREF
  size_t v38[2]; // [rsp+1A8h] [rbp-350h]
  void *v39; // [rsp+1B8h] [rbp-340h] BYREF
  __int128 v40; // [rsp+1C0h] [rbp-338h]
  void *ptr; // [rsp+1D0h] [rbp-328h] BYREF
  __int128 v42; // [rsp+1D8h] [rbp-320h]
  __int64 v43; // [rsp+1E8h] [rbp-310h]
  _BYTE v44[280]; // [rsp+1F0h] [rbp-308h] BYREF
  __int64 v45; // [rsp+308h] [rbp-1F0h]
  void *v46; // [rsp+310h] [rbp-1E8h] BYREF
  __int128 v47; // [rsp+318h] [rbp-1E0h]
  void *v48; // [rsp+328h] [rbp-1D0h]
  __int128 v49; // [rsp+330h] [rbp-1C8h]
  void *v50; // [rsp+340h] [rbp-1B8h]
  __int128 v51; // [rsp+348h] [rbp-1B0h]
  void *v52; // [rsp+358h] [rbp-1A0h] BYREF
  __int128 v53; // [rsp+360h] [rbp-198h]
  __int64 v54; // [rsp+370h] [rbp-188h] BYREF
  __int128 v55; // [rsp+378h] [rbp-180h]
  __int64 v56; // [rsp+388h] [rbp-170h]
  _BYTE v57[280]; // [rsp+390h] [rbp-168h] BYREF
  __int64 v58; // [rsp+4A8h] [rbp-50h]
  unsigned __int64 v59; // [rsp+4B8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  if ( a1[1] == a2 )
    return v59 - __readfsqword(0x28u);
  v28 = nullptr;
  memset(v32, 0, sizeof(v32));
  v30 = nullptr;
  v33 = nullptr;
  src = nullptr;
  v29 = 0;
  v31 = 0;
  v34 = 0;
  *(_OWORD *)v36 = 0;
  sub_66410(&src, (__int64)&v28);
  v37 = nullptr;
  *(_OWORD *)v38 = 0;
  sub_66410(&v37, (__int64)&v30);
  v4 = a1[1];
  v39 = nullptr;
  ptr = nullptr;
  qmemcpy(v44, v32, sizeof(v44));
  v40 = 0;
  v43 = -1;
  v45 = -1;
  v42 = 0;
  if ( a2 < v4 )
  {
    v12 = a2;
    v13 = 416 * a2;
    do
    {
      v14 = v13 + *a1;
      v15 = *(void **)(v14 + 96);
      if ( v15 )
      {
        *(_QWORD *)(v14 + 104) = 0;
        j__free(v15);
      }
      v16 = *(void **)(v14 + 72);
      if ( v16 )
      {
        *(_QWORD *)(v14 + 80) = 0;
        j__free(v16);
      }
      v17 = *(void **)(v14 + 48);
      if ( v17 )
      {
        *(_QWORD *)(v14 + 56) = 0;
        j__free(v17);
      }
      v18 = *(void **)(v14 + 24);
      if ( v18 )
      {
        *(_QWORD *)(v14 + 32) = 0;
        j__free(v18);
      }
      v19 = *(void **)v14;
      if ( *(_QWORD *)v14 )
      {
        *(_QWORD *)(v14 + 8) = 0;
        j__free(v19);
      }
      ++v12;
      v13 += 416;
    }
    while ( v4 != v12 );
    goto LABEL_25;
  }
  if ( v4 < a2 )
  {
    v5 = *a1;
    v6 = a1[2];
    if ( (unsigned __int64)&v33 >= *a1 && (unsigned __int64)&v33 < v5 + 416 * v6 )
    {
      v46 = nullptr;
      v47 = 0;
      sub_66360(&v46, (__int64)&v33);
      v21 = v36[0];
      v48 = nullptr;
      v49 = 0;
      if ( v36[0] )
      {
        v48 = (void *)sub_198760(v36[0]);
        *((_QWORD *)&v49 + 1) = v21;
        memcpy(v48, src, v21);
        *(_QWORD *)&v49 = v21;
      }
      v22 = v38[0];
      v50 = nullptr;
      v51 = 0;
      if ( v38[0] )
      {
        v50 = (void *)sub_198760(v38[0]);
        *((_QWORD *)&v51 + 1) = v22;
        memcpy(v50, v37, v22);
        *(_QWORD *)&v51 = v22;
      }
      v52 = nullptr;
      v53 = 0;
      sub_66360(&v52, (__int64)&v39);
      v54 = 0;
      v55 = 0;
      sub_66360(&v54, (__int64)&ptr);
      qmemcpy(v57, v44, sizeof(v57));
      v56 = v43;
      v58 = v45;
      sub_76B50(a1, a2, (__int64)&v46);
      sub_74260((__int64)&v46);
      goto LABEL_26;
    }
    if ( v6 >= a2 || (v25 = sub_1987B0(a1, v5, a2, 416), v4 = a1[1], *a1 = v25, v5 = v25, v4 < a2) )
    {
      v7 = 416 * v4;
      while ( 1 )
      {
        v9 = v7 + v5;
        *(_QWORD *)v9 = 0;
        *(_OWORD *)(v9 + 8) = 0;
        sub_66360((_QWORD *)v9, (__int64)&v33);
        *(_QWORD *)(v9 + 24) = 0;
        *(_OWORD *)(v9 + 32) = 0;
        if ( v36[0] )
        {
          na = v36[0];
          v10 = (void *)sub_198760(v36[0]);
          *(_QWORD *)(v9 + 24) = v10;
          v11 = src;
          *(_QWORD *)(v9 + 40) = na;
          memcpy(v10, v11, na);
          *(_QWORD *)(v9 + 32) = na;
        }
        *(_QWORD *)(v9 + 48) = 0;
        *(_OWORD *)(v9 + 56) = 0;
        if ( v38[0] )
        {
          n = v38[0];
          v23 = (void *)sub_198760(v38[0]);
          *(_QWORD *)(v9 + 48) = v23;
          v24 = v37;
          *(_QWORD *)(v9 + 64) = n;
          memcpy(v23, v24, n);
          *(_QWORD *)(v9 + 56) = n;
        }
        *(_QWORD *)(v9 + 72) = 0;
        *(_OWORD *)(v9 + 80) = 0;
        sub_66360((_QWORD *)(v9 + 72), (__int64)&v39);
        *(_QWORD *)(v9 + 96) = 0;
        *(_OWORD *)(v9 + 104) = 0;
        sub_66360((_QWORD *)(v9 + 96), (__int64)&ptr);
        ++v4;
        v7 += 416;
        *(_QWORD *)(v9 + 120) = v43;
        v8 = v45;
        qmemcpy((void *)(v9 + 128), v44, 0x118u);
        *(_QWORD *)(v9 + 408) = v8;
        if ( v4 >= a2 )
          break;
        v5 = *a1;
      }
    }
LABEL_25:
    a1[1] = a2;
LABEL_26:
    if ( ptr )
    {
      *(_QWORD *)&v42 = 0;
      j__free(ptr);
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      j__free(v39);
    }
  }
  if ( v37 )
  {
    v38[0] = 0;
    j__free(v37);
  }
  if ( src )
  {
    v36[0] = 0;
    j__free(src);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    j__free(v33);
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    j__free(v30);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    j__free(v28);
  }
  return v59 - __readfsqword(0x28u);
}
