unsigned __int64 __fastcall sub_3C8040(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r15d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 (*v15)(); // rax
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, _QWORD, __int64, _QWORD *); // r8
  _QWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  size_t v22; // rax
  _QWORD *v23; // r8
  size_t v24; // r9
  __int64 (*v25)(); // rdx
  int v26; // eax
  void *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // r14
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 *v38; // rbp
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // rax
  __m128i v42; // xmm0
  bool v43; // cf
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 *v46; // rbp
  __int64 v47; // r15
  __int64 v48; // rbx
  __int64 v49; // rax
  __m128i v50; // xmm0
  unsigned int v51; // [rsp+0h] [rbp-4B8h]
  char *v52; // [rsp+0h] [rbp-4B8h]
  __int64 v53; // [rsp+0h] [rbp-4B8h]
  size_t v54; // [rsp+0h] [rbp-4B8h]
  _QWORD *v55; // [rsp+0h] [rbp-4B8h]
  __int64 v56; // [rsp+0h] [rbp-4B8h]
  __int64 v57; // [rsp+0h] [rbp-4B8h]
  _QWORD *v58; // [rsp+10h] [rbp-4A8h]
  size_t v59; // [rsp+10h] [rbp-4A8h]
  size_t v60; // [rsp+18h] [rbp-4A0h]
  __int64 v61; // [rsp+30h] [rbp-488h]
  unsigned int v62; // [rsp+38h] [rbp-480h]
  _QWORD v63[3]; // [rsp+40h] [rbp-478h] BYREF
  __int128 v64; // [rsp+58h] [rbp-460h]
  char s[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v66; // [rsp+478h] [rbp-40h]

  v3 = a2;
  v66 = __readfsqword(0x28u);
  a1[1] = 0;
  a1[4] = 0;
  *((_OWORD *)a1 + 1) = 0;
  sub_3C7C40();
  *a1 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, -1);
  v5 = (int)v4;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 184LL))(*a1, v4);
  v6 = a1[2];
  if ( v5 != v6 )
  {
    LODWORD(v64) = 0;
    memset(v63, 0, sizeof(v63));
    if ( v5 < v6 )
    {
      v31 = v5;
      do
      {
        v32 = (_QWORD *)(a1[1] + 32 * v31);
        if ( *v32 )
        {
          v32[1] = 0;
          qfree();
        }
        ++v31;
      }
      while ( v31 < v6 );
      a1[2] = v5;
    }
    else
    {
      v7 = a1[1];
      v8 = a1[3];
      if ( (unsigned __int64)v63 < v7 || (unsigned __int64)v63 >= 32 * v8 + v7 )
      {
        if ( v8 < v5 )
        {
          v35 = qvector_reserve();
          v36 = a1[3];
          v37 = a1[2];
          v56 = v35;
          a1[3] = v8;
          v38 = (__int64 *)a1[1];
          v39 = v37 - 1;
          if ( v39 >= 0 )
          {
            v40 = v35;
            do
            {
              v41 = *v38;
              v42 = _mm_loadu_si128((const __m128i *)(v38 + 1));
              *v38 = 0;
              v38[2] = 0;
              *(_QWORD *)v40 = v41;
              *(__m128i *)(v40 + 8) = v42;
              *(_DWORD *)(v40 + 24) = *((_DWORD *)v38 + 6);
              if ( *v38 )
              {
                v38[1] = 0;
                qfree();
              }
              v38 += 4;
              v40 += 32;
              v43 = v39-- == 0;
            }
            while ( !v43 );
          }
          qfree();
          v6 = a1[2];
          a1[1] = v56;
          a1[3] = v36;
        }
        if ( v6 < v5 )
        {
          do
          {
            v9 = v6++;
            v10 = a1[1] + 32 * v9;
            *(_QWORD *)v10 = 0;
            *(_DWORD *)(v10 + 24) = 0;
            *(_OWORD *)(v10 + 8) = 0;
          }
          while ( v5 != v6 );
        }
      }
      else
      {
        if ( v8 < v5 )
        {
          v44 = qvector_reserve();
          v45 = a1[3];
          v46 = (__int64 *)a1[1];
          a1[3] = v8;
          v57 = v45;
          if ( a1[2] - 1LL >= 0 )
          {
            v47 = v44;
            v48 = a1[2] - 1LL;
            do
            {
              v49 = *v46;
              v50 = _mm_loadu_si128((const __m128i *)(v46 + 1));
              *v46 = 0;
              v46[2] = 0;
              *(_QWORD *)v47 = v49;
              *(__m128i *)(v47 + 8) = v50;
              *(_DWORD *)(v47 + 24) = *((_DWORD *)v46 + 6);
              if ( *v46 )
              {
                v46[1] = 0;
                qfree();
              }
              v46 += 4;
              v47 += 32;
              v43 = v48-- == 0;
            }
            while ( !v43 );
            v3 = a2;
          }
          qfree();
          v6 = a1[2];
          a1[1] = v44;
          a1[3] = v57;
        }
        if ( v6 < v5 )
        {
          do
          {
            v33 = v6++;
            v34 = a1[1] + 32 * v33;
            *(_QWORD *)v34 = 0;
            *(_DWORD *)(v34 + 24) = 0;
            *(_OWORD *)(v34 + 8) = 0;
          }
          while ( v5 != v6 );
        }
      }
      a1[2] = v5;
    }
  }
  v11 = node_iterator_goup();
  v12 = 0;
  v61 = *(_QWORD *)v11;
  v62 = *(_DWORD *)(v11 + 8);
