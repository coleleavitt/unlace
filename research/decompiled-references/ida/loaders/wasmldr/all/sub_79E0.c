__int64 __fastcall sub_79E0(_QWORD *a1, _DWORD *a2, __m128i *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // edx
  char *v17; // rsi
  __int64 v18; // rdx
  __int8 v19; // r12
  __m128i v20; // xmm0
  __m128i v21; // xmm2
  char *v22; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned int v29; // edx
  char *v30; // rsi
  int v31; // [rsp+4h] [rbp-74h] BYREF
  unsigned int v32; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+Ch] [rbp-6Ch] BYREF
  char *v34; // [rsp+10h] [rbp-68h] BYREF
  __int128 v35; // [rsp+18h] [rbp-60h]
  char *v36; // [rsp+30h] [rbp-48h] BYREF
  __int128 v37; // [rsp+38h] [rbp-40h]
  unsigned __int64 v38; // [rsp+48h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  if ( !sub_3F50(a1, a2) )
    sub_3890((__int64)"read_table: couldn't read type");
  if ( *a2 != -16 )
    sub_3890((__int64)"read_table: table type must be anyfunc");
  set_cmt(a1[5], "table", 0);
  v5 = a1[1];
  v6 = a1[3];
  v33 = 0;
  v7 = v5 + v6;
  v8 = a1[4] + v5;
  if ( v7 >= v8 || (v9 = sub_E440(v7, v8, &v31)) == 0 )
    sub_3890((__int64)"read_table: couldn't read flags");
  v10 = a1[3];
  a1[5] = v10;
  a1[3] = v10 + v9;
  set_cmt(v10, "flags", 0);
  v11 = a1[1];
  v12 = v11 + a1[3];
  v13 = a1[4] + v11;
  if ( v12 >= v13 || (v14 = sub_E440(v12, v13, &v32)) == 0 )
    sub_3890((__int64)"read_table: couldn't read initial count");
  v15 = a1[3];
  v35 = 0;
  a1[5] = v15;
  a1[3] = v15 + v14;
  v34 = nullptr;
  v34 = (char *)qvector_reserve(&v34, 0, 16, 1);
  v16 = v32;
  *(_QWORD *)&v35 = 16;
  strcpy(v34, "initial count: ");
  sub_4EE0((__int64 *)&v34, (__int64)"%u", v16);
  v17 = (char *)&unk_10F58;
  if ( (_QWORD)v35 )
    v17 = v34;
  set_cmt(a1[5], v17, 0);
  v18 = v31 & 2;
  v19 = v31 & 1;
  if ( (v31 & 2) != 0 )
    sub_3890((__int64)"tables may not be shared", v17, v18);
  if ( (v31 & 1) != 0 )
  {
    v24 = a1[1];
    v25 = v24 + a1[3];
    v26 = a1[4] + v24;
    if ( v25 >= v26 || (v27 = sub_E440(v25, v26, &v33)) == 0 )
      sub_3890((__int64)"read_table: couldn't read max count", v26, v18);
    v28 = a1[3];
    a1[5] = v28;
    a1[3] = v28 + v27;
    if ( v33 < v32 )
      sub_3890((__int64)"read_table: initial count must be <= max count");
    v37 = 0;
    v36 = nullptr;
    v36 = (char *)qvector_reserve(&v36, 0, 12, 1);
    v29 = v33;
    *(_QWORD *)&v37 = 12;
    strcpy(v36, "max count: ");
    sub_4EE0((__int64 *)&v36, (__int64)"%u", v29);
    v30 = (char *)&unk_10F58;
    if ( (_QWORD)v37 )
      v30 = v36;
    set_cmt(a1[5], v30, 0);
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
  }
  v20 = _mm_cvtsi32_si128(v32);
  v21 = _mm_cvtsi32_si128(v33);
  a3[1].m128i_i8[0] = v19;
  v22 = v34;
  *a3 = _mm_unpacklo_epi32(_mm_unpacklo_epi32(v20, v21), (__m128i)0LL);
  if ( v22 )
  {
    *(_QWORD *)&v35 = 0;
    qfree(v22);
  }
  return 1;
}

