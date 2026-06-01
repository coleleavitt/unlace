__int64 __fastcall sub_8CD70(unsigned __int8 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars8; // [rsp+8h] [rbp+8h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  int vars30; // [rsp+30h] [rbp+30h]
  __int16 vars34; // [rsp+34h] [rbp+34h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  vars0 = 0;
  vars18 = 0;
  vars20 = 0;
  vars30 = 4;
  vars28 = a3;
  vars34 = 0;
  vars8 = 0;
  sub_8CC90(a1, &vars0);
  v3 = *(_QWORD *)a2;
  v4 = _mm_loadu_si128(&vars8);
  v5 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = vars0;
  *(__m128i *)(a2 + 8) = v4;
  vars0 = v3;
  vars8 = v5;
  sub_7C890(&vars0);
  return 13;
}

