__int64 __fastcall sub_329DA0(__m128i *a1, char a2)
{
  const char *v4; // rsi
  __int8 v5; // bl
  __int8 v6; // bp
  __int32 v7; // r12d
  __int32 v8; // eax
  unsigned __int64 v9; // r9
  __int32 v10; // r13d
  __m128i v11; // xmm0
  int v12; // eax
  char v13; // dl
  __int64 *v14; // rbx
  __int64 (*v15)(); // rdx
  __int8 v16; // al
  int v17; // eax
  size_t v18; // rbx
  char *v19; // rbp
  void *v20; // rdi
  void (__fastcall ***v21)(_QWORD); // rdi
  unsigned int v22; // ebx
  unsigned int v24; // ebx
  int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int8 v29; // [rsp+0h] [rbp-88h]
  unsigned __int64 v30; // [rsp+0h] [rbp-88h]
  unsigned __int64 v31; // [rsp+0h] [rbp-88h]
  __m128i v32; // [rsp+20h] [rbp-68h] BYREF
  char *s1; // [rsp+30h] [rbp-58h]
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v32 = 0;
  getinf_buf();
  v4 = &byte_4;
  v5 = getinf_flag();
  v6 = getinf_flag();
  v29 = (getinf() & 0x1006) == 4098;
  s1 = nullptr;
  v7 = getinf();
  v34 = 0;
  get_abi_name();
  v8 = getinf();
  v9 = 0;
  v10 = v8;
  if ( !a2 && a1[9].m128i_i8[1] == v5 && a1[9].m128i_i8[0] == v6 && a1[9].m128i_i8[2] == v29 && a1[9].m128i_i32[2] == v7 )
  {
    v4 = ::s1;
    if ( a1[10].m128i_i64[1] )
      v4 = (const char *)a1[10].m128i_i64[0];
    if ( (_QWORD)v34 )
    {
      v17 = strcmp(s1, v4);
      v9 = v34;
      if ( v17 )
      {
        v11 = _mm_load_si128(&v32);
        a1[9].m128i_i8[2] = v29;
        a1[8] = v11;
        goto LABEL_20;
      }
      if ( a1[8].m128i_i32[0] != v32.m128i_i32[0] )
      {
        v11 = _mm_load_si128(&v32);
        a1[9].m128i_i8[1] = v5;
        a1[9].m128i_i8[0] = v6;
        a1[9].m128i_i8[2] = v29;
        a1[9].m128i_i32[2] = v7;
        a1[8] = v11;
        goto LABEL_20;
      }
    }
    else
    {
      if ( *v4 )
      {
        v11 = _mm_load_si128(&v32);
        a1[8] = v11;
        a1[9].m128i_i8[2] = v29;
        goto LABEL_4;
      }
      if ( a1[8].m128i_i32[0] != v32.m128i_i32[0] )
      {
        v11 = _mm_load_si128(&v32);
        a1[9].m128i_i8[1] = v5;
        a1[9].m128i_i8[0] = v6;
        a1[9].m128i_i8[2] = v29;
        a1[9].m128i_i32[2] = v7;
        a1[8] = v11;
        goto LABEL_4;
      }
    }
    if ( v32.m128i_i32[1] == a1[8].m128i_i32[1] && v32.m128i_i16[4] == a1[8].m128i_i16[4] && a1[11].m128i_i32[2] == v10 )
      goto LABEL_34;
  }
  v11 = _mm_load_si128(&v32);
  a1[9].m128i_i8[1] = v5;
  a1[9].m128i_i8[0] = v6;
  a1[9].m128i_i8[2] = v29;
  a1[9].m128i_i32[2] = v7;
  a1[8] = v11;
  if ( !v9 )
  {
LABEL_4:
    a1[10].m128i_i64[1] = 0;
    goto LABEL_5;
  }
LABEL_20:
  v18 = v9 - 1;
  if ( v9 == 1 )
    goto LABEL_4;
  v19 = s1;
  v20 = (void *)a1[10].m128i_i64[0];
  if ( a1[11].m128i_i64[0] < v9 )
  {
    v31 = v9;
    v28 = qvector_reserve((__int64)a1[10].m128i_i64, a1[10].m128i_i64[0], v9, 1);
    a1[10].m128i_i64[0] = v28;
    v9 = v31;
    v20 = (void *)v28;
  }
  a1[10].m128i_i64[1] = v9;
  v4 = v19;
  v30 = v9;
  memmove(v20, v19, v18);
  *(_BYTE *)(a1[10].m128i_i64[0] + v30 - 1) = 0;
LABEL_5:
  v12 = getinf();
  if ( v12 == 176 || (v13 = 0, v12 == 256) )
  {
    v4 = &byte_4;
    if ( !(unsigned __int8)getinf_flag()
      || (netnode_check(), v4 = nullptr, v24 = netnode_altval(), v24 <= 0x74)
      || (v25 = *(_DWORD *)(get_ph() + 4), v13 = 2, v25)
      && ((v26 = (unsigned int)(v25 - 13), (unsigned int)v26 > 0x3B)
       || (v27 = 0x800000000000005LL, !_bittest64(&v27, v26))
       || v24 == 117) )
    {
      v13 = 1;
    }
  }
  v14 = (__int64 *)a1[7].m128i_i64[0];
  a1[9].m128i_i8[4] = v13;
  a1[11].m128i_i32[2] = v10;
  v15 = *(__int64 (**)())(*v14 + 344);
  v16 = 0;
  if ( v15 != sub_328630 )
  {
    v16 = ((__int64 (__fastcall *)(__int64 *, const char *))v15)(v14, v4);
    v14 = (__int64 *)a1[7].m128i_i64[0];
  }
  a1[9].m128i_i8[3] = v16;
  if ( !(unsigned __int8)sub_64820(v14 + 23, v14 + 33) || !(unsigned __int8)sub_317F40(v14 + 35, (__int64)(v14 + 25)) )
  {
    if ( !under_debugger )
      sub_383060(0, *(double *)v11.m128i_i64);
    BUG();
  }
  v21 = (void (__fastcall ***)(_QWORD))a1[72].m128i_i64[0];
  if ( v21 )
    (**v21)(v21);
  v22 = a1[9].m128i_u8[3];
  if ( (_BYTE)v22 )
  {
    sub_33F1A0();
LABEL_34:
    v22 = a1[9].m128i_u8[3];
  }
  if ( s1 )
  {
    *(_QWORD *)&v34 = 0;
    qfree((__int64)s1);
  }
  return v22;
}

