__int64 __fastcall sub_4EC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v6; // r13d
  bool v8; // zf
  const char *v10; // rcx
  char *v11; // rdi
  char *v12; // rcx
  int v13; // esi
  char *v14; // rax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rbp
  char *v20; // r15
  void *v21; // rdi
  char *v22; // rdx
  __int64 v23; // r14
  __int64 i; // rbx
  char *v25; // rax
  void *v26; // rdi
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // rdi
  const char *v30; // rcx
  const char *v31; // rdx
  __m128i v32; // xmm0
  void *v33; // rdx
  __m128i v34; // xmm1
  __int64 v35; // [rsp+8h] [rbp-C0h]
  void *v36; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+18h] [rbp-B0h] BYREF
  void *v38; // [rsp+30h] [rbp-98h] BYREF
  __int128 v39; // [rsp+38h] [rbp-90h]
  void *ptr[4]; // [rsp+50h] [rbp-78h] BYREF
  int v41; // [rsp+76h] [rbp-52h]
  __int16 v42; // [rsp+7Ah] [rbp-4Eh]
  int v43; // [rsp+7Ch] [rbp-4Ch]
  __int16 v44; // [rsp+80h] [rbp-48h]
  int v45; // [rsp+82h] [rbp-46h]
  __int16 v46; // [rsp+86h] [rbp-42h]
  unsigned __int64 v47; // [rsp+88h] [rbp-40h]

  v4 = *(_DWORD *)(a3 + 8);
  v47 = __readfsqword(0x28u);
  if ( v4 && *(_DWORD *)(a3 + 12) )
  {
    v8 = *(_QWORD *)(a2 + 8) == 0;
    v37 = 0;
    v10 = s1;
    v36 = nullptr;
    v38 = nullptr;
    v39 = 0;
    if ( !v8 )
      v10 = *(const char **)a2;
    if ( (unsigned int)sub_4AF60((char **)&v38, nullptr, 0, (__int64)v10, 0, (__int64 *)&v36) )
    {
      v29 = *(_QWORD *)(a1 + 32);
      v30 = s1;
      if ( v37.m128i_i64[0] )
        v30 = (const char *)v36;
      v31 = s1;
      if ( *(_QWORD *)(a2 + 8) )
        v31 = *(const char **)a2;
      sub_4BD60(v29, (__int64)"Ignoring file: \"%s\": %s\n", v31, v30);
      v11 = (char *)v38;
      v6 = 0;
      if ( a4 )
      {
        v32 = _mm_loadu_si128((const __m128i *)(a4 + 8));
        v33 = v36;
        v34 = _mm_loadu_si128(&v37);
        v36 = *(void **)a4;
        *(_QWORD *)a4 = v33;
        *(__m128i *)(a4 + 8) = v34;
        v37 = v32;
      }
    }
    else
    {
      v11 = (char *)v38;
      v12 = (char *)v38 + 152 * v39;
      if ( v12 == v38 )
      {
LABEL_49:
        if ( a4 )
        {
          sub_4EA40((__int64)ptr, (int *)a3);
          sub_299F0((char **)a4);
          if ( ptr[0] )
          {
            ptr[1] = nullptr;
            j__free(ptr[0]);
          }
          v11 = (char *)v38;
        }
        v6 = 0;
      }
      else
      {
        v13 = *(_DWORD *)a3;
        v14 = (char *)v38;
        while ( 1 )
        {
          if ( (v45 = 0, v46 = 0, v43 = 0, v44 = 0, v41 = 0, v42 = 0, !v13) && *(_WORD *)(a3 + 4) == v42
            || *(_DWORD *)v14 == *(_DWORD *)a3 && *((_WORD *)v14 + 2) == *(_WORD *)(a3 + 4) )
          {
            v15 = *(_DWORD *)(a3 + 8);
            if ( !v15 || v15 == *((_DWORD *)v14 + 3) )
            {
              v16 = *(_DWORD *)(a3 + 12);
              if ( !v16 || v16 == *((_DWORD *)v14 + 4) )
              {
                v17 = *(_DWORD *)(a3 + 16);
                if ( *((_DWORD *)v14 + 5) == v17 || !v17 )
                  break;
              }
            }
          }
          v14 += 152;
          if ( v12 == v14 )
            goto LABEL_49;
        }
        v6 = 1;
      }
    }
    if ( v11 )
    {
      v35 = v39;
      if ( (_QWORD)v39 )
      {
        v18 = 0;
        v19 = 0;
        do
        {
          v20 = &v11[v18];
          v21 = *(void **)&v11[v18 + 128];
          if ( v21 )
          {
            *((_QWORD *)v20 + 17) = 0;
            j__free(v21);
          }
          v22 = *((char **)v20 + 10);
          if ( v22 )
          {
            v23 = *((_QWORD *)v20 + 11);
            if ( v23 )
            {
              for ( i = 0; i != v23; ++i )
              {
                v25 = &v22[24 * i];
                v26 = *(void **)v25;
                if ( *(_QWORD *)v25 )
                {
                  *((_QWORD *)v25 + 1) = 0;
                  j__free(v26);
                  v22 = *((char **)v20 + 10);
                }
              }
            }
            *((_QWORD *)v20 + 11) = 0;
            j__free(v22);
          }
          v27 = *((void **)v20 + 7);
          if ( v27 )
          {
            *((_QWORD *)v20 + 8) = 0;
            j__free(v27);
          }
          v28 = *((void **)v20 + 4);
          if ( v28 )
          {
            *((_QWORD *)v20 + 5) = 0;
            j__free(v28);
          }
          v11 = (char *)v38;
          ++v19;
          v18 += 152;
        }
        while ( v35 != v19 );
      }
      *(_QWORD *)&v39 = 0;
      j__free(v11);
    }
    if ( v36 )
    {
      v37.m128i_i64[0] = 0;
      j__free(v36);
    }
  }
  else
  {
    return 1;
  }
  return v6;
}
