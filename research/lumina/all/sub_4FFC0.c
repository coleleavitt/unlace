_BOOL8 __fastcall sub_4FFC0(__int64 a1, void **a2, int *a3, char a4)
{
  __int64 v5; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // rdx
  __m128i v14; // xmm0
  char *v15; // rdi
  __m128i v16; // xmm1
  __int64 v17; // r12
  __int64 v18; // rbp
  char *v19; // r15
  void *v20; // rdi
  char *v21; // rdx
  __int64 v22; // r14
  __int64 i; // rbx
  char *v24; // rax
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // r15
  int v32; // esi
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int64 v37; // [rsp+18h] [rbp-A0h]
  _QWORD v38[2]; // [rsp+20h] [rbp-98h] BYREF
  void *ptr; // [rsp+30h] [rbp-88h] BYREF
  __m128i v40; // [rsp+38h] [rbp-80h] BYREF
  int v41; // [rsp+54h] [rbp-64h]
  __int16 v42; // [rsp+58h] [rbp-60h]
  int v43; // [rsp+5Ah] [rbp-5Eh]
  __int16 v44; // [rsp+5Eh] [rbp-5Ah]
  int v45; // [rsp+60h] [rbp-58h] BYREF
  __int16 v46; // [rsp+64h] [rbp-54h]
  __int64 v47; // [rsp+68h] [rbp-50h]
  int v48; // [rsp+70h] [rbp-48h]
  int v49; // [rsp+74h] [rbp-44h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !a2 || !a3[2] || (v5 = (unsigned int)a3[3], !(_DWORD)v5) )
  {
    if ( !unk_2439A0 )
      sub_198E10(3154);
    BUG();
  }
  interr_exc_t___vtable_at_1764016(
    0x57u,
    (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
    *(const __m128i **)(a1 + 408),
    (const __m128i *)((char *)&dword_0 + 2),
    v5,
    (__int64)&interr_exc_t___vtable_at_1764016);
  v37 = *(_QWORD *)(a1 + 424);
  sub_19A520(v37);
  v38[1] = a1;
  v38[0] = &off_2367D0;
  sub_5A420(v38, 3, v8, v9, v10, v11);
  v13 = *(_QWORD *)(a1 + 136);
  ptr = nullptr;
  v40 = 0;
  if ( v13 )
  {
    ptr = (void *)sub_1987B0(&ptr, 0, v13, 152);
    v29 = *(_QWORD *)(a1 + 128);
    v30 = v29 + 152LL * *(_QWORD *)(a1 + 136);
    if ( v30 != v29 )
    {
      v31 = *(_QWORD *)(a1 + 128);
      do
      {
        v32 = *a3;
        v43 = 0;
        v44 = 0;
        v45 = 0;
        v46 = 0;
        v41 = 0;
        v42 = 0;
        if ( !v32 && *((_WORD *)a3 + 2) == v42 || *(_DWORD *)v31 == *a3 && *(_WORD *)(v31 + 4) == *((_WORD *)a3 + 2) )
        {
          v33 = a3[2];
          if ( !v33 || v33 == *(_DWORD *)(v31 + 12) )
          {
            v34 = a3[3];
            if ( !v34 || v34 == *(_DWORD *)(v31 + 16) )
            {
              v35 = a3[4];
              if ( !v35 || v35 == *(_DWORD *)(v31 + 20) )
              {
                if ( !a4
                  || (v36 = *(_DWORD *)v31,
                      v48 = *(_DWORD *)(v31 + 20),
                      v49 = 0,
                      v45 = v36,
                      v46 = *(_WORD *)(v31 + 4),
                      v47 = *(_QWORD *)(v31 + 12),
                      (unsigned int)sub_4F9E0(a1, nullptr, (__int64)&v45)) )
                {
                  sub_4D780((__int64 *)&ptr, (int *)v31);
                }
              }
            }
          }
        }
        v31 += 152;
      }
      while ( v30 != v31 );
    }
  }
  interr_exc_t___vtable_at_1764016(
    0x57u,
    (__int64 (__fastcall ***)(_QWORD))((char *)&dword_0 + 3),
    *(const __m128i **)(a1 + 408),
    (const __m128i *)((char *)&dword_0 + 1),
    (__int64)&interr_exc_t___vtable_at_1764016,
    v12);
  v14 = _mm_loadu_si128(&v40);
  v15 = (char *)*a2;
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = ptr;
  ptr = v15;
  *(__m128i *)(a2 + 1) = v14;
  v40 = v16;
  if ( v15 )
  {
    if ( v16.m128i_i64[0] )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = &v15[v17];
        v20 = *(void **)&v15[v17 + 128];
        if ( v20 )
        {
          *((_QWORD *)v19 + 17) = 0;
          j__free(v20);
        }
        v21 = *((char **)v19 + 10);
        if ( v21 )
        {
          v22 = *((_QWORD *)v19 + 11);
          if ( v22 )
          {
            for ( i = 0; i != v22; ++i )
            {
              v24 = &v21[24 * i];
              v25 = *(void **)v24;
              if ( *(_QWORD *)v24 )
              {
                *((_QWORD *)v24 + 1) = 0;
                j__free(v25);
                v21 = *((char **)v19 + 10);
              }
            }
          }
          *((_QWORD *)v19 + 11) = 0;
          j__free(v21);
        }
        v26 = *((void **)v19 + 7);
        if ( v26 )
        {
          *((_QWORD *)v19 + 8) = 0;
          j__free(v26);
        }
        v27 = *((void **)v19 + 4);
        if ( v27 )
        {
          *((_QWORD *)v19 + 5) = 0;
          j__free(v27);
        }
        ++v18;
        v15 = (char *)ptr;
        v17 += 152;
      }
      while ( v18 != v16.m128i_i64[0] );
    }
    v40.m128i_i64[0] = 0;
    j__free(v15);
  }
  sub_19A570(v37);
  return v14.m128i_i64[0] != 0;
}
