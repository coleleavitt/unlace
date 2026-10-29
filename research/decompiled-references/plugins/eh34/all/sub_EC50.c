__int64 __fastcall sub_EC50(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r8
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9; // [rsp+8h] [rbp-30h] BYREF
  char v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v4 = a2 + 1208;
  v11 = __readfsqword(0x28u);
  if ( a4 )
    v4 = a2 + 336;
  sub_63120(&v8, a2, a3, *(_QWORD *)(*(_QWORD *)(a2 + 216) + 8LL), v4);
  if ( v10 )
  {
    v6 = v8;
    v7 = _mm_loadu_si128(&v9);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v7;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}
