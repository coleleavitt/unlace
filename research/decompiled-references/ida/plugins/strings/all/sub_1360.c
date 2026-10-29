__int64 sub_1360()
{
  __int64 v0; // rbx
  __m128i si128; // xmm0
  const char *plugin_options; // rax

  if ( (unsigned int)getinf() == 18 )
    return 0;
  v0 = qalloc_or_throw();
  *(_QWORD *)(v0 + 8) = get_ph();
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_QWORD *)v0 = off_3CF0;
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2170);
  *(_QWORD *)(v0 + 96) = 0;
  *(_QWORD *)(v0 + 104) = off_3D20;
  *(_DWORD *)(v0 + 128) = -1;
  *(__m128i *)(v0 + 112) = si128;
  plugin_options = (const char *)get_plugin_options();
  if ( plugin_options )
    sub_1270((__int64)"command line options: %s", plugin_options);
  return v0;
}

