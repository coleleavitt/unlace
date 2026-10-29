unsigned __int64 __fastcall sub_3CC1C0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r15d
  int v14; // r12d
  __int64 v15; // rdx
  __int64 (*v16)(); // rax
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, _QWORD, __int64, _QWORD *); // r8
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  size_t v23; // rax
  __int64 *v24; // r8
  size_t v25; // r9
  __int64 (*v26)(); // rdx
  int v27; // eax
  void *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // r14
  __int64 *v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // r14
  __int64 v40; // rbp
  __int64 v41; // r14
  __int64 v42; // r15
  __int64 v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rdi
  bool v46; // cf
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r15
  __int64 v51; // rbx
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rdi
  unsigned int v55; // [rsp+0h] [rbp-4B8h]
  char *v56; // [rsp+0h] [rbp-4B8h]
  __int64 *v57; // [rsp+0h] [rbp-4B8h]
  size_t v58; // [rsp+0h] [rbp-4B8h]
  __int64 *v59; // [rsp+0h] [rbp-4B8h]
  __int64 v60; // [rsp+0h] [rbp-4B8h]
  __int64 v61; // [rsp+0h] [rbp-4B8h]
  __int64 *v62; // [rsp+10h] [rbp-4A8h]
  __int64 v63; // [rsp+10h] [rbp-4A8h]
  size_t v64; // [rsp+18h] [rbp-4A0h]
  __int64 v65; // [rsp+30h] [rbp-488h]
  unsigned int v66; // [rsp+38h] [rbp-480h]
  _QWORD v67[3]; // [rsp+40h] [rbp-478h] BYREF
  __int128 v68; // [rsp+58h] [rbp-460h]
  char s[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v70; // [rsp+478h] [rbp-40h]

  v3 = a2;
  v70 = __readfsqword(0x28u);
  a1[1] = 0;
  a1[4] = 0;
  *((_OWORD *)a1 + 1) = 0;
  sub_3CBDC0();
  *a1 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, -1);
  v5 = (int)v4;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 184LL))(*a1, v4);
  v6 = a1[2];
  if ( v5 != v6 )
  {
    LODWORD(v68) = 0;
    memset(v67, 0, sizeof(v67));
    if ( v5 < v6 )
    {
      v32 = v5;
      do
      {
        v33 = (__int64 *)(a1[1] + 32 * v32);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34);
        }
        ++v32;
      }
      while ( v32 < v6 );
      a1[2] = v5;
    }
    else
    {
      v7 = a1[1];
      v8 = a1[3];
      v9 = a1 + 1;
      if ( (unsigned __int64)v67 < v7 || (unsigned __int64)v67 >= 32 * v8 + v7 )
      {
        if ( v8 < v5 )
        {
          v37 = qvector_reserve((__int64)v9, 0, v5, 32);
          v38 = a1[3];
          v39 = a1[2];
          v60 = v37;
          a1[3] = v8;
          v40 = a1[1];
          v41 = v39 - 1;
          if ( v41 >= 0 )
          {
            v42 = v37;
            do
            {
              v43 = *(_QWORD *)v40;
              v44 = _mm_loadu_si128((const __m128i *)(v40 + 8));
              *(_QWORD *)v40 = 0;
              *(_QWORD *)(v40 + 16) = 0;
              *(_QWORD *)v42 = v43;
              *(__m128i *)(v42 + 8) = v44;
              *(_DWORD *)(v42 + 24) = *(_DWORD *)(v40 + 24);
              v45 = *(_QWORD *)v40;
              if ( *(_QWORD *)v40 )
              {
                *(_QWORD *)(v40 + 8) = 0;
                qfree(v45);
              }
              v40 += 32;
              v42 += 32;
              v46 = v41-- == 0;
            }
            while ( !v46 );
            v40 = a1[1];
          }
          qfree(v40);
          v6 = a1[2];
          a1[1] = v60;
          a1[3] = v38;
        }
        if ( v6 < v5 )
        {
          do
          {
            v10 = v6++;
            v11 = a1[1] + 32 * v10;
            *(_QWORD *)v11 = 0;
            *(_DWORD *)(v11 + 24) = 0;
            *(_OWORD *)(v11 + 8) = 0;
          }
          while ( v5 != v6 );
        }
      }
      else
      {
        if ( v8 < v5 )
        {
          v47 = qvector_reserve((__int64)v9, 0, v5, 32);
          v48 = a1[3];
          v49 = a1[1];
          a1[3] = v8;
          v61 = v48;
          if ( a1[2] - 1LL >= 0 )
          {
            v50 = v47;
            v51 = a1[2] - 1LL;
            do
            {
              v52 = *(_QWORD *)v49;
              v53 = _mm_loadu_si128((const __m128i *)(v49 + 8));
              *(_QWORD *)v49 = 0;
              *(_QWORD *)(v49 + 16) = 0;
              *(_QWORD *)v50 = v52;
              *(__m128i *)(v50 + 8) = v53;
              *(_DWORD *)(v50 + 24) = *(_DWORD *)(v49 + 24);
              v54 = *(_QWORD *)v49;
              if ( *(_QWORD *)v49 )
              {
                *(_QWORD *)(v49 + 8) = 0;
                qfree(v54);
              }
              v49 += 32;
              v50 += 32;
              v46 = v51-- == 0;
            }
            while ( !v46 );
            v3 = a2;
            v49 = a1[1];
          }
          qfree(v49);
          v6 = a1[2];
          a1[1] = v47;
          a1[3] = v61;
        }
        if ( v6 < v5 )
        {
          do
          {
            v35 = v6++;
            v36 = a1[1] + 32 * v35;
            *(_QWORD *)v36 = 0;
            *(_DWORD *)(v36 + 24) = 0;
            *(_OWORD *)(v36 + 8) = 0;
          }
          while ( v5 != v6 );
        }
      }
      a1[2] = v5;
    }
  }
  v12 = node_iterator_goup();
  v13 = 0;
  v65 = *(_QWORD *)v12;
  v66 = *(_DWORD *)(v12 + 8);
