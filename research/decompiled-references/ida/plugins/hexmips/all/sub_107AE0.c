unsigned __int64 __fastcall sub_107AE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  __m128i *v8; // rdi
  __int64 v10; // rax
  __m128i *v11; // rdi
  int v12; // [rsp+0h] [rbp-68h] BYREF
  const __m128i **v13; // [rsp+8h] [rbp-60h] BYREF
  __int64 v14; // [rsp+10h] [rbp-58h] BYREF
  char v15; // [rsp+18h] [rbp-50h]
  const __m128i *v16; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+28h] [rbp-40h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 5 )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v15 = 0;
    v8 = *(__m128i **)(a1 + 48);
    v10 = *(_QWORD *)(v5 + 8);
    v16 = (const __m128i *)&v14;
    v15 = 5;
    v14 = v10;
    sub_106EE0(v8, (__int64)&v14, &v16);
    if ( (unsigned __int8)sub_11BB80(a3, &v12, 0) )
    {
      v11 = *(__m128i **)(a1 + 48);
      v13 = &v16;
      v17 = v15;
      v16 = (const __m128i *)(v14 + v12 * a4);
      sub_1078A0(v11, (__int64)&v16, (const __m128i **)&v13);
    }
  }
  return v18 - __readfsqword(0x28u);
}

