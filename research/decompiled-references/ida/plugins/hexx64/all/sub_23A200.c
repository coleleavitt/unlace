unsigned __int64 __fastcall sub_23A200(__int64 a1, int a2, char a3, __m128i a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rbx
  char v13; // cl
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // r12
  __int64 v17; // rsi
  int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  char v24; // bl
  unsigned __int64 v25; // rdx
  __int64 tinfo_size; // rax
  __int64 v27; // rsi
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rsi
  unsigned __int64 v31; // rcx
  __m128i v32; // xmm0
  double v33; // xmm0_8
  _QWORD *v34; // rbx
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  bool v37; // bp
  __int64 v38; // rax
  __int64 v39; // rcx
  _DWORD *v40; // rsi
  int v41; // eax
  _QWORD *v42; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v43; // [rsp+8h] [rbp-30h]

  v43 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 112);
  if ( v5 != *(_QWORD **)(a1 + 120) )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (v5[10] & 1) != 0 )
      {
        v42 = v5;
        sub_239880(a1, (__int64)&v42, a2, a3, a4);
      }
      if ( (*v5 & 2) != 0 )
        goto LABEL_7;
      v6 = (_QWORD *)v5[2];
      if ( (*(_BYTE *)v6 & 2) != 0 )
      {
        v9 = (_QWORD *)(*v5 & 0xFFFFFFFFFFFFFFFCLL);
        v10 = *v9;
        if ( (*v9 & 2) == 0 )
        {
          while ( (_QWORD *)v9[2] == v5 )
          {
            v5 = v9;
            v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
            v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v10 & 2) != 0 )
            {
              v5 = (_QWORD *)v11;
              if ( *(_QWORD *)(a1 + 120) != v11 )
                goto LABEL_2;
              goto LABEL_8;
            }
            v9 = (_QWORD *)v11;
          }
        }
        v5 = v9;
        if ( *(_QWORD **)(a1 + 120) == v9 )
          break;
      }
      else
      {
        do
        {
          v5 = v6;
          v6 = (_QWORD *)v6[1];
        }
        while ( (*(_BYTE *)v6 & 2) == 0 );
LABEL_7:
        if ( *(_QWORD **)(a1 + 120) == v5 )
          break;
      }
    }
  }
LABEL_8:
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 176) >= *(_QWORD *)(v7 + 144) )
  {
    v12 = *(_QWORD *)(v7 + 432) + 104LL * a2;
    v13 = sub_22CC20(a1, v12);
    v14 = *(_DWORD *)(a1 + 200);
    if ( v13 )
    {
      if ( (v14 & 0x1000) == 0 )
      {
        v15 = 1;
        v16 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 944LL);
        v17 = *v16;
        if ( *(int *)(v12 + 88) > 0 )
          v15 = *(int *)(v12 + 88);
        v18 = *(_DWORD *)(*(_QWORD *)(*v16 + 1504LL) + 80LL);
        v19 = (v18 - 1 + *(_QWORD *)(a1 + 176) + v15) & -v18;
        v20 = v16[3];
        if ( v20 < v19 )
          v20 = v19;
        v16[3] = v20;
        v21 = v16[1];
        if ( v21 < v19 && !*(_BYTE *)(v17 + 320) )
        {
          v22 = v16[2];
          v23 = v19 & -*(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL);
          v24 = v21 != v23;
          if ( v19 < v21 + v22 )
          {
            v25 = v21 + v22 + v23 - v19;
          }
          else
          {
            v24 |= v22 != 0;
            v25 = v19 & -*(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL);
          }
          v16[1] = v23;
          v16[2] = v25 - v19;
          tinfo_size = get_tinfo_size();
          v27 = v16[2];
          if ( tinfo_size != v27 )
          {
            clear_tinfo_t();
            v27 = v16[2];
          }
          v28 = (_DWORD *)*v16;
          v29 = *(_DWORD *)(*(_QWORD *)(*v16 + 1504LL) + 80LL);
          v16[3] = (v27 + v16[1] + v29 - 1) & -v29;
          if ( v24 )
            *v28 |= 0x8000000u;
        }
      }
    }
    else if ( (v14 & 0x1000) != 0 )
    {
      v30 = *(_QWORD *)(a1 + 8);
      v31 = *(_QWORD *)(a1 + 176);
      v32 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v30 + 944) + 8LL));
      *(_QWORD *)&v33 = _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0];
      if ( v31 < *(_QWORD *)&v33 )
      {
        BYTE1(v14) &= ~0x10u;
        *(_DWORD *)(a1 + 200) = v14;
        v34 = *(_QWORD **)(v30 + 944);
        v35 = v34[1];
        if ( v35 == -1 || v31 < v35 )
        {
          if ( !under_debugger )
            sub_383060(0xCE8Du, v33);
          BUG();
        }
        v36 = v35 & -*(_DWORD *)(*(_QWORD *)(*v34 + 1504LL) + 80LL);
        v34[1] = v36;
        if ( v35 >= v31 )
        {
          v37 = 1;
          if ( v35 == v36 )
            v37 = v34[2] != 0;
        }
        else
        {
          v37 = v35 != v36;
          v36 += v31 - v35;
        }
        v34[2] = v36 - v35;
        v38 = get_tinfo_size();
        v39 = v34[2];
        if ( v38 != v39 )
        {
          clear_tinfo_t();
          v39 = v34[2];
        }
        v40 = (_DWORD *)*v34;
        v41 = *(_DWORD *)(*(_QWORD *)(*v34 + 1504LL) + 80LL);
        v34[3] = (v39 + v34[1] + v41 - 1) & -v41;
        if ( v37 )
          *v40 |= 0x8000000u;
      }
    }
  }
  return v43 - __readfsqword(0x28u);
}

