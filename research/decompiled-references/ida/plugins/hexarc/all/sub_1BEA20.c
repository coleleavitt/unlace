__int64 __fastcall sub_1BEA20(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, int a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v10; // r14d
  __int64 v12; // rax
  unsigned int v13; // r8d
  _DWORD *v14; // r9
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // r15
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  int v23; // edx
  bool v24; // cf
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // [rsp+10h] [rbp-60h]
  __int64 v30; // [rsp+20h] [rbp-50h] BYREF
  __int128 v31; // [rsp+28h] [rbp-48h]
  unsigned __int64 v32; // [rsp+38h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 5:
    case 6:
      return 0;
    case 2:
      return sub_1BB490(a1, *(_QWORD **)(a2 + 8), a3, a4, a6, a7, 1u);
    case 3:
      v22 = *(int *)(a2 + 8);
      v23 = *(_DWORD *)(a2 + 8);
      v24 = __CFADD__(v22, a5);
      v25 = v22 + a5;
      if ( v24 )
      {
        if ( !under_debugger )
          sub_37B760(52010);
LABEL_31:
        BUG();
      }
      v26 = a3 + a4;
      if ( __CFADD__(a3, a4) )
        sub_1BB6C0(a1, a2, v22, v26, v25, a7);
      if ( a3 >= v22 )
        v22 = a3;
      if ( v26 <= v25 )
        v25 = v26;
      v10 = 0;
      if ( v22 < v25 )
      {
        if ( a7 )
          *a7 = a3 - v22;
        if ( a6 )
          *a6 = v22 - v23;
        return (unsigned int)(v25 - v22);
      }
      return v10;
    case 4:
      v28 = a5 / 2;
      v31 = 0;
      v12 = qvector_reserve();
      v13 = v28;
      v30 = v12;
      v14 = a7;
      *(_DWORD *)v12 = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_WORD *)(v12 + 16) = 0;
      *(_WORD *)(v12 + 18) = v28;
      v15 = *(_DWORD *)(a2 + 8);
      *(_QWORD *)&v31 = v31 + 1;
      if ( *(_DWORD *)a2 == 4 )
        v15 = (unsigned __int16)v15;
      *(_DWORD *)v12 = 3;
      v16 = v30;
      *(_DWORD *)(v12 + 8) = v15;
      v17 = v31;
      if ( *((_QWORD *)&v31 + 1) < (unsigned __int64)(v31 + 1) )
      {
        v27 = qvector_reserve();
        v17 = v31;
        v13 = v28;
        v30 = v27;
        v16 = v27;
        v14 = a7;
      }
      v18 = v16 + 24 * v17;
      *(_DWORD *)v18 = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_DWORD *)(v18 + 16) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(v13), 0));
      v19 = *(unsigned __int16 *)(a2 + 10);
      *(_QWORD *)&v31 = v31 + 1;
      *(_DWORD *)(v18 + 8) = v19;
      *(_DWORD *)v18 = 3;
      v10 = sub_1BB490(a1, &v30, a3, a4, a6, v14, 1u);
      if ( v30 )
      {
        v20 = v31;
        if ( (_QWORD)v31 )
        {
          v21 = 0;
          do
          {
            ++v21;
            cleanup_argloc();
          }
          while ( v20 != v21 );
        }
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      return v10;
    default:
      if ( !under_debugger )
        sub_37B760(51108);
      goto LABEL_31;
  }
}

