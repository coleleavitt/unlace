unsigned __int64 __fastcall sub_1B1670(int *a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rax
  __m128 v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h]
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a1 )
  {
    v13 = 0;
    v12 = _mm_loadh_ps((const double *)(get_module_data() + 1344));
    sub_1B0090(a1, (__int64)a2, (__int64)&v12, a3);
  }
  else
  {
    v6 = a2[1];
    if ( v6 )
    {
      v7 = v6 + 5;
      v8 = v6 + 6;
      --v6;
    }
    else
    {
      v8 = 7;
      v7 = 6;
    }
    v9 = *a2;
    if ( a2[2] < v8 )
    {
      v11 = qvector_reserve();
      *a2 = v11;
      v9 = v11;
    }
    a2[1] = v8;
    *(_BYTE *)(v9 + v7) = 0;
    v10 = *a2 + v6;
    *(_DWORD *)v10 = 1819635240;
    *(_WORD *)(v10 + 4) = 10604;
  }
  return v14 - __readfsqword(0x28u);
}

