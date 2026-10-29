unsigned __int64 __fastcall sub_8F000(__int64 a1, const char *a2)
{
  size_t v2; // r13
  const char *v3; // rbp
  void *dest; // [rsp+0h] [rbp-68h] BYREF
  __int128 v6; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+18h] [rbp-50h]
  __m128i si128; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+30h] [rbp-38h]
  __int16 v10; // [rsp+34h] [rbp-34h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v2 = 1;
  v3 = (const char *)&unk_405793;
  v11 = __readfsqword(0x28u);
  v6 = 0;
  dest = nullptr;
  v7 = 0;
  v9 = 0;
  v10 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
  if ( a2 )
  {
    v3 = a2;
    v2 = strlen(a2) + 1;
  }
  dest = (void *)qvector_reserve();
  memset((char *)dest + v6, 0, v2 - v6);
  *(_QWORD *)&v6 = v2;
  memcpy(dest, v3, v2);
  v9 = 0;
  sub_8DBE0(a1, (__int64)&dest);
  sub_2B2530(*(_QWORD *)(a1 + 1496), *(_QWORD *)(a1 + 40), 1);
  netnode_setblob();
  sub_7D050(&dest);
  return v11 - __readfsqword(0x28u);
}

