unsigned __int64 __fastcall sub_3D5D10(__int64 a1, __int64 a2, double a3)
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
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __int64 v15; // rdx
  int v17; // eax
  __int64 v18; // [rsp+0h] [rbp-68h] BYREF
  __m128i v19; // [rsp+8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+18h] [rbp-50h]
  __m128i si128; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+30h] [rbp-38h]
  __int16 v23; // [rsp+34h] [rbp-34h]
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v4 = *(_QWORD **)(a2 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  if ( !v4 )
    v4 = *(_QWORD **)(a2 + 16);
  if ( v5 != *v4 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCE91u, a3);
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
            sub_3CF7A0(a3);
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
        v17 = *((_DWORD *)v12 + 3);
        *((_DWORD *)v12 + 3) = v17 - 1;
        if ( v17 != 1 )
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
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree();
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  *(_QWORD *)(a1 + 40) = 0;
  sub_332CD0((_QWORD *)(a2 + 8));
  v19 = 0;
  v18 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_41F900);
  sub_91060(a2, (__int64)&v18);
  v13 = _mm_loadu_si128(&v19);
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  v15 = v18;
  v18 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v15;
  *(__m128i *)(a1 + 72) = v13;
  v19 = v14;
  if ( !v13.m128i_i64[0] )
  {
    if ( !under_debugger )
      sub_3835A0(0xCE92u, 0.0);
    goto LABEL_33;
  }
  *(_DWORD *)(a1 + 60) = 1;
  sub_804D0(&v18);
  if ( v6 )
    sub_3D5C20((volatile signed __int32 *)v6);
  return v24 - __readfsqword(0x28u);
}

