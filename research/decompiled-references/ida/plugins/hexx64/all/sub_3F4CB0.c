__int64 __fastcall sub_3F4CB0(__int64 a1, _QWORD *a2, double a3, __m128 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  double *v6; // r12
  double *v7; // rbx
  __m128d v8; // xmm1
  int v10; // eax
  int v11; // ebx
  int v12; // r15d
  int v13; // r12d
  double v14; // xmm0_8
  _QWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rdx
  double v22; // xmm0_8
  unsigned __int64 v23; // rbx
  int aflags; // r12d
  double v25; // [rsp+0h] [rbp-68h]
  int v26; // [rsp+0h] [rbp-68h]
  int v27; // [rsp+0h] [rbp-68h]
  __int64 v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+14h] [rbp-54h]
  __int64 v30; // [rsp+18h] [rbp-50h]
  int v31; // [rsp+20h] [rbp-48h]

  v4 = Clp_primalColumnSolution();
  v5 = *(int *)(a1 + 160);
  if ( (int)v5 <= 0 )
  {
LABEL_6:
    v10 = *(_DWORD *)(a1 + 156);
    v11 = 2 * v10;
    if ( v10 <= 0 )
      return 1;
    v30 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( !sub_64930(a2, v30) )
        goto LABEL_8;
      v14 = floor(*(double *)(v4 + 8 * v30) + 0.5);
      v15 = *(_QWORD **)(a1 + 120);
      v16 = (unsigned int)(int)v14;
      if ( (unsigned __int64)v12 >= v15[1] )
      {
        if ( !under_debugger )
          sub_383060(0xC54Cu, v14);
        goto LABEL_42;
      }
      v17 = *v15 + 16LL * v12;
      if ( *(_QWORD *)(v17 + 8) )
      {
        if ( !under_debugger )
          sub_383060(0xC54Du, v14);
        goto LABEL_42;
      }
      *(_QWORD *)(v17 + 8) = v16;
      ++v12;
      v26 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4 * v30);
      if ( v12 < v26 )
      {
        v18 = 16LL * v12;
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = v18 + **(_QWORD **)(a1 + 120);
            v21 = *(_QWORD *)(v20 + 8);
            if ( !v21 )
              break;
            ++v12;
            v18 += 16;
            v16 = v21 + (int)v16;
            *(_QWORD *)(v20 + 8) = v16;
            if ( v26 <= v12 )
              goto LABEL_22;
          }
          if ( v11 + 1 >= *(_DWORD *)(a1 + 160) )
            break;
          v29 = v16;
          v31 = v11 + 2;
          v28 = (unsigned int)(int)floor(*(double *)(v4 + 8LL * v11) + 0.5);
          v14 = floor(*(double *)(v4 + 8LL * (v11 + 1)) + 0.5);
          v19 = (unsigned int)(int)v14;
          if ( v29 != v28 )
          {
            if ( !under_debugger )
              sub_383060(0xC54Fu, v14);
            goto LABEL_42;
          }
          *(_QWORD *)(v20 + 8) = v19;
          LODWORD(v16) = (int)v14;
          if ( v19 == 1 )
          {
            v23 = sub_3F4BE0(a1, v11);
            if ( v23 != -1 )
            {
              aflags = get_aflags();
              if ( (aflags & 0x4000000) == 0 )
              {
                set_abits();
                sub_375220(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1496LL), v23, 0xFFFFFFFFFFFFFFFFLL);
                if ( (aflags & 0xC2000000) == 0x40000000 )
                  set_tinfo();
              }
            }
            v11 = v31;
            LODWORD(v16) = 1;
          }
          else
          {
            v11 += 2;
          }
          ++v12;
          v18 += 16;
          if ( v26 <= v12 )
            goto LABEL_22;
        }
        if ( !under_debugger )
          sub_383060(0xC54Eu, v14);
LABEL_42:
        BUG();
      }
LABEL_22:
      v13 = *(_DWORD *)(a1 + 156);
      v27 = v16;
      v22 = floor(*(double *)(v4 + 8LL * (v13 + (int)v30)) + 0.5);
      if ( v27 != (unsigned __int64)(unsigned int)(int)v22 )
      {
        if ( !under_debugger )
          sub_383060(0xC550u, v22);
        goto LABEL_42;
      }
      if ( *(_DWORD *)(a1 + 164) == (_DWORD)v30 && v27 == 1 )
        break;
LABEL_9:
      if ( v13 <= (int)++v30 )
        return 1;
    }
    sub_373590(*(_QWORD *)(a1 + 184), v22, a4);
LABEL_8:
    v13 = *(_DWORD *)(a1 + 156);
    goto LABEL_9;
  }
  v6 = (double *)v4;
  v7 = (double *)(v4 + 8 * v5);
  while ( 1 )
  {
    v25 = *v6;
    v8 = (__m128d)*(unsigned __int64 *)v6;
    v8.m128d_f64[0] = v25 - round(*v6);
    a4 = (__m128)_mm_and_pd(v8, (__m128d)xmmword_424B30);
    if ( *(double *)a4.m128_u64 > 0.001 )
      return 0;
    if ( ++v6 == v7 )
      goto LABEL_6;
  }
}

