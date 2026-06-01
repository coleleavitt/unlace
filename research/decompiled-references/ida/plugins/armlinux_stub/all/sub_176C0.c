size_t __fastcall sub_176C0(__int64 a1, __int64 a2, unsigned __int64 a3, void *a4, size_t a5)
{
  __int64 v6; // r14
  __int64 v8; // rax
  size_t v9; // r8
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  size_t v13; // r8
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r9
  __int64 v16; // rax
  size_t v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r8
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, unsigned __int8, __int64); // rax
  unsigned int *i; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  size_t v25; // r12
  void *v26; // rsi
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // [rsp+0h] [rbp-98h]
  void *dest; // [rsp+8h] [rbp-90h]
  unsigned __int64 v36; // [rsp+10h] [rbp-88h]
  size_t v37; // [rsp+18h] [rbp-80h]
  void *v38; // [rsp+20h] [rbp-78h]
  char *v39; // [rsp+28h] [rbp-70h]
  __int64 v40; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+38h] [rbp-60h]
  unsigned __int64 v42; // [rsp+40h] [rbp-58h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v34 = a3;
  v6 = (__int64)&v40;
  dest = a4;
  v44 = __readfsqword(0x28u);
  sub_24D10(&v40, 37);
  v8 = pack_dd() - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v10 = v41;
    v11 = v41 + v8;
    if ( __CFADD__(v41, v8) )
    {
      if ( v41 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v41 != 0x7FFFFFFFFFFFFFFFLL )
          v41 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v10 + v40), src, v9);
        goto LABEL_7;
      }
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = v40;
    v33 = v41;
    if ( v42 < v11 )
    {
      v37 = v9;
      v36 = v11;
      v40 = qvector_reserve();
      v32 = v40;
      v9 = v37;
      v33 = v41;
      v11 = v36;
    }
    v37 = v9;
    v36 = v11;
    memset((void *)(v32 + v33), 0, v11 - v33);
    v9 = v37;
    v41 = v36;
    goto LABEL_6;
  }
LABEL_7:
  v12 = pack_dq() - (_QWORD)src;
  v13 = v12;
  if ( !v12 )
    goto LABEL_13;
  v14 = v41;
  v15 = v41 + v12;
  if ( !__CFADD__(v41, v12) )
    goto LABEL_37;
  if ( v41 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v15 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_37:
    v28 = v40;
    v29 = v41;
    if ( v42 < v15 )
    {
      v36 = v13;
      v34 = v15;
      v40 = qvector_reserve();
      v28 = v40;
      v13 = v36;
      v29 = v41;
      v15 = v34;
    }
    v36 = v13;
    v34 = v15;
    memset((void *)(v28 + v29), 0, v15 - v29);
    v13 = v36;
    v41 = v34;
    goto LABEL_12;
  }
  if ( v41 != 0x7FFFFFFFFFFFFFFFLL )
    v41 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v14 + v40), src, v13);
LABEL_13:
  v16 = pack_dd() - (_QWORD)src;
  v17 = v16;
  if ( v16 )
  {
    v18 = v41;
    v19 = v41 + v16;
    if ( __CFADD__(v41, v16) )
    {
      if ( v41 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v41 != 0x7FFFFFFFFFFFFFFFLL )
          v41 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
        memcpy((void *)(v18 + v40), src, v17);
        goto LABEL_19;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = v40;
    v31 = v41;
    if ( v42 < v19 )
    {
      v34 = v19;
      v40 = qvector_reserve();
      v30 = v40;
      v19 = v34;
      v31 = v41;
    }
    v34 = v19;
    memset((void *)(v30 + v31), 0, v19 - v31);
    v41 = v34;
    goto LABEL_18;
  }
LABEL_19:
  v20 = a1 + 864;
  v21 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v21 != sub_9440 )
    goto LABEL_35;
  for ( i = (unsigned int *)sub_216D0(v20, 37, &v40, 0); ; i = (unsigned int *)v21(v20, 37u, v6) )
  {
    v23 = i;
    if ( !i )
      break;
    v24 = *i;
    v38 = (char *)v23 + 5;
    v39 = (char *)v23 + v24 + 5;
    v25 = (int)unpack_dd();
    if ( v25 == a5 )
    {
      if ( (int)v25 > 0 )
      {
LABEL_24:
        v26 = v38;
        if ( v39 >= (char *)v38 + v25 && (char *)v38 + v25 >= v38 )
        {
          v38 = (char *)v38 + v25;
          memcpy(dest, v26, v25);
        }
      }
LABEL_27:
      qfree();
      goto LABEL_28;
    }
    v6 = (unsigned int)unpack_dd();
    *__errno_location() = v6;
    if ( (int)v25 <= 0 )
      goto LABEL_27;
    if ( a5 >= v25 )
      goto LABEL_24;
    if ( under_debugger )
      BUG();
    v20 = 1204;
    v21 = (__int64 (__fastcall *)(__int64, unsigned __int8, __int64))interr();
LABEL_35:
    ;
  }
  v25 = -1;
LABEL_28:
  if ( v40 )
  {
    v41 = 0;
    qfree();
  }
  return v25;
}

