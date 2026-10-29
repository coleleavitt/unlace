unsigned __int64 __fastcall sub_673C0(__int64 a1, int a2, double a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r12
  int v7; // r13d
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  int i; // r12d
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // eax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 *v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // r14
  __int64 *v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v51; // [rsp+10h] [rbp-58h] BYREF
  __int128 v52; // [rsp+18h] [rbp-50h]
  unsigned __int64 v53; // [rsp+28h] [rbp-40h]

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 56);
  v53 = __readfsqword(0x28u);
  v7 = v5;
  v50 = v5;
  if ( a2 != v5 )
  {
    v51 = 0;
    a3 = 0.0;
    v52 = 0;
    if ( a2 < v5 )
    {
      v32 = a2;
      do
      {
        v33 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24 * v32);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34);
        }
        ++v32;
      }
      while ( v32 < v5 );
      *(_QWORD *)(a1 + 56) = a2;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 48);
      v9 = *(_QWORD *)(a1 + 64);
      v10 = a1 + 48;
      if ( (unsigned __int64)&v51 < v8 || (unsigned __int64)&v51 >= v8 + 24 * v9 )
      {
        if ( v9 < v3 )
        {
          v44 = qvector_reserve(v10, v8, v3, 24);
          v5 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = v44;
        }
        if ( v5 < v3 )
        {
          a3 = 0.0;
          v11 = 24 * v5;
          do
          {
            ++v5;
            v12 = v11 + *(_QWORD *)(a1 + 48);
            v11 += 24;
            *(_QWORD *)v12 = 0;
            *(_OWORD *)(v12 + 8) = 0;
          }
          while ( v3 != v5 );
        }
      }
      else
      {
        if ( v9 < v3 )
        {
          v46 = qvector_reserve(v10, v8, v3, 24);
          v5 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = v46;
        }
        if ( v5 < v3 )
        {
          a3 = 0.0;
          v41 = 24 * v5;
          do
          {
            ++v5;
            v42 = v41 + *(_QWORD *)(a1 + 48);
            v41 += 24;
            *(_QWORD *)v42 = 0;
            *(_OWORD *)(v42 + 8) = 0;
          }
          while ( v3 != v5 );
        }
      }
      *(_QWORD *)(a1 + 56) = v3;
    }
  }
  v13 = *(_QWORD *)(a1 + 80);
  if ( v3 != v13 )
  {
    v51 = 0;
    a3 = 0.0;
    v52 = 0;
    if ( v3 < v13 )
    {
      v35 = v3;
      do
      {
        v36 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v35);
        v37 = *v36;
        if ( *v36 )
        {
          v36[1] = 0;
          qfree(v37);
        }
        ++v35;
      }
      while ( v35 < v13 );
      *(_QWORD *)(a1 + 80) = v3;
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 72);
      v15 = *(_QWORD *)(a1 + 88);
      v16 = a1 + 72;
      if ( (unsigned __int64)&v51 < v14 || (unsigned __int64)&v51 >= v14 + 24 * v15 )
      {
        if ( v15 < v3 )
        {
          v45 = qvector_reserve(v16, v14, v3, 24);
          v13 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v45;
        }
        if ( v13 < v3 )
        {
          a3 = 0.0;
          v17 = 24 * v13;
          do
          {
            ++v13;
            v18 = v17 + *(_QWORD *)(a1 + 72);
            v17 += 24;
            *(_QWORD *)v18 = 0;
            *(_OWORD *)(v18 + 8) = 0;
          }
          while ( v3 != v13 );
        }
      }
      else
      {
        if ( v15 < v3 )
        {
          v47 = qvector_reserve(v16, v14, v3, 24);
          v13 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v47;
        }
        if ( v13 < v3 )
        {
          a3 = 0.0;
          v39 = 24 * v13;
          do
          {
            ++v13;
            v40 = v39 + *(_QWORD *)(a1 + 72);
            v39 += 24;
            *(_QWORD *)v40 = 0;
            *(_OWORD *)(v40 + 8) = 0;
          }
          while ( v3 != v13 );
        }
      }
      *(_QWORD *)(a1 + 80) = v3;
    }
  }
  v19 = *(_QWORD *)(a1 + 104);
  LODWORD(v51) = -1;
  if ( v3 >= v19 )
  {
    if ( v19 >= v3 )
    {
      if ( v7 < a2 )
        goto LABEL_22;
LABEL_35:
      sub_67240(a1);
      v28 = *(_DWORD *)(a1 + 144);
      goto LABEL_36;
    }
    v25 = *(_QWORD *)(a1 + 96);
    v26 = *(_QWORD *)(a1 + 112);
    v27 = a1 + 96;
    if ( (unsigned __int64)&v51 < v25 || (unsigned __int64)&v51 >= v25 + 4 * v26 )
    {
      if ( v26 >= v3
        || (v43 = qvector_reserve(v27, v25, v3, 4),
            v19 = *(_QWORD *)(a1 + 104),
            *(_QWORD *)(a1 + 96) = v43,
            v25 = v43,
            v19 < v3) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v19++) = -1;
          if ( v3 == v19 )
            break;
          v25 = *(_QWORD *)(a1 + 96);
        }
      }
    }
    else if ( v26 >= v3
           || (v38 = qvector_reserve(v27, v25, v3, 4),
               v19 = *(_QWORD *)(a1 + 104),
               *(_QWORD *)(a1 + 96) = v38,
               v25 = v38,
               v19 < v3) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v25 + 4 * v19++) = -1;
        if ( v3 == v19 )
          break;
        v25 = *(_QWORD *)(a1 + 96);
      }
    }
  }
  *(_QWORD *)(a1 + 104) = v3;
  if ( v7 >= a2 )
    goto LABEL_35;
