__int64 __fastcall sub_19600(__int64 a1, _QWORD *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  size_t v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  size_t v12; // r15
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r8
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v19; // rax
  unsigned int *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // ebp
  char *v23; // r13
  char *v24; // rax
  size_t v26; // rax
  size_t v27; // r14
  void *v28; // rdi
  size_t v29; // r15
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-98h]
  _QWORD *v34; // [rsp+8h] [rbp-90h]
  size_t v35; // [rsp+10h] [rbp-88h]
  unsigned __int64 v36; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h]
  unsigned __int64 v38; // [rsp+28h] [rbp-70h]
  __int64 v39; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-60h]
  unsigned __int64 v41; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v34 = a2;
  LODWORD(v33) = a3;
  v43 = __readfsqword(0x28u);
  sub_267D0(&v39, 33);
  v7 = pack_dd() - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v40;
    v10 = v40 + v7;
    if ( __CFADD__(v40, v7) )
    {
      if ( v40 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v40 != 0x7FFFFFFFFFFFFFFFLL )
          v40 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v9 + v39), src, v8);
        goto LABEL_7;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = v39;
    v31 = v40;
    if ( v41 < v10 )
    {
      v36 = v40;
      v35 = v8;
      v33 = v10;
      v39 = qvector_reserve();
      v30 = v39;
      v9 = v36;
      v31 = v40;
      v8 = v35;
      v10 = v33;
    }
    v36 = v9;
    v35 = v8;
    v33 = v10;
    memset((void *)(v30 + v31), 0, v10 - v31);
    v8 = v35;
    v9 = v36;
    v40 = v33;
    goto LABEL_6;
  }
LABEL_7:
  v11 = pack_dd() - (_QWORD)src;
  v12 = v11;
  if ( !v11 )
    goto LABEL_13;
  v13 = v40;
  v14 = v40 + v11;
  if ( __CFADD__(v40, v11) )
  {
    if ( v40 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v40 != 0x7FFFFFFFFFFFFFFFLL )
        v40 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
    v14 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v15 = v39;
  v16 = v40;
  if ( v41 < v14 )
  {
    v33 = v14;
    v39 = qvector_reserve();
    v15 = v39;
    v14 = v33;
    v16 = v40;
  }
  v33 = v14;
  memset((void *)(v15 + v16), 0, v14 - v16);
  v40 = v33;
LABEL_12:
  memcpy((void *)(v13 + v39), src, v12);
LABEL_13:
  v17 = a1 + 864;
  v18 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v18 == sub_A820 )
    v19 = (unsigned int *)sub_23190(v17, 33, &v39, 0);
  else
    v19 = (unsigned int *)v18(v17, 33u, (__int64)&v39);
  v20 = v19;
  if ( v19 )
  {
    v21 = *v19;
    s = (char *)v20 + 5;
    v38 = (unsigned __int64)v20 + v21 + 5;
    v22 = unpack_dd();
    if ( v22 == 1 )
    {
      *v34 = unpack_dq() - 1;
    }
    else if ( a5 )
    {
      v23 = s;
      v24 = s;
      do
      {
        if ( (unsigned __int64)v24 >= v38 )
          goto LABEL_21;
        ++v24;
      }
      while ( *(v24 - 1) );
      s = v24;
      if ( !v23 || (v26 = strlen(v23), (v27 = v26) == 0) )
      {
LABEL_21:
        *(_QWORD *)(a5 + 8) = 0;
        goto LABEL_22;
      }
      v28 = *(void **)a5;
      v29 = v26 + 1;
      if ( *(_QWORD *)(a5 + 16) < v26 + 1 )
      {
        v32 = qvector_reserve();
        *(_QWORD *)a5 = v32;
        v28 = (void *)v32;
      }
      *(_QWORD *)(a5 + 8) = v29;
      memmove(v28, v23, v27);
      *(_BYTE *)(*(_QWORD *)a5 + v27) = 0;
    }
LABEL_22:
    qfree();
  }
  else
  {
    v22 = -2;
  }
  if ( v39 )
  {
    v40 = 0;
    qfree();
  }
  return v22;
}

