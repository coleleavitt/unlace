__int64 __fastcall sub_216EB0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v6; // rax

  if ( *(_QWORD *)(a2 + 16) == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(51939);
    BUG();
  }
  v2 = a1[158];
  v3 = a1[157];
  if ( 96 * v2 )
  {
    while ( (unsigned int)sub_330B00(v3, a2) )
    {
      v2 = a1[158];
      v4 = a1[157];
      v3 += 96;
      if ( v3 == v4 + 96 * v2 )
        goto LABEL_9;
    }
    if ( v3 )
      goto LABEL_7;
    v4 = a1[157];
    v2 = a1[158];
LABEL_9:
    v3 = v4;
  }
  if ( a1[159] < (unsigned __int64)(v2 + 1) )
  {
    v6 = qvector_reserve();
    v2 = a1[158];
    a1[157] = v6;
    v3 = v6;
  }
  v3 += 96 * v2;
  *(__m128i *)(v3 + 8) = _mm_load_si128((const __m128i *)&xmmword_41F900);
  *(_DWORD *)v3 = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 48) = 0;
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 80) = -1;
  *(_DWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 32) = 0;
  *(_OWORD *)(v3 + 64) = 0;
  ++a1[158];
  copy_argloc();
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
LABEL_7:
  *(_DWORD *)(v3 + 88) |= 2u;
  copy_tinfo_t();
  return 1;
}

