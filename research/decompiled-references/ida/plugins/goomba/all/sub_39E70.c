unsigned __int64 __fastcall sub_39E70(__int64 *a1, int *a2)
{
  int v2; // eax
  int *v4; // rdi
  int *v5; // rbx
  int *v6; // rax
  int *v7; // rdx
  int *v8; // rcx
  int *v9; // rdx
  int *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rdi
  __m128 v18; // xmm0
  int *v19; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r15
  __int64 v25; // rbp
  _QWORD *v26; // rdi
  __m128 v27; // xmm0
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // [rsp+8h] [rbp-80h]
  int v32; // [rsp+10h] [rbp-78h]
  int v33; // [rsp+20h] [rbp-68h] BYREF
  void *v34; // [rsp+28h] [rbp-60h]
  int *v35; // [rsp+30h] [rbp-58h] BYREF
  int *v36; // [rsp+38h] [rbp-50h]
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v2 = *a2;
  v38 = __readfsqword(0x28u);
  v4 = *((int **)a2 + 3);
  v33 = 0;
  v32 = v2;
  v34 = nullptr;
  v35 = &v33;
  v36 = &v33;
  v37 = 0;
  if ( v4 )
  {
    v5 = a2;
    a2 = &v33;
    v6 = (int *)sub_32B20(v4, (__int64)&v33);
    v7 = v6;
    do
    {
      v8 = v7;
      v7 = *((int **)v7 + 2);
    }
    while ( v7 );
    v35 = v8;
    v9 = v6;
    do
    {
      v10 = v9;
      v9 = *((int **)v9 + 3);
    }
    while ( v9 );
    v11 = *((_QWORD *)v5 + 6);
    v36 = v10;
    v34 = v6;
    v37 = v11;
  }
  v12 = a1[1];
  v13 = a1[2];
  if ( v13 < v12 + 1 )
  {
    a2 = nullptr;
    v14 = qvector_reserve(a1, 0, v12 + 1, 56);
    v21 = a1[1];
    v22 = a1[2];
    a1[2] = v13;
    v23 = *a1;
    v31 = v22;
    v24 = v21 - 1;
    if ( v24 >= 0 )
    {
      v25 = v14 + 16;
      do
      {
        *(_DWORD *)(v25 - 16) = *(_DWORD *)v23;
        v30 = *(_QWORD *)(v23 + 24);
        if ( v30 )
        {
          v26 = nullptr;
          v27 = _mm_loadh_ps((const double *)(v23 + 32));
          *(_DWORD *)v25 = *(_DWORD *)(v23 + 16);
          v28 = *(_QWORD *)(v23 + 40);
          *(__m128 *)(v25 + 8) = v27;
          *(_QWORD *)(v25 + 24) = v28;
          *(_QWORD *)(v30 + 8) = v25;
          v29 = *(_QWORD *)(v23 + 48);
          *(_QWORD *)(v23 + 24) = 0;
          *(_QWORD *)(v25 + 32) = v29;
          *(_QWORD *)(v23 + 32) = v23 + 16;
          *(_QWORD *)(v23 + 40) = v23 + 16;
          *(_QWORD *)(v23 + 48) = 0;
        }
        else
        {
          *(_DWORD *)v25 = 0;
          *(_QWORD *)(v25 + 8) = 0;
          *(_QWORD *)(v25 + 16) = v25;
          *(_QWORD *)(v25 + 24) = v25;
          *(_QWORD *)(v25 + 32) = 0;
          v26 = *(_QWORD **)(v23 + 24);
        }
        --v24;
        v23 += 56;
        v25 += 56;
        sub_32A60(v26, 0);
      }
      while ( v24 != -1 );
      v23 = *a1;
    }
    qfree(v23);
    *a1 = v14;
    a1[2] = v31;
    v12 = a1[1];
  }
  else
  {
    v14 = *a1;
  }
  v15 = v14 + 56 * v12;
  *(_DWORD *)v15 = v32;
  v16 = v34;
  if ( v34 )
  {
    v17 = nullptr;
    v18 = _mm_loadh_ps((const double *)&v35);
    *(_DWORD *)(v15 + 16) = v33;
    v19 = v36;
    *(__m128 *)(v15 + 24) = v18;
    *(_QWORD *)(v15 + 40) = v19;
    v16[1] = v15 + 16;
    v34 = nullptr;
    *(_QWORD *)(v15 + 48) = v37;
    v35 = &v33;
    v36 = &v33;
    v37 = 0;
  }
  else
  {
    *(_DWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
    v17 = v34;
    *(_QWORD *)(v15 + 32) = v15 + 16;
    *(_QWORD *)(v15 + 40) = v15 + 16;
    *(_QWORD *)(v15 + 48) = 0;
  }
  ++a1[1];
  sub_32A60(v17, (__int64)a2);
  return v38 - __readfsqword(0x28u);
}

