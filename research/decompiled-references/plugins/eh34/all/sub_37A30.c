__int64 __fastcall sub_37A30(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __m128i v6; // xmm0
  int v8; // r12d
  int v9; // esi
  __m128i v10; // xmm0
  __int64 v11; // [rsp+0h] [rbp-78h] BYREF
  __m128i v12; // [rsp+8h] [rbp-70h] BYREF
  char v13; // [rsp+18h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __m128i v15; // [rsp+28h] [rbp-50h] BYREF
  char v16; // [rsp+38h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  sub_32790(a2, a3);
  sub_375F0((__int64)&v11, a2);
  if ( v13 )
  {
    v5 = v11;
    v6 = _mm_loadu_si128(&v12);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v5;
    *(__m128i *)(a1 + 8) = v6;
  }
  else if ( (_BYTE)v11 )
  {
    sub_32FD0(a2, a3);
    sub_33530(a2);
    sub_331C0((__int64)&v14, a2, a3);
    if ( v16 || (sub_33600((__int64)&v14, a2), v16) || (sub_37440((__int64)&v14, a2), v16) )
    {
      *(_QWORD *)a1 = v14;
      v10 = _mm_loadu_si128(&v15);
      *(_BYTE *)(a1 + 24) = 1;
      *(__m128i *)(a1 + 8) = v10;
    }
    else
    {
      sub_33C40(a2, a3);
      if ( *(_QWORD *)(a2 + 568) )
      {
        v8 = 0;
        do
        {
          v9 = v8++;
          sub_34140(a2, v9, 1);
        }
        while ( (unsigned __int64)v8 < *(_QWORD *)(a2 + 568) );
      }
      sub_34040(a2);
      *(_BYTE *)a1 = 1;
      *(_BYTE *)(a1 + 24) = 0;
    }
  }
  else
  {
    *(_BYTE *)a1 = 0;
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
