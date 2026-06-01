__int64 __fastcall sub_16F00(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  size_t v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, unsigned __int8, __int64); // rax
  unsigned int *v10; // rax
  unsigned int *v11; // r12
  __int64 v12; // rax
  int v13; // r15d
  int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  void *v26; // rax
  void *v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rbx
  int v30; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v31; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v32; // [rsp+8h] [rbp-C0h]
  size_t n; // [rsp+10h] [rbp-B8h]
  size_t na; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-B0h]
  _QWORD v36[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v38; // [rsp+38h] [rbp-90h]
  unsigned __int64 v39; // [rsp+40h] [rbp-88h]
  __m128i v40; // [rsp+50h] [rbp-78h] BYREF
  void *v41; // [rsp+60h] [rbp-68h]
  __int128 v42; // [rsp+68h] [rbp-60h]
  _BYTE src[10]; // [rsp+7Eh] [rbp-4Ah] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  sub_24D10(&v37, 44);
  v4 = pack_dq() - (_QWORD)src;
  v5 = v4;
  if ( !v4 )
    goto LABEL_7;
  v6 = v38;
  v7 = v38 + v4;
  if ( !__CFADD__(v38, v4) )
    goto LABEL_31;
  if ( v38 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v7 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_31:
    v22 = v37;
    v23 = v38;
    if ( v39 < v7 )
    {
      v32 = v7;
      v37 = qvector_reserve();
      v22 = v37;
      v7 = v32;
      v23 = v38;
    }
    v31 = v7;
    memset((void *)(v22 + v23), 0, v7 - v23);
    v38 = v31;
    goto LABEL_6;
  }
  if ( v38 != 0x7FFFFFFFFFFFFFFFLL )
    v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
  memcpy((void *)(v37 + v6), src, v5);
LABEL_7:
  v8 = a1 + 864;
  v9 = *(__int64 (__fastcall **)(__int64, unsigned __int8, __int64))(*(_QWORD *)(a1 + 864) + 16LL);
  if ( v9 == sub_9440 )
    v10 = (unsigned int *)sub_216D0(v8, 44, &v37, 0);
  else
    v10 = (unsigned int *)v9(v8, 44u, (__int64)&v37);
  v11 = v10;
  if ( v10 )
  {
    v12 = *v10;
    v36[0] = (char *)v11 + 5;
    v36[1] = (char *)v11 + v12 + 5;
    v13 = unpack_dd() - 2;
    if ( v13 > 0 )
    {
      v14 = unpack_dd();
      v15 = a2[1];
      v16 = v14;
      v30 = v14;
      if ( v14 != v15 )
      {
        v41 = nullptr;
        v40 = 0;
        v42 = 0;
        if ( v14 < v15 )
        {
          v24 = v14;
          do
          {
            v25 = *a2 + 40 * v24;
            if ( *(_QWORD *)(v25 + 16) )
            {
              *(_QWORD *)(v25 + 24) = 0;
              n = v15;
              qfree();
              v15 = n;
            }
            ++v24;
          }
          while ( v24 < v15 );
        }
        else
        {
          v17 = a2[2];
          if ( (unsigned __int64)&v40 < *a2 || (unsigned __int64)&v40 >= *a2 + 40 * v17 )
          {
            if ( v17 < v16 )
            {
              *a2 = qvector_reserve();
              v15 = a2[1];
            }
            while ( v15 < v16 )
            {
              v28 = _mm_load_si128(&v40);
              v29 = *a2 + 40 * v15;
              *(_QWORD *)(v29 + 16) = 0;
              *(__m128i *)v29 = v28;
              *(_OWORD *)(v29 + 24) = 0;
              if ( (_QWORD)v42 )
              {
                v35 = v15;
                na = v42;
                v26 = (void *)qalloc_or_throw();
                *(_QWORD *)(v29 + 16) = v26;
                v27 = v41;
                *(_QWORD *)(v29 + 32) = na;
                memcpy(v26, v27, na);
                v15 = v35;
                *(_QWORD *)(v29 + 24) = na;
              }
              ++v15;
            }
          }
          else
          {
            if ( v17 < v16 )
            {
              *a2 = qvector_reserve();
              v15 = a2[1];
            }
            if ( v15 < v16 )
            {
              v18 = 40 * v15;
              do
              {
                ++v15;
                v19 = v18 + *a2;
                v18 += 40;
                *(_QWORD *)(v19 + 16) = 0;
                *(_OWORD *)v19 = 0;
                *(_OWORD *)(v19 + 24) = 0;
              }
              while ( v16 != v15 );
            }
          }
        }
        a2[1] = v16;
      }
      if ( v30 > 0 )
      {
        v20 = 0;
        do
        {
          sub_21E40(v20 + *a2, v36);
          v20 += 40;
        }
        while ( v20 != 40LL * (unsigned int)v30 );
      }
    }
    qfree();
  }
  else
  {
    v13 = 0;
  }
  if ( v37 )
  {
    v38 = 0;
    qfree();
  }
  return (unsigned int)v13;
}

