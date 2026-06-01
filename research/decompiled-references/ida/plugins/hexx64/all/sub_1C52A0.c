__int64 __fastcall sub_1C52A0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        double a7,
        _DWORD *a8)
{
  unsigned int v11; // r14d
  __int64 v13; // rax
  unsigned int v14; // r8d
  _DWORD *v15; // r9
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // edx
  unsigned int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // r15
  __int64 v25; // rbx
  unsigned __int64 v26; // rax
  int v27; // edx
  bool v28; // cf
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+10h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-50h] BYREF
  __int128 v35; // [rsp+28h] [rbp-48h]
  unsigned __int64 v36; // [rsp+38h] [rbp-38h]

  v36 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 5:
    case 6:
      return 0;
    case 2:
      return sub_1C1D10(a1, *(_QWORD **)(a2 + 8), a3, a4, a6, a8, 1u);
    case 3:
      v26 = *(int *)(a2 + 8);
      v27 = *(_DWORD *)(a2 + 8);
      v28 = __CFADD__(v26, a5);
      v29 = v26 + a5;
      if ( v28 )
      {
        if ( !under_debugger )
          sub_383060(0xCB2Au, a7);
LABEL_31:
        BUG();
      }
      v30 = a3 + a4;
      if ( __CFADD__(a3, a4) )
        sub_1C1F40(a7);
      if ( a3 >= v26 )
        v26 = a3;
      if ( v30 <= v29 )
        v29 = v30;
      v11 = 0;
      if ( v26 < v29 )
      {
        if ( a8 )
          *a8 = a3 - v26;
        if ( a6 )
          *a6 = v26 - v27;
        return (unsigned int)(v29 - v26);
      }
      return v11;
    case 4:
      v34 = 0;
      v32 = a5 / 2;
      v35 = 0;
      v13 = qvector_reserve((__int64)&v34, 0, 1, 24);
      v14 = v32;
      v34 = v13;
      v15 = a8;
      v16 = v13 + 24 * v35;
      *(_DWORD *)v16 = 0;
      *(_QWORD *)(v16 + 8) = 0;
      *(_WORD *)(v16 + 16) = 0;
      *(_WORD *)(v16 + 18) = v32;
      v17 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)&v35 = v35 + 1;
      if ( *(_DWORD *)a2 == 4 )
        v17 = (unsigned __int16)v17;
      *(_DWORD *)v16 = 3;
      v18 = v34;
      *(_DWORD *)(v16 + 8) = v17;
      v19 = v35;
      if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)(v35 + 1) )
      {
        v31 = qvector_reserve((__int64)&v34, v18, v35 + 1, 24);
        v19 = v35;
        v14 = v32;
        v34 = v31;
        v18 = v31;
        v15 = a8;
      }
      v20 = v18 + 24 * v19;
      *(_DWORD *)v20 = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_DWORD *)(v20 + 16) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v14), 0));
      v21 = *(unsigned __int16 *)(a2 + 10);
      *(_QWORD *)&v35 = v35 + 1;
      *(_DWORD *)(v20 + 8) = v21;
      *(_DWORD *)v20 = 3;
      v22 = sub_1C1D10(a1, &v34, a3, a4, a6, v15, 1u);
      v23 = v34;
      v11 = v22;
      if ( v34 )
      {
        v24 = v35;
        if ( (_QWORD)v35 )
        {
          v25 = 0;
          do
          {
            ++v25;
            cleanup_argloc();
            v23 = v34;
          }
          while ( v24 != v25 );
        }
        *(_QWORD *)&v35 = 0;
        qfree(v23);
      }
      return v11;
    default:
      if ( !under_debugger )
        sub_383060(0xC7A4u, a7);
      goto LABEL_31;
  }
}

