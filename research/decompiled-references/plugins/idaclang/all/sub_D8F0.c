__int64 __fastcall sub_D8F0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 result; // rax
  __int128 v20; // [rsp+10h] [rbp-18h]

  v8 = sub_BB20();
  v9 = sub_AD40(v8);
  if ( v9 > 0 )
    *(_QWORD *)(a1 + 24) = v9;
  v10 = sub_BB20();
  v11 = sub_AAD0(v10);
  if ( v11 > 0 )
    *(_DWORD *)(a1 + 40) = v11;
  v12 = sub_BB20();
  if ( (unsigned int)sub_B2E0(v12) )
    *(_BYTE *)(a1 + 49) = log2floor(*(unsigned int *)(a1 + 40)) + 1;
  v13 = sub_BB20();
  *(_QWORD *)&v20 = a8;
  if ( (unsigned int)sub_B340(v13, a2, v14, v15, v16, v17, (__int128)_mm_loadu_si128((const __m128i *)&a7), v20) )
    *(_DWORD *)(a1 + 44) |= 0x40u;
  v18 = sub_BB20();
  result = sub_B310(v18);
  if ( result > 0 )
  {
    result = (unsigned int)log2floor(result) + 1;
    *(_BYTE *)(a1 + 50) = result;
  }
  return result;
}
