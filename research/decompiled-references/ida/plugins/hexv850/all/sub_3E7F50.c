__int64 __fastcall sub_3E7F50(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 result; // rax
  unsigned int v19; // [rsp+Ch] [rbp-3Ch] BYREF
  _QWORD v20[7]; // [rsp+10h] [rbp-38h] BYREF

  v10 = *(_QWORD *)(a1 + 8);
  v20[3] = __readfsqword(0x28u);
  v20[0] = off_4BD358;
  v11 = *(_QWORD *)(v10 + 920);
  v20[1] = v11 + 64;
  v12 = (unsigned int)sub_1CA740((__int64)v20, &v19, v10, a2);
  result = v19;
  if ( (_BYTE)v12 )
  {
    sub_3E7D60(v11, *(_QWORD **)(a1 + 8), a3, a4, a5, a6, v16, v17, a9, a10, v12, v13, v14, v15);
    return 0;
  }
  return result;
}

