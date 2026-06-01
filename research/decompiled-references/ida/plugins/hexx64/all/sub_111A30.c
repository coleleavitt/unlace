__int64 __fastcall sub_111A30(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v9; // r15
  unsigned int v11; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  char v15; // al
  int v16; // r10d
  int v17; // eax
  __m128d v18; // xmm0
  unsigned __int8 *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // al
  _BYTE *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // al
  char v28; // al
  __int64 v29; // rdi
  __m128i v30; // xmm1
  __m128i v31; // xmm1
  char v32; // al
  char v33; // al
  __int64 v35; // [rsp+8h] [rbp-120h]
  unsigned __int8 *v36; // [rsp+10h] [rbp-118h]
  __int64 v37; // [rsp+18h] [rbp-110h]
  __int64 v38; // [rsp+20h] [rbp-108h]
  _BYTE *v39; // [rsp+28h] [rbp-100h]
  int v40; // [rsp+30h] [rbp-F8h] BYREF
  int v41; // [rsp+34h] [rbp-F4h] BYREF
  int v42; // [rsp+38h] [rbp-F0h] BYREF
  int v43; // [rsp+3Ch] [rbp-ECh] BYREF
  unsigned __int8 v44[4]; // [rsp+40h] [rbp-E8h] BYREF
  int v45; // [rsp+44h] [rbp-E4h]
  unsigned __int8 v46[4]; // [rsp+50h] [rbp-D8h] BYREF
  int v47; // [rsp+54h] [rbp-D4h]
  __int64 v48[2]; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v49; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+78h] [rbp-B0h]
  __int64 v51[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-88h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-80h]
  __m128d v54; // [rsp+C0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+D0h] [rbp-58h] BYREF
  unsigned __int64 v56; // [rsp+E8h] [rbp-40h]

  v9 = a2[4].m128i_i64[0];
  v56 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_A2980(v9, a4) )
    return 0;
  v11 = sub_A2980(v9, a5);
  if ( !(_BYTE)v11
    || (*(_BYTE *)(a3 + 4) & 0x10) != 0
    || (*(_BYTE *)(a4 + 4) & 0x10) != 0
    || (*(_BYTE *)(a5 + 4) & 0x10) != 0 )
  {
    return 0;
  }
  *(_QWORD *)&v54.m128d_f64[0] = a5 + 32;
  *(_QWORD *)&v54.m128d_f64[1] = a5 + 48;
  v13 = a4 + 32;
  v14 = a4 + 48;
  si128.m128i_i64[0] = v13;
  si128.m128i_i64[1] = v14;
  if ( (a6 & 4) != 0 )
  {
    si128.m128i_i64[0] = v14;
    si128.m128i_i64[1] = v13;
  }
  v37 = *(_QWORD *)(a2[30].m128i_i64[0] + 112);
  v15 = sub_111770((__m128i *)&v54, &v40, &v41, a2, a3, a6);
  v42 = 0;
  v43 = 0;
  if ( v15 )
    goto LABEL_23;
  v16 = a6 & 0x10;
  if ( (a6 & 0x10) != 0 )
  {
    v31 = _mm_load_si128(&si128);
    si128 = _mm_load_si128((const __m128i *)&v54);
    v54 = (__m128d)v31;
    v32 = sub_111770((__m128i *)&v54, &v42, &v43, a2, a3, a6);
    v16 = a6 & 0x10;
    if ( v32 )
      goto LABEL_23;
  }
  if ( (a6 & 2) == 0 || *(int *)(*(_QWORD *)&v54.m128d_f64[0] + 4LL) <= 1 )
    return 0;
  v17 = v42;
  if ( !v42 )
  {
    if ( !v16 )
    {
      if ( !v40 )
        return 0;
LABEL_20:
      v17 = v40;
      goto LABEL_21;
    }
    if ( !v40 )
      return 0;
    goto LABEL_53;
  }
  if ( v40 && v43 <= v41 )
  {
    if ( v43 == v41 && v40 > 2 && v42 <= 2 )
    {
      v40 = v42;
      goto LABEL_23;
    }
    if ( !v16 )
      goto LABEL_20;
LABEL_53:
    v30 = _mm_load_si128(&si128);
    v17 = v40;
    si128 = (__m128i)_mm_loadh_ps(&v54.m128d_f64[1]);
    v54 = (__m128d)v30;
    goto LABEL_21;
  }
  v40 = v42;
