__int64 __fastcall sub_68400(_QWORD *a1, __int64 *a2, unsigned int a3, unsigned __int16 a4, const char *a5)
{
  __int64 v8; // r13
  __int64 v10; // r14
  int v11; // edx
  __int64 v12; // r12
  __int64 v13; // r15
  __m128i si128; // xmm1
  __int16 v15; // ax
  int v16; // eax
  size_t v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  void *v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  __m128i v25; // xmm0
  size_t v26; // rax
  size_t v27; // r14
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  void *v32; // rax
  int v33; // [rsp+8h] [rbp-A0h]
  size_t v34; // [rsp+8h] [rbp-A0h]
  size_t v35; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v37; // [rsp+1Fh] [rbp-89h]
  __int64 v38; // [rsp+28h] [rbp-80h]
  size_t n; // [rsp+38h] [rbp-70h]
  __int16 v40; // [rsp+46h] [rbp-62h] BYREF
  __int64 v41; // [rsp+48h] [rbp-60h] BYREF
  __int64 v42; // [rsp+50h] [rbp-58h] BYREF
  __int64 v43; // [rsp+58h] [rbp-50h] BYREF
  __int64 v44[9]; // [rsp+60h] [rbp-48h] BYREF

  v44[1] = __readfsqword(0x28u);
  sub_67120(&v41, (__int64)a1, a3, nullptr);
  v8 = v41;
  if ( !v41 )
    return 0;
  v37 = (*(__int64 (__fastcall **)(__int64, __int16 *, __int64))(*(_QWORD *)v41 + 48LL))(v41, &v40, 2);
  if ( v37 )
  {
    if ( v40 == 4614 )
    {
      v10 = 0;
      v38 = a4;
      if ( !a4 )
        goto LABEL_8;
      while ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 48LL))(v8, v44, 8) )
      {
        if ( (v44[0] & 0x14) == 0x10 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v8 + 48LL))(v8, &v42, 4) )
            break;
          v11 = v42;
        }
        else
        {
          v11 = 0;
        }
        v33 = v11;
        v12 = (__int64)(a1[1] - *a1) >> 3;
        v13 = operator new(0x68u);
        *(_DWORD *)(v13 + 16) = v12;
        *(_DWORD *)(v13 + 20) = 5;
        si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
        *(_QWORD *)(v13 + 24) = 0;
        *(_OWORD *)(v13 + 32) = 0;
        *(_DWORD *)(v13 + 80) = -1;
        *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000001LL;
        *(_QWORD *)(v13 + 56) = 0xFFFFFFFFLL;
        *(_QWORD *)v13 = off_B1100;
        v42 = v13;
        *(_DWORD *)(v13 + 84) = 353501183;
        v15 = v44[0];
        *(_QWORD *)(v13 + 8) = a1;
        *(_WORD *)(v13 + 88) = v15;
        v16 = HIDWORD(v44[0]);
        *(_DWORD *)(v13 + 96) = v33;
        *(_DWORD *)(v13 + 90) = v16;
        *(__m128i *)(v13 + 64) = si128;
        if ( a5 )
        {
          v17 = strlen(a5);
          if ( v17 )
          {
            n = v17;
            v34 = v17 + 1;
            v22 = (void *)qvector_reserve(v13 + 24, 0, v17 + 1, 1);
            *(_QWORD *)(v13 + 24) = v22;
            *(_QWORD *)(v13 + 32) = v34;
            memmove(v22, a5, n);
            *(_BYTE *)(*(_QWORD *)(v13 + 24) + n) = 0;
          }
        }
        v42 = 0;
        v18 = (__int64 *)a1[1];
        if ( v18 == (__int64 *)a1[2] )
        {
          v43 = v13;
          sub_57F80((__int64)a1, &v43);
          if ( v43 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 272LL))(v43);
        }
        else
        {
          *v18 = v13;
          a1[1] += 8LL;
        }
        v19 = a2[1];
        v20 = *a2;
        if ( a2[2] < (unsigned __int64)(v19 + 1) )
        {
          v21 = qvector_reserve(a2, v20, v19 + 1, 4);
          *a2 = v21;
          v20 = v21;
          v19 = a2[1];
        }
        *(_DWORD *)(v20 + 4 * v19) = v12;
        ++v10;
        ++a2[1];
        if ( v10 == v38 )
          goto LABEL_8;
      }
    }
    else
    {
      if ( v40 == 4105 )
      {
        v23 = (__int64)(a1[1] - *a1) >> 3;
        v24 = operator new(0x68u);
        *(_DWORD *)(v24 + 16) = v23;
        *(_OWORD *)(v24 + 32) = 0;
        v25 = _mm_load_si128((const __m128i *)&xmmword_94160);
        *(_DWORD *)(v24 + 20) = 5;
        *(_QWORD *)(v24 + 24) = 0;
        *(_DWORD *)(v24 + 80) = -1;
        *(_QWORD *)(v24 + 48) = 0xFFFFFFFF00000001LL;
        *(_QWORD *)(v24 + 56) = 0xFFFFFFFFLL;
        *(_QWORD *)v24 = off_B1100;
        *(_WORD *)(v24 + 88) = 0;
        *(_DWORD *)(v24 + 96) = 0;
        v43 = v24;
        *(_QWORD *)(v24 + 8) = a1;
        *(_DWORD *)(v24 + 84) = 353501183;
        *(_DWORD *)(v24 + 90) = a3;
        *(__m128i *)(v24 + 64) = v25;
        if ( a5 )
        {
          v26 = strlen(a5);
          v27 = v26;
          if ( v26 )
          {
            v35 = v26 + 1;
            v32 = (void *)qvector_reserve(v24 + 24, 0, v26 + 1, 1);
            *(_QWORD *)(v24 + 24) = v32;
            *(_QWORD *)(v24 + 32) = v35;
            memmove(v32, a5, v27);
            *(_BYTE *)(*(_QWORD *)(v24 + 24) + v27) = 0;
          }
        }
        v43 = 0;
        v28 = (__int64 *)a1[1];
        if ( v28 == (__int64 *)a1[2] )
        {
          v44[0] = v24;
          sub_57F80((__int64)a1, v44);
          if ( v44[0] )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v44[0] + 272LL))(v44[0]);
        }
        else
        {
          *v28 = v24;
          a1[1] += 8LL;
        }
        v29 = a2[1];
        v30 = *a2;
        if ( a2[2] < (unsigned __int64)(v29 + 1) )
        {
          v31 = qvector_reserve(a2, v30, v29 + 1, 4);
          *a2 = v31;
          v30 = v31;
          v29 = a2[1];
        }
        *(_DWORD *)(v30 + 4 * v29) = v23;
        ++a2[1];
        goto LABEL_8;
      }
      if ( (*(_DWORD *)debug & 0x400000) != 0 )
        sub_29350();
    }
  }
  v37 = 0;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return v37;
}

