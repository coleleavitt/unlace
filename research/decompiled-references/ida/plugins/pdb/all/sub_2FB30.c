__int64 __fastcall sub_2FB30(__int64 a1, const __m128i **a2, double a3, double a4, double a5)
{
  __int64 v6; // rax
  size_t v7; // r10
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  size_t v11; // r9
  __int64 v12; // r15
  unsigned __int64 v13; // r10
  __int64 v14; // rax
  __int64 *v15; // r8
  size_t v16; // rbp
  __int64 v17; // r13
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // r8
  __int64 *v22; // r8
  unsigned int v23; // ebx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 *v29; // [rsp+0h] [rbp-A0h]
  size_t v30; // [rsp+8h] [rbp-98h]
  __int64 v31; // [rsp+10h] [rbp-90h]
  __int64 v32; // [rsp+18h] [rbp-88h] BYREF
  __int128 v33; // [rsp+20h] [rbp-80h]
  __int64 v34; // [rsp+38h] [rbp-68h] BYREF
  __int128 v35; // [rsp+40h] [rbp-60h]
  _BYTE src[5]; // [rsp+5Bh] [rbp-45h] BYREF
  _QWORD v37[8]; // [rsp+60h] [rbp-40h] BYREF

  v37[0] = __readfsqword(0x28u);
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v6 = pack_dd(src, v37) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v33;
    v9 = v33 + v6;
    if ( __CFADD__((_QWORD)v33, v6) )
    {
      if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v8 + v32), src, v7);
        goto LABEL_7;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v27 = v32;
    v28 = v33;
    if ( *((_QWORD *)&v33 + 1) < v9 )
    {
      v31 = v33;
      v30 = v7;
      v29 = (__int64 *)v9;
      v32 = qvector_reserve(&v32, v32, v9, 1);
      v27 = v32;
      v8 = v31;
      v28 = v33;
      v7 = v30;
      v9 = (unsigned __int64)v29;
    }
    v31 = v8;
    v30 = v7;
    v29 = (__int64 *)v9;
    memset((void *)(v27 + v28), 0, v9 - v28);
    v7 = v30;
    v8 = v31;
    *(_QWORD *)&v33 = v29;
    goto LABEL_6;
  }
LABEL_7:
  v10 = pack_dd(src, v37) - (_QWORD)src;
  v11 = v10;
  if ( !v10 )
    goto LABEL_13;
  v12 = v33;
  v13 = v33 + v10;
  if ( !__CFADD__((_QWORD)v33, v10) )
    goto LABEL_31;
  if ( (unsigned __int64)v33 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v13 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_31:
    v25 = v32;
    v26 = v33;
    if ( *((_QWORD *)&v33 + 1) < v13 )
    {
      v30 = v11;
      v29 = (__int64 *)v13;
      v32 = qvector_reserve(&v32, v32, v13, 1);
      v25 = v32;
      v11 = v30;
      v26 = v33;
      v13 = (unsigned __int64)v29;
    }
    v30 = v11;
    v29 = (__int64 *)v13;
    memset((void *)(v25 + v26), 0, v13 - v26);
    v11 = v30;
    *(_QWORD *)&v33 = v29;
    goto LABEL_12;
  }
  if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v12 + v32), src, v11);
LABEL_13:
  v14 = pack_dd(src, v37) - (_QWORD)src;
  v15 = &v32;
  v16 = v14;
  if ( !v14 )
    goto LABEL_19;
  v17 = v33;
  v18 = v33 + v14;
  if ( __CFADD__((_QWORD)v33, v14) )
  {
    if ( (unsigned __int64)v33 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v33 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v33 = 0x7FFFFFFFFFFFFFFFLL;
      v22 = &v32;
      goto LABEL_18;
    }
    v18 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v19 = v32;
  v20 = v33;
  v21 = &v32;
  if ( *((_QWORD *)&v33 + 1) < v18 )
  {
    v29 = &v32;
    v32 = qvector_reserve(&v32, v32, v18, 1);
    v19 = v32;
    v21 = v29;
    v20 = v33;
  }
  v29 = v21;
  memset((void *)(v19 + v20), 0, v18 - v20);
  *(_QWORD *)&v33 = v18;
  v22 = v29;
LABEL_18:
  v29 = v22;
  memcpy((void *)(v17 + v32), src, v16);
  v15 = v29;
LABEL_19:
  if ( (unsigned int)sub_2F320(a1, 9u, (__int64)v15, &v34, 0.0, a4, a5) == 1 )
    v23 = sub_2ECC0(a1, a2, &v34);
  else
    v23 = -2147467259;
  if ( v34 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v34);
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v32);
  }
  return v23;
}

