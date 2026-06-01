__int64 __fastcall sub_305A0(__int64 a1, _QWORD *a2, unsigned int a3, __int64 *a4, double a5, double a6, double a7)
{
  size_t v7; // r14
  _QWORD *v8; // r15
  unsigned __int64 v9; // r13
  _BYTE *v11; // rbx
  __int64 v12; // rax
  __int64 (*v14)(); // rax
  __int64 *v15; // rdi
  __int64 v16; // rax
  size_t v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rax
  size_t v20; // rax
  __int64 *v21; // r8
  unsigned int v22; // ebx
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  __int64 *v27; // r8
  __int64 *v28; // [rsp+0h] [rbp-78h]
  size_t n; // [rsp+8h] [rbp-70h]
  __int64 v30; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  _QWORD v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v9 = a3;
  v11 = a2;
  v12 = *a2;
  v33[0] = __readfsqword(0x28u);
  v14 = *(__int64 (**)())(v12 + 272);
  if ( v14 != sub_23EF0 && ((unsigned int (__fastcall *)(_QWORD *))v14)(a2) != 1 )
  {
    if ( under_debugger )
      BUG();
    interr(30539);
    goto LABEL_27;
  }
  v15 = (__int64 *)a2[2];
  a5 = 0.0;
  v31 = 0;
  v30 = 0;
  if ( sub_2CEC0(v15, 0x80000, 0x400u, 0x4000000) )
  {
    v11 = src;
    v8 = v33;
    v16 = pack_dd(src, v33) - (_QWORD)src;
    v17 = v16;
    if ( !v16 )
      goto LABEL_11;
    v7 = v31;
    v18 = v31 + v16;
    if ( __CFADD__((_QWORD)v31, v16) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_10;
      }
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    }
    a2 = (_QWORD *)v30;
    v19 = v31;
    if ( *((_QWORD *)&v31 + 1) >= v18 )
    {
LABEL_6:
      n = v17;
      v28 = (__int64 *)v18;
      memset((char *)a2 + v19, 0, v18 - v19);
      v17 = n;
      *(_QWORD *)&v31 = v28;
LABEL_10:
      memcpy((void *)(v7 + v30), v11, v17);
LABEL_11:
      v20 = pack_dd(v11, v8) - (_QWORD)v11;
      v21 = &v30;
      v7 = v20;
      if ( !v20 )
        goto LABEL_12;
      v9 = v31;
      v24 = v31 + v20;
      if ( !__CFADD__((_QWORD)v31, v20) )
        goto LABEL_16;
      goto LABEL_20;
    }
LABEL_27:
    v28 = (__int64 *)v18;
    n = v17;
    v30 = qvector_reserve(&v30, a2, v18, 1);
    a2 = (_QWORD *)v30;
    v17 = n;
    v19 = v31;
    v18 = (unsigned __int64)v28;
    goto LABEL_6;
  }
  sub_249A0();
LABEL_20:
  if ( v9 > 0x7FFFFFFFFFFFFFFELL )
  {
    v27 = &v30;
    if ( v9 != 0x7FFFFFFFFFFFFFFFLL )
      *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_23;
  }
  v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_16:
  v25 = v30;
  v26 = v9;
  if ( *((_QWORD *)&v31 + 1) < v24 )
  {
    v30 = qvector_reserve(&v30, v30, v24, 1);
    v25 = v30;
    v26 = v31;
  }
  v28 = &v30;
  memset((void *)(v25 + v26), 0, v24 - v26);
  *(_QWORD *)&v31 = v24;
  v27 = v28;
LABEL_23:
  v28 = v27;
  memcpy((void *)(v9 + v30), v11, v7);
  v21 = v28;
LABEL_12:
  v22 = sub_2F320(a1, 6u, (__int64)v21, a4, a5, a6, a7);
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  return v22;
}
