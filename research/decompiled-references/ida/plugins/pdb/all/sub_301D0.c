__int64 __fastcall sub_301D0(__int64 a1, __int64 *a2, __int64 *a3, double a4, double a5, double a6)
{
  size_t v6; // r13
  _BYTE *v7; // r14
  __int64 *v8; // r15
  __int64 *v9; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 (*v13)(); // rax
  __int64 *v14; // rdi
  __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // [rsp+8h] [rbp-90h]
  unsigned __int64 v21; // [rsp+8h] [rbp-90h]
  __int64 v22; // [rsp+10h] [rbp-88h] BYREF
  __int128 v23; // [rsp+18h] [rbp-80h]
  __int64 v24; // [rsp+30h] [rbp-68h] BYREF
  __int128 v25; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v27[8]; // [rsp+58h] [rbp-40h] BYREF

  v9 = a2;
  v11 = *a3;
  v27[0] = __readfsqword(0x28u);
  v12 = (unsigned __int64)a3;
  v13 = *(__int64 (**)())(v11 + 272);
  if ( v13 != sub_23EF0 && ((unsigned int (__fastcall *)(__int64 *))v13)(a3) != 1 )
  {
    if ( under_debugger )
      BUG();
    interr(30538);
    goto LABEL_22;
  }
  v14 = *(__int64 **)(v12 + 16);
  a4 = 0.0;
  v23 = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  if ( sub_2CEC0(v14, 0x80000, 0x400u, 0x4000000) )
  {
    v7 = src;
    v15 = pack_dd(src, v27) - (_QWORD)src;
    v8 = &v22;
    v6 = v15;
    if ( !v15 )
      goto LABEL_4;
    v12 = v23;
    v18 = v23 + v15;
    if ( !__CFADD__((_QWORD)v23, v15) )
      goto LABEL_12;
  }
  else
  {
    sub_249A0();
  }
  if ( v12 > 0x7FFFFFFFFFFFFFFELL )
  {
    v8 = &v22;
    if ( v12 != 0x7FFFFFFFFFFFFFFFLL )
      *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_18;
  }
  v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  a2 = (__int64 *)v22;
  v19 = v12;
  v8 = &v22;
  if ( *((_QWORD *)&v23 + 1) < v18 )
  {
LABEL_22:
    v21 = v18;
    v22 = qvector_reserve(v8, a2, v18, 1);
    a2 = (__int64 *)v22;
    v18 = v21;
    v19 = v23;
  }
  v20 = v18;
  memset((char *)a2 + v19, 0, v18 - v19);
  *(_QWORD *)&v23 = v20;
LABEL_18:
  memcpy((void *)(v22 + v12), v7, v6);
LABEL_4:
  if ( (unsigned int)sub_2F320(a1, 0xDu, (__int64)v8, &v24, a4, a5, a6) == 1 )
    v16 = sub_2EED0(a1, v9, &v24);
  else
    v16 = -2147467259;
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  return v16;
}

