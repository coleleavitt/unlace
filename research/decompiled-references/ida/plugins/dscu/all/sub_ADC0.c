__int64 __fastcall sub_ADC0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdi
  int *v9; // rbp
  int *v10; // rax
  __int64 v11; // r12
  int *v12; // r15
  int *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  struct _Unwind_Exception *v17; // rbx
  __int64 v18; // [rsp+10h] [rbp-168h] BYREF
  __int128 v19; // [rsp+18h] [rbp-160h]
  __int64 v20; // [rsp+30h] [rbp-148h] BYREF
  __int128 v21; // [rsp+38h] [rbp-140h]
  __int64 (__fastcall **v22)(); // [rsp+50h] [rbp-128h] BYREF
  __int64 v23; // [rsp+58h] [rbp-120h]
  __int128 v24; // [rsp+60h] [rbp-118h]
  __int64 v25; // [rsp+70h] [rbp-108h]
  const char *v26; // [rsp+78h] [rbp-100h]
  int v27; // [rsp+80h] [rbp-F8h]
  __m128i v28; // [rsp+88h] [rbp-F0h]
  int v29; // [rsp+98h] [rbp-E0h]
  _BYTE v30[72]; // [rsp+A0h] [rbp-D8h] BYREF
  int v31; // [rsp+100h] [rbp-78h] BYREF
  __int64 v32; // [rsp+108h] [rbp-70h]
  __int64 *v33; // [rsp+110h] [rbp-68h]
  int *v34; // [rsp+118h] [rbp-60h]
  __int128 v35; // [rsp+120h] [rbp-58h]
  unsigned __int64 v36; // [rsp+138h] [rbp-40h]

  v1 = 103;
  v36 = __readfsqword(0x28u);
  if ( netnode_supfirst(*(_QWORD *)(a1 + 104), 103) != -1 )
    return sub_AC60(a1, v1, v3);
  v8 = *(_QWORD *)(a1 + 112);
  v18 = 0;
  v19 = 0;
  sub_A0B0(v8, &v18, v3, v4, v5, v6);
  if ( (_QWORD)v19 )
  {
    v25 = 0;
    v22 = (__int64 (__fastcall **)())&unk_1EB20;
    v9 = &v31;
    v23 = 0x7FF000004LL;
    v26 = "choose branch island(s) to load";
    v24 = -1;
    v27 = 2;
    v29 = -1;
    v10 = (int *)v30;
    v28 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1EAC0), (__m128i)(unsigned __int64)off_1EA80);
    do
    {
      *(_QWORD *)v10 = 0;
      v10 += 6;
      *((_OWORD *)v10 - 1) = 0;
    }
    while ( v10 != &v31 );
    v31 = 0;
    if ( ((HIDWORD(v23) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v23) != 0xFF )
      {
        if ( !under_debugger )
        {
          v17 = (struct _Unwind_Exception *)interr(3449);
          if ( v20 )
          {
            *(_QWORD *)&v21 = 0;
            qfree(v20);
          }
          sub_6740(&v22);
          if ( v18 )
          {
            *(_QWORD *)&v19 = 0;
            qfree(v18);
          }
          _Unwind_Resume(v17);
        }
        BUG();
      }
      BYTE3(v23) = ((HIDWORD(v23) >> 19) & 0x3F) - 1;
      HIDWORD(v23) &= 0xFE07FFFF;
    }
    v1 = 0;
    v32 = a1;
    v22 = off_1E750;
    v33 = &v18;
    v34 = nullptr;
    v20 = 0;
    v35 = 0;
    v21 = 0;
    v11 = callui(16, 0, &v22);
    if ( v20 )
    {
      *(_QWORD *)&v21 = 0;
      qfree(v20);
    }
    v12 = v34;
    if ( v11 >= 0 )
    {
      v13 = &v34[2 * v35];
      if ( v34 != v13 )
      {
        do
        {
          v1 = *v12;
          v14 = *(_QWORD *)(a1 + 104);
          v20 = 1;
          netnode_supset(v14, v1, &v20, 8, 103);
          v12 += 2;
        }
        while ( v13 != v12 );
        v13 = v34;
      }
      v22 = off_1E750;
      if ( v13 )
      {
        *(_QWORD *)&v35 = 0;
        qfree(v13);
      }
      v22 = (__int64 (__fastcall **)())&unk_1EB20;
      do
      {
        v15 = *((_QWORD *)v9 - 3);
        v9 -= 6;
        if ( v15 )
        {
          *((_QWORD *)v9 + 1) = 0;
          qfree(v15);
        }
      }
      while ( v9 != (int *)v30 );
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      return sub_AC60(a1, v1, v3);
    }
    v22 = off_1E750;
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34);
    }
    v22 = (__int64 (__fastcall **)())&unk_1EB20;
    do
    {
      v16 = *((_QWORD *)v9 - 3);
      v9 -= 6;
      if ( v16 )
      {
        *((_QWORD *)v9 + 1) = 0;
        qfree(v16);
      }
    }
    while ( v9 != (int *)v30 );
  }
  else
  {
    sub_78B0((__int64)"No branch islands detected");
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18);
  }
  return 0;
}

