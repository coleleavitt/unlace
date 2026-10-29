__int64 __fastcall sub_174DF0(__int64 *a1, char *a2, unsigned int **a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rsi
  __int64 *v9; // r14
  __m128i *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  bool v22; // al
  char v23; // al
  bool v24; // [rsp+Fh] [rbp-B9h]
  unsigned __int64 *v25; // [rsp+18h] [rbp-B0h]
  char v26[16]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v27[2]; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 *v28; // [rsp+40h] [rbp-88h] BYREF
  __int64 v29; // [rsp+48h] [rbp-80h]
  __int64 v30[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v31; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+78h] [rbp-50h]
  unsigned __int64 v33; // [rsp+88h] [rbp-40h]

  v7 = a1[2];
  v33 = __readfsqword(0x28u);
  v24 = 0;
  v25 = *(unsigned __int64 **)(*(_QWORD *)(v7 + 64) + 1504LL);
  if ( **a3 - 8 <= 1 )
  {
    v22 = sub_11E4E0(a1[4]);
    v7 = a1[2];
    v24 = !v22;
  }
  sub_124680((__int64)v27, v7, a1[3], 2049, *(double *)a4.m128_u64, a5);
  v9 = (__int64 *)a1[11];
  sub_64700(v27, v9);
  sub_3180C0((__int64 *)&v28, (__int64)(v9 + 2), v10, v11);
  if ( !(unsigned __int8)sub_64880(v27) || v29 )
  {
    sub_124680((__int64)v30, a1[2], a1[3], 1, *(double *)a4.m128_u64, a5);
    sub_64640(v27, v30, v16, v17, v18, v19);
    sub_317C60((__int64 *)&v28, (__int64)&v31);
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
    qfree(v30[0]);
  }
  sub_123A40((__int64)v26, (unsigned __int8 *)*a3 + 64, v12, v13);
  sub_11CA10(a2, v26);
  if ( v24 )
  {
    sub_1273B0((__int64)a2, v25, *(_QWORD *)(a1[4] + 24), (*a3)[9], (__m128i)a4);
    sub_1207E0(a2, v25, **a3, *(_QWORD *)(a1[4] + 24), (*a3)[17], (__m128i)a4);
  }
  if ( !(unsigned __int8)sub_64880(v27) || v29 )
  {
    sub_124680((__int64)v30, a1[2], a1[3], 1, *(double *)a4.m128_u64, a5);
    if ( (unsigned __int8)sub_64780(v27, v30) )
    {
      v14 = v31;
      if ( !v31 )
      {
LABEL_12:
        qfree(v30[0]);
LABEL_13:
        sub_11CA10(a2, v26);
        v15 = 0;
        goto LABEL_23;
      }
LABEL_11:
      v32 = 0;
      qfree(v14);
      goto LABEL_12;
    }
    v23 = sub_318470(&v28, (__int64)&v31);
    v14 = v31;
    if ( v23 )
    {
      if ( !v31 )
        goto LABEL_12;
      goto LABEL_11;
    }
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
    }
    qfree(v30[0]);
  }
  v20 = a1[12];
  if ( v20 && !(unsigned __int8)sub_157240(a1[2], *(_QWORD *)(v20 + 8), *(_QWORD *)(v20 + 8) + 16LL, a4) )
    goto LABEL_13;
  v15 = 1;
  (*a3)[1] |= 0x20000u;
LABEL_23:
  sub_11CDA0((__int64)v26);
  if ( v28 )
  {
    v29 = 0;
    qfree((__int64)v28);
  }
  qfree(v27[0]);
  return v15;
}

