unsigned __int64 __fastcall sub_3D57D0(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rdx
  signed __int32 v9; // ett
  __int64 v10; // rax
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int64 v16; // rdx
  int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __m128i v20; // [rsp+8h] [rbp-60h] BYREF
  __int64 v21; // [rsp+18h] [rbp-50h]
  __m128i si128; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-38h]
  __int16 v24; // [rsp+34h] [rbp-34h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v25 = __readfsqword(0x28u);
  if ( !v4 )
    v4 = *(_QWORD **)(a2 + 16);
  if ( v5 != *v4 )
  {
    if ( !under_debugger )
      sub_383060(0xCE91u, a3);
LABEL_33:
    BUG();
  }
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 8);
    v8 = (volatile signed __int32 *)(v6 + 8);
    do
    {
      if ( !v7 )
      {
        v12 = *(volatile signed __int32 **)(a1 + 96);
        v6 = 0;
        goto LABEL_15;
      }
      v9 = v7;
      v7 = _InterlockedCompareExchange(v8, v7 + 1, v7);
    }
    while ( v9 != v7 );
    if ( *v8 )
    {
      v10 = *(_QWORD *)(a1 + 88);
      if ( v10 )
      {
        if ( (unsigned int)(*(_DWORD *)(v10 + 60) - 1) <= 1 )
        {
          v11 = *(_QWORD *)(v10 + 64);
          if ( a2 == v11 )
            sub_3CF260(a3);
          *(_DWORD *)(v10 + 60) = 2;
          if ( *(_QWORD *)(v11 + 8) != *(_QWORD *)(a2 + 8) )
            *(_DWORD *)(v10 + 60) = 4;
        }
      }
    }
    v12 = *(volatile signed __int32 **)(a1 + 96);
LABEL_15:
    *(_OWORD *)(a1 + 88) = 0;
    if ( v12 )
    {
      if ( &_pthread_key_create )
      {
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) != 1 )
          goto LABEL_18;
      }
      else
      {
        v18 = *((_DWORD *)v12 + 3);
        *((_DWORD *)v12 + 3) = v18 - 1;
        if ( v18 != 1 )
          goto LABEL_18;
      }
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 24LL))(v12);
    }
  }
  else
  {
    *(_OWORD *)(a1 + 88) = 0;
  }
LABEL_18:
  v13 = *(_QWORD *)(a1 + 16);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_QWORD *)(a1 + 40) = 0;
  sub_332990((_QWORD *)(a2 + 8));
  v20 = 0;
  v19 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  sub_91620(a2, (__int64)&v19, si128);
  v14 = _mm_loadu_si128(&v20);
  v15 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v16 = v19;
  v19 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v16;
  *(__m128i *)(a1 + 72) = v14;
  v20 = v15;
  if ( !v14.m128i_i64[0] )
  {
    if ( !under_debugger )
      sub_383060(0xCE92u, 0.0);
    goto LABEL_33;
  }
  *(_DWORD *)(a1 + 60) = 1;
  sub_80A90(&v19);
  if ( v6 )
    sub_3D56E0((volatile signed __int32 *)v6);
  return v25 - __readfsqword(0x28u);
}

