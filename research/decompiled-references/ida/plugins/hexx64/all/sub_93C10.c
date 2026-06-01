unsigned __int64 __fastcall sub_93C10(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v5; // rax
  unsigned __int64 *v6; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __int64 v12; // rbx
  int v13; // r8d
  int v14; // r9d
  __int64 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // r15
  size_t v23; // r13
  __m128i v24; // [rsp+0h] [rbp-210h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-1F8h]
  unsigned __int64 *v26; // [rsp+20h] [rbp-1F0h]
  __int64 *v27; // [rsp+28h] [rbp-1E8h]
  __int64 *v28; // [rsp+30h] [rbp-1E0h]
  __int64 *v29; // [rsp+38h] [rbp-1D8h]
  __int64 v30[2]; // [rsp+40h] [rbp-1D0h] BYREF
  __int64 v31[4]; // [rsp+50h] [rbp-1C0h] BYREF
  __int64 v32[2]; // [rsp+70h] [rbp-1A0h] BYREF
  void *src; // [rsp+80h] [rbp-190h] BYREF
  __int64 v34; // [rsp+88h] [rbp-188h]
  __int64 v35[2]; // [rsp+A0h] [rbp-170h] BYREF
  __int64 v36[4]; // [rsp+B0h] [rbp-160h] BYREF
  __int64 v37[2]; // [rsp+D0h] [rbp-140h] BYREF
  unsigned __int64 *v38; // [rsp+E0h] [rbp-130h] BYREF
  __int128 v39; // [rsp+E8h] [rbp-128h]
  __int64 v40[2]; // [rsp+100h] [rbp-110h] BYREF
  __int64 *v41; // [rsp+110h] [rbp-100h] BYREF
  __m128i v42; // [rsp+118h] [rbp-F8h]
  __int64 v43[2]; // [rsp+130h] [rbp-E0h] BYREF
  unsigned __int64 *v44; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v45; // [rsp+148h] [rbp-C8h]
  const void *v46[2]; // [rsp+160h] [rbp-B0h] BYREF
  __int64 *v47; // [rsp+170h] [rbp-A0h]
  __m128i v48; // [rsp+178h] [rbp-98h] BYREF
  _QWORD v49[7]; // [rsp+190h] [rbp-80h] BYREF
  char v50; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v51; // [rsp+1D8h] [rbp-38h]

  v51 = __readfsqword(0x28u);
  v49[0] = &off_4DBE20;
  v5 = *(_QWORD *)(a1 + 480);
  v49[5] = a2;
  v6 = *(unsigned __int64 **)(v5 + 112);
  v49[2] = a1;
  v49[1] = 0;
  v26 = v6;
  v49[3] = 0;
  v49[4] = 0;
  v49[6] = a3;
  v50 = 0;
  v28 = v30;
  sub_124680((__int64)v30, a1, a2, 1u);
  v27 = v32;
  sub_124680((__int64)v32, a1, a3, 1u);
  v25 = v35;
  sub_127A20((__int64)v35, a1, a3, 0, v7, v8);
  sub_64000(v37, (__int64)v32, a4);
  v11 = 0;
  v38 = nullptr;
  v39 = 0;
  if ( !v34 )
  {
    v12 = *(_QWORD *)(a2 + 16);
    if ( v12 )
      goto LABEL_3;
    goto LABEL_13;
  }
  v22 = v34;
  v23 = 16 * v34;
  v38 = (unsigned __int64 *)qalloc_or_throw(16 * v34, (__int64)v32, v9, v10);
  *((_QWORD *)&v39 + 1) = v22;
  memcpy(v38, src, v23);
  v12 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v39 = v22;
  if ( !v12 )
    goto LABEL_11;
  while ( 1 )
  {
LABEL_3:
    while ( !*(_DWORD *)v12 )
    {
LABEL_33:
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_11;
    }
    sub_124680((__int64)v40, a1, v12, 1u);
    v29 = v43;
    sub_127A20((__int64)v43, a1, v12, 0, v13, v14);
    if ( (unsigned __int8)sub_64780(v37, v43)
      || (unsigned __int8)sub_318470(&v38, (__int64)&v44)
      || !(unsigned __int8)sub_64820(v29, v25)
      || !(unsigned __int8)sub_317F40(v36, (__int64)&v44)
      || (unsigned __int8)sub_1205A0((_BYTE *)v12, (__int64)v26, 0, v19, v20, v21)
      || *(_DWORD *)v12 == 1 )
    {
      break;
    }
    sub_11D5A0(v12);
    if ( v44 )
    {
      v45 = 0;
      qfree((__int64)v44);
    }
    qfree(v43[0]);
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree((__int64)v41);
    }
    qfree(v40[0]);
    v12 = *(_QWORD *)(v12 + 16);
    if ( !v12 )
      goto LABEL_11;
  }
  if ( !(unsigned __int8)sub_64780(v29, v28)
    && !(unsigned __int8)sub_318470(&v44, (__int64)v31)
    && !(unsigned __int8)sub_64780(v29, v27)
    && !(unsigned __int8)sub_318470(&v44, (__int64)&src) )
  {
    v50 = 0;
    sub_11F760((_BYTE *)v12, v49);
    if ( v50 )
    {
      sub_15BC70((unsigned int *)v12, v26, 0, 0, nullptr, nullptr, v11, 0);
      sub_124680((__int64)v46, a1, v12, 1u);
      sub_648D0(v40, v46, *(double *)v11.m128i_i64);
      v16 = v47;
      v47 = nullptr;
      v11 = _mm_loadu_si128(&v48);
      v48 = 0;
      if ( v41 )
      {
        v24 = v11;
        v42.m128i_i64[0] = 0;
        qfree((__int64)v41);
        v11 = _mm_load_si128(&v24);
        v41 = v16;
        v42 = v11;
        if ( v47 )
        {
          v48.m128i_i64[0] = 0;
          qfree((__int64)v47);
        }
      }
      else
      {
        v41 = v16;
        v42 = v11;
      }
      qfree((__int64)v46[0]);
    }
    sub_64280(v37, v40, *(double *)v11.m128i_i64);
    sub_316CB0((__int64 *)&v38, &v41, v17, v18);
    if ( v44 )
    {
      v45 = 0;
      qfree((__int64)v44);
    }
    qfree(v43[0]);
    if ( v41 )
    {
      v42.m128i_i64[0] = 0;
      qfree((__int64)v41);
    }
    qfree(v40[0]);
    goto LABEL_33;
  }
  if ( v44 )
  {
    v45 = 0;
    qfree((__int64)v44);
  }
  qfree(v43[0]);
  if ( v41 )
  {
    v42.m128i_i64[0] = 0;
    qfree((__int64)v41);
  }
  qfree(v40[0]);
LABEL_11:
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    qfree((__int64)v38);
  }
LABEL_13:
  qfree(v37[0]);
  if ( v36[0] )
  {
    v36[1] = 0;
    qfree(v36[0]);
  }
  qfree(v35[0]);
  if ( src )
  {
    v34 = 0;
    qfree((__int64)src);
  }
  qfree(v32[0]);
  if ( v31[0] )
  {
    v31[1] = 0;
    qfree(v31[0]);
  }
  qfree(v30[0]);
  return v51 - __readfsqword(0x28u);
}

