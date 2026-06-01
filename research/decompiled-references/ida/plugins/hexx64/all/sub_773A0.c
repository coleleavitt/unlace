__int64 __fastcall sub_773A0(__int64 *a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  double v4; // xmm0_8
  __int64 v5; // rax
  bool v6; // zf
  __int64 (__fastcall *v9)(__int64, int); // rax
  int v10; // ebx
  int v11; // ebx
  __int64 v12; // r13
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r12
  __int64 v18; // rdi
  unsigned int v19; // ebx
  _QWORD *v20; // r13
  unsigned int *v21; // r12
  unsigned int v22; // r12d
  __m128i v24; // xmm0
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  double v29; // [rsp+8h] [rbp-98h]
  _QWORD **v30; // [rsp+10h] [rbp-90h]
  unsigned __int64 *v31; // [rsp+18h] [rbp-88h]
  _QWORD *v32; // [rsp+20h] [rbp-80h]
  double *v33; // [rsp+28h] [rbp-78h]
  int v34; // [rsp+30h] [rbp-70h]
  signed int v35; // [rsp+34h] [rbp-6Ch]
  __int64 v36; // [rsp+38h] [rbp-68h]
  double v37; // [rsp+48h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-50h] BYREF
  __int128 v39; // [rsp+58h] [rbp-48h]
  unsigned __int64 v40; // [rsp+68h] [rbp-38h]

  v4 = 0.0;
  v30 = a2;
  v32 = (_QWORD *)a3;
  v40 = __readfsqword(0x28u);
  v5 = 0;
  v6 = a4[1] == 0;
  v38 = 0;
  v39 = 0;
  if ( v6 )
    return 0;
  v34 = 0;
  v33 = &v37;
  v31 = &v38;
  do
  {
    v35 = *(_DWORD *)(*a4 + 4 * v5);
    v9 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 104);
    if ( v9 == sub_650B0 )
    {
      if ( !a1[10] )
        goto LABEL_16;
      v10 = *(_DWORD *)(a1[9] + 24LL * v35 + 8);
    }
    else
    {
      v10 = v9((__int64)a1, v35);
    }
    v11 = v10 - 1;
    if ( v11 >= 0 )
    {
      v12 = 24LL * v35;
      v36 = 4LL * v11;
      do
      {
        v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 120);
        if ( v13 == sub_650F0 )
          v14 = *(_DWORD *)(*(_QWORD *)(a1[9] + v12) + v36);
        else
          v14 = v13((__int64)a1, v35, v11);
        v15 = (_DWORD *)*a4;
        v16 = *a4 + 4LL * a4[1];
        if ( *a4 == v16 )
          goto LABEL_28;
        while ( v14 != *v15 )
        {
          if ( (_DWORD *)v16 == ++v15 )
            goto LABEL_28;
        }
        if ( v15 == (_DWORD *)v16 )
        {
LABEL_28:
          v24 = _mm_cvtsi32_si128(v14);
          v25 = v38;
          v26 = v39;
          *(_QWORD *)&v4 = _mm_unpacklo_epi32(v24, _mm_cvtsi32_si128(v35)).m128i_u64[0];
          v37 = v4;
          v27 = v39 + 1;
          if ( (unsigned __int64)v33 < v38 || (unsigned __int64)v33 >= v38 + 8LL * *((_QWORD *)&v39 + 1) )
          {
            if ( *((_QWORD *)&v39 + 1) < v27 )
            {
              v38 = qvector_reserve((__int64)v31, v38, v39 + 1, 8);
              v25 = v38;
              v26 = v39;
            }
            *(double *)(v25 + 8 * v26) = v37;
          }
          else
          {
            if ( *((_QWORD *)&v39 + 1) < v27 )
            {
              v29 = v4;
              v28 = qvector_reserve((__int64)v31, v38, v39 + 1, 8);
              v4 = v29;
              v38 = v28;
              v25 = v28;
              v26 = v39;
            }
            *(double *)(v25 + 8 * v26) = v4;
          }
          *(_QWORD *)&v39 = v39 + 1;
        }
        --v11;
        v36 -= 4;
      }
      while ( v11 != -1 );
    }
LABEL_16:
    v5 = ++v34;
  }
  while ( (unsigned __int64)v34 < a4[1] );
  v17 = v38;
  v18 = v38;
  if ( (unsigned __int64)v39 <= 1 || (v19 = v39 - 1, (int)v39 - 1 < 0) )
  {
    v22 = 0;
  }
  else
  {
    v36 = 8LL * v19;
    while ( 1 )
    {
      v20 = v32;
      v21 = (unsigned int *)(v36 + v17);
      if ( !sub_70810((__int64)a1, (__int64)v32, *v21, v4) )
      {
        v22 = sub_75060(a1, v30, v20, (__int64)a4, *v21, v21[1], 0);
        if ( v22 )
          break;
      }
      --v19;
      v36 -= 8;
      if ( v19 == -1 )
      {
        v18 = v38;
        v22 = 0;
        goto LABEL_25;
      }
      v17 = v38;
    }
    v18 = v38;
  }
LABEL_25:
  if ( v18 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v18);
  }
  return v22;
}

