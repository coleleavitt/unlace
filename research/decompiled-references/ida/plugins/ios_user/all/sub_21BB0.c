__int64 __fastcall sub_21BB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 *v12; // [rsp+0h] [rbp-60h]
  __int64 v13; // [rsp+8h] [rbp-58h]

  v2 = a2[9];
  v3 = 0x8E38E38E38E38E39LL * (((__int64)(a2[6] - a2[7]) >> 3) + ((__int64)(a2[4] - a2[2]) >> 3));
  v4 = v2 - a2[5];
  *(_OWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = 0;
  v5 = (v2 == 0) + (v4 >> 3) - 1;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  sub_219F0((__m128i *)a1, v3 + 8 * v5 - v5);
  result = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = a2[6];
  v9 = a2[2];
  v10 = a2[4];
  v11 = result;
  v13 = a2[5];
  v12 = *(__int64 **)(a1 + 40);
  while ( v9 != v8 )
  {
    while ( 1 )
    {
      *(_BYTE *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 8) = -1;
      *(_QWORD *)v11 = 0xFFFFFFFFLL;
      *(_DWORD *)(v11 + 20) = 0;
      result = copy_debug_event();
      v9 += 72;
      if ( v9 == v10 )
      {
        v9 = *(_QWORD *)(v13 + 8);
        result = v13 + 8;
        v13 += 8;
        v10 = v9 + 504;
      }
      v11 += 72;
      if ( v7 != v11 )
        break;
      result = (__int64)++v12;
      v11 = *v12;
      v7 = *v12 + 504;
      if ( v9 == v8 )
        return result;
    }
  }
  return result;
}

