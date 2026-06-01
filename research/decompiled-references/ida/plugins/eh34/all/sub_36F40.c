__int64 __fastcall sub_36F40(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  char v5; // al
  __m128i v6; // xmm0
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  __m128i v8; // [rsp+8h] [rbp-60h] BYREF
  char v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+20h] [rbp-48h] BYREF
  __m128i v11; // [rsp+28h] [rbp-40h] BYREF
  char v12; // [rsp+38h] [rbp-30h]
  unsigned __int64 v13; // [rsp+48h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  sub_36240((__int64)&v7, a2);
  if ( !v9 )
  {
    if ( (_DWORD)v7 )
    {
      sub_33600((__int64)&v10, a2);
      if ( v12 )
        goto LABEL_9;
      *(_BYTE *)(a2 + 672) = 0;
      sub_34040(a2);
      sub_33530(a2);
    }
    *(_DWORD *)(a2 + 640) = *(_DWORD *)(a2 + 644);
    sub_36D40((__int64)&v10, (__int64 *)a2);
    if ( !v12 )
    {
      v5 = v10;
      *(_BYTE *)(a1 + 24) = 0;
      *(_BYTE *)a1 = v5;
      return a1;
    }
LABEL_9:
    *(_QWORD *)a1 = v10;
    v6 = _mm_loadu_si128(&v11);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v6;
    return a1;
  }
  v2 = v7;
  v3 = _mm_loadu_si128(&v8);
  *(_BYTE *)(a1 + 24) = 1;
  *(_QWORD *)a1 = v2;
  *(__m128i *)(a1 + 8) = v3;
  return a1;
}

