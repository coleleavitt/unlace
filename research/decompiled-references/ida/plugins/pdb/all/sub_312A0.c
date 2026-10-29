__int64 __fastcall sub_312A0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 i; // r15
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v17; // rdi
  int v18; // r15d
  int v19; // r14d
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  _QWORD *v22; // r10
  __int64 v23; // r13
  _DWORD *v24; // rdi
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // eax
  unsigned int v27; // eax
  unsigned __int64 v28; // r11
  size_t v29; // r8
  const void *v30; // r13
  void *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // rbp
  _QWORD *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  unsigned int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // eax
  __int64 v42; // [rsp+8h] [rbp-130h]
  unsigned __int8 v43; // [rsp+8h] [rbp-130h]
  _QWORD *v44; // [rsp+10h] [rbp-128h]
  unsigned __int64 v45; // [rsp+10h] [rbp-128h]
  unsigned __int64 v46; // [rsp+18h] [rbp-120h]
  _QWORD *v47; // [rsp+18h] [rbp-120h]
  __int64 v48; // [rsp+20h] [rbp-118h]
  size_t v49; // [rsp+20h] [rbp-118h]
  __int64 v50; // [rsp+28h] [rbp-110h]
  _QWORD v51[6]; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v52[4]; // [rsp+60h] [rbp-D8h] BYREF
  int v53; // [rsp+80h] [rbp-B8h]
  __int64 v54; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+98h] [rbp-A0h]
  __int64 v56; // [rsp+A8h] [rbp-90h]
  __int64 v57; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-80h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-78h]
  __int64 v60; // [rsp+D0h] [rbp-68h]
  __int128 v61; // [rsp+D8h] [rbp-60h]
  char v62; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v63; // [rsp+F8h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  v8 = *a3;
  if ( *a3 )
  {
    v9 = a3[1];
    if ( v9 )
    {
      v42 = a1;
      for ( i = 0; i != v9; ++i )
      {
        v11 = (_QWORD *)(v8 + 80 * i);
        clear_tinfo_t(v11 + 8);
        v12 = v11[5];
        if ( v12 )
        {
          v11[6] = 0;
          qfree(v12);
        }
        v13 = v11[2];
        if ( v13 )
        {
          v11[3] = 0;
          qfree(v13);
        }
        cleanup_argloc(v11);
        v8 = *a3;
      }
      a1 = v42;
    }
    a3[1] = 0;
    qfree(v8);
    *a3 = 0;
    a3[2] = 0;
  }
  v14 = *(_QWORD *)(a1 + 312);
  v15 = *(_QWORD *)(a1 + 320);
  v51[1] = a2;
  v51[2] = a3;
  v51[0] = off_A9D78;
  v51[3] = a1;
  v51[4] = v14;
  v43 = (a4 != 0)
      & ((*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(*(_QWORD *)v15 + 16LL))(v15, a2, 0, v51) == 0);
  if ( !v43 )
    return a5;
  v17 = *(_QWORD *)(a1 + 320);
  v54 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v60 = 0;
  v62 = 16;
  v52[0] = off_A9DA0;
  v52[2] = &v54;
  v52[3] = a1;
  v53 = 0;
  v52[1] = a4;
  v55 = 0;
  v59 = 0;
  v61 = 0;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)v17 + 16LL))(v17, a4, 7, v52);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( !a3[1] )
    goto LABEL_36;
  do
  {
    if ( v20 < (unsigned __int64)v55 )
    {
      v21 = 80 * v20;
      v22 = (_QWORD *)(80 * v20 + *a3);
      v23 = 80 * v20 + v54;
      if ( v22[3] <= 1u && v22 + 2 != (_QWORD *)(v23 + 16) )
      {
        v28 = *(_QWORD *)(v23 + 24);
        if ( !v28 || (v29 = v28 - 1, v28 == 1) )
        {
          v22[3] = 0;
          v22 = (_QWORD *)(*a3 + v21);
        }
        else
        {
          v30 = *(const void **)(v23 + 16);
          v31 = (void *)v22[2];
          if ( v22[4] < v28 )
          {
            v50 = v21;
            v49 = v28 - 1;
            v47 = v22;
            v45 = v28;
            v31 = (void *)qvector_reserve(v22 + 2, v22[2], v28, 1);
            v22 = v47;
            v21 = v50;
            v29 = v49;
            v28 = v45;
            v47[2] = v31;
          }
          v22[3] = v28;
          v48 = v21;
          v46 = v28;
          v44 = v22;
          memmove(v31, v30, v29);
          *(_BYTE *)(v44[2] + v46 - 1) = 0;
          v22 = (_QWORD *)(v48 + *a3);
          v23 = v54 + v48;
        }
      }
      copy_argloc(v22, v23);
      if ( (_BYTE)v19 )
      {
LABEL_15:
        v19 = v43;
        goto LABEL_16;
      }
      if ( *(_DWORD *)v23 == 3 )
      {
        v24 = *(_DWORD **)(a1 + 320);
        v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 112LL);
        v26 = v25 == sub_23F30 ? v24[4] : ((__int64 (*)(void))v25)();
        if ( (unsigned int)(v26 - 3) <= 4 )
        {
          if ( ((a5 - 112) & 0xFFFFFFDF) != 0 )
          {
            if ( a5 != 128 )
              goto LABEL_15;
            v40 = *(_DWORD *)(v23 + 8);
            LOBYTE(v19) = (v18 | HIWORD(v40)) == 0;
            LOBYTE(v40) = v40 == 1;
            v19 = v40 & v19 ^ 1;
          }
          else
          {
            v27 = *(_DWORD *)(v23 + 8);
            if ( HIWORD(v27) )
              goto LABEL_15;
            LOBYTE(v19) = v18 != 0;
            if ( v27 != 1 )
            {
              LOBYTE(v19) = v27 == 2;
              LOBYTE(v27) = v18 == 1;
              v19 = v27 & v19 ^ 1;
            }
          }
        }
      }
    }
LABEL_16:
    v20 = ++v18;
  }
  while ( v18 < (unsigned __int64)a3[1] );
  if ( (_BYTE)v19 )
  {
    v38 = a5 & 0xFFFFFFF0;
    if ( (a5 & 0xFFFFFFF0) > 0x70 )
    {
      if ( v38 == 224 || (a5 & 0xFFFFFFE0) == 0x80 )
        a5 = 224;
      else
        a5 = 240;
    }
    else
    {
      a5 = 240;
      if ( v38 > 0x4F )
      {
        v39 = 0x100010001LL;
        a5 = _bittest64(&v39, v38 - 80) == 0 ? 240 : 224;
      }
    }
  }
LABEL_36:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  cleanup_argloc(&v58);
  clear_tinfo_t(&v57);
  v32 = v54;
  if ( v54 )
  {
    v33 = v55;
    if ( (_QWORD)v55 )
    {
      v34 = 0;
      do
      {
        v35 = (_QWORD *)(v32 + 80 * v34);
        clear_tinfo_t(v35 + 8);
        v36 = v35[5];
        if ( v36 )
        {
          v35[6] = 0;
          qfree(v36);
        }
        v37 = v35[2];
        if ( v37 )
        {
          v35[3] = 0;
          qfree(v37);
        }
        ++v34;
        cleanup_argloc(v35);
        v32 = v54;
      }
      while ( v33 != v34 );
    }
    *(_QWORD *)&v55 = 0;
    qfree(v32);
  }
  return a5;
}

