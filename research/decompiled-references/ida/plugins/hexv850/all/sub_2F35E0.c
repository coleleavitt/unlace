unsigned __int64 __fastcall sub_2F35E0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // rbp
  const __m128i *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // r15
  __m128i v17; // xmm0
  __int64 v18; // rdi
  const __m128i *v19; // rbx
  __int64 v21; // r14
  __m128i v22; // [rsp+10h] [rbp-108h] BYREF
  __int64 v23; // [rsp+20h] [rbp-F8h]
  const __m128i *v24; // [rsp+28h] [rbp-F0h]
  __int64 v25; // [rsp+30h] [rbp-E8h]
  const __m128i *v26; // [rsp+38h] [rbp-E0h]
  __int64 (__fastcall **v27)(); // [rsp+40h] [rbp-D8h]
  __int64 v28; // [rsp+48h] [rbp-D0h]
  __int64 v29; // [rsp+50h] [rbp-C8h]
  __m128i v30; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-B0h]
  __int64 v32; // [rsp+70h] [rbp-A8h]
  int v33; // [rsp+78h] [rbp-A0h]
  __int64 v34; // [rsp+80h] [rbp-98h]
  char v35; // [rsp+90h] [rbp-88h] BYREF
  __m128i v36; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-58h]
  int (__fastcall *v38)(__m128i *, unsigned __int64, __int64); // [rsp+C8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+D8h] [rbp-40h]

  v23 = a2;
  v25 = a3;
  v5 = a2 - a1;
  v26 = a4;
  v39 = __readfsqword(0x28u);
  v24 = (const __m128i *)&v35;
  if ( a2 - a1 > 1152 )
  {
    while ( v25 )
    {
      v6 = v24;
      sub_2C8EC0((__int64)v24, v26);
      sub_2C8EC0((__int64)&v36, v6);
      v7 = v23;
      v8 = a1 + 72;
      sub_2F3500(a1, a1 + 72, a1 + 72 * ((__int64)(0x8E38E38E38E38E39LL * (v5 >> 3)) >> 1), v23 - 72, (__int64)&v36);
      sub_621D0((__int64)&v36);
      sub_2C8EC0((__int64)&v36, v6);
      v9 = v7;
      while ( 1 )
      {
        if ( !v37 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v38(&v36, v8, a1) < 0 )
        {
          v8 += 72LL;
          if ( !v37 )
            goto LABEL_28;
        }
        v9 -= 72LL;
        if ( !v37 )
LABEL_27:
          std::__throw_bad_function_call();
        while ( v38(&v36, a1, v9) < 0 )
        {
          v9 -= 72LL;
          if ( !v37 )
            goto LABEL_27;
        }
        if ( v8 >= v9 )
          break;
        v10 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        v27 = off_4B4E50;
        v11 = *(_QWORD *)(v8 + 8);
        *(_OWORD *)(v8 + 24) = 0;
        v28 = v11;
        v12 = *(_QWORD *)(v8 + 16);
        *(_QWORD *)(v8 + 16) = 0;
        v29 = v12;
        v31 = 0;
        v30 = v10;
        copy_tinfo_t();
        v32 = *(_QWORD *)(v8 + 48);
        v33 = *(_DWORD *)(v8 + 56);
        v27 = off_4B6678;
        v34 = *(_QWORD *)(v8 + 64);
        *(_QWORD *)(v8 + 8) = *(_QWORD *)(v9 + 8);
        v13 = *(_QWORD *)(v9 + 16);
        v14 = _mm_loadu_si128((const __m128i *)(v9 + 24));
        *(_QWORD *)(v9 + 16) = 0;
        *(_OWORD *)(v9 + 24) = 0;
        if ( *(_QWORD *)(v8 + 16) )
        {
          *(_QWORD *)(v8 + 24) = 0;
          v22 = v14;
          qfree();
          v14 = _mm_load_si128(&v22);
        }
        *(_QWORD *)(v8 + 16) = v13;
        *(__m128i *)(v8 + 24) = v14;
        copy_tinfo_t();
        v15 = *(_QWORD *)(v9 + 48);
        v16 = v29;
        v29 = 0;
        v17 = _mm_loadu_si128(&v30);
        v30 = 0;
        *(_QWORD *)(v8 + 48) = v15;
        *(_DWORD *)(v8 + 56) = *(_DWORD *)(v9 + 56);
        *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 64);
        v18 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 8) = v28;
        if ( v18 )
        {
          *(_QWORD *)(v9 + 24) = 0;
          v22 = v17;
          qfree();
          v17 = _mm_load_si128(&v22);
        }
        *(_QWORD *)(v9 + 16) = v16;
        *(__m128i *)(v9 + 24) = v17;
        copy_tinfo_t();
        *(_QWORD *)(v9 + 48) = v32;
        *(_DWORD *)(v9 + 56) = v33;
        *(_QWORD *)(v9 + 64) = v34;
        v27 = off_4B4E50;
        clear_tinfo_t();
        if ( v29 )
        {
          v30.m128i_i64[0] = 0;
          qfree();
        }
        v8 += 72LL;
      }
      v21 = --v25;
      sub_621D0((__int64)&v36);
      sub_621D0((__int64)v24);
      sub_2C8EC0((__int64)&v36, v26);
      sub_2F35E0(v8, v23, v21, &v36);
      sub_621D0((__int64)&v36);
      v5 = v8 - a1;
      if ( (__int64)(v8 - a1) <= 1152 )
        return v39 - __readfsqword(0x28u);
      v23 = v8;
    }
    v19 = v24;
    sub_2C8EC0((__int64)v24, v26);
    sub_2C8EC0((__int64)&v36, v19);
    sub_2F2CB0(a1, v23, &v36);
    sub_621D0((__int64)&v36);
    while ( v23 - a1 > 72 )
    {
      v23 -= 72;
      sub_2F2FE0(a1, v23, v23, v24);
    }
    sub_621D0((__int64)v24);
  }
  return v39 - __readfsqword(0x28u);
}

