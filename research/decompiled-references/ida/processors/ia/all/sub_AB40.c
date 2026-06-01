unsigned __int64 __fastcall sub_AB40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  const char **v7; // rbx
  char *v8; // rbp
  char *v9; // rbx
  const char *v10; // rcx
  __int64 v11; // rbp
  char *v12; // r12
  int v13; // eax
  char *s1; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-B0h]
  char *v16; // [rsp+20h] [rbp-98h] BYREF
  __int128 v17; // [rsp+28h] [rbp-90h]
  _OWORD v18[3]; // [rsp+40h] [rbp-78h] BYREF
  char v19; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp-40h]

  v4 = *(unsigned __int8 *)(a3 + 184);
  v20 = __readfsqword(0x28u);
  v18[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_255A0), (__m128i)(unsigned __int64)".rdata");
  v18[1] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_255A8), (__m128i)(unsigned __int64)".sdata");
  v18[2] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_255B0), (__m128i)(unsigned __int64)".bss");
  if ( !(unsigned __int8)is_spec_segm(v4) )
  {
    s1 = nullptr;
    v16 = nullptr;
    v15 = 0;
    v17 = 0;
    get_segm_name(&s1, a3, 0);
    get_segm_class(&v16, a3);
    v7 = (const char **)v18;
    v8 = (char *)&unk_20B78;
    if ( (_QWORD)v15 )
      v8 = s1;
    do
    {
      if ( !strcmp(v8, *v7) )
      {
        sub_9C10(a2, 0xFFFF, (__int64)&unk_C5AD, v8);
        goto LABEL_11;
      }
      ++v7;
    }
    while ( &v19 != (char *)v7 );
    validate_name(&s1, 6, 1);
    v9 = (char *)&unk_20B78;
    if ( (_QWORD)v15 )
      v9 = s1;
    v10 = ".data";
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
    if ( (_QWORD)v17 )
    {
      v12 = v16;
      v13 = strcmp(v16, "CODE");
      v10 = ".text";
      if ( v13 )
      {
        if ( !strcmp(v12, "BSS") )
          v10 = ".bss";
        else
          v10 = ".data";
      }
    }
    sub_9C10(a2, 0xFFFF, (__int64)&unk_C5BD, v10, v11, v9);
LABEL_11:
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    if ( s1 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
  }
  return v20 - __readfsqword(0x28u);
}

