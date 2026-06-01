__int64 __fastcall sub_43480(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 (__fastcall ***a5)(_QWORD, __int64 **),
        double a6,
        double a7,
        double a8)
{
  __int64 v11; // rax
  size_t v12; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rax
  size_t v16; // rbp
  __int64 v17; // r15
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // r8
  size_t v21; // rbp
  __int64 v22; // r15
  unsigned __int64 v23; // r9
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 *v26; // r8
  __int64 *v27; // r8
  unsigned int v28; // ebx
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 *v34; // [rsp+0h] [rbp-A0h]
  __int64 *v35; // [rsp+8h] [rbp-98h]
  __int64 v36; // [rsp+10h] [rbp-90h]
  __int64 v37; // [rsp+18h] [rbp-88h] BYREF
  __int128 v38; // [rsp+20h] [rbp-80h]
  __int64 v39; // [rsp+38h] [rbp-68h] BYREF
  __int128 v40; // [rsp+40h] [rbp-60h]
  _BYTE src[5]; // [rsp+56h] [rbp-4Ah] BYREF
  _BYTE v42[5]; // [rsp+5Bh] [rbp-45h] BYREF
  _QWORD v43[8]; // [rsp+60h] [rbp-40h] BYREF

  v43[0] = __readfsqword(0x28u);
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v11 = pack_dq(src, v43, a2 + 1) - (_QWORD)src;
  v12 = v11;
  if ( v11 )
  {
    v13 = v40;
    v14 = v40 + v11;
    if ( __CFADD__((_QWORD)v40, v11) )
    {
      if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((void *)(v13 + v39), src, v12);
        goto LABEL_7;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v32 = v39;
    v33 = v40;
    if ( *((_QWORD *)&v40 + 1) < v14 )
    {
      v36 = v40;
      v35 = (__int64 *)v12;
      v34 = (__int64 *)v14;
      v39 = qvector_reserve(&v39, v39, v14, 1);
      v32 = v39;
      v13 = v36;
      v33 = v40;
      v12 = (size_t)v35;
      v14 = (unsigned __int64)v34;
    }
    v36 = v13;
    v35 = (__int64 *)v12;
    v34 = (__int64 *)v14;
    memset((void *)(v32 + v33), 0, v14 - v33);
    v12 = (size_t)v35;
    v13 = v36;
    *(_QWORD *)&v40 = v34;
    goto LABEL_6;
  }
LABEL_7:
  v15 = pack_dq(src, v43, a3) - (_QWORD)src;
  v16 = v15;
  if ( !v15 )
    goto LABEL_13;
  v17 = v40;
  v18 = v40 + v15;
  if ( !__CFADD__((_QWORD)v40, v15) )
    goto LABEL_31;
  if ( (unsigned __int64)v40 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v18 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_31:
    v30 = v39;
    v31 = v40;
    if ( *((_QWORD *)&v40 + 1) < v18 )
    {
      v34 = (__int64 *)v18;
      v39 = qvector_reserve(&v39, v39, v18, 1);
      v30 = v39;
      v18 = (unsigned __int64)v34;
      v31 = v40;
    }
    v34 = (__int64 *)v18;
    memset((void *)(v30 + v31), 0, v18 - v31);
    *(_QWORD *)&v40 = v34;
    goto LABEL_12;
  }
  if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
  memcpy((void *)(v17 + v39), src, v16);
LABEL_13:
  v19 = pack_dd(src, v42) - (_QWORD)src;
  v20 = &v39;
  v21 = v19;
  if ( !v19 )
    goto LABEL_19;
  v22 = v40;
  v23 = v40 + v19;
  if ( __CFADD__((_QWORD)v40, v19) )
  {
    if ( (unsigned __int64)v40 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v40 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v40 = 0x7FFFFFFFFFFFFFFFLL;
      v27 = &v39;
      goto LABEL_18;
    }
    v23 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v24 = v39;
  v25 = v40;
  v26 = &v39;
  if ( *((_QWORD *)&v40 + 1) < v23 )
  {
    v35 = (__int64 *)v23;
    v34 = &v39;
    v39 = qvector_reserve(&v39, v39, v23, 1);
    v24 = v39;
    v23 = (unsigned __int64)v35;
    v25 = v40;
    v26 = v34;
  }
  v35 = v26;
  v34 = (__int64 *)v23;
  memset((void *)(v24 + v25), 0, v23 - v25);
  v27 = v35;
  *(_QWORD *)&v40 = v34;
LABEL_18:
  v34 = v27;
  memcpy((void *)(v22 + v39), src, v21);
  v20 = v34;
LABEL_19:
  if ( (unsigned int)sub_2F320((__int64)a1, 0xAu, (__int64)v20, &v37, 0.0, a7, a8) == 1 )
    v28 = sub_432E0(a1, v37, v38, a4, a5);
  else
    v28 = -2147467259;
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v28;
}