LABEL_9:
  v14 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) != v66 || v3 != v65 )
  {
    while ( 1 )
    {
      if ( v14 >= (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, v66) )
      {
        if ( v13 < (int)v66 )
        {
          v21 = 4LL * v13;
          do
          {
            *(_DWORD *)(*(_QWORD *)(*a1 + 80LL) + v21) = 0x7FFFFFFF;
            v21 += 4;
          }
          while ( 4 * (v13 + (unsigned __int64)(v66 - v13)) != v21 );
          v13 = v66;
        }
        ++v13;
        v22 = qsnprintf();
        v56 = &s[v22];
        (*(void (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v3 + 16LL))(
          v3,
          v56,
          (unsigned int)(1024 - v22),
          v66);
        if ( !*v56 )
          *(v56 - 2) = 0;
        v57 = (__int64 *)(a1[1] + 32LL * (int)v66);
        v23 = strlen(s);
        v24 = v57;
        v25 = v23;
        if ( v23 )
        {
          v29 = (void *)*v57;
          v30 = v23 + 1;
          if ( v57[2] < v23 + 1 )
          {
            v64 = v23;
            v63 = v23 + 1;
            v31 = qvector_reserve((__int64)v57, *v57, v30, 1);
            v24 = v57;
            v25 = v64;
            v29 = (void *)v31;
            v30 = v63;
            *v57 = v31;
          }
          v24[1] = v30;
          v62 = v24;
          v58 = v25;
          memmove(v29, s, v25);
          v24 = v62;
          v25 = v58;
          *(_BYTE *)(*v62 + v58) = 0;
        }
        else
        {
          v57[1] = 0;
        }
        v26 = *(__int64 (**)())(*(_QWORD *)v3 + 136LL);
        v27 = -1;
        if ( v26 != sub_65000 )
        {
          v59 = v24;
          v27 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (*)(), __int64 (*)(), __int64 *, size_t))v26)(
                  v3,
                  v66,
                  v26,
                  sub_65000,
                  v24,
                  v25);
          v24 = v59;
        }
        *((_DWORD *)v24 + 6) = v27;
        ++v66;
        node_iterator_goup();
        goto LABEL_9;
      }
      v15 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 112LL))(
              v3,
              v66,
              (unsigned int)v14);
      v16 = *(__int64 (**)())(*(_QWORD *)v3 + 144LL);
      if ( v16 == sub_134230 )
        break;
      v55 = v15;
      v20 = ((__int64 (__fastcall *)(__int64, _QWORD))v16)(v3, v66);
      v17 = *a1;
      LODWORD(v67[0]) = v20;
      v68 = 0;
      v15 = v55;
      HIDWORD(v67[1]) = -1;
      *(_QWORD *)((char *)v67 + 4) = 0xFFFFFFFF00000001LL;
      v67[2] = 0;
      v18 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v17 + 208LL);
      if ( v20 == -1 )
        goto LABEL_13;
      v19 = v67;
LABEL_14:
      v18(v17, v66, v15, v19);
      if ( v67[2] )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v67[2]);
      }
      ++v14;
    }
    v17 = *a1;
    *(_OWORD *)&v67[1] = 0xFFFFFFFFFFFFFFFFLL;
    v67[0] = 0x1FFFFFFFFLL;
    v68 = 0;
    v18 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v17 + 208LL);
LABEL_13:
    v19 = nullptr;
    goto LABEL_14;
  }
  return v70 - __readfsqword(0x28u);
}

