__int64 __fastcall sub_3F1480(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _BYTE *a6)
{
  bool v9; // zf
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  char v21; // r14
  unsigned int v22; // r15d
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int *i; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  int j; // r14d
  int v32; // r14d
  unsigned int *v33; // rdi
  unsigned int v34; // eax
  int v35; // esi
  bool v36; // al
  __int64 v37; // rdx
  __int64 v38; // rax
  int v39; // eax
  int v40; // edx
  int v41; // esi
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  char v49; // [rsp+8h] [rbp-110h]
  __int64 v50; // [rsp+10h] [rbp-108h] BYREF
  unsigned int *v51; // [rsp+18h] [rbp-100h] BYREF
  __int64 v52[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v53; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v54; // [rsp+38h] [rbp-E0h]
  __int64 v55[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-B0h]
  __int64 v58; // [rsp+80h] [rbp-98h] BYREF
  __int64 v59; // [rsp+88h] [rbp-90h]
  __int64 v60; // [rsp+90h] [rbp-88h] BYREF
  __m128i v61; // [rsp+98h] [rbp-80h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-60h]
  __int64 *v64; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v65; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+D8h] [rbp-40h]

  v9 = a1[20] == 8;
  v66 = __readfsqword(0x28u);
  if ( !v9 )
  {
    v22 = getinf_flag();
    if ( !(_BYTE)v22 )
    {
      if ( !sub_64330(a5, a1[89]) )
      {
        if ( !(unsigned __int8)sub_64280(a5) || a5[3] )
          *a6 = 1;
        v24 = a5[2];
        a5[1] = 0;
        if ( v24 )
        {
          a5[3] = 0;
          qfree();
          a5[2] = 0;
          a5[4] = 0;
        }
      }
      return v22;
    }
  }
  v52[0] = 0;
  v52[1] = 0;
  v53 = 0;
  v54 = 0;
  if ( a3 || !(unsigned __int8)sub_3399E0((unsigned __int64)&v50, &v51, a2) )
    goto LABEL_3;
  for ( i = v51; ; v51 = i )
  {
    v22 = sub_3F11F0((__int64)a1, v52, v50, i);
    if ( (_BYTE)v22 )
      break;
    i = *((unsigned int **)v51 + 2);
  }
  sub_3397B0((__int64)v55, a2, v50, (__int64)v51);
  sub_64040(v55, v52, v27, v28, v29, v30);
  sub_318020(&v56, (__int64)&v53);
  if ( (unsigned __int8)sub_64460(v55, a1[122], 16) )
  {
    for ( j = 0; !sub_64330(v55, j + a1[122]); ++j )
      ;
    v32 = sub_645A0(v55, j + a1[122]) + j;
LABEL_31:
    if ( v32 )
    {
      v39 = 16;
      if ( v32 <= 16 )
        v39 = v32;
      v40 = v39;
      if ( *v51 == 9 && v39 > (int)v51[9] )
        v40 = v51[9];
      v41 = a1[122];
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v62 = 0;
      v63 = 0;
      v61 = 0;
      sub_63880(&v62, v41, v40);
      v64 = nullptr;
      v65 = 0;
      sub_63C80(&v58, &v62);
      sub_317070(&v60, &v64);
      if ( v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree();
      }
      qfree();
      v42 = sub_122670((__int64)&v58, (__int64)a5);
      v43 = v60;
      if ( v42 )
      {
        v44 = *a5;
        v45 = _mm_loadu_si128(&v61);
        *a5 = v58;
        v58 = v44;
        v46 = a5[1];
        a5[1] = v59;
        v47 = a5[4];
        v59 = v46;
        v48 = a5[2];
        *(__m128i *)(a5 + 3) = v45;
        a5[2] = v43;
        v43 = v48;
        v60 = v48;
        v61.m128i_i64[1] = v47;
        *a6 = 1;
      }
      if ( v43 )
      {
        v61.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      if ( v56 )
      {
        v57 = 0;
        qfree();
      }
      qfree();
      goto LABEL_7;
    }
    goto LABEL_32;
  }
  v33 = v51;
  v34 = *v51;
  if ( *v51 != 4 )
  {
    if ( v34 == 67 )
    {
      if ( v51[9] != v51[17] )
        goto LABEL_40;
    }
    else if ( v34 != 9 )
    {
      goto LABEL_40;
    }
  }
  if ( *((_BYTE *)v51 + 32) == 1 )
  {
    v35 = a1[122];
    if ( v35 == v51[10] && (int)v51[9] > 3 && *((_BYTE *)v51 + 64) == 1 )
    {
      v36 = sub_64330(v52, v35);
      v37 = (__int64)v51;
      v33 = v51;
      if ( !v36 )
      {
        v38 = *((_QWORD *)v51 + 2);
        if ( v38
          && (*(_DWORD *)v38 == 4 || *(_DWORD *)v38 == 67 && *(_DWORD *)(v38 + 36) == *(_DWORD *)(v38 + 68))
          && *(_BYTE *)(v38 + 64) == 1
          && a1[122] == *(_DWORD *)(v38 + 72)
          && *(_BYTE *)(v38 + 32) == 4
          && (unsigned int)(**(_DWORD **)(v38 + 40) - 56) <= 1 )
        {
          if ( (get_tinfo_property() & 0xF) != 9 && !get_tinfo_property() )
            goto LABEL_32;
          v37 = (__int64)v51;
        }
        v32 = *(_DWORD *)(v37 + 36);
        goto LABEL_31;
      }
    }
  }
LABEL_40:
  if ( sub_122040(v33) )
  {
    v32 = v51[17];
    goto LABEL_31;
  }
LABEL_32:
  if ( v56 )
  {
    v57 = 0;
    qfree();
  }
  qfree();
LABEL_3:
  v11 = a1[122];
  v62 = 0;
  v63 = 0;
  sub_63880(&v62, v11, 16);
  v64 = nullptr;
  v65 = 0;
  v49 = sub_64040(a5, &v62, v12, v13, v14, v15);
  v16 = sub_318020(a5 + 2, (__int64)&v64);
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree();
  }
  qfree();
  *a6 |= v16 | v49;
  v21 = sub_64040(a5, v52, v17, v18, v19, v20);
  *a6 |= sub_318020(a5 + 2, (__int64)&v53) | v21;
  if ( !sub_64330(a5, a1[89]) )
  {
    if ( !(unsigned __int8)sub_64280(a5) || a5[3] )
      *a6 = 1;
    v25 = a5[2];
    a5[1] = 0;
    if ( v25 )
    {
      a5[3] = 0;
      qfree();
      a5[2] = 0;
      a5[4] = 0;
    }
  }
  v22 = 0;
LABEL_7:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree();
  }
  qfree();
  return v22;
}

