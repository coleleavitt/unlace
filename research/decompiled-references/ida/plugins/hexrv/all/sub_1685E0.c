__int64 __fastcall sub_1685E0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // r14d
  int v14; // ebp
  signed int v15; // r14d
  __int64 v16; // r13
  unsigned int v17; // edx
  __int64 v18; // rax
  int v19; // eax
  size_t n; // [rsp+10h] [rbp-118h]
  _QWORD *v22; // [rsp+18h] [rbp-110h]
  unsigned __int8 v23[16]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v24[2]; // [rsp+30h] [rbp-F8h] BYREF
  void *src; // [rsp+40h] [rbp-E8h]
  __int128 v26; // [rsp+48h] [rbp-E0h]
  __int64 v27[2]; // [rsp+60h] [rbp-C8h] BYREF
  void *v28; // [rsp+70h] [rbp-B8h]
  __int128 v29; // [rsp+78h] [rbp-B0h]
  _QWORD v30[3]; // [rsp+90h] [rbp-98h] BYREF
  char v31; // [rsp+A8h] [rbp-80h]
  __int64 v32; // [rsp+B0h] [rbp-78h]
  char v33; // [rsp+B8h] [rbp-70h]
  __int64 v34; // [rsp+C0h] [rbp-68h]
  __int64 v35; // [rsp+C8h] [rbp-60h]
  __int128 v36; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v37; // [rsp+E8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  if ( a4 == a5 )
    return 0;
  v24[0] = 0;
  v24[1] = 0;
  src = nullptr;
  v26 = 0;
  sub_123B20(a1, v24, a2, 0);
  sub_5FC80(v27, (__int64)v24);
  v7 = v26;
  v28 = nullptr;
  v29 = 0;
  if ( (_QWORD)v26 )
  {
    n = 16 * v26;
    v28 = (void *)qalloc_or_throw();
    *((_QWORD *)&v29 + 1) = v7;
    memcpy(v28, src, n);
    *(_QWORD *)&v29 = v7;
  }
  v8 = sub_A58D0(a1, v27, a4, a5, 1u);
  if ( !v8 )
  {
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree();
    }
    qfree();
    if ( src )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
    qfree();
    return 0;
  }
  n = v8;
  v12 = -1;
  if ( !(unsigned __int8)sub_11C0E0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), 0, v9, v10, v11) )
  {
    v30[0] = off_4B07F8;
    v31 = 0;
    v30[1] = 0;
    v30[2] = 0;
    v32 = 0;
    v33 = 0;
    v34 = a2;
    v35 = 0;
    v22 = v30;
    v36 = 0;
    v14 = sub_125790((_QWORD *)a1, v24, n, a5, (__int64)v30);
    if ( v14 || (v15 = *(_DWORD *)(a2 + 4), LODWORD(n) = sub_133C80(*(_QWORD **)(a1 + 64), v15, 1), (_DWORD)n == -1) )
    {
      v12 = -1;
    }
    else
    {
      v16 = j__qalloc_or_throw();
      v17 = n;
      *(_OWORD *)(v16 + 8) = 0;
      *(_QWORD *)(v16 + 40) = 0;
      *(_QWORD *)(v16 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 56) = 0;
      *(_QWORD *)(v16 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v16 + 72) = 0;
      n = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v17)).m128i_u64[0];
      sub_120EE0(v16, (__int64)a3);
      *(_DWORD *)v23 = 1;
      *(_QWORD *)&v23[4] = n;
      sub_120CC0(v16 + 64, v23);
      sub_1188E0((__int64)v23);
      sub_9ECA0(a1, (_QWORD *)v16, *(_QWORD *)(a4 + 16));
      if ( !(_QWORD)v36 )
      {
        if ( !under_debugger )
          sub_37DDE0(50302);
        BUG();
      }
      v18 = 0;
      do
      {
        sub_120CC0(*(_QWORD *)(v35 + 8 * v18), (unsigned __int8 *)(v16 + 64));
        v18 = ++v14;
      }
      while ( v14 < (unsigned __int64)v36 );
      v19 = *(_DWORD *)(a1 + 24);
      v12 = v36;
      BYTE1(v19) &= ~2u;
      LOBYTE(v19) = v19 | 0x80;
      *(_DWORD *)(a1 + 24) = v19;
    }
    v30[0] = off_4B07F8;
    if ( v35 )
    {
      *(_QWORD *)&v36 = 0;
      qfree();
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree();
  }
  qfree();
  if ( src )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  qfree();
  return v12;
}

