__int64 __fastcall sub_A31C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v5; // eax
  unsigned __int64 v6; // xmm0_8
  int v7; // eax
  __int64 result; // rax
  _DWORD v9[6]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v3 = a2 + 64;
  v10 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_11EA20(a3 + 32, a2 + 64, 2) || (result = sub_11EA20(a3 + 48, v3, 2), (_BYTE)result) )
  {
    v5 = sub_137B80(*(_QWORD *)(a1 + 64), *(int *)(a2 + 68), 1);
    if ( v5 == -1 )
    {
      if ( !under_debugger )
        sub_3835A0(51267);
      BUG();
    }
    v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a2 + 68)), _mm_cvtsi32_si128(v5)).m128i_u64[0];
    v9[0] = 1;
    *(_QWORD *)&v9[1] = v6;
    sub_A2C80(a1, a3, 4, (__int64)v9, 0, v3);
    sub_11C450(v3, v9);
    v7 = *(_DWORD *)(a1 + 24);
    BYTE1(v7) &= ~2u;
    LOBYTE(v7) = v7 | 0x80;
    *(_DWORD *)(a1 + 24) = v7;
    sub_11C7E0(v9);
    return 1;
  }
  return result;
}

