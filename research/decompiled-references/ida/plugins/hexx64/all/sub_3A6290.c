unsigned __int64 __fastcall sub_3A6290(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r15
  _BYTE *v18; // rax
  __int64 *func; // rax
  __int64 v20; // rsi
  __m128i *v21; // r15
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 i; // rdx
  __int64 *v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 j; // rcx
  __int64 *v32; // rdx
  __int64 v33; // rdi
  __int64 *v34; // rdi
  __int64 v35; // rcx
  __int64 k; // rbx
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v40; // [rsp-8h] [rbp-C8h]
  __int64 v41; // [rsp+0h] [rbp-C0h]
  __int64 v42; // [rsp+8h] [rbp-B8h]
  __int64 v43; // [rsp+10h] [rbp-B0h]
  __m128i *v44; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+28h] [rbp-98h] BYREF
  __int128 v46; // [rsp+30h] [rbp-90h]
  __int64 *v47[7]; // [rsp+48h] [rbp-78h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v46 = 0;
  v47[0] = (__int64 *)&off_4E70E0;
  v47[4] = &v45;
  v47[5] = a3;
  v45 = 0;
  v47[3] = nullptr;
  v47[6] = a4;
  *(__m128i *)&v47[1] = _mm_load_si128((const __m128i *)&xmmword_424800);
  ((void (__fastcall *)(__int64, __int64 **, __int64, __int64 *, __int64, __int64))callui)(1147, v47, 8, a4, a5, a6);
  if ( !(_QWORD)v46 )
  {
    v35 = v45;
    if ( v45 )
      goto LABEL_36;
    return v48 - __readfsqword(0x28u);
  }
  v15 = 0;
  v16 = 0;
  do
  {
    while ( 1 )
    {
      callui(1105, *(unsigned int *)(v45 + 96 * v16 + 40), v11, v12, v13, v14, v40, v41, v42, v43);
      if ( v18 )
      {
        if ( *v18 == 36 && (unsigned int)qsscanf() == 1 && v47[0] != (__int64 *)-1LL )
        {
          func = (__int64 *)get_func();
          if ( func )
            break;
        }
      }
LABEL_3:
      ++v15;
      v17 = v46;
      v16 = v15;
      if ( v15 >= (unsigned __int64)v46 )
        goto LABEL_30;
    }
    v20 = *(_QWORD *)(a1 + 40);
    v47[0] = func;
    memset(&v47[1], 0, 24);
    sub_14CDC0((__int64 *)&v44, v20, v47, nullptr, 0, 0.0, a8, a9, a10);
    v21 = v44;
    if ( !v44 )
    {
      if ( v47[1] )
      {
        v47[2] = nullptr;
        qfree((__int64)v47[1]);
      }
      goto LABEL_3;
    }
    if ( v44[6].m128i_i32[2]-- == 1 )
    {
      sub_258970(v21->m128i_i64);
      v23 = v21[11].m128i_i64[1];
      if ( v23 )
      {
        v24 = v21[12].m128i_i64[0];
        if ( v24 )
        {
          for ( i = 0; i != v24; ++i )
          {
            v26 = (__int64 *)(v23 + 24 * i);
            v27 = *v26;
            if ( *v26 )
            {
              v26[1] = 0;
              v42 = i;
              v41 = v24;
              qfree(v27);
              i = v42;
              v24 = v41;
              v23 = v21[11].m128i_i64[1];
            }
          }
        }
        v21[12].m128i_i64[0] = 0;
        qfree(v23);
      }
      v28 = v21[10].m128i_i64[0];
      if ( v28 )
      {
        v21[10].m128i_i64[1] = 0;
        qfree(v28);
      }
      v29 = v21[8].m128i_i64[0];
      if ( v29 )
      {
        v30 = v21[8].m128i_i64[1];
        if ( v30 )
        {
          for ( j = 0; j != v30; ++j )
          {
            v32 = (__int64 *)(v29 + 32 * j);
            v33 = *v32;
            if ( *v32 )
            {
              v32[1] = 0;
              v42 = v30;
              v41 = j;
              qfree(v33);
              v30 = v42;
              j = v41;
              v29 = v21[8].m128i_i64[0];
            }
          }
        }
        v21[8].m128i_i64[1] = 0;
        qfree(v29);
      }
      sub_255050((__int64)v21[1].m128i_i64, 0.0);
      j__qfree((__int64)v21);
      v34 = v47[1];
      if ( v47[1] )
      {
LABEL_28:
        v47[2] = nullptr;
        qfree((__int64)v34);
      }
    }
    else
    {
      v34 = v47[1];
      if ( v47[1] )
        goto LABEL_28;
    }
    sub_2581E0(v21);
    ++v15;
    v17 = v46;
    v16 = v15;
  }
  while ( v15 < (unsigned __int64)v46 );
LABEL_30:
  v35 = v45;
  if ( v45 )
  {
    if ( v17 )
    {
      for ( k = 0; k != v17; ++k )
      {
        v37 = v35 + 96 * k;
        v38 = *(_QWORD *)(v37 + 8);
        if ( v38 )
        {
          *(_QWORD *)(v37 + 16) = 0;
          qfree(v38);
          v35 = v45;
        }
      }
    }
LABEL_36:
    *(_QWORD *)&v46 = 0;
    qfree(v35);
  }
  return v48 - __readfsqword(0x28u);
}

