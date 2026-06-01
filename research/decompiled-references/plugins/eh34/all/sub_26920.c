__int64 __fastcall sub_26920(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __m128i v10; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v3 = *(_DWORD *)(a2 + 80);
  v11 = __readfsqword(0x28u);
  v4 = v3 - 2;
  if ( a3 < -1 || a3 > v4 )
  {
    sub_19A90((__int64)&v9, (__int64)"encode_state(%d): invalid state (max %d)", a3, v4);
    v7 = v9;
    v8 = _mm_loadu_si128(&v10);
    *(_BYTE *)(a1 + 24) = 1;
    *(_QWORD *)a1 = v7;
    *(__m128i *)(a1 + 8) = v8;
  }
  else
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a2 + 72) + 4LL * (a3 + 1));
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)a1 = v5 - (v5 != -2);
  }
  return a1;
}
