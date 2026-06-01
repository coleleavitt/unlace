__int64 __fastcall sub_1071F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __m128i *v12; // rdi
  char v13; // cl
  __int64 v14; // rax
  int v15; // ebp
  const __m128i *v16; // [rsp+8h] [rbp-50h] BYREF
  __m128i v17; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v18[3] = __readfsqword(0x28u);
  v17 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  if ( (unsigned __int8)sub_1BE390(a2, &v17, (unsigned int)a4, a4, a5) )
  {
    v7 = *(_BYTE *)(a1 + 40);
    if ( v7 )
    {
      v8 = v17.m128i_u8[8];
      v9 = *(int *)(a1 + 44);
      v10 = *(_QWORD *)(a1 + 32);
      if ( v7 >= (unsigned int)v17.m128i_i8[8] && (unsigned int)v17.m128i_i8[8] >= v7 )
      {
        v8 = v10 + (int)v9;
        if ( v8 >= v17.m128i_i64[0] && v8 <= v17.m128i_i64[0] )
        {
          *(_DWORD *)(a1 + 44) = v17.m128i_i32[3] + v9;
          return 0;
        }
      }
      v15 = *(_DWORD *)(a1 + 48);
      if ( v7 == 1 )
        goto LABEL_9;
      if ( v7 != 5 )
        sub_FD170(a2, v10, v9, v8);
      if ( (unsigned __int8)sub_FDB00(*(_QWORD **)(a1 + 8), v10, v9) )
      {
LABEL_9:
        if ( (v15 & 2) != 0 )
        {
LABEL_10:
          v12 = *(__m128i **)(a1 + 24);
          if ( v12 )
          {
            v13 = *(_BYTE *)(a1 + 40);
            v14 = *(_QWORD *)(a1 + 32);
            v16 = (const __m128i *)v18;
            v18[0] = v14;
            v18[1] = v13;
            sub_106EE0(v12, (__int64)v18, &v16);
          }
          sub_106A80(*(__m128i **)(a1 + 16), *(_QWORD **)(a1 + 8), a1 + 32, *(_DWORD *)(a1 + 48));
        }
      }
      else if ( (v15 & 4) != 0 )
      {
        goto LABEL_10;
      }
    }
    *(__m128i *)(a1 + 32) = _mm_load_si128(&v17);
  }
  return 0;
}

