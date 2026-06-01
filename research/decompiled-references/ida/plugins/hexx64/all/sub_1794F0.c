unsigned __int64 __fastcall sub_1794F0(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        int a6,
        double a7,
        __m128 a8)
{
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r13
  char v14; // al
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __m128i v27; // xmm1
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+8h] [rbp-110h]
  __int64 v33[2]; // [rsp+10h] [rbp-108h] BYREF
  __int64 *v34; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+28h] [rbp-F0h]
  __int64 v36; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-D0h]
  __int64 v38; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v39; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD v40[5]; // [rsp+70h] [rbp-A8h] BYREF
  int v41; // [rsp+98h] [rbp-80h]
  _QWORD v42[5]; // [rsp+A0h] [rbp-78h] BYREF
  char v43; // [rsp+C8h] [rbp-50h]
  __int64 v44; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  sub_127A20((__int64)v33, a2, (__int64)a3, 1, a5, a6, a7, a8);
  v10 = *a1;
  if ( a1[1] << 6 )
  {
    do
    {
      while ( 1 )
      {
        v13 = v10 + 64;
        if ( (unsigned __int8)sub_64780((_QWORD *)(v10 + 24), v33)
          || (unsigned __int8)sub_318470((unsigned __int64 **)(v10 + 40), (__int64)&v34) )
        {
          break;
        }
        v10 += 64;
        if ( v13 == *a1 + (a1[1] << 6) )
          goto LABEL_9;
      }
      v11 = *(_QWORD *)(v10 + 40);
      if ( v11 )
      {
        *(_QWORD *)(v10 + 48) = 0;
        qfree(v11);
      }
      qfree(*(_QWORD *)(v10 + 24));
      sub_11CDA0(v10 + 8);
      memmove((void *)v10, (const void *)(v10 + 64), *a1 + (a1[1] << 6) - v10 - 64);
      v12 = a1[1] - 1;
      a1[1] = v12;
    }
    while ( v10 != *a1 + (v12 << 6) );
  }
LABEL_9:
  if ( !sub_32ED70(*a3) )
    goto LABEL_17;
  v14 = *((_BYTE *)a3 + 64);
  if ( !v14 || *((_BYTE *)a3 + 48) != 4 && *((_BYTE *)a3 + 32) != 4 )
    goto LABEL_17;
  if ( v14 == 6 )
  {
    memset(&v40[1], 0, 32);
    v40[0] = &off_4DDDF0;
    v41 = 0;
    sub_11F760(a3, v40);
    if ( v41 <= 3 )
      goto LABEL_17;
  }
  if ( (*((_BYTE *)a3 + 6) & 2) != 0 )
  {
    memset(&v42[1], 0, 32);
    v15 = *(_QWORD *)(a2 + 480);
    v43 = 0;
    v42[0] = &off_4DE018;
    v44 = v15;
    if ( (unsigned int)sub_11E900(a3, (__int64)v42) )
      goto LABEL_17;
  }
  if ( (unsigned __int8)sub_1205A0(a3, *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL), 0) )
    goto LABEL_17;
  sub_124680((__int64)&v36, a2, (__int64)a3, 1, a7, a8);
  if ( (unsigned __int8)sub_64780(v33, &v36) || (unsigned __int8)sub_318470((unsigned __int64 **)&v34, (__int64)&v38) )
  {
    if ( v38 )
    {
      v39.m128i_i64[0] = 0;
      qfree(v38);
    }
    qfree(v36);
LABEL_17:
    if ( v34 )
    {
      v35 = 0;
      qfree((__int64)v34);
    }
    goto LABEL_19;
  }
  v18 = a1[1];
  v19 = *a1;
  if ( a1[2] < (unsigned __int64)(v18 + 1) )
  {
    v31 = qvector_reserve((__int64)a1, v19, v18 + 1, 64);
    *a1 = v31;
    v18 = a1[1];
    v19 = v31;
  }
  v20 = v18 << 6;
  v21 = v19 + v20;
  *(_QWORD *)(v21 + 8) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v21 + 32) = 0;
  *(_QWORD *)(v21 + 40) = 0;
  *(_OWORD *)(v21 + 16) = 0;
  *(_OWORD *)(v21 + 48) = 0;
  ++a1[1];
  if ( *a3 == 4 || *a3 == 67 && a3[9] == a3[17] )
  {
    sub_125180((unsigned __int8 *)(v21 + 8), (unsigned __int8 *)a3 + 32);
  }
  else
  {
    v22 = j__qalloc_or_throw(80, v19, v20, v17);
    *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v22 + 40) = 0;
    *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v22 + 56) = 0;
    *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v22 + 72) = 0;
    *(_OWORD *)(v22 + 8) = 0;
    sub_1253A0(v22, (__int64)a3);
    *(_BYTE *)(v21 + 8) = 4;
    *(_QWORD *)(v21 + 16) = v22;
    v23 = *(_DWORD *)(v22 + 68);
    *(_DWORD *)(v21 + 12) = v23;
    v32 = v23;
    sub_11CDA0(v22 + 64);
    *(_DWORD *)(v22 + 68) = v32;
  }
  v24 = *(_QWORD *)(v21 + 24);
  v25 = _mm_loadu_si128((const __m128i *)(v21 + 48));
  *(_QWORD *)(v21 + 24) = v36;
  v36 = v24;
  v26 = *(_QWORD *)(v21 + 32);
  *(_QWORD *)(v21 + 32) = v37;
  v27 = _mm_loadu_si128(&v39);
  v37 = v26;
  v28 = *(_QWORD *)(v21 + 40);
  *(_QWORD *)(v21 + 40) = v38;
  *(__m128i *)(v21 + 48) = v27;
  v38 = v28;
  v39 = v25;
  sub_64280((__int64 *)(v21 + 24), v33, *(double *)v25.m128i_i64);
  sub_316CB0((__int64 *)(v21 + 40), &v34, v29, v30);
  *(_QWORD *)v21 = a3;
  if ( v38 )
  {
    v39.m128i_i64[0] = 0;
    qfree(v38);
  }
  qfree(v36);
  if ( v34 )
  {
    v35 = 0;
    qfree((__int64)v34);
  }
LABEL_19:
  qfree(v33[0]);
  return v45 - __readfsqword(0x28u);
}

