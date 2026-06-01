__int64 __fastcall sub_3961F0(__int64 a1, __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  int *v13; // rax
  __int64 v14; // rdx
  int *v15; // rax
  __int64 v16; // r14
  const char *v17; // rdx
  const char *v18; // rsi
  unsigned int v19; // ebp
  __m128i *v20; // rbx
  __int64 v21; // rdi
  const char *v22; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  const char *v28; // [rsp+10h] [rbp-568h] BYREF
  __int128 v29; // [rsp+18h] [rbp-560h]
  __int64 v30; // [rsp+30h] [rbp-548h] BYREF
  __int128 v31; // [rsp+38h] [rbp-540h]
  __int64 (__fastcall **v32)(); // [rsp+50h] [rbp-528h] BYREF
  __int64 v33; // [rsp+58h] [rbp-520h]
  __int128 v34; // [rsp+60h] [rbp-518h]
  __int64 v35; // [rsp+70h] [rbp-508h]
  char *v36; // [rsp+78h] [rbp-500h]
  int v37; // [rsp+80h] [rbp-4F8h]
  __m128i v38; // [rsp+88h] [rbp-4F0h] BYREF
  int v39; // [rsp+98h] [rbp-4E0h]
  char v40; // [rsp+A0h] [rbp-4D8h] BYREF
  char v41; // [rsp+E8h] [rbp-490h] BYREF
  int v42; // [rsp+100h] [rbp-478h] BYREF
  __int64 v43; // [rsp+108h] [rbp-470h]
  __int64 v44; // [rsp+110h] [rbp-468h]
  __int128 v45; // [rsp+118h] [rbp-460h]
  __int64 *v46; // [rsp+128h] [rbp-450h]
  char v47; // [rsp+130h] [rbp-448h] BYREF
  unsigned __int64 v48; // [rsp+538h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  sub_33C190((__int64)"AUTOHIDE REGISTRY\n"
                      "The 'map variable' command allows you to replace all occurrences of\n"
                      "a variable by another variable of the same type.\n"
                      "The decompiler does not perform any checks.\n"
                      "A wrong mapping may render the decompiler output incorrect.\n"
                      "Use this command cautiously!");
  v8 = *(_QWORD *)(a1 + 24);
  v28 = nullptr;
  v30 = 0;
  v29 = 0;
  v31 = 0;
  sub_216F20(v8, a2, &v30, (__int64 *)&v28);
  if ( !(_QWORD)v31 )
  {
    v22 = s1;
    if ( (_QWORD)v29 )
      v22 = v28;
    sub_2B4E70((__int64)&unk_4190BD, v22);
    v19 = 0;
    goto LABEL_26;
  }
  qsnprintf();
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v24 = sub_256D70(*(_QWORD *)(a1 + 32) + 16LL, *(_QWORD *)(a1 + 88));
    if ( *(_DWORD *)(v24 + 8) == 2 )
    {
      v25 = *(_QWORD *)(v24 + 24);
      if ( *(_DWORD *)(v25 + 8) == 65 )
      {
        v26 = *(_QWORD *)(v24 + 32);
        if ( *(_DWORD *)(v26 + 8) == 65 )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(v25 + 24) + 432LL) + 104LL * *(int *)(v25 + 32);
          v11 = *(_QWORD *)(*(_QWORD *)(v26 + 24) + 432LL) + 104LL * *(int *)(v26 + 32);
          if ( a2 == v27 )
            goto LABEL_5;
          if ( a2 == v11 )
          {
            v11 = v27;
            goto LABEL_5;
          }
        }
      }
    }
  }
  v11 = 0;
LABEL_5:
  v35 = 0;
  v33 = 0x3FF000004LL;
  v12 = *(_QWORD *)(a1 + 24);
  v34 = -1;
  v13 = (int *)&v40;
  v32 = (__int64 (__fastcall **)())&unk_4EBE48;
  v37 = 1;
  v39 = -1;
  v36 = &v47;
  v38 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4E6CB8), (__m128i)(unsigned __int64)off_4E6CB0);
  do
  {
    *(_QWORD *)v13 = 0;
    v13 += 6;
    *((_OWORD *)v13 - 1) = 0;
  }
  while ( &v42 != v13 );
  v42 = 0;
  v14 = HIDWORD(v33);
  if ( ((HIDWORD(v33) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v33) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v14 = HIDWORD(v33) & 0xFE07FFFF;
    BYTE3(v33) = ((HIDWORD(v33) >> 19) & 0x3F) - 1;
    HIDWORD(v33) &= 0xFE07FFFF;
  }
  v43 = v12;
  v44 = 0;
  v32 = off_4E6820;
  v46 = &v30;
  v45 = 0;
  v15 = (int *)sub_38B610(&v32, v11, v14, v12, v9, v10);
  v16 = (__int64)v15;
  if ( !v15 )
  {
    v19 = 0;
    goto LABEL_16;
  }
  if ( (unsigned int)sub_1C2AD0((int *)a2, v15, 0.0) )
  {
    v17 = s1;
    if ( *(_QWORD *)(v16 + 40) )
    {
      v17 = *(const char **)(v16 + 32);
      v18 = s1;
      if ( !*(_QWORD *)(a2 + 40) )
        goto LABEL_14;
    }
    else
    {
      v18 = s1;
      if ( !*(_QWORD *)(a2 + 40) )
      {
LABEL_14:
        sub_2B4E70(
          (__int64)"AUTOHIDE REGISTRY\n"
                   "Variables %s and %s have different locations.\n"
                   "Please verify that this mapping does not render the output incorrect.",
          v18,
          v17);
        goto LABEL_15;
      }
    }
    v18 = *(const char **)(a2 + 32);
    goto LABEL_14;
  }
LABEL_15:
  v19 = sub_395F30(a1, a2, v16, 0.0, COERCE_DOUBLE(off_4E6CB0), a5, a6);
LABEL_16:
  v32 = off_4E6680;
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  v32 = (__int64 (__fastcall **)())&unk_4EBE48;
  v20 = (__m128i *)&v41;
  do
  {
    v21 = v20->m128i_i64[0];
    if ( v20->m128i_i64[0] )
    {
      v20->m128i_i64[1] = 0;
      qfree(v21);
    }
    v20 = (__m128i *)((char *)v20 - 24);
  }
  while ( &v38 != v20 );
LABEL_26:
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree((__int64)v28);
  }
  return v19;
}

