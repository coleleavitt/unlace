__int64 __fastcall sub_681F0(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i si128; // xmm1
  int v12; // edx
  __int64 v13; // rbx
  __int64 *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int8 v19; // [rsp+17h] [rbp-61h]
  int v20; // [rsp+24h] [rbp-54h] BYREF
  __int16 v21; // [rsp+2Ah] [rbp-4Eh] BYREF
  unsigned int v22; // [rsp+2Ch] [rbp-4Ch]
  __int64 v23[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *a3;
  v23[1] = __readfsqword(0x28u);
  v19 = (*(__int64 (__fastcall **)(__int64, __int16 *, __int64))(*(_QWORD *)v5 + 48LL))(v5, &v21, 6);
  if ( !v19 )
    return 0;
  if ( v21 != 4609 )
  {
    if ( !under_debugger )
      interr(30560);
    BUG();
  }
  v7 = 0;
  if ( v22 )
  {
    while ( (*(unsigned __int8 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*a3 + 48LL))(*a3, &v20, 4) )
    {
      v9 = a1[1] - *a1;
      v10 = operator new(0x60u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_94160);
      *(_WORD *)(v10 + 84) = -1;
      v12 = v20;
      v13 = v9 >> 3;
      *(_QWORD *)(v10 + 56) = 0xFFFFFFFFLL;
      *(_DWORD *)(v10 + 88) = v12;
      v14 = (__int64 *)a1[1];
      *(_DWORD *)(v10 + 16) = v13;
      *(_DWORD *)(v10 + 20) = 20;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000001LL;
      *(_DWORD *)(v10 + 80) = -1;
      *(_QWORD *)v10 = off_B07A0;
      *(_QWORD *)(v10 + 8) = a1;
      *(_OWORD *)(v10 + 32) = 0;
      *(__m128i *)(v10 + 64) = si128;
      if ( v14 == (__int64 *)a1[2] )
      {
        v23[0] = v10;
        sub_57F80((__int64)a1, v23);
        if ( v23[0] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23[0] + 272LL))(v23[0]);
      }
      else
      {
        *v14 = v10;
        a1[1] += 8LL;
      }
      v15 = a2[1];
      v16 = *a2;
      if ( a2[2] < (unsigned __int64)(v15 + 1) )
      {
        v17 = qvector_reserve(a2, v16, v15 + 1, 4);
        *a2 = v17;
        v16 = v17;
        v15 = a2[1];
      }
      *(_DWORD *)(v16 + 4 * v15) = v13;
      v8 = v22;
      ++v7;
      ++a2[1];
      if ( v7 >= v8 )
        return v19;
    }
    return 0;
  }
  return v19;
}

