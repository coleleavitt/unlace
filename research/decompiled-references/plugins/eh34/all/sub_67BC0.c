void __fastcall sub_67BC0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // r12
  _QWORD *v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r14
  _QWORD *v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rax
  __m128 v32; // xmm0
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  _QWORD *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // [rsp+0h] [rbp-118h]
  _QWORD *v39; // [rsp+0h] [rbp-118h]
  _QWORD *v40; // [rsp+0h] [rbp-118h]
  __int64 v41; // [rsp+8h] [rbp-110h]
  __int64 v42; // [rsp+8h] [rbp-110h]
  __int64 v43; // [rsp+10h] [rbp-108h]
  __int64 v44; // [rsp+10h] [rbp-108h]
  __int64 v45; // [rsp+18h] [rbp-100h]
  __int64 v46; // [rsp+18h] [rbp-100h]
  _QWORD v47[13]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+88h] [rbp-90h]
  unsigned __int64 v49; // [rsp+90h] [rbp-88h]
  int v50; // [rsp+98h] [rbp-80h]
  int v51; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-68h]
  int *v53; // [rsp+B8h] [rbp-60h]
  int *v54; // [rsp+C0h] [rbp-58h]
  __int64 v55; // [rsp+C8h] [rbp-50h]
  int v56; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v57; // [rsp+D8h] [rbp-40h]

  v2 = a1[1];
  v57 = __readfsqword(0x28u);
  if ( v2 != a2 )
  {
    memset(v47, 0, 0x58u);
    LODWORD(v47[3]) = -2;
    v47[7] = &v47[5];
    v47[2] = 0xFFFFFFFEFFFFFFFELL;
    v47[8] = &v47[5];
    if ( a2 < v2 )
    {
      v9 = a2;
      v38 = 88 * a2;
      do
      {
        v10 = *(_QWORD *)(*a1 + v38 + 48);
        while ( v10 )
        {
          v11 = (_QWORD *)v10;
          sub_65640(*(_QWORD **)(v10 + 24));
          v12 = *(_QWORD *)(v10 + 64);
          v10 = *(_QWORD *)(v10 + 16);
          if ( v12 )
          {
            v11[9] = 0;
            qfree(v12);
          }
          operator delete(v11, 0x58u);
        }
        ++v9;
        v38 += 88;
      }
      while ( v2 != v9 );
      a1[1] = a2;
    }
    else
    {
      v5 = a1[2];
      if ( (unsigned __int64)v47 < *a1 || (unsigned __int64)v47 >= *a1 + 88 * v5 )
      {
        if ( v5 < a2 )
        {
          v16 = qvector_reserve(a1, 0, a2, 88);
          v17 = a1[2];
          v18 = *a1;
          v43 = v16;
          a1[2] = v5;
          v45 = v17;
          v41 = a1[1] - 1;
          if ( v41 >= 0 )
          {
            v19 = v16 + 40;
            do
            {
              *(_QWORD *)(v19 - 40) = *(_QWORD *)v18;
              *(_QWORD *)(v19 - 32) = *(_QWORD *)(v18 + 8);
              *(_QWORD *)(v19 - 24) = *(_QWORD *)(v18 + 16);
              *(_DWORD *)(v19 - 16) = *(_DWORD *)(v18 + 24);
              v20 = *(_QWORD *)(v18 + 48);
              if ( v20 )
              {
                v21 = _mm_loadh_ps((const double *)(v18 + 56));
                *(_DWORD *)v19 = *(_DWORD *)(v18 + 40);
                v22 = *(_QWORD *)(v18 + 64);
                *(__m128 *)(v19 + 8) = v21;
                *(_QWORD *)(v19 + 24) = v22;
                *(_QWORD *)(v20 + 8) = v19;
                v23 = *(_QWORD *)(v18 + 72);
                *(_QWORD *)(v18 + 48) = 0;
                *(_QWORD *)(v19 + 32) = v23;
                *(_QWORD *)(v18 + 56) = v18 + 40;
                *(_QWORD *)(v18 + 64) = v18 + 40;
                *(_QWORD *)(v18 + 72) = 0;
              }
              else
              {
                *(_DWORD *)v19 = 0;
                *(_QWORD *)(v19 + 8) = 0;
                *(_QWORD *)(v19 + 16) = v19;
                *(_QWORD *)(v19 + 24) = v19;
                *(_QWORD *)(v19 + 32) = 0;
              }
              *(_DWORD *)(v19 + 40) = *(_DWORD *)(v18 + 80);
              v24 = *(_QWORD *)(v18 + 48);
              while ( v24 )
              {
                sub_65640(*(_QWORD **)(v24 + 24));
                v25 = (_QWORD *)v24;
                v24 = *(_QWORD *)(v24 + 16);
                v26 = v25[8];
                if ( v26 )
                {
                  v25[9] = 0;
                  v39 = v25;
                  qfree(v26);
                  v25 = v39;
                }
                operator delete(v25, 0x58u);
              }
              --v41;
              v18 += 88;
              v19 += 88;
            }
            while ( v41 != -1 );
            v18 = *a1;
          }
          qfree(v18);
          v2 = a1[1];
          *a1 = v43;
          a1[2] = v45;
        }
        if ( v2 < a2 )
        {
          v6 = v47[1];
          v7 = 88 * v2;
          do
          {
            ++v2;
            v8 = v7 + *a1;
            v7 += 88;
            *(_QWORD *)v8 = 0;
            *(_QWORD *)(v8 + 8) = v6;
            *(_QWORD *)(v8 + 16) = 0xFFFFFFFEFFFFFFFELL;
            *(_DWORD *)(v8 + 24) = -2;
            *(_DWORD *)(v8 + 40) = 0;
            *(_QWORD *)(v8 + 48) = 0;
            *(_QWORD *)(v8 + 56) = v8 + 40;
            *(_QWORD *)(v8 + 64) = v8 + 40;
            *(_QWORD *)(v8 + 72) = 0;
            *(_DWORD *)(v8 + 80) = 0;
          }
          while ( a2 != v2 );
        }
        a1[1] = a2;
      }
      else
      {
        v47[12] = 0;
        v49 = 0xFFFFFFFEFFFFFFFELL;
        v48 = v47[1];
        v50 = -2;
        v51 = 0;
        v52 = 0;
        v53 = &v51;
        v54 = &v51;
        v55 = 0;
        v56 = 0;
        if ( v5 < a2 )
        {
          v27 = qvector_reserve(a1, 0, a2, 88);
          v28 = a1[2];
          v29 = *a1;
          v44 = v27;
          a1[2] = v5;
          v46 = v28;
          v42 = a1[1] - 1;
          if ( v42 >= 0 )
          {
            v30 = v27 + 40;
            do
            {
              *(_QWORD *)(v30 - 40) = *(_QWORD *)v29;
              *(_QWORD *)(v30 - 32) = *(_QWORD *)(v29 + 8);
              *(_QWORD *)(v30 - 24) = *(_QWORD *)(v29 + 16);
              *(_DWORD *)(v30 - 16) = *(_DWORD *)(v29 + 24);
              v31 = *(_QWORD *)(v29 + 48);
              if ( v31 )
              {
                v32 = _mm_loadh_ps((const double *)(v29 + 56));
                *(_DWORD *)v30 = *(_DWORD *)(v29 + 40);
                v33 = *(_QWORD *)(v29 + 64);
                *(__m128 *)(v30 + 8) = v32;
                *(_QWORD *)(v30 + 24) = v33;
                *(_QWORD *)(v31 + 8) = v30;
                v34 = *(_QWORD *)(v29 + 72);
                *(_QWORD *)(v29 + 48) = 0;
                *(_QWORD *)(v30 + 32) = v34;
                *(_QWORD *)(v29 + 56) = v29 + 40;
                *(_QWORD *)(v29 + 64) = v29 + 40;
                *(_QWORD *)(v29 + 72) = 0;
              }
              else
              {
                *(_DWORD *)v30 = 0;
                *(_QWORD *)(v30 + 8) = 0;
                *(_QWORD *)(v30 + 16) = v30;
                *(_QWORD *)(v30 + 24) = v30;
                *(_QWORD *)(v30 + 32) = 0;
              }
              *(_DWORD *)(v30 + 40) = *(_DWORD *)(v29 + 80);
              v35 = *(_QWORD *)(v29 + 48);
              while ( v35 )
              {
                sub_65640(*(_QWORD **)(v35 + 24));
                v36 = (_QWORD *)v35;
                v35 = *(_QWORD *)(v35 + 16);
                v37 = v36[8];
                if ( v37 )
                {
                  v36[9] = 0;
                  v40 = v36;
                  qfree(v37);
                  v36 = v40;
                }
                operator delete(v36, 0x58u);
              }
              --v42;
              v29 += 88;
              v30 += 88;
            }
            while ( v42 != -1 );
            v29 = *a1;
          }
          qfree(v29);
          v2 = a1[1];
          *a1 = v44;
          a1[2] = v46;
        }
        if ( v2 < a2 )
        {
          v13 = v48;
          v14 = 88 * v2;
          do
          {
            ++v2;
            v15 = v14 + *a1;
            v14 += 88;
            *(_QWORD *)v15 = 0;
            *(_QWORD *)(v15 + 8) = v13;
            *(_QWORD *)(v15 + 16) = 0xFFFFFFFEFFFFFFFELL;
            *(_DWORD *)(v15 + 24) = -2;
            *(_DWORD *)(v15 + 40) = 0;
            *(_QWORD *)(v15 + 48) = 0;
            *(_QWORD *)(v15 + 56) = v15 + 40;
            *(_QWORD *)(v15 + 64) = v15 + 40;
            *(_QWORD *)(v15 + 72) = 0;
            *(_DWORD *)(v15 + 80) = 0;
          }
          while ( a2 != v2 );
        }
        a1[1] = a2;
        sub_65640(nullptr);
      }
    }
  }
}
