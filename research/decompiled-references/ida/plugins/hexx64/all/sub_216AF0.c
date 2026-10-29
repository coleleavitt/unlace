__int64 __fastcall sub_216AF0(_QWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v7; // rax

  if ( *(_QWORD *)(a2 + 16) == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCAE3u, a3);
    BUG();
  }
  v3 = a1[158];
  v4 = a1[157];
  if ( 96 * v3 )
  {
    while ( (unsigned int)sub_3307E0((int *)v4, (int *)a2) )
    {
      v3 = a1[158];
      v5 = a1[157];
      v4 += 96;
      if ( v4 == v5 + 96 * v3 )
        goto LABEL_9;
    }
    if ( v4 )
      goto LABEL_7;
    v5 = a1[157];
    v3 = a1[158];
LABEL_9:
    v4 = v5;
  }
  if ( a1[159] < (unsigned __int64)(v3 + 1) )
  {
    v7 = qvector_reserve((__int64)(a1 + 157), v4, v3 + 1, 96);
    v3 = a1[158];
    a1[157] = v7;
    v4 = v7;
  }
  v4 += 96 * v3;
  *(__m128i *)(v4 + 8) = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_DWORD *)v4 = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 80) = -1;
  *(_DWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  ++a1[158];
  copy_argloc();
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
LABEL_7:
  *(_DWORD *)(v4 + 88) |= 2u;
  copy_tinfo_t();
  return 1;
}

