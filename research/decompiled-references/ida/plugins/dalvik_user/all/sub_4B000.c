__int64 __fastcall sub_4B000(unsigned __int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  char *v4; // rax
  unsigned __int64 v5; // rdx
  __m128 v6; // xmm0
  int v7; // eax
  char v9; // dl
  unsigned int v10; // edx
  char v11; // r15
  __int64 v12; // r14
  void *v13; // r13
  unsigned __int32 v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rsi
  __m128i v17; // xmm0
  void *v18; // rcx
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-158h] BYREF
  void *v23; // [rsp+10h] [rbp-148h]
  __int64 v24; // [rsp+18h] [rbp-140h]
  unsigned __int8 v25; // [rsp+23h] [rbp-135h]
  unsigned __int32 v26; // [rsp+24h] [rbp-134h]
  __int64 *v27; // [rsp+28h] [rbp-130h]
  int v28; // [rsp+34h] [rbp-124h] BYREF
  char *v29; // [rsp+38h] [rbp-120h] BYREF
  __m128 v30; // [rsp+40h] [rbp-118h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-108h]
  int v32; // [rsp+58h] [rbp-100h]
  __int64 v33; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v34; // [rsp+68h] [rbp-F0h]
  char v35; // [rsp+78h] [rbp-E0h]
  char v36; // [rsp+80h] [rbp-D8h]
  __int64 v37; // [rsp+88h] [rbp-D0h] BYREF
  void *v38; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+98h] [rbp-C0h]
  void *src; // [rsp+A8h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-A8h]
  unsigned __int32 v42; // [rsp+C0h] [rbp-98h]
  __int64 v43; // [rsp+D0h] [rbp-88h] BYREF
  __int128 v44; // [rsp+D8h] [rbp-80h]
  unsigned __int32 v45; // [rsp+110h] [rbp-48h]
  unsigned __int64 v46; // [rsp+118h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 24);
  v46 = __readfsqword(0x28u);
  v24 = v2;
  qmutex_lock();
  v43 = 0;
  v27 = &v43;
  v44 = 0;
  v4 = sub_48F20(a1, 1u, 0x14u, 0, (__int64)&v43);
  v29 = v4;
  if ( v4 )
  {
    v5 = *((_QWORD *)v4 + 1);
    v6 = _mm_loadh_ps((const double *)v4);
    v32 = 0;
    v31 = v5;
    v30 = v6;
    v33 = 0;
    v35 = byte_7FBE9;
    v34 = 0;
    v25 = sub_46430((__int64)&v30, (unsigned __int32 *)&v28, 1);
    if ( v25 )
    {
      v35 = 0;
      while ( 1 )
      {
        v7 = v28--;
        if ( v7 <= 0 )
          break;
        v38 = nullptr;
        src = nullptr;
        v39 = 0;
        v41 = 0;
        if ( v32 >= v31 )
          goto LABEL_6;
        v9 = *(_BYTE *)(v30.m128_u64[1] + v32++);
        v36 = v9;
        if ( v35 )
          sub_1FAD0(&v33);
        if ( !(unsigned __int8)sub_46950((__int64)&v30, *(_DWORD *)(a1 + 12), &v37)
          || !(unsigned __int8)sub_464A0((__int64)&v30, (__int64 *)&v38)
          || !(unsigned __int8)sub_464A0((__int64)&v30, (__int64 *)&src)
          || v31 < v32 + 4 )
        {
          if ( src )
          {
            *(_QWORD *)&v41 = 0;
            qfree();
          }
LABEL_6:
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree();
          }
          goto LABEL_8;
        }
        v10 = *(_DWORD *)(v30.m128_u64[1] + v32);
        v32 += 4;
        v42 = _byteswap_ulong(v10);
        if ( v35 )
          sub_1FAD0(&v33);
        if ( a2 )
        {
          v11 = v36;
          v12 = v37;
          v13 = nullptr;
          LOBYTE(v43) = v36;
          *(_QWORD *)&v44 = v37;
          v22.m128i_i64[0] = v39;
          if ( (_QWORD)v39 )
          {
            v13 = (void *)qalloc_or_throw();
            memcpy(v13, v38, v22.m128i_u64[0]);
          }
          v23 = nullptr;
          v22.m128i_i64[1] = v41;
          if ( (_QWORD)v41 )
          {
            v23 = (void *)qalloc_or_throw();
            memcpy(v23, src, v22.m128i_u64[1]);
          }
          v14 = v42;
          v15 = a2[1];
          v16 = *a2;
          v45 = v42;
          if ( a2[2] < (unsigned __int64)(v15 + 1) )
          {
            v26 = v42;
            v21 = qvector_reserve();
            v15 = a2[1];
            v14 = v26;
            *a2 = v21;
            v16 = v21;
          }
          v17 = _mm_loadl_epi64(&v22);
          v18 = v23;
          v19 = v16 + 72 * v15;
          *(_BYTE *)v19 = v11;
          *(__m128i *)(v19 + 24) = _mm_unpacklo_epi64(v17, v17);
          v20 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
          *(_QWORD *)(v19 + 8) = v12;
          *(_QWORD *)(v19 + 16) = v13;
          *(_QWORD *)(v19 + 40) = v18;
          *(_DWORD *)(v19 + 64) = v14;
          *(__m128i *)(v19 + 48) = _mm_unpacklo_epi64(v20, v20);
          ++a2[1];
        }
        if ( src )
        {
          *(_QWORD *)&v41 = 0;
          qfree();
        }
        if ( v38 )
        {
          *(_QWORD *)&v39 = 0;
          qfree();
        }
      }
      if ( byte_7FBE9 )
      {
        v35 = 1;
        sub_43D60(&v33, "...,");
      }
    }
    else
    {
LABEL_8:
      v25 = 0;
    }
    sub_43EB0((__int64)&v30);
  }
  else
  {
    v25 = 0;
  }
  sub_44B80((_QWORD **)&v29);
  qmutex_unlock();
  return v25;
}

