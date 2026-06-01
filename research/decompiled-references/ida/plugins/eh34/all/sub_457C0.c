__int64 __fastcall sub_457C0(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64, _QWORD); // rax
  __int64 v9; // rsi
  char v10; // r13
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD); // rax
  char v12; // al
  __int64 v13; // rsi
  int v14; // ecx
  const char *v15; // rdx
  __m128i v16; // xmm0
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  __m128i v19; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  if ( a3 < 0 )
  {
    v13 = *(_QWORD *)(a2 + 8);
    v14 = a3;
    v15 = "is_wind_state: state %d < 0";
    goto LABEL_7;
  }
  hexdsp = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, a2);
  v9 = a2 + 272;
  v10 = hexdsp(213, v9, (unsigned int)a3);
  v11 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(213, v9);
  v12 = v11(213, a2 + 288, (unsigned int)a3);
  if ( v12 )
  {
    if ( !v10 )
      goto LABEL_4;
    v13 = *(_QWORD *)(a2 + 8);
    v14 = a3;
    v15 = "is_wind_state: state %d is of both types";
LABEL_7:
    sub_64B50((unsigned int)&v18, v13, (_DWORD)v15, v14, a5, a6);
    *(_QWORD *)a1 = v18;
    v16 = _mm_loadu_si128(&v19);
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = v16;
    return a1;
  }
  if ( v10 )
  {
    *(_BYTE *)a1 = 1;
    *(_BYTE *)(a1 + 24) = 0;
    return a1;
  }
LABEL_4:
  if ( !v12 )
  {
    v13 = *(_QWORD *)(a2 + 8);
    v14 = a3;
    v15 = "is_wind_state: state %d is of neither type";
    goto LABEL_7;
  }
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 24) = 0;
  return a1;
}

