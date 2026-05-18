__int64 __fastcall sub_F0F00(__int64 a1, void **a2)
{
  int v2; // r13d
  int v4; // r14d
  int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned int v9; // edx
  __int64 result; // rax
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rax
  void *v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v2 = 0;
  v4 = *(unsigned __int8 *)(a1 + 91);
  *(_BYTE *)(a1 + 88) = 1;
  v14[1] = (void *)__readfsqword(0x28u);
  v5 = v4 - 1;
  if ( v5 <= 0 )
  {
    v7 = 0;
LABEL_8:
    if ( v5 == v2 )
      return sub_F0D30(a1 + 104LL * v5 + 96, a1 + 56);
    v11 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    v12 = *(_QWORD *)(v7 + 40);
    *(_BYTE *)(a1 + 90) = -59 * ((v7 - (a1 + 96)) >> 3);
    *(__m128i *)(v7 + 32) = v11;
    *(_QWORD *)(v7 + 48) = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 72) = 0;
    if ( v12 )
    {
      *(_QWORD *)(a1 + 64) = v12;
      *(_DWORD *)(a1 + 84) = ((__int64 (__fastcall *)(__int64))*(&xmmword_2414B0 + 1))(v12);
    }
    else if ( *(_QWORD *)(a1 + 64) )
    {
      v13 = sub_D1E10(*(int *)(a1 + 84), (__int64)a2);
      *(_QWORD *)(a1 + 64) = v13;
      if ( !v13 )
        return 7;
    }
    return sub_D3D10((__int64 *)v7, (void *(*)(void *))sub_F0EE0, (void *)v7);
  }
  else
  {
    while ( 1 )
    {
      v6 = (v2 + *(unsigned __int8 *)(a1 + 90) + 1) % v5;
      v7 = a1 + 104 * v6 + 96;
      if ( *(_DWORD *)(a1 + 104 * v6 + 104) )
      {
        v8 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 )
        {
          a2 = v14;
          v14[0] = &dword_0 + 1;
          sub_D63C0(v8, v14);
          v9 = (unsigned int)v14[0];
          *(_DWORD *)(a1 + 104 * v6 + 104) = 0;
          *(_QWORD *)v7 = 0;
          result = v9;
          if ( v9 )
            break;
        }
      }
      if ( *(_QWORD *)(a1 + 104 * v6 + 96) )
      {
        if ( ++v2 != v5 )
          continue;
      }
      goto LABEL_8;
    }
  }
  return result;
}
