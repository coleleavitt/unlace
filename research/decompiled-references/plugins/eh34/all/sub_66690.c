__int64 __fastcall sub_66690(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // [rsp+0h] [rbp-48h] BYREF
  __m128i v13; // [rsp+8h] [rbp-40h] BYREF
  char v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v6 = *(_QWORD *)(a3 + 40);
  v15 = __readfsqword(0x28u);
  *(_QWORD *)(a2 + 280) = v6;
  sub_5FFF0(a2, a4, a5);
  if ( !*(_BYTE *)(a2 + 188) && *(_QWORD *)(a2 + 472) && (sub_665D0((__int64)&v12, (_QWORD *)a2, a3, v7, v8), v14) )
  {
    v10 = v12;
    v11 = _mm_loadu_si128(&v13);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v10;
    *(__m128i *)(a1 + 8) = v11;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
