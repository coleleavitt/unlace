__int64 __fastcall sub_3A6D50(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  unsigned int v11; // eax
  int *v12; // rsi
  _DWORD *v13; // rcx
  int v14; // esi
  _DWORD *v15; // rax
  char v16; // r12
  __int64 v17; // rbp
  _BYTE *v18; // rax
  double v19; // xmm0_8
  __int64 v20; // r13
  __int64 *func; // r12
  __int64 v22; // rdx
  int v23; // eax
  __m128i *v24; // rax
  __int64 v25; // r14
  __m128i *v26; // rbx
  __int64 v28; // r12
  __int64 v29; // rdi
  __int64 i; // rbp
  __int64 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rdi
  __int64 j; // rbp
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rsi
  int v44; // edi
  __m128i *v45; // [rsp+18h] [rbp-90h] BYREF
  __int64 *v46; // [rsp+20h] [rbp-88h] BYREF
  __int64 v47; // [rsp+28h] [rbp-80h]
  __int128 v48; // [rsp+30h] [rbp-78h]
  __int64 v49[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v50; // [rsp+50h] [rbp-58h]
  __int128 v51; // [rsp+58h] [rbp-50h]
  unsigned __int64 v52; // [rsp+68h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  if ( a2 == 20 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x400u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x1000u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x800u;
    return 0;
  }
  if ( a2 == 21 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x400u;
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) &= ~0x1000u;
    v40 = *(_QWORD *)(a1 + 16);
    v41 = *(_DWORD *)(v40 + 1416);
    if ( (v41 & 0x800) != 0 )
    {
      BYTE1(v41) &= ~8u;
      *(_DWORD *)(v40 + 1416) = v41;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(24, 10, 0, &callui, a5, a6);
    }
    return 0;
  }
  if ( a2 != 19 )
    return 0;
  v11 = *a3;
  if ( *a3 > 0x2F )
  {
    v12 = *((int **)a3 + 1);
    v13 = v12 + 2;
    *((_QWORD *)a3 + 1) = v12 + 2;
    v14 = *v12;
    v15 = v13;
    if ( !v14 )
    {
      v16 = 1;
      goto LABEL_9;
    }
    if ( v14 != 1 )
      return 0;
    v16 = 0;
LABEL_8:
    v13 = v15;
LABEL_9:
    *((_QWORD *)a3 + 1) = v13 + 2;
    goto LABEL_10;
  }
  v42 = *((_QWORD *)a3 + 2);
  v43 = v11 + 8;
  *a3 = v43;
  v44 = *(_DWORD *)(v42 + v11);
  if ( v44 )
  {
    if ( v44 != 1 )
      return 0;
    v16 = 0;
  }
  else
  {
    v16 = 1;
  }
  if ( (unsigned int)v43 > 0x2F )
  {
    v15 = *((_DWORD **)a3 + 1);
    goto LABEL_8;
  }
  v13 = (_DWORD *)(v43 + v42);
  *a3 = v11 + 16;
LABEL_10:
  v17 = *(_QWORD *)v13;
  if ( *(_DWORD *)(*(_QWORD *)v13 + 44LL) == 3 && (*(_BYTE *)(v17 + 76) & 2) != 0 )
  {
    v19 = ((double (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
            1105,
            *(unsigned int *)(v17 + 40),
            &callui,
            v13,
            a5,
            a6);
    if ( v18 )
    {
      if ( *v18 == 36 && (unsigned int)qsscanf() == 1 )
      {
        v20 = v49[0];
        if ( v49[0] != -1 )
        {
          if ( !v16 )
          {
            sub_2B61B0(*(_QWORD *)(a1 + 16), v49[0], 0);
            netnode_supdel();
            return 0;
          }
          func = (__int64 *)get_func();
          if ( func )
          {
            v22 = *(_QWORD *)(a1 + 16);
            v23 = *(_DWORD *)(v22 + 1416);
            if ( (v23 & 0x1000) == 0 )
            {
              if ( (v23 & 0x400) != 0 && (v23 & 0x800) == 0 )
              {
                BYTE1(v23) |= 8u;
                *(_DWORD *)(v22 + 1416) = v23;
                sub_137260((__int64)"Refreshing decompiler-level breakpoints...", "$%a", v19);
                v22 = *(_QWORD *)(a1 + 16);
              }
              v46 = func;
              v49[0] = 0;
              v49[1] = -1;
              v50 = 0;
              v47 = 0;
              v51 = 0;
              v48 = 0;
              sub_14CDC0((__int64 *)&v45, *(_QWORD *)(v22 + 112), &v46, v49, 1, 0.0, a8, a9, a10);
              if ( v47 )
              {
                *(_QWORD *)&v48 = 0;
                qfree(v47);
              }
              if ( v45 )
              {
                v24 = sub_38C6C0(v45, *(_DWORD *)(v17 + 32) - 1);
                v25 = -1;
                if ( (unsigned __int64)v24 > 1 )
                  v25 = v24->m128i_i64[0];
                sub_2B61B0(*(_QWORD *)(a1 + 16), v20, 1);
                v46 = (__int64 *)(v25 - v20);
                netnode_supset();
              }
              else
              {
                if ( LODWORD(v49[0]) == -18 )
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 1416LL) |= 0x1000u;
LABEL_47:
                  if ( v50 )
                  {
                    *(_QWORD *)&v51 = 0;
                    qfree(v50);
                  }
                  return 0;
                }
                sub_2B4E70((__int64)"%a: failed to decompile previously decompilable function", 0.0);
              }
              v26 = v45;
              if ( v45 )
              {
                if ( v45[6].m128i_i32[2]-- == 1 )
                {
                  sub_258970(v26->m128i_i64);
                  if ( v26[11].m128i_i64[1] )
                  {
                    v28 = v26[12].m128i_i64[0];
                    if ( v28 )
                    {
                      v29 = v26[11].m128i_i64[1];
                      for ( i = 0; i != v28; ++i )
                      {
                        v31 = (__int64 *)(v29 + 24 * i);
                        v32 = *v31;
                        if ( *v31 )
                        {
                          v31[1] = 0;
                          qfree(v32);
                          v29 = v26[11].m128i_i64[1];
                        }
                      }
                    }
                    else
                    {
                      v29 = v26[11].m128i_i64[1];
                    }
                    v26[12].m128i_i64[0] = 0;
                    qfree(v29);
                  }
                  v33 = v26[10].m128i_i64[0];
                  if ( v33 )
                  {
                    v26[10].m128i_i64[1] = 0;
                    qfree(v33);
                  }
                  if ( v26[8].m128i_i64[0] )
                  {
                    v34 = v26[8].m128i_i64[1];
                    if ( v34 )
                    {
                      v35 = v26[8].m128i_i64[0];
                      for ( j = 0; j != v34; ++j )
                      {
                        v37 = (__int64 *)(v35 + 32 * j);
                        v38 = *v37;
                        if ( *v37 )
                        {
                          v37[1] = 0;
                          qfree(v38);
                          v35 = v26[8].m128i_i64[0];
                        }
                      }
                    }
                    else
                    {
                      v35 = v26[8].m128i_i64[0];
                    }
                    v26[8].m128i_i64[1] = 0;
                    qfree(v35);
                  }
                  sub_255050((__int64)v26[1].m128i_i64, 0.0);
                  j__qfree((__int64)v26);
                }
              }
              goto LABEL_47;
            }
          }
        }
      }
    }
  }
  return 0;
}

