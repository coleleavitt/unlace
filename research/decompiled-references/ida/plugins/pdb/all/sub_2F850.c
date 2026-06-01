__int64 __fastcall sub_2F850(__int64 a1, const __m128i **a2, __int64 a3, __int64 a4, double a5, double a6, double a7)
{
  __int64 v9; // rax
  size_t v10; // r9
  __int64 v11; // r15
  unsigned __int64 v12; // r10
  __int64 v13; // rax
  __int64 *v14; // r8
  size_t v15; // rbp
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 *v20; // r8
  unsigned int v21; // ebx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // [rsp+0h] [rbp-98h]
  size_t v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+10h] [rbp-88h] BYREF
  __int128 v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h]
  _BYTE src[10]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _QWORD v32[8]; // [rsp+58h] [rbp-40h] BYREF

  v32[0] = __readfsqword(0x28u);
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v9 = pack_dq(src, v32, a3 + 1) - (_QWORD)src;
  v10 = v9;
  if ( v9 )
  {
    v11 = v28;
    v12 = v28 + v9;
    if ( __CFADD__((_QWORD)v28, v9) )
    {
      if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v11 + v27), src, v10);
        goto LABEL_7;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v23 = v27;
    v24 = v28;
    if ( *((_QWORD *)&v28 + 1) < v12 )
    {
      v25 = (__int64 *)v12;
      v26 = v10;
      v27 = qvector_reserve(&v27, v27, v12, 1);
      v23 = v27;
      v10 = v26;
      v24 = v28;
      v12 = (unsigned __int64)v25;
    }
    v26 = v10;
    v25 = (__int64 *)v12;
    memset((void *)(v23 + v24), 0, v12 - v24);
    v10 = v26;
    *(_QWORD *)&v28 = v25;
    goto LABEL_6;
  }
LABEL_7:
  v13 = pack_dq(src, v32, a4) - (_QWORD)src;
  v14 = &v27;
  v15 = v13;
  if ( !v13 )
    goto LABEL_13;
  v16 = v28;
  v17 = v28 + v13;
  if ( __CFADD__((_QWORD)v28, v13) )
  {
    if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
      v20 = &v27;
      goto LABEL_12;
    }
    v17 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v18 = v27;
  v19 = v28;
  if ( *((_QWORD *)&v28 + 1) < v17 )
  {
    v27 = qvector_reserve(&v27, v27, v17, 1);
    v18 = v27;
    v19 = v28;
  }
  v25 = &v27;
  memset((void *)(v18 + v19), 0, v17 - v19);
  *(_QWORD *)&v28 = v17;
  v20 = v25;
LABEL_12:
  v25 = v20;
  memcpy((void *)(v16 + v27), src, v15);
  v14 = v25;
LABEL_13:
  if ( (unsigned int)sub_2F320(a1, 8u, (__int64)v14, &v29, 0.0, a6, a7) == 1 )
    v21 = sub_2ECC0(a1, a2, &v29);
  else
    v21 = -2147467259;
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  return v21;
}

