__int64 *__fastcall sub_1FA70(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  char *v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // r14
  char v10; // dl
  __int64 v11; // r14
  char *v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  char v15; // dl
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v28; // rax
  unsigned __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rcx
  __int64 v35; // r15
  __m128i v36; // xmm0
  int v37; // esi
  __int64 v38; // rsi
  __m128i v39; // xmm0
  __int64 v40; // rdi
  bool v41; // cf
  char *v42; // rax
  char v43; // dl
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rcx
  __int64 v51; // r14
  __m128i v52; // xmm0
  int v53; // esi
  __int64 v54; // rsi
  __m128i v55; // xmm0
  __int64 v56; // rdi
  int i; // [rsp+0h] [rbp-80h]
  __int64 v58; // [rsp+0h] [rbp-80h]
  __int64 v59; // [rsp+8h] [rbp-78h]
  __int64 v60; // [rsp+8h] [rbp-78h]
  __int64 v61; // [rsp+8h] [rbp-78h]
  __int64 v62; // [rsp+8h] [rbp-78h]
  __int64 v63; // [rsp+10h] [rbp-70h]
  __int64 v64; // [rsp+10h] [rbp-70h]
  int v65; // [rsp+1Ch] [rbp-64h]
  __int64 v66; // [rsp+20h] [rbp-60h]
  char *v67; // [rsp+30h] [rbp-50h] BYREF
  __int64 v68; // [rsp+38h] [rbp-48h]
  unsigned __int64 v69; // [rsp+40h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = *(_QWORD *)(a3 + 8);
  if ( v4 )
  {
    v67 = *(char **)a3;
    v7 = &v67[v4];
    v8 = unpack_dd(&v67, &v67[v4]);
    v9 = a1[2];
    v65 = v8;
    if ( v9 < v8 )
    {
      v46 = qvector_reserve(a1, 0, v8, 72);
      v47 = a1[2];
      v48 = a1[1];
      v62 = v46;
      a1[2] = v9;
      v49 = *a1;
      v64 = v47;
      v50 = v48 - 1;
      if ( v50 >= 0 )
      {
        v51 = v46;
        do
        {
          v52 = _mm_loadu_si128((const __m128i *)(v49 + 8));
          *(_BYTE *)v51 = *(_BYTE *)v49;
          v53 = *(_DWORD *)(v49 + 24);
          *(__m128i *)(v51 + 8) = v52;
          *(_DWORD *)(v51 + 24) = v53;
          *(_BYTE *)(v51 + 28) = *(_BYTE *)(v49 + 28);
          v54 = *(_QWORD *)(v49 + 32);
          v55 = _mm_loadu_si128((const __m128i *)(v49 + 40));
          *(_QWORD *)(v49 + 32) = 0;
          *(_QWORD *)(v51 + 32) = v54;
          *(__m128i *)(v51 + 40) = v55;
          LODWORD(v54) = *(_DWORD *)(v49 + 56);
          *(_QWORD *)(v49 + 48) = 0;
          *(_DWORD *)(v51 + 56) = v54;
          *(_DWORD *)(v51 + 60) = *(_DWORD *)(v49 + 60);
          *(_BYTE *)(v51 + 64) = *(_BYTE *)(v49 + 64);
          v56 = *(_QWORD *)(v49 + 32);
          if ( v56 )
          {
            *(_QWORD *)(v49 + 40) = 0;
            v58 = v50;
            qfree(v56);
            v50 = v58;
          }
          v49 += 72;
          v51 += 72;
          v41 = v50-- == 0;
        }
        while ( !v41 );
        v49 = *a1;
      }
      qfree(v49);
      *a1 = v62;
      a1[2] = v64;
    }
    if ( v65 > 0 )
    {
      for ( i = 0; i != v65; ++i )
      {
        v28 = a1[1];
        v29 = a1[2];
        if ( v29 >= v28 + 1 )
        {
          v63 = *a1;
        }
        else
        {
          v30 = qvector_reserve(a1, 0, v28 + 1, 72);
          v31 = a1[2];
          v32 = a1[1];
          a1[2] = v29;
          v63 = v30;
          v33 = *a1;
          v66 = v31;
          v34 = v32 - 1;
          if ( v34 >= 0 )
          {
            v35 = v30;
            do
            {
              v36 = _mm_loadu_si128((const __m128i *)(v33 + 8));
              *(_BYTE *)v35 = *(_BYTE *)v33;
              v37 = *(_DWORD *)(v33 + 24);
              *(__m128i *)(v35 + 8) = v36;
              *(_DWORD *)(v35 + 24) = v37;
              *(_BYTE *)(v35 + 28) = *(_BYTE *)(v33 + 28);
              v38 = *(_QWORD *)(v33 + 32);
              v39 = _mm_loadu_si128((const __m128i *)(v33 + 40));
              *(_QWORD *)(v33 + 32) = 0;
              *(_QWORD *)(v35 + 32) = v38;
              *(__m128i *)(v35 + 40) = v39;
              LODWORD(v38) = *(_DWORD *)(v33 + 56);
              *(_QWORD *)(v33 + 48) = 0;
              *(_DWORD *)(v35 + 56) = v38;
              *(_DWORD *)(v35 + 60) = *(_DWORD *)(v33 + 60);
              *(_BYTE *)(v35 + 64) = *(_BYTE *)(v33 + 64);
              v40 = *(_QWORD *)(v33 + 32);
              if ( v40 )
              {
                *(_QWORD *)(v33 + 40) = 0;
                v59 = v34;
                qfree(v40);
                v34 = v59;
              }
              v33 += 72;
              v35 += 72;
              v41 = v34-- == 0;
            }
            while ( !v41 );
            v33 = *a1;
          }
          qfree(v33);
          *a1 = v63;
          a1[2] = v66;
          v28 = a1[1];
        }
        v10 = 0;
        v11 = v63 + 72 * v28;
        *(_BYTE *)v11 = -1;
        v12 = v67;
        *(_DWORD *)(v11 + 24) = 0;
        *(_BYTE *)(v11 + 28) = 1;
        *(_QWORD *)(v11 + 32) = 0;
        *(_QWORD *)(v11 + 56) = 0;
        *(_BYTE *)(v11 + 64) = 0;
        *(_OWORD *)(v11 + 8) = -1;
        *(_OWORD *)(v11 + 40) = 0;
        ++a1[1];
        if ( v12 < v7 )
          v10 = *v12++;
        v67 = v12;
        *(_BYTE *)v11 = v10;
        *(_QWORD *)(v11 + 8) = a2 + unpack_dq(&v67, v7) - 1;
        v13 = unpack_dq(&v67, v7) - 1;
        if ( v13 != -1 )
          v13 += a2;
        *(_QWORD *)(v11 + 16) = v13;
        *(_DWORD *)(v11 + 24) = unpack_dd(&v67, v7);
        v14 = v67;
        v15 = 0;
        if ( v67 < v7 )
        {
          v15 = *v67;
          v14 = v67 + 1;
        }
        *(_BYTE *)(v11 + 28) = v15;
        v67 = v14;
        v16 = unpack_dq(&v67, v7);
        v17 = v16 - 1;
        if ( v16 )
        {
          v18 = *(_QWORD *)(v11 + 40);
          v19 = *(_QWORD *)(v11 + 48);
          v20 = a2 + v17;
          v68 = v20;
          v21 = *(_QWORD *)(v11 + 32);
          if ( v19 < v18 + 1 )
          {
            v60 = v20;
            v44 = qvector_reserve(v11 + 32, v21, v18 + 1, 8);
            *(_QWORD *)(v11 + 32) = v44;
            v21 = v44;
            v20 = v60;
            v18 = *(_QWORD *)(v11 + 40);
          }
          *(_QWORD *)(v21 + 8 * v18) = v20;
          ++*(_QWORD *)(v11 + 40);
        }
        v22 = unpack_dq(&v67, v7);
        v23 = v22 - 1;
        if ( v22 )
        {
          v24 = *(_QWORD *)(v11 + 40);
          v25 = *(_QWORD *)(v11 + 48);
          v26 = a2 + v23;
          v68 = v26;
          v27 = *(_QWORD *)(v11 + 32);
          if ( v25 < v24 + 1 )
          {
            v61 = v26;
            v45 = qvector_reserve(v11 + 32, v27, v24 + 1, 8);
            *(_QWORD *)(v11 + 32) = v45;
            v27 = v45;
            v26 = v61;
            v24 = *(_QWORD *)(v11 + 40);
          }
          *(_QWORD *)(v27 + 8 * v24) = v26;
          ++*(_QWORD *)(v11 + 40);
        }
        *(_DWORD *)(v11 + 56) = unpack_dd(&v67, v7);
        if ( *(_BYTE *)v11 == 3 )
        {
          *(_DWORD *)(v11 + 60) = unpack_dd(&v67, v7);
        }
        else if ( *(_BYTE *)v11 == 4 )
        {
          v42 = v67;
          v43 = 0;
          if ( v67 < v7 )
          {
            v43 = *v67;
            v42 = v67 + 1;
          }
          v67 = v42;
          *(_BYTE *)(v11 + 64) = v43;
        }
      }
    }
  }
  return a1;
}

