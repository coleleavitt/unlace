__int64 __fastcall sub_19080(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  size_t v6; // rbx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r14
  const char *v9; // r15
  size_t v10; // rax
  __int64 v11; // rbx
  size_t v12; // r14
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v18; // rax
  unsigned int *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-80h]
  char *v26; // [rsp+10h] [rbp-78h]
  char *v27; // [rsp+18h] [rbp-70h]
  __int64 v28; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-60h]
  unsigned __int64 v30; // [rsp+30h] [rbp-58h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  sub_27550(&v28, 46);
  v5 = pack_dq() - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v7 = v29;
    v8 = v29 + v5;
    if ( __CFADD__(v29, v5) )
    {
      if ( v29 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v29 != 0x7FFFFFFFFFFFFFFFLL )
          v29 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v7 + v28), src, v6);
        goto LABEL_7;
      }
      v8 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = v28;
    v24 = v29;
    if ( v30 < v8 )
    {
      v25 = v29;
      v28 = qvector_reserve();
      v23 = v28;
      v7 = v25;
      v24 = v29;
    }
    v25 = v7;
    memset((void *)(v23 + v24), 0, v8 - v24);
    v29 = v8;
    v7 = v25;
    goto LABEL_6;
  }
LABEL_7:
  v9 = &s;
  if ( *(_QWORD *)(a3 + 8) )
    v9 = *(const char **)a3;
  if ( !v9 )
  {
    v11 = v29;
    v12 = 1;
    v9 = "";
    v13 = v29 + 1;
    if ( v29 != -1 )
    {
LABEL_11:
      v14 = v28;
      v15 = v11;
      if ( v30 >= v13 )
      {
LABEL_12:
        memset((void *)(v14 + v15), 0, v13 - v15);
        v29 = v13;
        goto LABEL_13;
      }
LABEL_32:
      v28 = qvector_reserve();
      v14 = v28;
      v15 = v29;
      goto LABEL_12;
    }
    v11 = -1;
    v9 = "";
    goto LABEL_22;
  }
  v10 = strlen(v9);
  v11 = v29;
  v12 = v10 + 1;
  v13 = v10 + 1 + v29;
  if ( !__CFADD__(v10 + 1, v29) )
    goto LABEL_11;
  if ( v29 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v14 = v28;
    v15 = v29;
    v13 = 0x7FFFFFFFFFFFFFFFLL;
    if ( v30 >= 0x7FFFFFFFFFFFFFFFLL )
      goto LABEL_12;
    goto LABEL_32;
  }
  if ( v29 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_22:
    v29 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_13:
  memcpy((void *)(v28 + v11), v9, v12);
  v16 = a1 + 864;
  v17 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v17 == sub_A900 )
    v18 = (unsigned int *)sub_23F10(v16, 46, &v28, 0);
  else
    v18 = (unsigned int *)v17(v16, 46u, (__int64)&v28);
  v19 = v18;
  if ( v18 )
  {
    v20 = *v18;
    v26 = (char *)v19 + 5;
    v27 = (char *)v19 + v20 + 5;
    v21 = unpack_dq() - 1;
    qfree();
  }
  else
  {
    v21 = 0;
  }
  if ( v28 )
  {
    v29 = 0;
    qfree();
  }
  return v21;
}