LABEL_22:
  v20 = *(_QWORD *)(a1 + 128);
  v21 = v7;
  if ( v7 >= v20 )
  {
    if ( v20 >= v7 )
    {
      v21 = *(_QWORD *)(a1 + 128);
      goto LABEL_24;
    }
    v30 = *(_QWORD *)(a1 + 120);
    v31 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)&v50 < v30 || (unsigned __int64)&v50 >= v30 + 4 * v31 )
    {
      if ( v31 >= v7
        || (v48 = qvector_reserve(a1 + 120, v30, v7, 4),
            v20 = *(_QWORD *)(a1 + 128),
            *(_QWORD *)(a1 + 120) = v48,
            v30 = v48,
            v20 < v7) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v30 + 4 * v20++) = v7;
          if ( v7 == v20 )
            break;
          v30 = *(_QWORD *)(a1 + 120);
        }
      }
    }
    else if ( v31 >= v7
           || (v49 = qvector_reserve(a1 + 120, v30, v7, 4),
               v20 = *(_QWORD *)(a1 + 128),
               *(_QWORD *)(a1 + 120) = v49,
               v30 = v49,
               v20 < v7) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v30 + 4 * v20++) = v7;
        if ( v7 == v20 )
          break;
        v30 = *(_QWORD *)(a1 + 120);
      }
    }
  }
  *(_QWORD *)(a1 + 128) = v7;
LABEL_24:
  for ( i = v7 + 1; a2 > i; *(_QWORD *)(a1 + 128) = v21 )
  {
    v23 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v21 + 1) )
    {
      v24 = qvector_reserve(a1 + 120, v23, v21 + 1, 4);
      v21 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = v24;
      v23 = v24;
    }
    *(_DWORD *)(v23 + 4 * v21) = i++;
    v21 = *(_QWORD *)(a1 + 128) + 1LL;
  }
  if ( a2 - 1 != v21 )
  {
    if ( !under_debugger )
      sub_383060(0xC5DBu, a3);
LABEL_95:
    BUG();
  }
  v28 = a2 + *(_DWORD *)(a1 + 144) - v7;
  *(_DWORD *)(a1 + 144) = v28;
LABEL_36:
  if ( a2 < v28 )
  {
    if ( !under_debugger )
      sub_383060(0xC5DCu, a3);
    goto LABEL_95;
  }
  return v53 - __readfsqword(0x28u);
}

