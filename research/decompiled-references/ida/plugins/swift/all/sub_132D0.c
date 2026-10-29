__int64 __fastcall sub_132D0(__int64 a1, __int64 *a2, unsigned int *a3, __int64 a4, char a5, char a6)
{
  unsigned int *v11; // rax
  unsigned int v12; // edx
  unsigned int v13; // edi
  __int64 v14; // r9
  bool v15; // zf
  const char *v16; // rsi
  unsigned int v17; // ebx
  unsigned int v19; // esi
  unsigned int v20; // edx
  int v21; // ecx
  const char *v22; // rdx
  int v23; // esi
  const char *v24; // rdx
  const char *v25; // rsi
  __m128i v26; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+10h] [rbp-C8h]
  __int128 v28; // [rsp+18h] [rbp-C0h]
  __int64 v29; // [rsp+28h] [rbp-B0h]
  __int128 v30; // [rsp+30h] [rbp-A8h]
  __int128 v31; // [rsp+40h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-68h]
  int v33; // [rsp+78h] [rbp-60h]
  __int64 v34; // [rsp+80h] [rbp-58h]
  char v35; // [rsp+88h] [rbp-50h]
  unsigned __int64 v36; // [rsp+98h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v11 = (unsigned int *)sub_131C0(a1 + 488, a4 + 24);
  if ( v11 == (unsigned int *)(a1 + 496) )
    goto LABEL_33;
  if ( v11[31] != 1 )
  {
    if ( under_debugger )
      goto LABEL_35;
    interr(30718);
LABEL_33:
    if ( !under_debugger )
      interr(30717);
LABEL_35:
    BUG();
  }
  v12 = v11[14];
  if ( v12 || a5 )
  {
    v13 = *a3;
    if ( a6 )
    {
      v14 = v13;
      *a3 = v13 + v12;
LABEL_7:
      v15 = *(_QWORD *)(a4 + 8) == 0;
      v27 = 0;
      v29 = 0;
      v16 = s1;
      v32 = 1;
      v33 = -1;
      v34 = 0;
      v35 = 0;
      v26 = 0;
      v28 = 0;
      v30 = 0;
      v31 = 0;
      if ( !v15 )
        v16 = *(const char **)a4;
      v17 = sub_91B0(&v26, v16, v14, v11 + 14, a6);
      if ( (_BYTE)v17 )
        sub_10920(a2, (__int64)&v26);
      else
        a3[17] = 6;
      clear_tinfo_t();
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree(v29);
      }
      if ( v27 )
      {
        *(_QWORD *)&v28 = 0;
        qfree(v27);
      }
      return v17;
    }
    v19 = ((1 << v11[15]) + v13 - 1) & -(1 << v11[15]);
    *a3 = v19;
    v14 = v19;
    *a3 = v19 + v11[14];
    v20 = a3[1];
    if ( v20 < v11[15] )
      v20 = v11[15];
    a3[1] = v20;
    v21 = *(_DWORD *)(a4 + 48);
    if ( v21 == -1 || v21 == v19 )
      goto LABEL_7;
    v22 = s1;
    if ( *(_QWORD *)(a4 + 8) )
      v22 = *(const char **)a4;
    v17 = 0;
    sub_CB10((__int64)"bad calculated offset %u for '%s' (the offset in metadata is %u)\n", v19, v22, v21);
    a3[17] = 6;
  }
  else
  {
    v23 = *(_DWORD *)(a4 + 48);
    if ( (unsigned int)(v23 - 1) <= 0xFFFFFFFD )
    {
      v24 = s1;
      if ( *(_QWORD *)(a4 + 8) )
        v24 = *(const char **)a4;
      sub_CB10((__int64)"very strange non-zero offset %u in metadata for a field '%s' with the empty size\n", v23, v24);
    }
    v25 = s1;
    if ( *(_QWORD *)(a4 + 8) )
      v25 = *(const char **)a4;
    v17 = 0;
    sub_CB10((__int64)"ignoring a field '%s' with the empty size\n", v25);
  }
  return v17;
}

