unsigned __int64 sub_1E7A0()
{
  __int64 v0; // rax
  __int64 v1; // xmm0_8^8
  __int64 v3; // [rsp+10h] [rbp-38h]
  unsigned __int64 v4; // [rsp+28h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v0 = getseg();
  v1 = _mm_load_si128((const __m128i *)&xmmword_57480).m128i_i64[1];
  if ( v0 )
  {
    v3 = *(_QWORD *)(v0 + 48);
    if ( v3 == -1 )
      goto LABEL_4;
    sel2para();
  }
  else
  {
    v3 = v1;
  }
  if ( v3 != -1 )
    sel2para();
LABEL_4:
  set_fixup();
  return v4 - __readfsqword(0x28u);
}

