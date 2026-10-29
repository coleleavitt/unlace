__int64 __fastcall sub_34820(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r13
  size_t v5; // rax
  __int64 v6; // r12
  size_t v7; // rax
  size_t v8; // rbp
  void *v10; // rdi
  size_t v11; // r12
  size_t v12; // r14
  void *v13; // rdi
  size_t v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  char v17[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v18; // [rsp+1008h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  *(__m128i *)(v3 + 732) = _mm_loadu_si128(a2);
  *(__m128i *)(v3 + 748) = _mm_loadu_si128(a2 + 1);
  *(_QWORD *)(v3 + 764) = a2[2].m128i_i64[0];
  qstrncpy();
  v4 = *(_QWORD *)(a1 + 8);
  v5 = strlen(v17);
  if ( v5 )
  {
    v10 = *(void **)(v4 + 828);
    v11 = v5;
    v12 = v5 + 1;
    if ( *(_QWORD *)(v4 + 844) < v5 + 1 )
    {
      v15 = qvector_reserve();
      *(_QWORD *)(v4 + 828) = v15;
      v10 = (void *)v15;
    }
    *(_QWORD *)(v4 + 836) = v12;
    memmove(v10, v17, v11);
    *(_BYTE *)(*(_QWORD *)(v4 + 828) + v11) = 0;
  }
  else
  {
    *(_QWORD *)(v4 + 836) = 0;
  }
  qsplitfile();
  qstrlwr();
  v6 = *(_QWORD *)(a1 + 8);
  v7 = strlen(v17);
  v8 = v7;
  if ( v7 )
  {
    v13 = *(void **)(v6 + 876);
    v14 = v7 + 1;
    if ( *(_QWORD *)(v6 + 892) < v7 + 1 )
    {
      v16 = qvector_reserve();
      *(_QWORD *)(v6 + 876) = v16;
      v13 = (void *)v16;
    }
    *(_QWORD *)(v6 + 884) = v14;
    memmove(v13, v17, v8);
    *(_BYTE *)(*(_QWORD *)(v6 + 876) + v8) = 0;
  }
  else
  {
    *(_QWORD *)(v6 + 884) = 0;
  }
  return 0;
}

