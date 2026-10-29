__int64 __fastcall sub_38ED80(__int64 a1, __int64 a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rbp
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rsi
  int *v18; // rax
  int *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdi
  __m128i *v23; // rbx
  __m128i v24; // [rsp+0h] [rbp-158h] BYREF
  _DWORD v25[4]; // [rsp+10h] [rbp-148h] BYREF
  __int64 v26; // [rsp+20h] [rbp-138h]
  __int64 (__fastcall **v27)(); // [rsp+30h] [rbp-128h] BYREF
  __int64 v28; // [rsp+38h] [rbp-120h]
  __int128 v29; // [rsp+40h] [rbp-118h]
  __int64 v30; // [rsp+50h] [rbp-108h]
  const char *v31; // [rsp+58h] [rbp-100h]
  int v32; // [rsp+60h] [rbp-F8h]
  __m128i v33; // [rsp+68h] [rbp-F0h] BYREF
  int v34; // [rsp+78h] [rbp-E0h]
  _BYTE v35[72]; // [rsp+80h] [rbp-D8h] BYREF
  char v36; // [rsp+C8h] [rbp-90h] BYREF
  int v37; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+E8h] [rbp-70h]
  __int64 v39; // [rsp+F0h] [rbp-68h]
  __int128 v40; // [rsp+F8h] [rbp-60h]
  __int64 v41; // [rsp+108h] [rbp-50h]
  __m128i *v42; // [rsp+110h] [rbp-48h]
  unsigned __int64 v43; // [rsp+118h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 32);
  v43 = __readfsqword(0x28u);
  v24 = 0;
  if ( !(unsigned __int8)sub_204E80(v6, &v24, a2, (__m128i)0LL, a4, a5) )
    return 0;
  sub_334910((__int64)"AUTOHIDE REGISTRY\n"
                      "The 'split variable' command allows you to create\n"
                      "a new variable at the specified location.\n"
                      "However, the decompiler does not perform any checks.\n"
                      "A wrong split variable will render the output incorrect.\n"
                      "Use this command cautiously!");
  if ( *(_DWORD *)(a2 + 8) != 65 )
  {
    v16 = *(_QWORD *)(a1 + 24);
    v17 = *(_QWORD *)(a1 + 32);
    v28 = 0x3FF000004LL;
    v31 = "Select the variable to split";
    v29 = -1;
    v27 = (__int64 (__fastcall **)())&unk_4B7C88;
    v18 = (int *)v35;
    v19 = &v37;
    v30 = 0;
    v32 = 1;
    v34 = -1;
    v33 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4B34B8), (__m128i)(unsigned __int64)off_4B34B0);
    do
    {
      *(_QWORD *)v18 = 0;
      v18 += 6;
      *((_OWORD *)v18 - 1) = 0;
    }
    while ( &v37 != v18 );
    v37 = 0;
    v20 = HIDWORD(v28);
    v21 = ((HIDWORD(v28) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v28) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v28) != 0xFF )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      v20 = HIDWORD(v28) & 0xFE07FFFF;
      BYTE3(v28) = ((HIDWORD(v28) >> 19) & 0x3F) - 1;
      HIDWORD(v28) &= 0xFE07FFFF;
    }
    v38 = v16;
    v41 = v17;
    v39 = 0;
    v27 = off_4B30F0;
    v42 = &v24;
    v40 = 0;
    if ( !sub_383D10(&v27, 0, v20, v9, v21, v10) )
    {
      v27 = off_4B2E80;
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree();
      }
      v27 = (__int64 (__fastcall **)())&unk_4B7C88;
      v23 = (__m128i *)&v36;
      do
      {
        if ( v23->m128i_i64[0] )
        {
          v23->m128i_i64[1] = 0;
          qfree();
        }
        v23 = (__m128i *)((char *)v23 - 24);
      }
      while ( &v33 != v23 );
      return 0;
    }
    v27 = off_4B2E80;
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree();
    }
    v27 = (__int64 (__fastcall **)())&unk_4B7C88;
    do
    {
      v22 = *((_QWORD *)v19 - 3);
      v19 -= 6;
      if ( v22 )
      {
        *((_QWORD *)v19 + 1) = 0;
        qfree();
      }
    }
    while ( v19 != (int *)v35 );
  }
  v25[0] = 0;
  v11 = *(_QWORD *)(v24.m128i_i64[1] + 24);
  copy_argloc();
  v12 = *(_QWORD **)(a1 + 24);
  v26 = v11;
  v7 = sub_20F770(v12, (__int64)v25);
  if ( (_BYTE)v7 )
  {
    sub_2B2880(*(_QWORD *)(a1 + 24));
    nullsub_114();
    sub_38E190(a1, 0, 0.0, v13, v14, v15);
  }
  cleanup_argloc();
  return v7;
}

