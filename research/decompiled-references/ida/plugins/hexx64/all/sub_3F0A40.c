__int64 __fastcall sub_3F0A40(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        double a5,
        __m128 a6)
{
  unsigned int v8; // r13d
  unsigned int tinfo_details; // eax
  __int64 v11; // rdi
  int v12; // edx
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rax
  _BOOL4 v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r12
  _QWORD *v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r13
  __int64 v25; // r12
  _QWORD *v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+10h] [rbp-98h]
  __int128 v31; // [rsp+18h] [rbp-90h]
  __int64 v32; // [rsp+28h] [rbp-80h]
  __int64 v33; // [rsp+30h] [rbp-78h]
  __int64 v34; // [rsp+38h] [rbp-70h]
  __int128 v35; // [rsp+40h] [rbp-68h]
  __int64 v36; // [rsp+50h] [rbp-58h]
  __int128 v37; // [rsp+58h] [rbp-50h]
  char v38; // [rsp+68h] [rbp-40h]
  unsigned __int64 v39; // [rsp+78h] [rbp-30h]

  v39 = __readfsqword(0x28u);
  v29 = 0;
  if ( !(unsigned __int8)sub_381D00(a1, a2, (__int64)&v29, 1, a5, a6) )
  {
LABEL_2:
    v8 = 0;
    goto LABEL_3;
  }
  v38 = 16;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v36 = 0;
  v31 = 0;
  v35 = 0;
  v37 = 0;
  tinfo_details = get_tinfo_details();
  v11 = v36;
  v8 = tinfo_details;
  if ( !(_BYTE)tinfo_details )
  {
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    cleanup_argloc();
    clear_tinfo_t();
    v23 = v30;
    if ( v30 )
    {
      v24 = v31;
      if ( (_QWORD)v31 )
      {
        v25 = 0;
        do
        {
          v26 = (_QWORD *)(v23 + 80 * v25);
          clear_tinfo_t();
          v27 = v26[5];
          if ( v27 )
          {
            v26[6] = 0;
            qfree(v27);
          }
          v28 = v26[2];
          if ( v28 )
          {
            v26[3] = 0;
            qfree(v28);
          }
          ++v25;
          cleanup_argloc();
          v23 = v30;
        }
        while ( v24 != v25 );
      }
      *(_QWORD *)&v31 = 0;
      qfree(v23);
    }
    goto LABEL_2;
  }
  if ( a4 | a3 )
  {
    if ( !a3 )
      goto LABEL_13;
    if ( (_QWORD)v31 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      do
      {
        v15 = v30 + 80 * v14;
        if ( *(_DWORD *)v15 == 3 )
          v13 += (unsigned int)*(unsigned __int16 *)(v15 + 8) - 45 < 8;
        v14 = ++v12;
      }
      while ( v12 < (unsigned __int64)v31 );
    }
    else
    {
      v13 = 0;
    }
    *(_DWORD *)a3 = v13;
    if ( a4 )
    {
LABEL_13:
      v16 = 0;
      if ( (_DWORD)v34 == 3 )
        v16 = (unsigned int)(unsigned __int16)v35 - 45 <= 7;
      *(_DWORD *)a4 = v16;
    }
  }
  if ( v11 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v11);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v17 = v30;
  if ( v30 )
  {
    v18 = v31;
    if ( (_QWORD)v31 )
    {
      v19 = 0;
      do
      {
        v20 = (_QWORD *)(v17 + 80 * v19);
        clear_tinfo_t();
        v21 = v20[5];
        if ( v21 )
        {
          v20[6] = 0;
          qfree(v21);
        }
        v22 = v20[2];
        if ( v22 )
        {
          v20[3] = 0;
          qfree(v22);
        }
        ++v19;
        cleanup_argloc();
        v17 = v30;
      }
      while ( v18 != v19 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v17);
  }
LABEL_3:
  clear_tinfo_t();
  return v8;
}

