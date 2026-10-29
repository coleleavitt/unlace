__int64 __fastcall sub_25E60(__int64 a1, __int64 a2, unsigned __int64 a3, void *a4, size_t a5)
{
  __int64 v7; // rax
  size_t v8; // r13
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 *v11; // rsi
  _BYTE *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  size_t v18; // r13
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  size_t v22; // r15
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r8
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  __int64 (__fastcall *v28)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v29; // rax
  unsigned int *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r12
  int v33; // ebp
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // r13
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // [rsp+0h] [rbp-98h]
  void *v44; // [rsp+8h] [rbp-90h]
  unsigned __int64 v45; // [rsp+10h] [rbp-88h]
  unsigned __int64 v46; // [rsp+18h] [rbp-80h]
  char *v47; // [rsp+20h] [rbp-78h]
  char *v48; // [rsp+28h] [rbp-70h]
  __int64 v49; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-60h]
  unsigned __int64 v51; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-40h] BYREF

  v43 = a3;
  v44 = a4;
  v53 = __readfsqword(0x28u);
  sub_32790(&v49, 38);
  v7 = pack_dd() - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v50;
    v10 = v50 + v7;
    if ( __CFADD__(v50, v7) )
    {
      if ( v50 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v50 != 0x7FFFFFFFFFFFFFFFLL )
          v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v9 + v49), src, v8);
        goto LABEL_7;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v39 = v49;
    v40 = v50;
    if ( v51 < v10 )
    {
      v46 = v50;
      v45 = v10;
      v49 = qvector_reserve();
      v39 = v49;
      v9 = v46;
      v40 = v50;
      v10 = v45;
    }
    v46 = v9;
    v45 = v10;
    memset((void *)(v39 + v40), 0, v10 - v40);
    v9 = v46;
    v50 = v45;
    goto LABEL_6;
  }
LABEL_7:
  v11 = &v53;
  v12 = src;
  v13 = pack_dq() - (_QWORD)src;
  v18 = v13;
  if ( !v13 )
    goto LABEL_13;
  v19 = v50;
  v20 = v50 + v13;
  if ( !__CFADD__(v50, v13) )
    goto LABEL_47;
  if ( v50 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v20 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_47:
    v41 = v49;
    v42 = v50;
    if ( v51 < v20 )
    {
      v45 = v50;
      v43 = v20;
      v49 = qvector_reserve();
      v41 = v49;
      v19 = v45;
      v42 = v50;
      v20 = v43;
    }
    v45 = v19;
    v43 = v20;
    memset((void *)(v41 + v42), 0, v20 - v42);
    v19 = v45;
    v50 = v43;
    goto LABEL_12;
  }
  if ( v50 != 0x7FFFFFFFFFFFFFFFLL )
    v50 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  v11 = (unsigned __int64 *)src;
  v12 = (_BYTE *)(v19 + v49);
  memcpy((void *)(v19 + v49), src, v18);
LABEL_13:
  if ( HIDWORD(a5) )
    sub_22460(v12, v11, v14, v15, v16, v17);
  v21 = pack_dd() - (_QWORD)src;
  v22 = v21;
  if ( v21 )
  {
    v23 = v50;
    v24 = v50 + v21;
    if ( __CFADD__(v50, v21) )
    {
      if ( v50 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v50 != 0x7FFFFFFFFFFFFFFFLL )
          v50 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_22;
      }
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = v49;
    v26 = v50;
    if ( v51 < v24 )
    {
      v43 = v24;
      v49 = qvector_reserve();
      v25 = v49;
      v24 = v43;
      v26 = v50;
    }
    v43 = v24;
    memset((void *)(v25 + v26), 0, v24 - v26);
    v50 = v43;
LABEL_22:
    memcpy((void *)(v23 + v49), src, v22);
  }
  if ( !a5 )
    goto LABEL_24;
  v35 = v50;
  v36 = v50 + a5;
  if ( __CFADD__(v50, a5) )
  {
    if ( v50 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v50 != 0x7FFFFFFFFFFFFFFFLL )
        v50 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_40;
    }
    v36 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v37 = v49;
  v38 = v50;
  if ( v51 < v36 )
  {
    v49 = qvector_reserve();
    v37 = v49;
    v38 = v50;
  }
  memset((void *)(v37 + v38), 0, v36 - v38);
  v50 = v36;
LABEL_40:
  memcpy((void *)(v49 + v35), v44, a5);
LABEL_24:
  v27 = a1 + 864;
  v28 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v28 == sub_D0D0 )
    v29 = (unsigned int *)sub_2F150(v27, 38, &v49, 0);
  else
    v29 = (unsigned int *)v28(v27, 38u, (__int64)&v49);
  v30 = v29;
  if ( v29 )
  {
    v31 = *v29;
    v47 = (char *)v30 + 5;
    v48 = (char *)v30 + v31 + 5;
    v32 = (int)unpack_dd();
    if ( v32 != a5 )
    {
      v33 = unpack_dd();
      *__errno_location() = v33;
    }
    qfree();
  }
  else
  {
    v32 = -1;
  }
  if ( v49 )
  {
    v50 = 0;
    qfree();
  }
  return v32;
}

