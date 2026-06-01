__int64 __fastcall sub_387E0(__int64 a1, unsigned __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+8h] [rbp-50h] BYREF
  char v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  sub_37B90((__int64)&v9, a2, a3);
  if ( v11 )
  {
    v7 = v9;
    v8 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v8;
  }
  else if ( (_BYTE)v9 )
  {
    sub_37C40(a1, a2, a4, a2);
  }
  else
  {
    sub_2F750(a1, a2, a3, (__int64)a4);
  }
  return a1;
}
