__int64 __fastcall sub_1136B0(__m128i *a1, _DWORD *a2)
{
  unsigned int v2; // ebp
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  char v8; // bp
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r12d
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  char v16; // r11
  __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rsi
  int v20; // ecx
  char v21; // al
  _QWORD *v22; // rdi
  int v23; // eax
  int v24; // [rsp+0h] [rbp-C8h]
  int *v25; // [rsp+0h] [rbp-C8h]
  int v26; // [rsp+8h] [rbp-C0h]
  __int64 v27; // [rsp+8h] [rbp-C0h]
  int v28; // [rsp+8h] [rbp-C0h]
  unsigned int v29; // [rsp+10h] [rbp-B8h]
  int v30; // [rsp+14h] [rbp-B4h]
  char v31; // [rsp+14h] [rbp-B4h]
  unsigned int *v32; // [rsp+18h] [rbp-B0h]
  __int64 v33; // [rsp+20h] [rbp-A8h]
  int v34; // [rsp+28h] [rbp-A0h]
  int v35; // [rsp+2Ch] [rbp-9Ch]
  __m128i v36; // [rsp+30h] [rbp-98h] BYREF
  __int128 v37; // [rsp+40h] [rbp-88h]
  _DWORD *v38; // [rsp+50h] [rbp-78h]
  int *v39; // [rsp+58h] [rbp-70h]
  unsigned int *v40; // [rsp+60h] [rbp-68h]
  __int16 v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+6Ch] [rbp-5Ch]
  __int64 v43; // [rsp+74h] [rbp-54h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a1[4].m128i_i32[3] != 4 )
    return 0;
  if ( a1[3].m128i_i64[1] != (_QWORD)a2 || *(_BYTE *)(a1[3].m128i_i64[1] + 64) != 7 )
    return 0;
  if ( (unsigned int)(*a2 - 43) > 9 )
    return 0;
  v38 = a2;
  v6 = _mm_loadl_epi64(a1 + 4);
  v41 = 0;
  v37 = 0;
  v42 = 0;
  v7 = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)a1);
  v43 = 0;
  v39 = nullptr;
  v40 = nullptr;
  v36 = v7;
  if ( !(unsigned __int8)sub_1132B0(v36.m128i_i64, 1, *(double *)v7.m128i_i64) )
    return 0;
  v8 = sub_1134B0(v36.m128i_i64, 0, *(double *)v7.m128i_i64);
  if ( !v8 )
    return 0;
  v9 = *((_QWORD *)&v37 + 1);
  v24 = *(_DWORD *)(sub_1120C0(*(_QWORD *)(*((_QWORD *)&v37 + 1) + 8LL), 0) + 72);
  v32 = v40;
  v10 = v40[18];
  if ( (unsigned int)v10 >= *(_DWORD *)(v36.m128i_i64[0] + 64) )
    sub_111110(*(double *)v7.m128i_i64);
  v11 = sub_1120C0(*(_QWORD *)(*(_QWORD *)(v36.m128i_i64[0] + 528) + 8 * v10), 0);
  v12 = v43;
  v30 = *(_DWORD *)(v11 + 72);
  v13 = sub_32EAF0(v43);
  v29 = HIDWORD(v43);
  if ( v12 != v13 )
  {
    v29 = sub_32EA20(HIDWORD(v43));
    HIDWORD(v43) = v29;
  }
  v14 = sub_32EC60(v29);
  v15 = v14;
  if ( (_DWORD)v42 )
  {
    if ( v24 == (_DWORD)v42 )
    {
      v15 = sub_32EA00(v14);
      v24 = v30;
    }
    else if ( v30 != (_DWORD)v42 )
    {
      return 0;
    }
    v26 = v15;
    if ( (unsigned int)sub_32EA00(v12) == v15 )
    {
      v16 = v8;
    }
    else
    {
      if ( v12 != v26 )
        return 0;
      v16 = 0;
    }
  }
  else
  {
    v28 = v14;
    if ( v14 == (unsigned int)sub_32EA00(v12) )
    {
      v16 = v8;
      v24 = v30;
    }
    else
    {
      if ( v12 != v28 )
        return 0;
      v16 = 0;
    }
  }
  if ( HIDWORD(v42) && HIDWORD(v42) != v24 )
    return 0;
  v31 = v16;
  v25 = v39;
  v17 = (__int64)(v39 + 12);
  v27 = (__int64)(v39 + 8);
  v33 = *(_QWORD *)(a1[30].m128i_i64[0] + 112);
  v34 = sub_32E9E0(v12);
  v35 = sub_32EA00(v12);
  v18 = sub_32EBC0(v12);
  v19 = v27;
  v20 = *v25;
  if ( (unsigned int)(*v25 - 43) <= 1 )
  {
    v19 = v17;
    v17 = v27;
    v21 = 2;
  }
  else if ( v20 == v12 || v34 == v20 )
  {
    v21 = 0;
  }
  else
  {
    if ( v35 != v20 && v18 != v20 )
      return 0;
    v19 = v17;
    v17 = v27;
    v21 = 0;
  }
  if ( (unsigned int)sub_130480(v33, a1, (__int64)a2, a2, (__int64)a2, v17, v19, v21) )
  {
    v2 = sub_111A30((__int64)v32, a1, (__int64)a2, (__int64)a2, (__int64)v32, v31 == 0 ? 3 : 7);
    if ( (_BYTE)v2 )
    {
      v22 = (_QWORD *)v36.m128i_i64[1];
      *v32 = v29;
      sub_111130(v22, *(double *)v7.m128i_i64);
      sub_111130((_QWORD *)v37, *(double *)v7.m128i_i64);
      sub_111130((_QWORD *)v9, *(double *)v7.m128i_i64);
      v23 = *(_DWORD *)(v9 + 24);
      BYTE1(v23) &= ~2u;
      LOBYTE(v23) = v23 | 0x80;
      *(_DWORD *)(v9 + 24) = v23;
      sub_113680((__int64)&v36, 0, *(double *)v7.m128i_i64);
      sub_113680((__int64)&v36, 1, *(double *)v7.m128i_i64);
      *(_DWORD *)a1[4].m128i_i64[0] |= 0x400u;
      sub_66FA0(a1[4].m128i_i64[0], 1);
      return v2;
    }
  }
  return 0;
}