LABEL_9:
  v13 = 0;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) != v62 || v3 != v61 )
  {
    while ( 1 )
    {
      if ( v13 >= (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 96LL))(v3, v62) )
      {
        if ( v12 < (int)v62 )
        {
          v20 = 4LL * v12;
          do
          {
            *(_DWORD *)(*(_QWORD *)(*a1 + 80LL) + v20) = 0x7FFFFFFF;
            v20 += 4;
          }
          while ( 4 * (v12 + (unsigned __int64)(v62 - v12)) != v20 );
          v12 = v62;
        }
        ++v12;
        v21 = qsnprintf();
        v52 = &s[v21];
        (*(void (__fastcall **)(__int64, char *, _QWORD, _QWORD))(*(_QWORD *)v3 + 16LL))(
          v3,
          v52,
          (unsigned int)(1024 - v21),
          v62);
        if ( !*v52 )
          *(v52 - 2) = 0;
        v53 = a1[1] + 32LL * (int)v62;
        v22 = strlen(s);
        v23 = (_QWORD *)v53;
        v24 = v22;
        if ( v22 )
        {
          v28 = *(void **)v53;
          v29 = v22 + 1;
          if ( *(_QWORD *)(v53 + 16) < v22 + 1 )
          {
            v60 = v22;
            v59 = v22 + 1;
            v30 = qvector_reserve();
            v23 = (_QWORD *)v53;
            v24 = v60;
            v28 = (void *)v30;
            v29 = v59;
            *(_QWORD *)v53 = v30;
          }
          v23[1] = v29;
          v58 = v23;
          v54 = v24;
          memmove(v28, s, v24);
          v23 = v58;
          v24 = v54;
          *(_BYTE *)(*v58 + v54) = 0;
        }
        else
        {
          *(_QWORD *)(v53 + 8) = 0;
        }
        v25 = *(__int64 (**)())(*(_QWORD *)v3 + 136LL);
        v26 = -1;
        if ( v25 != sub_615C0 )
        {
          v55 = v23;
          v26 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 (*)(), __int64 (*)(), _QWORD *, size_t))v25)(
                  v3,
                  v62,
                  v25,
                  sub_615C0,
                  v23,
                  v24);
          v23 = v55;
        }
        *((_DWORD *)v23 + 6) = v26;
        ++v62;
        node_iterator_goup();
        goto LABEL_9;
      }
      v14 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 112LL))(
              v3,
              v62,
              (unsigned int)v13);
      v15 = *(__int64 (**)())(*(_QWORD *)v3 + 144LL);
      if ( v15 == sub_1307F0 )
        break;
      v51 = v14;
      v19 = ((__int64 (__fastcall *)(__int64, _QWORD))v15)(v3, v62);
      v16 = *a1;
      LODWORD(v63[0]) = v19;
      v64 = 0;
      v14 = v51;
      HIDWORD(v63[1]) = -1;
      *(_QWORD *)((char *)v63 + 4) = 0xFFFFFFFF00000001LL;
      v63[2] = 0;
      v17 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v16 + 208LL);
      if ( v19 == -1 )
        goto LABEL_13;
      v18 = v63;
LABEL_14:
      v17(v16, v62, v14, v18);
      if ( v63[2] )
      {
        *(_QWORD *)&v64 = 0;
        qfree();
      }
      ++v13;
    }
    v16 = *a1;
    *(_OWORD *)&v63[1] = 0xFFFFFFFFFFFFFFFFLL;
    v63[0] = 0x1FFFFFFFFLL;
    v64 = 0;
    v17 = *(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)v16 + 208LL);
LABEL_13:
    v18 = nullptr;
    goto LABEL_14;
  }
  return v66 - __readfsqword(0x28u);
}

