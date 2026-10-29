__int64 __fastcall sub_259A0(__int64 a1, __int64 a2, const void *a3, size_t a4, __int64 a5)
{
  unsigned __int64 *v9; // rsi
  _BYTE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  size_t v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r10
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v28; // rax
  unsigned int *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rbp
  char *v32; // r13
  char *v33; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r8
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  size_t v39; // rax
  size_t v40; // r14
  void *v41; // rdi
  size_t v42; // r15
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+10h] [rbp-88h]
  unsigned __int64 v48; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h]
  unsigned __int64 v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v52; // [rsp+38h] [rbp-60h]
  unsigned __int64 v53; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-40h] BYREF

  v55 = __readfsqword(0x28u);
  sub_32790(&v51, 26);
  v9 = &v55;
  v10 = src;
  v11 = pack_dq() - (_QWORD)src;
  v15 = v11;
  if ( v11 )
  {
    v16 = v52;
    v17 = v52 + v11;
    if ( __CFADD__(v52, v11) )
    {
      if ( v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v52 != 0x7FFFFFFFFFFFFFFFLL )
          v52 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        v9 = (unsigned __int64 *)src;
        v10 = (_BYTE *)(v16 + v51);
        memcpy((void *)(v16 + v51), src, v15);
        goto LABEL_7;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v43 = v51;
    v44 = v52;
    if ( v53 < v17 )
    {
      v48 = v52;
      n = v15;
      v46 = v17;
      v51 = qvector_reserve();
      v43 = v51;
      v16 = v48;
      v44 = v52;
      v15 = n;
      v17 = v46;
    }
    v48 = v16;
    n = v15;
    v46 = v17;
    memset((void *)(v43 + v44), 0, v17 - v44);
    v15 = n;
    v16 = v48;
    v52 = v46;
    goto LABEL_6;
  }
LABEL_7:
  if ( HIDWORD(a4) )
    sub_22460(v10, v9, v12, v13, v14, v15);
  v18 = pack_dd() - (_QWORD)src;
  v21 = v18;
  if ( v18 )
  {
    v22 = v52;
    v23 = v52 + v18;
    if ( __CFADD__(v52, v18) )
    {
      if ( v52 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v52 != 0x7FFFFFFFFFFFFFFFLL )
          v52 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_16;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = v51;
    v25 = v52;
    if ( v53 < v23 )
    {
      v48 = v52;
      n = v21;
      v46 = v23;
      v51 = qvector_reserve();
      v24 = v51;
      v22 = v48;
      v25 = v52;
      v21 = n;
      v23 = v46;
    }
    v48 = v22;
    n = v21;
    v46 = v23;
    memset((void *)(v24 + v25), 0, v23 - v25);
    v21 = n;
    v22 = v48;
    v52 = v46;
LABEL_16:
    memcpy((void *)(v22 + v51), src, v21);
  }
  if ( !a4 )
    goto LABEL_18;
  v35 = v52;
  v36 = v52 + a4;
  if ( __CFADD__(v52, a4) )
  {
    if ( v52 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v52 != 0x7FFFFFFFFFFFFFFFLL )
        v52 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_43;
    }
    v36 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v37 = v51;
  v38 = v52;
  if ( v53 < v36 )
  {
    v46 = v36;
    v51 = qvector_reserve();
    v37 = v51;
    v36 = v46;
    v38 = v52;
  }
  v46 = v36;
  memset((void *)(v37 + v38), 0, v36 - v38);
  v52 = v46;
LABEL_43:
  memcpy((void *)(v51 + v35), a3, a4);
LABEL_18:
  v26 = a1 + 864;
  v27 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v27 == sub_D0D0 )
    v28 = (unsigned int *)sub_2F150(v26, 26, &v51, 0);
  else
    v28 = (unsigned int *)((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, __int64, size_t))v27)(
                            v26,
                            26,
                            &v51,
                            v19,
                            v20,
                            v21);
  v29 = v28;
  if ( v28 )
  {
    v30 = *v28;
    s = (char *)v29 + 5;
    v50 = (unsigned __int64)v29 + v30 + 5;
    v31 = (int)unpack_dd();
    if ( a5 && (int)v31 <= 0 )
    {
      v32 = s;
      v33 = s;
      do
      {
        if ( (unsigned __int64)v33 >= v50 )
          goto LABEL_26;
        ++v33;
      }
      while ( *(v33 - 1) );
      s = v33;
      if ( !v32 || (v39 = strlen(v32), (v40 = v39) == 0) )
      {
LABEL_26:
        *(_QWORD *)(a5 + 8) = 0;
        goto LABEL_27;
      }
      v41 = *(void **)a5;
      v42 = v39 + 1;
      if ( *(_QWORD *)(a5 + 16) < v39 + 1 )
      {
        v45 = qvector_reserve();
        *(_QWORD *)a5 = v45;
        v41 = (void *)v45;
      }
      *(_QWORD *)(a5 + 8) = v42;
      memmove(v41, v32, v40);
      *(_BYTE *)(*(_QWORD *)a5 + v40) = 0;
    }
LABEL_27:
    qfree();
  }
  else
  {
    v31 = -1;
  }
  if ( v51 )
  {
    v52 = 0;
    qfree();
  }
  return v31;
}

