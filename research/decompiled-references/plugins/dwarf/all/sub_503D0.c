__int64 __fastcall sub_503D0(__int64 a1, const char *a2, const __m128i *a3, __int64 a4)
{
  __int64 *v6; // rdi
  unsigned int v7; // ebx
  size_t *v8; // rsi
  __int64 v9; // rdi
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v6 = *(__int64 **)(a1 + 16);
  v14 = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  v7 = sub_4F650(v6, a4, a3, (__int64)&v12);
  if ( (_BYTE)v7 )
  {
    v8 = *(size_t **)(a1 + 16);
    v9 = *(_QWORD *)(a1 + 24);
    v11 = (__m128i)0x8000000000000000LL;
    sub_2FD40(v9, (__int64)(v8 + 3), *v8, nullptr, a2, &v11, &v12, 0, 0, 0);
  }
  return v7;
}
