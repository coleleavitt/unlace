__int64 __fastcall sub_6FDB0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  __m128i v5; // [rsp+10h] [rbp-28h] BYREF
  int v6; // [rsp+20h] [rbp-18h]
  unsigned __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v5 = 0;
  v4[0] = 0;
  v4[1] = 0;
  v2 = sub_9A3B0(*(_QWORD *)(*(_QWORD *)a2 + 16LL), v4, a2);
  result = 0;
  if ( v2 )
  {
    *(__m128i *)(a1 + 24) = _mm_load_si128(&v5);
    return 1;
  }
  return result;
}

