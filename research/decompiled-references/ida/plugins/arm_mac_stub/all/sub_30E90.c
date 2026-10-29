__int64 __fastcall sub_30E90(__int64 a1, int a2, void *a3, size_t a4, _QWORD *a5, size_t *a6)
{
  unsigned __int64 *v9; // rsi
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  size_t v14; // r8
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  size_t v19; // r8
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned int *v24; // rax
  unsigned int *v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // eax
  size_t v29; // rbp
  _QWORD *v30; // r14
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // r15
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  void *v36; // rax
  void *v37; // rsi
  __int64 v38; // rsi
  unsigned __int64 v39; // rax
  struct _Unwind_Exception *v40; // rbx
  unsigned __int64 v41; // [rsp+8h] [rbp-A0h]
  _QWORD *v42; // [rsp+10h] [rbp-98h]
  void *v43; // [rsp+18h] [rbp-90h]
  size_t n; // [rsp+20h] [rbp-88h]
  unsigned __int64 v45; // [rsp+28h] [rbp-80h]
  void *v46; // [rsp+30h] [rbp-78h]
  char *v47; // [rsp+38h] [rbp-70h]
  __int64 v48; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-60h]
  unsigned __int64 v50; // [rsp+50h] [rbp-58h]
  _BYTE src[5]; // [rsp+63h] [rbp-45h] BYREF
  unsigned __int64 v52; // [rsp+68h] [rbp-40h] BYREF

  LODWORD(v41) = a2;
  v43 = a3;
  v42 = a5;
  v52 = __readfsqword(0x28u);
  sub_31A90(&v48, 39);
  v9 = &v52;
  v10 = src;
  v11 = pack_dd() - (_QWORD)src;
  v14 = v11;
  if ( v11 )
  {
    v15 = v49;
    v16 = v49 + v11;
    if ( __CFADD__(v49, v11) )
    {
      if ( v49 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v49 != 0x7FFFFFFFFFFFFFFFLL )
          v49 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        v9 = (unsigned __int64 *)src;
        v10 = (_BYTE *)(v15 + v48);
        memcpy((void *)(v15 + v48), src, v14);
        goto LABEL_7;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v38 = v48;
    v39 = v49;
    if ( v50 < v16 )
    {
      v45 = v49;
      n = v14;
      v41 = v16;
      v48 = qvector_reserve();
      v38 = v48;
      v15 = v45;
      v39 = v49;
      v14 = n;
      v16 = v41;
    }
    v45 = v15;
    n = v14;
    v41 = v16;
    memset((void *)(v38 + v39), 0, v16 - v39);
    v14 = n;
    v15 = v45;
    v49 = v41;
    goto LABEL_6;
  }
LABEL_7:
  if ( HIDWORD(a4) )
  {
    v40 = (struct _Unwind_Exception *)sub_309B0(v10, v9, v12, v13, v14);
    if ( v48 )
    {
      v49 = 0;
      qfree();
    }
    _Unwind_Resume(v40);
  }
  v17 = pack_dd() - (_QWORD)src;
  v19 = v17;
  if ( v17 )
  {
    v20 = v49;
    v21 = v49 + v17;
    if ( __CFADD__(v49, v17) )
    {
      if ( v49 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v49 != 0x7FFFFFFFFFFFFFFFLL )
          v49 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
      v21 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = v48;
    v23 = v49;
    if ( v50 < v21 )
    {
      n = v19;
      v41 = v21;
      v48 = qvector_reserve();
      v22 = v48;
      v19 = n;
      v23 = v49;
      v21 = v41;
    }
    n = v19;
    v41 = v21;
    memset((void *)(v22 + v23), 0, v21 - v23);
    v19 = n;
    v49 = v41;
LABEL_16:
    memcpy((void *)(v20 + v48), src, v19);
  }
  if ( a4 )
  {
    v32 = v49;
    v33 = v49 + a4;
    if ( __CFADD__(v49, a4) )
    {
      if ( v49 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v49 != 0x7FFFFFFFFFFFFFFFLL )
          v49 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_38;
      }
      v33 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v34 = v48;
    v35 = v49;
    if ( v50 < v33 )
    {
      v48 = qvector_reserve();
      v34 = v48;
      v35 = v49;
    }
    memset((void *)(v34 + v35), 0, v33 - v35);
    v49 = v33;
LABEL_38:
    memcpy((void *)(v48 + v32), v43, a4);
  }
  v24 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64, size_t))(*(_QWORD *)a1 + 16LL))(
                          a1,
                          39,
                          &v48,
                          v18,
                          v19);
  v25 = v24;
  if ( !v24 )
    goto LABEL_43;
  v26 = *v24;
  v46 = (char *)v25 + 5;
  v47 = (char *)v25 + v26 + 5;
  v27 = unpack_dd();
  v28 = unpack_dd();
  v29 = v28;
  if ( !v28 )
    goto LABEL_21;
  v30 = v42;
  if ( !v42 )
    goto LABEL_21;
  v36 = (void *)qalloc();
  *v30 = v36;
  if ( !v36 )
    goto LABEL_21;
  v37 = v46;
  if ( v47 < (char *)v46 + v29 || (char *)v46 + v29 < v46 )
  {
LABEL_43:
    v27 = -1;
    goto LABEL_24;
  }
  v46 = (char *)v46 + v29;
  memcpy(v36, v37, v29);
LABEL_21:
  if ( a6 )
    *a6 = v29;
  qfree();
LABEL_24:
  if ( v48 )
  {
    v49 = 0;
    qfree();
  }
  return v27;
}

