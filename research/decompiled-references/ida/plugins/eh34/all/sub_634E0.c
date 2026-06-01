__int64 __fastcall sub_634E0(__int64 a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, int a5)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i v9; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int32 v17; // r8d
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __m128i v22; // xmm0
  int v23; // [rsp+Ch] [rbp-9Ch]
  __int64 v24; // [rsp+20h] [rbp-88h] BYREF
  __m128i v25; // [rsp+28h] [rbp-80h] BYREF
  char v26; // [rsp+38h] [rbp-70h]
  unsigned __int64 v27; // [rsp+40h] [rbp-68h] BYREF
  __m128i v28; // [rsp+48h] [rbp-60h] BYREF
  char v29; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 216);
  v30 = __readfsqword(0x28u);
  sub_26920((__int64)&v24, v7 + 128, a5);
  if ( v26 )
  {
    v8 = v24;
    v9 = _mm_loadu_si128(&v25);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v8;
    *(__m128i *)(a1 + 8) = v9;
    return a1;
  }
  v11 = (_QWORD *)a3[2];
  v12 = a3 + 1;
  if ( v11 )
  {
    v13 = a3 + 1;
    do
    {
      while ( 1 )
      {
        v14 = v11[2];
        v15 = v11[3];
        if ( v11[4] < a4 )
          break;
        v13 = v11;
        v11 = (_QWORD *)v11[2];
        if ( !v14 )
          goto LABEL_9;
      }
      v11 = (_QWORD *)v11[3];
    }
    while ( v15 );
LABEL_9:
    if ( v12 != v13 && a4 >= v13[4] )
    {
      sub_2E700((__int64)&v27, *(_QWORD *)(a2 + 216) + 128LL, v24, *((_DWORD *)v13 + 10));
      if ( !v29 )
      {
        *((_DWORD *)v13 + 10) = v27;
        *(_BYTE *)(a1 + 24) = 0;
        return a1;
      }
LABEL_24:
      *(_QWORD *)a1 = v27;
      v22 = _mm_loadu_si128(&v28);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v22;
      return a1;
    }
  }
  v23 = v24;
  v16 = sub_26460(*(_QWORD *)(a2 + 216), a4);
  v17 = v23;
  if ( BYTE4(v16) )
  {
    sub_2E700((__int64)&v27, *(_QWORD *)(a2 + 216) + 128LL, v23, v16);
    v17 = v27;
    if ( v29 )
      goto LABEL_24;
  }
  v18 = (_QWORD *)a3[2];
  v27 = a4;
  v19 = a3 + 1;
  v28.m128i_i32[0] = v17;
  if ( !v18 )
    goto LABEL_20;
  do
  {
    while ( 1 )
    {
      v20 = v18[2];
      v21 = v18[3];
      if ( v18[4] < a4 )
        break;
      v19 = v18;
      v18 = (_QWORD *)v18[2];
      if ( !v20 )
        goto LABEL_18;
    }
    v18 = (_QWORD *)v18[3];
  }
  while ( v21 );
LABEL_18:
  if ( v12 == v19 || a4 < v19[4] )
LABEL_20:
    sub_63360(a3, v19, (__int64)&v27);
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

