__int64 __fastcall sub_152D80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int128 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbp
  char v9; // bp
  __int64 v10; // rdi
  char v12; // al
  __int64 v13; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v14; // [rsp+18h] [rbp-C0h]
  _QWORD v15[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-98h] BYREF
  __int128 v17; // [rsp+48h] [rbp-90h]
  __int64 v18[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v19; // [rsp+70h] [rbp-68h] BYREF
  __int128 v20; // [rsp+78h] [rbp-60h]
  __int64 v21; // [rsp+88h] [rbp-50h]
  __int64 v22; // [rsp+90h] [rbp-48h]
  __int64 v23; // [rsp+98h] [rbp-40h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-30h]

  v3 = 1;
  v24 = __readfsqword(0x28u);
  v22 = a2;
  v23 = a3;
  while ( 1 )
  {
    *((_QWORD *)&v5 + 1) = v15;
    *(_QWORD *)&v5 = a1;
    v17 = 0;
    v15[0] = 0;
    v15[1] = 0;
    v16 = 0;
    sub_11F9E0(v5, a3, 1u, 0xFFFF0000);
    v6 = *(_QWORD *)(a1 + 64);
    v18[0] = 0;
    v18[1] = 0;
    v7 = *(_QWORD *)(v6 + 128);
    v8 = *(_QWORD *)(v6 + 568);
    v19 = 0;
    v13 = 0;
    v20 = 0;
    v14 = 0;
    if ( v7 + v8 - 1 >= v8 )
    {
      v13 = qvector_reserve();
      *(__m128i *)(v13 + 16 * v14) = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v7);
      *(_QWORD *)&v14 = v14 + 1;
    }
    v9 = sub_312E40(&v13, &v16);
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    sub_124A20(a1, v18, (unsigned __int8 *)*(&v21 + v3), v9 == 0 ? 1 : 16385);
    if ( (unsigned __int8)sub_60500(v18) && !(_QWORD)v20 )
    {
      if ( v19 )
        qfree();
      qfree();
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      goto LABEL_19;
    }
    if ( (unsigned __int8)sub_60400(v18, v15) )
      break;
    v12 = sub_313370(&v19, &v16);
    v10 = v19;
    if ( v12 )
      goto LABEL_10;
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
    qfree();
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
LABEL_19:
    qfree();
    if ( v3 == 2 )
      return 1;
    a3 = v22;
    v3 = 2;
  }
  v10 = v19;
LABEL_10:
  if ( v10 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  qfree();
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  qfree();
  return 0;
}

