__int64 __fastcall sub_BB80(int a1)
{
  int *v1; // rdx
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // r8
  int v5; // [rsp+0h] [rbp-78h] BYREF
  __m128i si128; // [rsp+4h] [rbp-74h]
  __m128i v7; // [rsp+14h] [rbp-64h]
  __m128i v8; // [rsp+24h] [rbp-54h]
  __m128i v9; // [rsp+34h] [rbp-44h]
  __m128i v10; // [rsp+44h] [rbp-34h]
  __int64 v11; // [rsp+54h] [rbp-24h]
  int v12; // [rsp+5Ch] [rbp-1Ch]
  char v13; // [rsp+60h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v5 = 0;
  v1 = &v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23B60);
  v12 = 24;
  v7 = _mm_load_si128((const __m128i *)&xmmword_23B70);
  v11 = 0x1F00000019LL;
  result = 0;
  v8 = _mm_load_si128((const __m128i *)&xmmword_23B80);
  v9 = _mm_load_si128((const __m128i *)&xmmword_23B90);
  v10 = _mm_load_si128((const __m128i *)&xmmword_23BA0);
  do
  {
    if ( (a1 & (1 << *v1)) != 0 )
    {
      v3 = v1[1];
      v4 = result;
      result |= 1LL << v3;
      if ( v3 >= 0x20 )
        result = v4;
    }
    v1 += 2;
  }
  while ( &v13 != (char *)v1 );
  return result;
}