LABEL_21:
  if ( v17 > 2 )
  {
    v18 = (__m128d)_mm_load_si128((const __m128i *)&v54);
    v54 = _mm_shuffle_pd(v18, v18, 1);
  }
LABEL_23:
  if ( a2[3].m128i_i64[1] == a1 || (unsigned __int8)sub_110F20((__int64)a2, a3, a3 + 32, a3 + 48) )
  {
    v19 = (unsigned __int8 *)si128.m128i_i64[0];
    if ( !si128.m128i_i64[0]
      || (unsigned __int8)sub_157240((__int64)a2, *(__int64 *)&v54.m128d_f64[0], si128.m128i_i64[0]) )
    {
      v36 = (unsigned __int8 *)si128.m128i_i64[1];
      if ( !si128.m128i_i64[1]
        || (unsigned __int8)sub_157240((__int64)a2, *(__int64 *)&v54.m128d_f64[1], si128.m128i_i64[1]) )
      {
        v20 = 0;
        do
        {
          v21 = *((_QWORD *)&v54 + v20 + 2);
          if ( v21 )
          {
            v35 = v20;
            v39 = *((_BYTE **)&v54 + v20 + 2);
            v38 = *(_QWORD *)&v54.m128d_f64[v20 ^ 1];
            v22 = sub_157240((__int64)a2, v38, v21);
            v20 = v35;
            if ( !v22 )
            {
              v21 = (__int64)v39;
              if ( **(_BYTE **)&v54.m128d_f64[v35] != 6 || *v39 != 6 )
              {
                if ( *(_BYTE *)v38 != 6 )
                  return 0;
                v23 = *(_BYTE **)((char *)&si128.m128i_i64[1] + (-v35 & 0xFFFFFFFFFFFFFFF8LL));
                if ( !v23 || *v23 != 6 )
                  return 0;
              }
            }
          }
          v24 = v20 + 1;
          v20 = 1;
        }
        while ( v24 != 2 );
        sub_123A40((__int64)v44, *(unsigned __int8 **)&v54.m128d_f64[0], v21, 1);
        if ( v19 )
          sub_1571F0((__int64)a2, a3, (__int64)v44, a3, (__int64)v19, 6);
        else
          sub_1207E0((char *)v44, v37, 9, *(_QWORD *)(a5 + 24), 2 * v45);
        sub_123A40((__int64)v46, *(unsigned __int8 **)&v54.m128d_f64[1], v25, v26);
        if ( v36 )
          sub_1571F0((__int64)a2, a3, (__int64)v46, a3, (__int64)v36, 6);
        else
          sub_1207E0((char *)v46, v37, 9, *(_QWORD *)(a5 + 24), 2 * v47);
        v27 = sub_125B60(v44, (__int64)v46, 0);
        if ( v19 != nullptr && v36 != nullptr && v27 != 1 )
        {
          v50 = 0;
          v48[0] = 0;
          v48[1] = 0;
          v49 = nullptr;
          sub_110FD0((__int64)v48, (__int64)a2, v19);
          v51[0] = 0;
          v51[1] = 0;
          v52 = 0;
          v53 = 0;
          sub_110FD0((__int64)v51, (__int64)a2, v36);
          v28 = sub_64780(v48, v51);
          v29 = v52;
          if ( v28 || (v33 = sub_318470(&v49, (__int64)&v52), v29 = v52, v33) )
          {
            if ( v29 )
            {
              *(_QWORD *)&v53 = 0;
              qfree(v29);
            }
            qfree(v51[0]);
            if ( v49 )
            {
              *(_QWORD *)&v50 = 0;
              qfree((__int64)v49);
            }
            v11 = 0;
            qfree(v48[0]);
            goto LABEL_44;
          }
          if ( v52 )
          {
            *(_QWORD *)&v53 = 0;
            qfree(v52);
          }
          qfree(v51[0]);
          if ( v49 )
          {
            *(_QWORD *)&v50 = 0;
            qfree((__int64)v49);
          }
          qfree(v48[0]);
        }
        sub_12AB50(v44, v37, v45, 2);
        sub_12AB50(v46, v37, v47, 2);
        sub_11CA10((char *)(a1 + 32), (char *)v44);
        sub_11CA10((char *)(a1 + 48), (char *)v46);
        sub_11D5D0(a1, v37);
LABEL_44:
        sub_11CDA0((__int64)v46);
        sub_11CDA0((__int64)v44);
        return v11;
      }
    }
  }
  return 0;
}

