__int64 __fastcall sub_10520(_QWORD *a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  char v4; // dl
  unsigned __int64 v5; // xmm0_8
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // [rsp+1Ch] [rbp-9Ch] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-80h]
  unsigned int v17; // [rsp+3Ch] [rbp-7Ch]
  __int64 v18; // [rsp+40h] [rbp-78h] BYREF
  int v19; // [rsp+48h] [rbp-70h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-68h]
  int *v21; // [rsp+58h] [rbp-60h]
  int *v22; // [rsp+60h] [rbp-58h]
  __int64 v23; // [rsp+68h] [rbp-50h]
  unsigned __int64 v24; // [rsp+78h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a1[23] )
  {
    a1[24] = 0;
    qfree();
    a1[23] = 0;
    a1[25] = 0;
  }
  v2 = callui(1197);
  if ( (_BYTE)v2 && (int)callui(1108) > 0 && callui(1110) == 4 )
  {
    v19 = 0;
    v20 = nullptr;
    v21 = &v19;
    v22 = &v19;
    v23 = 0;
    if ( v14 == -1 )
    {
      v10 = nullptr;
    }
    else
    {
      while ( callui(1110) == 8 )
      {
        sub_10400(&v18, &v14);
        if ( !v4 )
        {
          sub_B690();
          break;
        }
        v13 = a1[24];
        v12 = a1[23];
        v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v14)).m128i_u64[0];
        v6 = a1[25];
        v15 = v5;
        v7 = v13 + 1;
        if ( (unsigned __int64)&v15 < v12 || (unsigned __int64)&v15 >= v12 + 8 * v6 )
        {
          if ( v6 < v7 )
          {
            v9 = qvector_reserve();
            a1[23] = v9;
            v12 = v9;
            v13 = a1[24];
          }
          *(_QWORD *)(v12 + 8 * v13) = v15;
        }
        else
        {
          if ( v6 < v7 )
          {
            v11 = qvector_reserve();
            a1[23] = v11;
            v12 = v11;
            v13 = a1[24];
          }
          *(_QWORD *)(v12 + 8 * v13) = v5;
        }
        v3 = v16;
        ++a1[24];
        v14 = v3;
        if ( v3 == -1 )
          break;
      }
      v10 = v20;
    }
    sub_FCD0(v10);
  }
  else
  {
    v2 = 0;
    sub_B5C0();
  }
  return v2;
}

