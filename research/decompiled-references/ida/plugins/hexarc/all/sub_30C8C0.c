__int64 __fastcall sub_30C8C0(__int64 a1, unsigned int *a2, _DWORD a3, _DWORD a4, _DWORD a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // rdx
  int v9; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rax
  int v29; // esi
  _QWORD *v30; // r10
  __int64 v31; // rbx
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 i; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  __int64 v41; // [rsp+18h] [rbp-70h]
  __m128 v42; // [rsp+20h] [rbp-68h] BYREF
  __int64 v43; // [rsp+30h] [rbp-58h] BYREF
  __m128i v44; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v6 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
    goto LABEL_9;
  v7 = *a2;
  if ( !(_DWORD)v7 )
    goto LABEL_9;
  v9 = *(_DWORD *)(a1 + 4);
  v11 = v9 + a2[1];
  if ( (unsigned __int64)v11 > 8 )
    goto LABEL_9;
  v12 = v6 & 0xF;
  v13 = v7 & 0xF;
  LOBYTE(v7) = v13 == 5 || v12 == 5;
  if ( (_BYTE)v7 )
  {
    if ( v12 == 5 && v13 == 5 )
    {
      *(_QWORD *)(a1 + 8) |= *((_QWORD *)a2 + 1) << (8 * (unsigned __int8)v9);
      *(_QWORD *)(a1 + 16) |= *((_QWORD *)a2 + 2) << (8 * (unsigned __int8)v9);
      *(_DWORD *)(a1 + 4) = a2[1] + v9;
      sub_30BBE0(a1);
LABEL_8:
      LODWORD(v7) = 1;
      return (unsigned int)v7;
    }
LABEL_9:
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  if ( v13 != 2 )
  {
    if ( v12 != 2 )
      return (unsigned int)v7;
    v15 = *(_QWORD *)(a1 + 16);
    if ( !v15 )
      return (unsigned int)v7;
    goto LABEL_14;
  }
  if ( *((_QWORD *)a2 + 2) == 1 )
  {
    v30 = *((_QWORD **)a2 + 1);
    if ( v30[1] == 1 )
    {
      v31 = *v30 << (8 * (unsigned __int8)v9);
      if ( v12 == 1 )
      {
        sub_30B800(a1);
        v37 = *(unsigned int *)(a1 + 4);
        v38 = 0;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 0;
        *(_OWORD *)(a1 + 16) = 0;
        if ( (_DWORD)v37 != 8 )
        {
          v37 = (unsigned int)(8 * v37);
          v38 = 1LL << v37;
        }
        v43 = v31;
        v44.m128i_i64[0] = v38;
        sub_30F830(a1 + 8, &v43, v34, v37, v35, v36);
        v11 = *(_DWORD *)(a1 + 4) + a2[1];
      }
      else
      {
        if ( v12 != 2 )
          return (unsigned int)v7;
        v32 = *(_QWORD **)(a1 + 8);
        v33 = &v32[2 * *(_QWORD *)(a1 + 16)];
        if ( v33 != v32 )
        {
          if ( ((16 * *(_BYTE *)(a1 + 16)) & 0x10) == 0 || (*v32 += v31, v32 += 2, v32 != v33) )
          {
            do
            {
              *v32 += v31;
              v32[2] += v31;
              v32 += 4;
            }
            while ( v32 != v33 );
          }
          v11 = *(_DWORD *)(a1 + 4) + a2[1];
        }
      }
      *(_DWORD *)(a1 + 4) = v11;
      goto LABEL_8;
    }
  }
  if ( v12 != 2 )
    return (unsigned int)v7;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = 0;
  if ( v15 )
  {
LABEL_14:
    v16 = 0;
    v17 = 0;
    while ( 1 )
    {
      v16 += *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * (int)v17 + 8);
      if ( v16 > 0x10 )
        return (unsigned int)v7;
      if ( ++v17 >= v15 )
      {
        if ( v13 != 2 )
          return (unsigned int)v7;
        break;
      }
    }
  }
  v18 = *((_QWORD *)a2 + 2);
  v19 = *((_QWORD *)a2 + 1);
  if ( !v18 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    v43 = 0;
    v44 = 0;
LABEL_32:
    v26 = v43;
    v27 = _mm_loadu_si128(&v44);
    v43 = v22;
    v28 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v26;
    *(__m128i *)(a1 + 16) = v27;
    v29 = a2[1] + v9;
    v44.m128i_i64[1] = v28;
    *(_DWORD *)(a1 + 4) = v29;
    if ( v22 )
    {
      v44.m128i_i64[0] = 0;
      qfree();
    }
    goto LABEL_8;
  }
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    v20 += *(_QWORD *)(v19 + 16LL * (int)v21 + 8);
    if ( v20 > 0x10 )
      return (unsigned int)v7;
    if ( ++v21 == v18 )
    {
      if ( v20 * v16 > 0x10 )
        return (unsigned int)v7;
      v43 = 0;
      v22 = *(_QWORD *)(a1 + 8);
      v41 = v19 + 16 * v21;
      v44 = 0;
      if ( v41 != v19 )
      {
        v40 = v19;
        do
        {
          for ( i = 0; i < *(_QWORD *)(v40 + 8); ++i )
          {
            v23 = (unsigned int)(8 * v9);
            v24 = v22 + 16LL * *(_QWORD *)(a1 + 16);
            if ( v24 != v22 )
            {
              v25 = v22;
              do
              {
                v42 = _mm_loadh_ps((const double *)(v25 + 8));
                sub_30F830(&v43, &v42, v7, v23, v19, a6);
                v25 += 16;
              }
              while ( v24 != v25 );
              v22 = *(_QWORD *)(a1 + 8);
              v9 = *(_DWORD *)(a1 + 4);
            }
          }
          v40 += 16;
        }
        while ( v41 != v40 );
      }
      goto LABEL_32;
    }
  }
}

