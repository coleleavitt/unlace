__int64 __fastcall sub_2E700(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // ebp
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v16; // [rsp+8h] [rbp-C0h] BYREF
  char v17; // [rsp+18h] [rbp-B0h]
  __int64 v18; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+28h] [rbp-A0h] BYREF
  char v20; // [rsp+38h] [rbp-90h]
  __int64 v21; // [rsp+40h] [rbp-88h] BYREF
  __m128i v22; // [rsp+48h] [rbp-80h] BYREF
  char v23; // [rsp+58h] [rbp-70h]
  __int64 v24; // [rsp+60h] [rbp-68h] BYREF
  __m128i v25; // [rsp+68h] [rbp-60h] BYREF
  char v26; // [rsp+78h] [rbp-50h]
  unsigned __int64 v27; // [rsp+88h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v4 = a3;
  if ( a3 == a4 )
    goto LABEL_2;
  sub_24460((__int64)&v15, a2, a3, a4);
  if ( v17 )
  {
    v7 = v15;
    v8 = _mm_loadu_si128(&v16);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v8;
    return a1;
  }
  if ( (_BYTE)v15 )
  {
    *(_DWORD *)a1 = a4;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
  sub_24460((__int64)&v18, a2, a4, v4);
  if ( v20 )
  {
    v11 = v18;
    v12 = _mm_loadu_si128(&v19);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v11;
    *(__m128i *)(a1 + 8) = v12;
    return a1;
  }
  if ( (_BYTE)v18 )
  {
LABEL_2:
    *(_DWORD *)a1 = v4;
    *(_BYTE *)(a1 + 24) = 0;
  }
  else if ( v4 == -2 )
  {
LABEL_18:
    *(_DWORD *)a1 = -2;
    *(_BYTE *)(a1 + 24) = 0;
  }
  else
  {
    while ( 1 )
    {
      sub_2E610((__int64)&v21, a2, v4, a4);
      if ( v23 )
      {
        v9 = v21;
        v10 = _mm_loadu_si128(&v22);
        *(_BYTE *)(a1 + 24) = 1;
        *(_QWORD *)a1 = v9;
        *(__m128i *)(a1 + 8) = v10;
        return a1;
      }
      if ( (_BYTE)v21 )
        goto LABEL_2;
      sub_26920((__int64)&v24, a2, v4);
      if ( v26 )
        break;
      v4 = v24;
      if ( (_DWORD)v24 == -2 )
        goto LABEL_18;
    }
    v13 = v24;
    v14 = _mm_loadu_si128(&v25);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v13;
    *(__m128i *)(a1 + 8) = v14;
  }
  return a1;
}

