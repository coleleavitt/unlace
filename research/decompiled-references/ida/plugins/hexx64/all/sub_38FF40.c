__int64 __fastcall sub_38FF40(__int64 a1, char a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx
  int v4; // ecx
  int v6; // edx
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // ecx
  _QWORD *v10; // rax
  int v11; // ebx
  double v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+8h] [rbp-40h]
  __m128i v21; // [rsp+10h] [rbp-38h]
  unsigned __int64 v22; // [rsp+28h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  sub_38B490(a1, 0);
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( *(_DWORD *)(v2 + 152) > *(_DWORD *)(a1 + 44) )
  {
    v4 = *(_DWORD *)(a1 + 56);
    if ( v4 == 2 || !v4 && !*(_DWORD *)(a1 + 80) )
    {
      v6 = *(_DWORD *)(v2 + 108);
      if ( a2 )
      {
        *(_DWORD *)(v2 + 108) = v6 | 4;
        sub_258210(*(_QWORD *)(a1 + 32));
        sub_38F620(a1, 1);
        v8 = *(_QWORD *)(a1 + 32);
        v9 = *(_DWORD *)(v8 + 152);
        if ( v9 > 0 )
        {
          v10 = *(_QWORD **)(v8 + 128);
          v11 = 0;
          while ( !v10[1] || *(_BYTE *)*v10 != 32 || *(_BYTE *)(*v10 + 1LL) != 32 )
          {
            ++v11;
            v10 += 4;
            if ( v11 == v9 )
              return 1;
          }
          if ( *(_DWORD *)(a1 + 44) != v11 )
          {
            v12 = callui(56, *(_QWORD *)(a1 + 8), 0, 0, 0, v7, v19, v20, v21.m128i_i64[0], v21.m128i_i64[1]);
            v14 = (*(__int64 (__fastcall **)(__int64, double))(*(_QWORD *)v13 + 128LL))(v13, v12);
            HIDWORD(v20) = v11;
            v19 = off_4E6538;
            v15 = *(_QWORD *)(a1 + 8);
            v16 = *(unsigned int *)(a1 + 48);
            v17 = *(unsigned int *)(a1 + 52);
            LODWORD(v20) = 0;
            v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
            ((void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)(), __int64, __int64, __int64))callui)(
              69,
              v15,
              &v19,
              v16,
              v17,
              v18);
          }
        }
      }
      else
      {
        *(_DWORD *)(v2 + 108) = v6 & 0xFFFFFFFB;
        sub_258210(*(_QWORD *)(a1 + 32));
        sub_38F620(a1, 1);
      }
      return 1;
    }
  }
  return v3;
}

