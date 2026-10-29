__int64 __fastcall sub_2E610(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // eax
  int v7; // ecx
  __int64 v8; // r12
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  char v10; // al
  __m128i v11; // xmm0
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  __m128i v14; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 80);
  v15 = __readfsqword(0x28u);
  v7 = v5 - 2;
  if ( a3 < -1 || a3 > v7 )
    goto LABEL_6;
  if ( a4 < -1 || a4 > v7 )
  {
    a3 = a4;
LABEL_6:
    sub_19A90((__int64)&v13, (__int64)"encode_state(%d): invalid state (max %d)", a3, v7);
    *(_QWORD *)a1 = v13;
    v11 = _mm_loadu_si128(&v14);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v11;
    return a1;
  }
  v8 = *(_QWORD *)(a2 + 24);
  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v10 = hexdsp(213, v8 + 16LL * (v4 + 1), (unsigned int)(a4 + 1));
  *(_BYTE *)(a1 + 24) = 0;
  *(_BYTE *)a1 = v10 != 0;
  return a1;
}

