_QWORD *__fastcall sub_6BF50(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r12
  const char *v5; // rax
  _QWORD *v6; // r12
  __int64 v8; // rdi
  __int64 v9; // r14
  const char *v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rbp
  __m128i v16; // xmm2
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm3
  __int64 v30; // r15
  size_t v31; // rax
  size_t v32; // r8
  void *v33; // rdi
  size_t v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-98h]
  __int64 v37; // [rsp+0h] [rbp-98h]
  size_t v38; // [rsp+0h] [rbp-98h]
  size_t v39; // [rsp+0h] [rbp-98h]
  __int64 v40; // [rsp+8h] [rbp-90h]
  size_t v41; // [rsp+8h] [rbp-90h]
  __m128i v42; // [rsp+10h] [rbp-88h] BYREF
  __int64 v43; // [rsp+20h] [rbp-78h]
  __int64 v44; // [rsp+28h] [rbp-70h]
  int v45; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v46; // [rsp+40h] [rbp-58h] BYREF
  char v47; // [rsp+48h] [rbp-50h]
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v3 = (_QWORD *)a2[4];
  v48 = __readfsqword(0x28u);
  v45 = 0;
  v4 = v3[32];
  v46 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, int *, __int64 *))(v4 + 112))(
         *(_QWORD *)(*v3 + 24LL),
         58,
         &v45,
         &v46) )
  {
    v5 = (const char *)(*(__int64 (__fastcall **)(__int64))(v4 + 464))(v46);
    sub_1D740((__int64)"ERROR: %s\n", v5);
  }
  v6 = nullptr;
  if ( v45 )
  {
    v8 = a2[4];
    v46 = 0;
    v47 = 0;
    if ( (unsigned __int8)sub_96EC0(v8, &v46, 58)
      && (v9 = v46, (v10 = (const char *)sub_87BE0(a2[3], (unsigned int)(v46 - 1))) != nullptr) )
    {
      v11 = operator new(0x30u);
      v12 = a2[3];
      v13 = a2[2];
      *(_DWORD *)(v11 + 8) = 1;
      v6 = (_QWORD *)v11;
      *(_QWORD *)(v11 + 16) = 0;
      *(_DWORD *)(v11 + 40) = 0;
      *(_OWORD *)(v11 + 24) = 0;
      v14 = *v10 == 0;
      *(_QWORD *)v11 = &off_C8728;
      if ( !v14 )
      {
        v36 = v13;
        v44 = v11 + 16;
        v15 = qvector_reserve(v11 + 16, 0, 1, 48);
        v16 = (__m128i)v12;
        v17 = v6[4];
        v18 = v6[2];
        v19 = v6[3];
        v20 = v15;
        v6[4] = 0;
        v43 = v17;
        v21 = v18;
        v42 = _mm_unpacklo_epi64((__m128i)v36, v16);
        v22 = v19 - 1;
        if ( v22 >= 0 )
        {
          do
          {
            *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)v21);
            v23 = *(_QWORD *)(v21 + 16);
            v24 = _mm_loadu_si128((const __m128i *)(v21 + 24));
            *(_QWORD *)(v21 + 16) = 0;
            *(_QWORD *)(v20 + 16) = v23;
            *(__m128i *)(v20 + 24) = v24;
            v25 = *(_QWORD *)(v21 + 40);
            *(_QWORD *)(v21 + 32) = 0;
            *(_QWORD *)(v20 + 40) = v25;
            v26 = *(_QWORD *)(v21 + 16);
            if ( v26 )
            {
              *(_QWORD *)(v21 + 24) = 0;
              v40 = v20;
              v37 = v21;
              qfree(v26);
              v20 = v40;
              v21 = v37;
            }
            v21 += 48;
            v20 += 48;
          }
          while ( v22-- != 0 );
          v18 = v6[2];
        }
        qfree(v18);
        v28 = v43;
        v6[2] = v15;
        v29 = _mm_load_si128(&v42);
        v6[4] = v28;
        v30 = v15 + 48LL * v6[3];
        *(_OWORD *)v30 = 0;
        *(_QWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 40) = -1;
        *(_OWORD *)(v30 + 24) = 0;
        ++v6[3];
        *(__m128i *)v30 = v29;
        v31 = strlen(v10);
        v32 = v31;
        if ( v31 )
        {
          v33 = *(void **)(v30 + 16);
          v34 = v31 + 1;
          if ( *(_QWORD *)(v30 + 32) < v31 + 1 )
          {
            v41 = v31;
            v39 = v31 + 1;
            v35 = qvector_reserve(v30 + 16, v33, v34, 1);
            v32 = v41;
            v34 = v39;
            *(_QWORD *)(v30 + 16) = v35;
            v33 = (void *)v35;
          }
          *(_QWORD *)(v30 + 24) = v34;
          v38 = v32;
          memmove(v33, v10, v32);
          *(_BYTE *)(*(_QWORD *)(v30 + 16) + v38) = 0;
        }
        else
        {
          *(_QWORD *)(v30 + 24) = 0;
        }
        *(_QWORD *)(v30 + 40) = v9;
      }
    }
    else
    {
      v6 = nullptr;
    }
  }
  *a1 = v6;
  return a1;
}

