__int64 __fastcall sub_1B110(__int64 a1, __int64 a2, void *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  size_t v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rcx
  size_t v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r10
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v22; // rax
  unsigned int *v23; // rbp
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  size_t v27; // rdx
  char *v28; // rsi
  char *v29; // rax
  char *v31; // r12
  char *v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  size_t v35; // rax
  size_t v36; // r14
  void *v37; // rdi
  size_t v38; // r15
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+8h] [rbp-90h]
  size_t n; // [rsp+10h] [rbp-88h]
  unsigned __int64 v42; // [rsp+18h] [rbp-80h]
  char *s; // [rsp+20h] [rbp-78h]
  unsigned __int64 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+38h] [rbp-60h]
  unsigned __int64 v47; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  sub_27550(&v45, 25);
  v9 = pack_dq() - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v46;
    v12 = v46 + v9;
    if ( __CFADD__(v46, v9) )
    {
      if ( v46 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v46 != 0x7FFFFFFFFFFFFFFFLL )
          v46 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v11 + v45), src, v10);
        goto LABEL_7;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v33 = v45;
    v34 = v46;
    if ( v47 < v12 )
    {
      v42 = v46;
      n = v10;
      v40 = v12;
      v45 = qvector_reserve();
      v33 = v45;
      v11 = v42;
      v34 = v46;
      v10 = n;
      v12 = v40;
    }
    v42 = v11;
    n = v10;
    v40 = v12;
    memset((void *)(v33 + v34), 0, v12 - v34);
    v10 = n;
    v11 = v42;
    v46 = v40;
    goto LABEL_6;
  }
LABEL_7:
  v13 = pack_dd() - (_QWORD)src;
  v15 = v13;
  if ( !v13 )
    goto LABEL_13;
  v16 = v46;
  v17 = v46 + v13;
  if ( __CFADD__(v46, v13) )
  {
    if ( v46 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( v46 != 0x7FFFFFFFFFFFFFFFLL )
        v46 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_12;
    }
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v18 = v45;
  v19 = v46;
  if ( v47 < v17 )
  {
    v42 = v46;
    n = v15;
    v40 = v17;
    v45 = qvector_reserve();
    v18 = v45;
    v16 = v42;
    v19 = v46;
    v15 = n;
    v17 = v40;
  }
  v42 = v16;
  n = v15;
  v40 = v17;
  memset((void *)(v18 + v19), 0, v17 - v19);
  v15 = n;
  v16 = v42;
  v46 = v40;
LABEL_12:
  memcpy((void *)(v16 + v45), src, v15);
LABEL_13:
  v20 = a1 + 864;
  v21 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v21 == sub_A900 )
    v22 = (unsigned int *)sub_23F10(v20, 25, &v45, 0);
  else
    v22 = (unsigned int *)((__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64, size_t))v21)(
                            v20,
                            25,
                            &v45,
                            v14,
                            v15);
  v23 = v22;
  if ( v22 )
  {
    v24 = *v22;
    s = (char *)v23 + 5;
    v44 = (unsigned __int64)v23 + v24 + 5;
    v25 = unpack_dd();
    LODWORD(v26) = v25;
    if ( v25 <= 0 )
    {
      if ( a5 )
      {
        v31 = s;
        v32 = s;
        do
        {
          if ( (unsigned __int64)v32 >= v44 )
            goto LABEL_32;
          ++v32;
        }
        while ( *(v32 - 1) );
        s = v32;
        if ( !v31 || (v35 = strlen(v31), (v36 = v35) == 0) )
        {
LABEL_32:
          *(_QWORD *)(a5 + 8) = 0;
          goto LABEL_21;
        }
        v37 = *(void **)a5;
        v38 = v35 + 1;
        if ( *(_QWORD *)(a5 + 16) < v35 + 1 )
        {
          v39 = qvector_reserve();
          *(_QWORD *)a5 = v39;
          v37 = (void *)v39;
        }
        *(_QWORD *)(a5 + 8) = v38;
        memmove(v37, v31, v36);
        *(_BYTE *)(*(_QWORD *)a5 + v36) = 0;
      }
    }
    else
    {
      v27 = (unsigned int)v25;
      if ( a4 < (unsigned int)v25 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v28 = s;
      v29 = &s[v25];
      if ( v44 >= (unsigned __int64)&s[v27] && v29 >= s )
      {
        s += v27;
        memcpy(a3, v28, v27);
      }
    }
LABEL_21:
    qfree();
    v26 = (int)v26;
  }
  else
  {
    v26 = -1;
  }
  if ( v45 )
  {
    v46 = 0;
    qfree();
  }
  return v26;
}

