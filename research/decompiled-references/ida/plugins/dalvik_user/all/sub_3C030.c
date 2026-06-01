__int64 __fastcall sub_3C030(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4, unsigned __int64 a5)
{
  __int64 v8; // rbx
  char *v10; // rax
  unsigned int v11; // r14d
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  const char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __m128i v19; // xmm1
  __int64 v20; // rbx
  size_t v21; // r15
  void *v22; // rax
  void *v23; // rdi
  bool v24; // zf
  char *v25; // rax
  int v26; // eax
  char *v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  void *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rax
  __m128i v35; // xmm0
  char *v36; // rsi
  char *s; // [rsp+0h] [rbp-C0h]
  __int64 v38; // [rsp+8h] [rbp-B8h]
  __m128i v39; // [rsp+18h] [rbp-A8h] BYREF
  char *v40; // [rsp+28h] [rbp-98h] BYREF
  __int128 v41; // [rsp+30h] [rbp-90h]
  char *v42; // [rsp+48h] [rbp-78h] BYREF
  __int128 v43; // [rsp+50h] [rbp-70h]
  void *v44; // [rsp+68h] [rbp-58h] BYREF
  __m128i v45; // [rsp+70h] [rbp-50h] BYREF
  unsigned __int64 v46; // [rsp+80h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8);
  v46 = __readfsqword(0x28u);
  v41 = 0;
  v40 = nullptr;
  if ( !(unsigned __int8)sub_36D30((__int64 *)&v40, a4) )
    goto LABEL_5;
  v10 = &byte_7FAF1;
  if ( (_QWORD)v41 )
    v10 = v40;
  if ( *v10 != 91
    || (v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8),
        v14 = sub_135E0(v8, a4),
        (v15 = *(_QWORD *)(v13 + 8)) == 0)
    || (v11 = sub_26100((_QWORD *)(v14 + 1040), &v39, v15, a5), !(_BYTE)v11) )
  {
LABEL_5:
    v11 = 0;
    goto LABEL_6;
  }
  v16 = nptr;
  if ( (_QWORD)v41 )
    v16 = v40;
  s = (char *)(v16 + 1);
  v17 = operator new(0x58u);
  v18 = *(_QWORD *)(v13 + 8);
  v19 = _mm_load_si128(&v39);
  *(_QWORD *)v17 = &off_7D580;
  v20 = v17;
  *(_QWORD *)(v17 + 8) = 0;
  *(_QWORD *)(v17 + 48) = 0;
  *(_OWORD *)(v17 + 16) = 0;
  *(__m128i *)(v17 + 32) = v19;
  *(_OWORD *)(v17 + 56) = 0;
  v38 = v18;
  v21 = strlen(s);
  v22 = (void *)qvector_reserve();
  *(_QWORD *)(v20 + 48) = v22;
  v23 = v22;
  *(_QWORD *)(v20 + 56) = v21 + 1;
  memmove(v22, s, v21);
  *(_BYTE *)(*(_QWORD *)(v20 + 48) + v21) = 0;
  v24 = *(_QWORD *)(v20 + 56) == 0;
  v25 = &byte_7FAF1;
  *(_QWORD *)(v20 + 72) = v38;
  *(_DWORD *)(v20 + 80) = a5;
  if ( !v24 )
    v25 = *(char **)(v20 + 48);
  if ( *v25 == 76 )
  {
    v44 = nullptr;
    v45 = 0;
    v28 = sub_135E0(v23, s);
    v29 = *(_QWORD *)(v20 + 40);
    if ( v29 )
    {
      v33 = sub_25C00((_QWORD *)(v28 + 1040), &v44, v29);
      v30 = v44;
      if ( v33 )
      {
        v30 = *(void **)(v20 + 48);
        v34 = *(_QWORD *)(v20 + 64);
        *(_QWORD *)(v20 + 48) = v44;
        v35 = _mm_loadu_si128(&v45);
        v44 = v30;
        v45.m128i_i64[1] = v34;
        *(__m128i *)(v20 + 56) = v35;
      }
    }
    else
    {
      v30 = v44;
    }
    if ( v30 )
    {
      v45.m128i_i64[0] = 0;
      qfree();
    }
  }
  v26 = dword_7FC28;
  *(_QWORD *)(a1 + 8) = v20;
  v42 = nullptr;
  *(_DWORD *)a1 = v26;
  v43 = 0;
  if ( a2 )
  {
    if ( !(unsigned __int8)sub_36D30((__int64 *)&v42, a2) )
      goto LABEL_21;
    v27 = &byte_7FAF1;
    if ( (_QWORD)v43 )
      v27 = v42;
    if ( *v27 != 76 )
      goto LABEL_21;
    v44 = nullptr;
    v45 = 0;
    v31 = sub_135E0(&v42, a2);
    v32 = *(_QWORD *)(v20 + 40);
    if ( !v32 || !(unsigned __int8)sub_25C00((_QWORD *)(v31 + 1040), &v44, v32) )
      goto LABEL_28;
    v36 = (char *)nptr;
    if ( v45.m128i_i64[0] )
      v36 = (char *)v44;
    if ( (unsigned __int8)sub_387A0((const char *)a2, v36, 1, 0) )
    {
      if ( !v44 )
      {
LABEL_21:
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree();
        }
        goto LABEL_6;
      }
    }
    else
    {
LABEL_28:
      if ( !v44 )
        goto LABEL_21;
    }
    v45.m128i_i64[0] = 0;
    qfree();
    goto LABEL_21;
  }
LABEL_6:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  return v11;
}

