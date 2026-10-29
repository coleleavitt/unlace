unsigned __int64 __fastcall sub_66DC0(__int64 a1, int a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v3; // r12
  int v5; // r13d
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  __int64 v17; // rbp
  int i; // r12d
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r14
  _QWORD *v28; // rax
  unsigned __int64 v29; // r14
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  int v43; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v44; // [rsp+10h] [rbp-58h] BYREF
  __int128 v45; // [rsp+18h] [rbp-50h]
  unsigned __int64 v46; // [rsp+28h] [rbp-40h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  v46 = __readfsqword(0x28u);
  v5 = v3;
  v43 = v3;
  if ( a2 != v3 )
  {
    v44 = 0;
    v45 = 0;
    if ( a2 < v3 )
    {
      v27 = a2;
      do
      {
        v28 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 24 * v27);
        if ( *v28 )
        {
          v28[1] = 0;
          qfree();
        }
        ++v27;
      }
      while ( v27 < v3 );
      *(_QWORD *)(a1 + 56) = a2;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 48);
      v7 = *(_QWORD *)(a1 + 64);
      if ( (unsigned __int64)&v44 < v6 || (unsigned __int64)&v44 >= v6 + 24 * v7 )
      {
        if ( v7 < v2 )
        {
          v37 = qvector_reserve();
          v3 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = v37;
        }
        if ( v3 < v2 )
        {
          v8 = 24 * v3;
          do
          {
            ++v3;
            v9 = v8 + *(_QWORD *)(a1 + 48);
            v8 += 24;
            *(_QWORD *)v9 = 0;
            *(_OWORD *)(v9 + 8) = 0;
          }
          while ( v2 != v3 );
        }
      }
      else
      {
        if ( v7 < v2 )
        {
          v39 = qvector_reserve();
          v3 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 48) = v39;
        }
        if ( v3 < v2 )
        {
          v34 = 24 * v3;
          do
          {
            ++v3;
            v35 = v34 + *(_QWORD *)(a1 + 48);
            v34 += 24;
            *(_QWORD *)v35 = 0;
            *(_OWORD *)(v35 + 8) = 0;
          }
          while ( v2 != v3 );
        }
      }
      *(_QWORD *)(a1 + 56) = v2;
    }
  }
  v10 = *(_QWORD *)(a1 + 80);
  if ( v2 != v10 )
  {
    v44 = 0;
    v45 = 0;
    if ( v2 < v10 )
    {
      v29 = v2;
      do
      {
        v30 = (_QWORD *)(*(_QWORD *)(a1 + 72) + 24 * v29);
        if ( *v30 )
        {
          v30[1] = 0;
          qfree();
        }
        ++v29;
      }
      while ( v29 < v10 );
      *(_QWORD *)(a1 + 80) = v2;
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 72);
      v12 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)&v44 < v11 || (unsigned __int64)&v44 >= v11 + 24 * v12 )
      {
        if ( v12 < v2 )
        {
          v38 = qvector_reserve();
          v10 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v38;
        }
        if ( v10 < v2 )
        {
          v13 = 24 * v10;
          do
          {
            ++v10;
            v14 = v13 + *(_QWORD *)(a1 + 72);
            v13 += 24;
            *(_QWORD *)v14 = 0;
            *(_OWORD *)(v14 + 8) = 0;
          }
          while ( v2 != v10 );
        }
      }
      else
      {
        if ( v12 < v2 )
        {
          v40 = qvector_reserve();
          v10 = *(_QWORD *)(a1 + 80);
          *(_QWORD *)(a1 + 72) = v40;
        }
        if ( v10 < v2 )
        {
          v32 = 24 * v10;
          do
          {
            ++v10;
            v33 = v32 + *(_QWORD *)(a1 + 72);
            v32 += 24;
            *(_QWORD *)v33 = 0;
            *(_OWORD *)(v33 + 8) = 0;
          }
          while ( v2 != v10 );
        }
      }
      *(_QWORD *)(a1 + 80) = v2;
    }
  }
  v15 = *(_QWORD *)(a1 + 104);
  LODWORD(v44) = -1;
  if ( v2 >= v15 )
  {
    if ( v15 >= v2 )
    {
      if ( v5 < a2 )
        goto LABEL_22;
LABEL_35:
      sub_66C40(a1);
      v23 = *(_DWORD *)(a1 + 144);
      goto LABEL_36;
    }
    v21 = *(_QWORD *)(a1 + 96);
    v22 = *(_QWORD *)(a1 + 112);
    if ( (unsigned __int64)&v44 < v21 || (unsigned __int64)&v44 >= v21 + 4 * v22 )
    {
      if ( v22 >= v2
        || (v36 = qvector_reserve(), v15 = *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 96) = v36, v21 = v36, v15 < v2) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v21 + 4 * v15++) = -1;
          if ( v2 == v15 )
            break;
          v21 = *(_QWORD *)(a1 + 96);
        }
      }
    }
    else if ( v22 >= v2
           || (v31 = qvector_reserve(), v15 = *(_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 96) = v31, v21 = v31, v15 < v2) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v21 + 4 * v15++) = -1;
        if ( v2 == v15 )
          break;
        v21 = *(_QWORD *)(a1 + 96);
      }
    }
  }
  *(_QWORD *)(a1 + 104) = v2;
  if ( v5 >= a2 )
    goto LABEL_35;
LABEL_22:
  v16 = *(_QWORD *)(a1 + 128);
  v17 = v5;
  if ( v5 >= v16 )
  {
    if ( v16 >= v5 )
    {
      v17 = *(_QWORD *)(a1 + 128);
      goto LABEL_24;
    }
    v25 = *(_QWORD *)(a1 + 120);
    v26 = *(_QWORD *)(a1 + 136);
    if ( (unsigned __int64)&v43 < v25 || (unsigned __int64)&v43 >= v25 + 4 * v26 )
    {
      if ( v26 >= v5
        || (v41 = qvector_reserve(), v16 = *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 120) = v41, v25 = v41, v16 < v5) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v25 + 4 * v16++) = v5;
          if ( v5 == v16 )
            break;
          v25 = *(_QWORD *)(a1 + 120);
        }
      }
    }
    else if ( v26 >= v5
           || (v42 = qvector_reserve(), v16 = *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 120) = v42, v25 = v42, v16 < v5) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v25 + 4 * v16++) = v5;
        if ( v5 == v16 )
          break;
        v25 = *(_QWORD *)(a1 + 120);
      }
    }
  }
  *(_QWORD *)(a1 + 128) = v5;
LABEL_24:
  for ( i = v5 + 1; a2 > i; *(_QWORD *)(a1 + 128) = v17 )
  {
    v19 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 136) < (unsigned __int64)(v17 + 1) )
    {
      v20 = qvector_reserve();
      v17 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = v20;
      v19 = v20;
    }
    *(_DWORD *)(v19 + 4 * v17) = i++;
    v17 = *(_QWORD *)(a1 + 128) + 1LL;
  }
  if ( a2 - 1 != v17 )
  {
    if ( !under_debugger )
      sub_3835A0(50651);
LABEL_95:
    BUG();
  }
  v23 = a2 + *(_DWORD *)(a1 + 144) - v5;
  *(_DWORD *)(a1 + 144) = v23;
LABEL_36:
  if ( a2 < v23 )
  {
    if ( !under_debugger )
      sub_3835A0(50652);
    goto LABEL_95;
  }
  return v46 - __readfsqword(0x28u);
}

