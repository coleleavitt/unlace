__int64 __fastcall sub_59F50(__int64 a1, unsigned __int8 **a2, __int64 a3)
{
  unsigned __int8 *v4; // rax
  unsigned __int8 v6; // dl
  int v8; // eax
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  unsigned __int8 *v17; // rax
  int v18; // edx
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rsi
  int v22; // eax
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rbp
  __int64 v26; // rbp
  __int64 v27; // r15
  unsigned __int16 v28; // ax
  __int64 v29; // r14
  __int64 v30; // r14
  __int64 v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+0h] [rbp-58h]
  int v41; // [rsp+Ch] [rbp-4Ch]
  __int64 v42; // [rsp+10h] [rbp-48h]
  int v43; // [rsp+18h] [rbp-40h]
  bool v44; // [rsp+1Fh] [rbp-39h]

  v4 = *a2;
  if ( *a2 >= a2[1] )
    return 0;
  v6 = *v4;
  *a2 = v4 + 1;
  v43 = v6;
  if ( !v6 )
    return 0;
  v44 = 0;
  v8 = unpack_dd() & 0xFFFFFFF7 | *(_DWORD *)(a1 + 24) & 8;
  *(_DWORD *)(a1 + 24) = v8;
  if ( (v8 & 8) != 0 )
    v44 = (unsigned __int64)*(int *)(a1 + 72) > 0x6F;
  v9 = unpack_dw();
  v10 = *(_QWORD *)(a1 + 8);
  v11 = v9;
  if ( v10 < v9 )
  {
    v21 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v9 )
    {
      v35 = qvector_reserve();
      v10 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v35;
      v21 = v35;
    }
    memset((void *)(v21 + 32 * v10), 0, 32 * (v11 - v10));
    v22 = *(_DWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 8) = v11;
    v41 = v22 & 0x10;
    goto LABEL_10;
  }
  if ( v9 != v10 )
    *(_QWORD *)(a1 + 8) = v9;
  v41 = *(_DWORD *)(a1 + 24) & 0x10;
  if ( v9 )
  {
LABEL_10:
    v40 = a3;
    v12 = 0;
    v13 = 0;
    v42 = 32 * v11;
    do
    {
      v20 = v12 + *(_QWORD *)a1;
      if ( (unsigned __int8)is_cvt64() )
      {
        v14 = (unsigned int)v40 + (unsigned int)unpack_dd();
        if ( v14 == 0xFFFFFFFFLL )
          v14 = -1;
      }
      else
      {
        v14 = v40 + unpack_dq();
      }
      *(_QWORD *)v20 = v14;
      if ( v41 )
        v13 = 0;
      if ( (unsigned __int8)is_cvt64() )
      {
        v15 = (unsigned int)v13 + (unsigned int)unpack_dd();
        if ( v15 == 0xFFFFFFFFLL )
          v15 = -1;
      }
      else
      {
        v15 = v13 + unpack_dq();
      }
      *(_QWORD *)(v20 + 8) = v15;
      v16 = -1;
      v17 = *a2;
      if ( *a2 < a2[1] )
      {
        v18 = *v17++;
        v16 = v18 - 1;
      }
      *a2 = v17;
      *(_DWORD *)(v20 + 24) = v16;
      if ( (unsigned __int8)is_cvt64() )
      {
        v19 = (unsigned int)unpack_dd();
        if ( (unsigned int)v19 == 0xFFFFFFFFLL )
          v19 = -1;
      }
      else
      {
        v19 = unpack_dq();
      }
      *(_QWORD *)(v20 + 16) = v19;
      v12 += 32;
      v13 = *(_QWORD *)(v20 + 8);
      v40 = *(_QWORD *)v20;
    }
    while ( v12 != v42 );
  }
  if ( (unsigned __int8)is_cvt64() )
  {
    v23 = (unsigned int)unpack_dd();
    if ( (unsigned int)v23 == 0xFFFFFFFFLL )
      v23 = -1;
  }
  else
  {
    v23 = unpack_dq();
  }
  *(_QWORD *)(a1 + 32) = v23;
  if ( (unsigned __int8)is_cvt64() )
  {
    v28 = unpack_dw();
    v29 = v28;
    if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)v28 )
    {
      v34 = qvector_reserve();
      *(_QWORD *)(a1 + 48) = v29;
      *(_QWORD *)(a1 + 40) = v34;
    }
    else
    {
      *(_QWORD *)(a1 + 48) = v28;
      if ( !v28 )
        goto LABEL_41;
    }
    v30 = 8 * v29;
    v31 = 0;
    do
    {
      if ( (unsigned __int8)is_cvt64() )
      {
        a3 = (unsigned int)unpack_dd() + (unsigned int)a3;
        if ( (unsigned int)a3 == 0xFFFFFFFFLL )
          a3 = -1;
      }
      else
      {
        a3 += unpack_dq();
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + v31) = a3;
      v31 += 8;
    }
    while ( v30 != v31 );
    goto LABEL_41;
  }
  v24 = unpack_dw();
  v25 = v24;
  if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)v24 )
  {
    v33 = qvector_reserve();
    *(_QWORD *)(a1 + 48) = v25;
    *(_QWORD *)(a1 + 40) = v33;
LABEL_39:
    v26 = 8 * v25;
    v27 = 0;
    do
    {
      a3 += unpack_dq();
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + v27) = a3;
      v27 += 8;
    }
    while ( v26 != v27 );
    goto LABEL_41;
  }
  *(_QWORD *)(a1 + 48) = v24;
  if ( v24 )
    goto LABEL_39;
LABEL_41:
  if ( *a2 < a2[1] )
  {
    if ( (unsigned __int8)is_cvt64() )
    {
      v32 = (unsigned int)unpack_dd();
      if ( (unsigned int)v32 == 0xFFFFFFFFLL )
        v32 = -1;
    }
    else
    {
      v32 = unpack_dq();
    }
    *(_QWORD *)(a1 + 64) = v32;
    if ( v44 )
    {
      if ( v43 == 1 || *a2 >= a2[1] )
      {
        *(_OWORD *)(a1 + 80) = 0;
        *(_OWORD *)(a1 + 96) = 0;
      }
      else
      {
        if ( (unsigned __int8)is_cvt64() )
        {
          v36 = (unsigned int)unpack_dd();
          if ( (unsigned int)v36 == 0xFFFFFFFFLL )
            v36 = -1;
        }
        else
        {
          v36 = unpack_dq();
        }
        *(_QWORD *)(a1 + 80) = v36;
        if ( (unsigned __int8)is_cvt64() )
        {
          v37 = (unsigned int)unpack_dd();
          if ( (unsigned int)v37 == 0xFFFFFFFFLL )
            v37 = -1;
        }
        else
        {
          v37 = unpack_dq();
        }
        *(_QWORD *)(a1 + 88) = v37;
        if ( (unsigned __int8)is_cvt64() )
        {
          v38 = (unsigned int)unpack_dd();
          if ( (unsigned int)v38 == 0xFFFFFFFFLL )
            v38 = -1;
        }
        else
        {
          v38 = unpack_dq();
        }
        *(_QWORD *)(a1 + 96) = v38;
        if ( (unsigned __int8)is_cvt64() )
        {
          v39 = (unsigned int)unpack_dd();
          if ( (unsigned int)v39 == 0xFFFFFFFFLL )
            v39 = -1;
        }
        else
        {
          v39 = unpack_dq();
        }
        *(_QWORD *)(a1 + 104) = v39;
      }
    }
  }
  return 1;
}

