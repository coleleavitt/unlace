unsigned __int64 __fastcall sub_1B3D20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, double a5, __m128 a6)
{
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  int v16; // r8d
  int v17; // r9d
  void *v18; // rdi
  __int64 v20; // rcx
  int v21; // r9d
  __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 v24; // rsi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  __int64 v31; // rbp
  unsigned __int64 v32; // r12
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v37; // [rsp+18h] [rbp-1C0h]
  __int64 v38; // [rsp+28h] [rbp-1B0h]
  __int64 v39; // [rsp+28h] [rbp-1B0h]
  __int64 n; // [rsp+38h] [rbp-1A0h]
  __int64 v41; // [rsp+40h] [rbp-198h] BYREF
  __int128 v42; // [rsp+48h] [rbp-190h]
  __int64 v43; // [rsp+60h] [rbp-178h] BYREF
  __int128 v44; // [rsp+68h] [rbp-170h]
  __int64 v45[2]; // [rsp+80h] [rbp-158h] BYREF
  __int64 v46[4]; // [rsp+90h] [rbp-148h] BYREF
  __int64 v47[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v48[4]; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v49[2]; // [rsp+E0h] [rbp-F8h] BYREF
  void *src; // [rsp+F0h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-E0h]
  __int64 v52[2]; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+120h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+128h] [rbp-B0h]
  __int64 v55[2]; // [rsp+140h] [rbp-98h] BYREF
  void *v56; // [rsp+150h] [rbp-88h] BYREF
  __int128 v57; // [rsp+158h] [rbp-80h]
  __int64 v58[2]; // [rsp+170h] [rbp-68h] BYREF
  __int64 v59[3]; // [rsp+180h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+198h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8);
  v60 = __readfsqword(0x28u);
  *(_QWORD *)(a3 + 8) = a1;
  v36 = v8;
  sub_124680((__int64)v45, *(_QWORD *)(a1 + 520), a4, 1, a5, a6);
  sub_124680((__int64)v47, *(_QWORD *)(a1 + 520), a4, 0, a5, a6);
  v41 = 0;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  sub_1B3C00(v47, &v41, a3, 0.0);
  if ( sub_122C30((__int64)v45, (__int64)v47) )
  {
    sub_64640(v45, v47, v10, v11, v12, v13);
    sub_317C60(v46, (__int64)v48);
    sub_1B3C00(v45, &v43, a3, 0.0);
    sub_64880(v47);
  }
  sub_FAAD0(a2);
  sub_127A20((__int64)v49, *(_QWORD *)(a1 + 520), a4, 1, v14, v15, 0.0, a6);
  if ( !(unsigned __int8)sub_64880(v49) || v51 )
  {
    sub_127A20((__int64)v52, *(_QWORD *)(a1 + 520), a4, 0, v16, v17, 0.0, a6);
    *(_QWORD *)&v42 = 0;
    sub_1B3C00(v52, &v41, a3, 0.0);
    sub_FAAD0(a2);
    if ( sub_122C30((__int64)v49, (__int64)v52) )
    {
      if ( !(unsigned __int8)sub_64880(v52) || v54 )
      {
        v22 = a2[1];
        v23 = 2;
        if ( v22 )
          v23 = v22-- + 1;
        v24 = *a2;
        if ( a2[2] < v23 )
        {
          v39 = v22;
          v37 = v23;
          v34 = qvector_reserve((__int64)a2, v24, v23, 1);
          *a2 = v34;
          v22 = v39;
          v24 = v34;
          v23 = v37;
        }
        a2[1] = v23;
        *(_BYTE *)(v24 + v22) = 44;
        *(_BYTE *)(*a2 + v22 + 1) = 0;
        sub_64640(v49, v52, v23, v20, v22, v21);
        sub_317C60((__int64 *)&src, (__int64)&v53);
      }
      *(_QWORD *)&v44 = 0;
      sub_1B3C00(v49, &v43, a3, 0.0);
      sub_FAAD0(a2);
      sub_64000(v55, (__int64)v49, 0.0);
      v56 = nullptr;
      v57 = 0;
      if ( v51 )
      {
        v38 = v51;
        n = 16 * v51;
        v56 = (void *)qalloc_or_throw(16 * v51, (__int64)v49, 16 * v51, v51);
        *((_QWORD *)&v57 + 1) = v38;
        memcpy(v56, src, n);
        *(_QWORD *)&v57 = v38;
      }
      sub_127A20((__int64)v58, *(_QWORD *)(a1 + 520), a4, 129, v25, v26, 0.0, a6);
      sub_64640(v55, v58, v27, v28, v29, v30);
      sub_317C60((__int64 *)&v56, (__int64)v59);
      if ( v59[0] )
      {
        v59[1] = 0;
        qfree(v59[0]);
      }
      qfree(v58[0]);
      if ( !(unsigned __int8)sub_64880(v55) || (_QWORD)v57 )
      {
        v31 = a2[1];
        v32 = 2;
        if ( v31 )
          v32 = v31-- + 1;
        v33 = *a2;
        if ( a2[2] < v32 )
        {
          v35 = qvector_reserve((__int64)a2, v33, v32, 1);
          *a2 = v35;
          v33 = v35;
        }
        a2[1] = v32;
        *(_BYTE *)(v33 + v31) = 44;
        *(_BYTE *)(*a2 + v31 + 1) = 0;
        *(_QWORD *)&v44 = 0;
        sub_1B3C00(v55, &v43, a3, 0.0);
        sub_FAAD0(a2);
      }
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree((__int64)v56);
      }
      qfree(v55[0]);
    }
    if ( v53 )
    {
      v54 = 0;
      qfree(v53);
    }
    qfree(v52[0]);
  }
  v18 = src;
  *(_QWORD *)(a3 + 8) = v36;
  if ( v18 )
  {
    v51 = 0;
    qfree((__int64)v18);
  }
  qfree(v49[0]);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v43);
  }
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v41);
  }
  if ( v48[0] )
  {
    v48[1] = 0;
    qfree(v48[0]);
  }
  qfree(v47[0]);
  if ( v46[0] )
  {
    v46[1] = 0;
    qfree(v46[0]);
  }
  qfree(v45[0]);
  return v60 - __readfsqword(0x28u);
}

