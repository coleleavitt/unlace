__int64 __fastcall sub_5A960(__int64 a1)
{
  __int64 v1; // rsi
  void *v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  void (*v6)(void); // rax
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __m128i si128; // xmm0
  __int64 v11; // rax
  int v12; // [rsp+Ch] [rbp-2Ch] BYREF
  void *v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 608);
  v13[1] = (void *)__readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64, __int64))(*(_QWORD *)v1 + 24LL))(v13, v1, 2);
  if ( !v13[0] || !(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v13[0] + 24LL))(v13[0]) )
  {
    v8 = *(__int64 **)(a1 + 600);
    v9 = *v8;
    if ( (unsigned __int64)v8[2] <= 0x16 )
    {
      v11 = qvector_reserve(v8, v9, 23, 1);
      *v8 = v11;
      v9 = v11;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_94190);
    v8[1] = 23;
    *(__m128i *)v9 = si128;
    *(_QWORD *)(v9 + 14) = 0x6D6165727473206FLL;
    *(_BYTE *)(*v8 + 22) = 0;
    goto LABEL_13;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(void *, int *, __int64))(*(_QWORD *)v13[0] + 48LL))(v13[0], &v12, 4) )
  {
LABEL_13:
    v5 = 0;
    goto LABEL_6;
  }
  if ( v12 == 4 )
  {
    *(_QWORD *)(a1 + 528) = 0;
    v3 = v13[0];
    *(_QWORD *)(a1 + 624) = 0;
    v4 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v3 + 24LL))(v3);
    v5 = sub_59180(a1, v13, v4 - 4, 0);
  }
  else
  {
    sub_37FD0(*(__int64 **)(a1 + 600), (__int64)"Invalid \".debug$T\" stream signature: 0x%X", v12);
    v5 = 0;
  }
LABEL_6:
  if ( v13[0] )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v13[0] + 8LL);
    if ( (char *)v6 == (char *)sub_54910 )
      operator delete(v13[0], 0x40u);
    else
      v6();
  }
  return v5;
}

