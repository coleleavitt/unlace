__int64 __fastcall sub_B550(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  int *v5; // rbp
  int *v6; // rax
  __int64 v7; // r13
  int *v8; // rdi
  int *v9; // r13
  int *v10; // r15
  __int64 v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdi
  struct _Unwind_Exception *v15; // rbx
  __m128i v16; // [rsp+10h] [rbp-178h] BYREF
  __int64 v17; // [rsp+20h] [rbp-168h] BYREF
  __int128 v18; // [rsp+28h] [rbp-160h]
  __int64 v19; // [rsp+40h] [rbp-148h] BYREF
  __int128 v20; // [rsp+48h] [rbp-140h]
  __int64 (__fastcall **v21)(); // [rsp+60h] [rbp-128h] BYREF
  __int64 v22; // [rsp+68h] [rbp-120h]
  __int128 v23; // [rsp+70h] [rbp-118h]
  __int64 v24; // [rsp+80h] [rbp-108h]
  const char *v25; // [rsp+88h] [rbp-100h]
  int v26; // [rsp+90h] [rbp-F8h]
  __m128i v27; // [rsp+98h] [rbp-F0h]
  int v28; // [rsp+A8h] [rbp-E0h]
  _BYTE v29[72]; // [rsp+B0h] [rbp-D8h] BYREF
  int v30; // [rsp+110h] [rbp-78h] BYREF
  __int64 v31; // [rsp+118h] [rbp-70h]
  __int64 *v32; // [rsp+120h] [rbp-68h]
  int *v33; // [rsp+128h] [rbp-60h]
  __int128 v34; // [rsp+130h] [rbp-58h]
  unsigned __int64 v35; // [rsp+148h] [rbp-40h]

  v1 = 102;
  v35 = __readfsqword(0x28u);
  if ( netnode_supfirst(*(_QWORD *)(a1 + 104), 102) != -1 )
    return sub_AC60(a1, v1, v3);
  v18 = 0;
  v17 = 0;
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_1E8D0, (__m128i)(unsigned __int64)&v17);
  sub_A4E0(a1, &v16);
  if ( (_QWORD)v18 )
  {
    v24 = 0;
    v21 = (__int64 (__fastcall **)())&unk_1EB20;
    v5 = &v30;
    v22 = 0x7FF000004LL;
    v25 = "choose GOT(s) to load";
    v23 = -1;
    v26 = 4;
    v28 = -1;
    v6 = (int *)v29;
    v27 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1EAC8), (__m128i)(unsigned __int64)off_1EA60);
    do
    {
      *(_QWORD *)v6 = 0;
      v6 += 6;
      *((_OWORD *)v6 - 1) = 0;
    }
    while ( v6 != &v30 );
    v30 = 0;
    if ( ((HIDWORD(v22) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v22) != 0xFF )
      {
        if ( !under_debugger )
        {
          v15 = (struct _Unwind_Exception *)interr(3449);
          if ( v19 )
          {
            *(_QWORD *)&v20 = 0;
            qfree(v19);
          }
          sub_67B0(&v21);
          if ( v17 )
          {
            *(_QWORD *)&v18 = 0;
            qfree(v17);
          }
          _Unwind_Resume(v15);
        }
        BUG();
      }
      BYTE3(v22) = ((HIDWORD(v22) >> 19) & 0x3F) - 1;
      HIDWORD(v22) &= 0xFE07FFFF;
    }
    v32 = &v17;
    v1 = 0;
    v21 = off_1E810;
    v31 = a1;
    v33 = nullptr;
    v19 = 0;
    v34 = 0;
    v20 = 0;
    v7 = callui(16, 0, &v21);
    if ( v19 )
    {
      *(_QWORD *)&v20 = 0;
      qfree(v19);
    }
    v8 = v33;
    if ( v7 >= 0 )
    {
      v9 = &v33[2 * v34];
      if ( v9 != v33 )
      {
        v10 = v33;
        do
        {
          v11 = *(_QWORD *)(a1 + 104);
          v12 = (__int64 *)(v17 + 16LL * *v10);
          v1 = *v12;
          v19 = v12[1];
          netnode_supset(v11, v1, &v19, 8, 102);
          v10 += 2;
        }
        while ( v9 != v10 );
        v8 = v33;
      }
      v21 = off_1E810;
      if ( v8 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v8);
      }
      v21 = (__int64 (__fastcall **)())&unk_1EB20;
      do
      {
        v13 = *((_QWORD *)v5 - 3);
        v5 -= 6;
        if ( v13 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v13);
        }
      }
      while ( v5 != (int *)v29 );
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
      return sub_AC60(a1, v1, v3);
    }
    v21 = off_1E810;
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v33);
    }
    v21 = (__int64 (__fastcall **)())&unk_1EB20;
    do
    {
      v14 = *((_QWORD *)v5 - 3);
      v5 -= 6;
      if ( v14 )
      {
        *((_QWORD *)v5 + 1) = 0;
        qfree(v14);
      }
    }
    while ( v5 != (int *)v29 );
  }
  else
  {
    sub_78B0((__int64)"No GOTs detected\n");
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return 0;
}

