__int64 __fastcall sub_429B0(__int64 a1)
{
  const char *v2; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // r12
  int v8; // edx
  __m128i v9; // xmm0
  void *v10; // rdi
  void *v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  void *v14; // rax
  void *v15; // rdi
  __m128i v16; // xmm0
  void *ptr; // [rsp+0h] [rbp-198h] BYREF
  __m128i v18; // [rsp+8h] [rbp-190h]
  int v19[2]; // [rsp+20h] [rbp-178h] BYREF
  void *v20[2]; // [rsp+28h] [rbp-170h] BYREF
  void *v21; // [rsp+40h] [rbp-158h] BYREF
  int v22[4]; // [rsp+48h] [rbp-150h]
  int v23; // [rsp+58h] [rbp-140h]
  int v24[2]; // [rsp+60h] [rbp-138h] BYREF
  char v25; // [rsp+68h] [rbp-130h]
  int v26; // [rsp+6Ch] [rbp-12Ch]
  __int64 v27; // [rsp+70h] [rbp-128h] BYREF
  int v28[4]; // [rsp+78h] [rbp-120h] BYREF
  int v29[2]; // [rsp+90h] [rbp-108h] BYREF
  int v30[2]; // [rsp+98h] [rbp-100h]
  void *v31; // [rsp+A0h] [rbp-F8h]
  void *v32[2]; // [rsp+A8h] [rbp-F0h] BYREF
  void *v33; // [rsp+B8h] [rbp-E0h]
  __int64 v34[2]; // [rsp+C0h] [rbp-D8h]
  int v35; // [rsp+D0h] [rbp-C8h]
  void *v36; // [rsp+E0h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+E8h] [rbp-B0h] BYREF
  unsigned __int64 v38; // [rsp+168h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  v23 = -1;
  v21 = nullptr;
  *(_OWORD *)v22 = 0;
  if ( sub_32900(a1, (__int64)&v21) )
  {
    v4 = *(_QWORD *)(a1 + 504);
    sub_19A520(v4);
    *(_BYTE *)(a1 + 512) = 1;
    sub_19A570(v4);
    v25 = 11;
    v26 = -1;
    *(_QWORD *)v24 = &off_236EE8;
    v27 = 0;
    *(_OWORD *)v28 = 0;
    sub_18FFB0(1);
    v5 = sub_3A190(a1);
    v6 = v5;
    if ( v5 && *(_BYTE *)(v5 + 8) == 13 )
    {
      v8 = *(_DWORD *)(v5 + 12);
      if ( v8 > 6 )
      {
        sub_299F0((char **)&v27);
        sub_306F0((__int64)&v36, a1, (unsigned __int8 *)v24);
        sub_317E0(a1, *(unsigned __int8 *)(v6 + 8), &v36);
        if ( v36 )
        {
          v37.m128i_i64[0] = 0;
          j__free(v36);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 300) = v8;
        *(_QWORD *)v29 = v5;
        *(_QWORD *)v30 = 0;
        v31 = nullptr;
        v33 = nullptr;
        v35 = -1;
        *(_OWORD *)v32 = 0;
        *(_OWORD *)v34 = 0;
        if ( (unsigned __int8)sub_38E40(a1, v29, v5) )
        {
          ptr = nullptr;
          *(_DWORD *)(a1 + 256) = -1;
          v18 = 0;
          if ( *(int *)(v6 + 12) <= 4 )
          {
            LOBYTE(v20[0]) = 10;
            *(_QWORD *)v19 = off_236EB8;
            sub_306F0((__int64)&v36, a1, (unsigned __int8 *)v19);
            v14 = v36;
            v15 = ptr;
            v16 = _mm_loadu_si128(&v37);
            v36 = ptr;
            v37.m128i_i64[1] = v18.m128i_i64[1];
            ptr = v14;
            v18 = v16;
            if ( v36 )
            {
              v37.m128i_i64[0] = 0;
              j__free(v15);
            }
            nullsub_22(v19);
          }
          else
          {
            v37.m128i_i8[0] = 49;
            v36 = &off_237610;
            sub_2F620((__int64)&v37.m128i_i64[1], a1 + 376);
            sub_306F0((__int64)v19, a1, (unsigned __int8 *)&v36);
            v9 = _mm_loadu_si128((const __m128i *)v20);
            v10 = ptr;
            ptr = *(void **)v19;
            *(_QWORD *)v19 = v10;
            v20[1] = (void *)v18.m128i_i64[1];
            v18 = v9;
            if ( v10 )
            {
              v20[0] = nullptr;
              j__free(v10);
            }
            sub_69870(&v36);
          }
          sub_317E0(a1, *(unsigned __int8 *)(v6 + 8), &ptr);
          sub_421D0(a1);
          if ( ptr )
          {
            v18.m128i_i64[0] = 0;
            j__free(ptr);
          }
        }
        else
        {
          v11 = (void *)v27;
          v12 = _mm_loadu_si128((const __m128i *)v28);
          v13 = _mm_loadu_si128((const __m128i *)v32);
          v27 = (__int64)v31;
          v31 = v11;
          *(__m128i *)v28 = v13;
          *(__m128i *)v32 = v12;
          sub_306F0((__int64)&v36, a1, (unsigned __int8 *)v24);
          sub_317E0(a1, *(unsigned __int8 *)(v6 + 8), &v36);
          if ( v36 )
          {
            v37.m128i_i64[0] = 0;
            j__free(v36);
          }
        }
        if ( v33 )
        {
          v34[0] = 0;
          j__free(v33);
        }
        if ( v31 )
        {
          v32[0] = nullptr;
          j__free(v31);
        }
      }
    }
    else
    {
      sub_2F1A0(a1 + 192, (__int64)"Expected helo");
    }
    sub_65FD0(v24);
    v7 = *(_QWORD *)(a1 + 504);
    sub_19A520(v7);
    *(_BYTE *)(a1 + 512) = 0;
    sub_19A570(v7);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v2 = s1;
    if ( *(_QWORD *)v22 )
      v2 = (const char *)v21;
    sub_2F0E0(a1, (__int64)"Couldn't create SQL connection: %s\n", v2);
  }
  if ( v21 )
  {
    *(_QWORD *)v22 = 0;
    j__free(v21);
  }
  return 1;
}
