__int64 __fastcall sub_10BDB0(__int64 a1, __int64 a2, __int64 a3, int a4, double a5)
{
  unsigned __int8 v6; // al
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  __m128i *v11; // rdi
  char v12; // cl
  __int64 v13; // rax
  int v14; // ebp
  const __m128i *v15; // [rsp+8h] [rbp-50h] BYREF
  __m128i v16; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v17[3] = __readfsqword(0x28u);
  v16 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  if ( (unsigned __int8)sub_1C3110(a2, (__int64)&v16, a4) )
  {
    v6 = *(_BYTE *)(a1 + 40);
    if ( v6 )
    {
      v7 = *(int *)(a1 + 44);
      v8 = *(_QWORD *)(a1 + 32);
      if ( v6 >= (unsigned int)v16.m128i_i8[8] && (unsigned int)v16.m128i_i8[8] >= v6 )
      {
        v9 = v8 + (int)v7;
        if ( v9 >= v16.m128i_i64[0] && v9 <= v16.m128i_i64[0] )
        {
          *(_DWORD *)(a1 + 44) = v16.m128i_i32[3] + v7;
          return 0;
        }
      }
      v14 = *(_DWORD *)(a1 + 48);
      if ( v6 == 1 )
        goto LABEL_9;
      if ( v6 != 5 )
        sub_101D30(a5);
      if ( (unsigned __int8)sub_1026C0(*(_QWORD **)(a1 + 8), v8, v7) )
      {
LABEL_9:
        if ( (v14 & 2) != 0 )
        {
LABEL_10:
          v11 = *(__m128i **)(a1 + 24);
          if ( v11 )
          {
            v12 = *(_BYTE *)(a1 + 40);
            v13 = *(_QWORD *)(a1 + 32);
            v15 = (const __m128i *)v17;
            v17[0] = v13;
            v17[1] = v12;
            sub_10BAA0(v11, (__int64)v17, &v15);
          }
          sub_10B640(*(__m128i **)(a1 + 16), *(_QWORD **)(a1 + 8), a1 + 32, *(_DWORD *)(a1 + 48), a5);
        }
      }
      else if ( (v14 & 4) != 0 )
      {
        goto LABEL_10;
      }
    }
    *(__m128i *)(a1 + 32) = _mm_load_si128(&v16);
  }
  return 0;
}

