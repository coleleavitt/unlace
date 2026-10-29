__int64 __fastcall sub_3AFFA0(__int64 a1, __int64 a2, unsigned int **a3, double a4, double a5, __m128i a6, double a7)
{
  unsigned int *v7; // rax
  unsigned int *v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 idati; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  __int64 v20; // rbx
  _QWORD *v21; // r13
  __int64 v22; // rcx
  char v23; // si
  unsigned __int64 v25; // rcx
  __m128i si128; // xmm0
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  unsigned int v30; // ebp
  __int64 v31; // rdi
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v35; // [rsp+18h] [rbp-C0h]
  unsigned int *v36; // [rsp+20h] [rbp-B8h]
  __int64 v37; // [rsp+30h] [rbp-A8h]
  __int64 v38; // [rsp+48h] [rbp-90h] BYREF
  __int64 v39; // [rsp+50h] [rbp-88h] BYREF
  int v40; // [rsp+58h] [rbp-80h]
  __int64 v41; // [rsp+60h] [rbp-78h] BYREF
  __int128 v42; // [rsp+68h] [rbp-70h]
  __int64 v43; // [rsp+80h] [rbp-58h] BYREF
  __int128 v44; // [rsp+88h] [rbp-50h]
  unsigned __int64 v45; // [rsp+98h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v7 = a3[1];
  if ( !v7 )
    return 0;
  v38 = 0;
  v8 = *a3;
  v41 = 0;
  v42 = 0;
  v36 = &v8[(_QWORD)v7];
  if ( v8 == v36 )
  {
    v30 = 0;
    goto LABEL_26;
  }
  do
  {
    v15 = *v8;
    WORD4(v44) = 257;
    *(_QWORD *)&v44 = v15;
    idati = a2;
    if ( !a2 )
      idati = get_idati();
    v43 = idati;
    if ( (unsigned __int8)create_tinfo() )
    {
      sub_3A9370(&v38);
      v11 = *((_QWORD *)&v42 + 1);
      v10 = v42;
      if ( *((_QWORD *)&v42 + 1) < (unsigned __int64)(v42 + 1) )
      {
        v17 = qvector_reserve((__int64)&v41, 0, v42 + 1, 24);
        v18 = *((_QWORD *)&v42 + 1);
        v19 = v41;
        *((_QWORD *)&v42 + 1) = v11;
        v35 = v17;
        v37 = v18;
        v20 = v42 - 1;
        if ( (__int64)v42 - 1 >= 0 )
        {
          v21 = (_QWORD *)v17;
          do
          {
            v22 = *(_QWORD *)v19;
            v21[1] = 0;
            *v21 = v22;
            copy_tinfo_t();
            v23 = *(_BYTE *)(v19 + 16);
            v19 += 24;
            v21 += 3;
            *((_BYTE *)v21 - 8) = v23;
            *((_DWORD *)v21 - 1) = *(_DWORD *)(v19 - 4);
            clear_tinfo_t();
          }
          while ( v20-- != 0 );
          v19 = v41;
        }
        qfree(v19);
        v41 = v35;
        *((_QWORD *)&v42 + 1) = v37;
        v10 = v42;
      }
      else
      {
        v35 = v41;
      }
      v12 = v35 + 24 * v10;
      *(_QWORD *)v12 = 0;
      v13 = v38;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)&v42 = v42 + 1;
      v14 = *(_QWORD *)(v12 + 8);
      *(_DWORD *)(v12 + 20) = 0;
      *(_BYTE *)(v12 + 16) = 1;
      *(_QWORD *)(v12 + 8) = v13;
      v38 = v14;
    }
    ++v8;
  }
  while ( v36 != v8 );
  v25 = v42;
  if ( (_QWORD)v42 )
  {
    v43 = 0;
    si128.m128i_i64[0] = 0;
    v44 = 0;
    if ( (_QWORD)v42 == 1 )
    {
      v29 = v41;
      v28 = 0;
      if ( (*(_QWORD *)(v41 + 8) & 0x100LL) != 0 )
      {
        get_tinfo_pdata();
        v28 = v43;
        v29 = v41;
        v25 = v42;
      }
    }
    else
    {
      v27 = qvector_reserve((__int64)&v43, 0, 24, 1);
      si128 = _mm_load_si128((const __m128i *)&xmmword_424AA0);
      v43 = v27;
      *(_QWORD *)&v44 = 24;
      *(__m128i *)v27 = si128;
      *(_QWORD *)(v27 + 15) = 0x736570797420656CLL;
      v28 = v43;
      v29 = v41;
      v25 = v42;
      *(_BYTE *)(v43 + 23) = 0;
    }
    v40 = 0;
    v39 = 0xFFFFFFFFLL;
    v30 = sub_3AF790(a1, v28, v29, v25, -1, &v39, *(double *)si128.m128i_i64, a5, a6, a7);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
    v31 = v41;
    if ( !v41 )
      goto LABEL_26;
    v32 = v42;
    if ( (_QWORD)v42 )
    {
      v33 = 0;
      do
      {
        ++v33;
        clear_tinfo_t();
        v31 = v41;
      }
      while ( v32 != v33 );
    }
  }
  else
  {
    v31 = v41;
    if ( !v41 )
    {
      v30 = 0;
      goto LABEL_26;
    }
    v30 = 0;
  }
  *(_QWORD *)&v42 = 0;
  qfree(v31);
LABEL_26:
  clear_tinfo_t();
  return v30;
}

