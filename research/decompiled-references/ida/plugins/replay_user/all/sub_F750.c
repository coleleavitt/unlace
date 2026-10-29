__int64 __fastcall sub_F750(__int64 a1, char a2)
{
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 i; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 j; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // r13
  char **v12; // rbx
  char v13; // cl
  int v14; // edx
  char *v15; // rsi
  char v16; // cl
  __int64 v17; // r9
  int v18; // edx
  unsigned __int64 v19; // r13
  char **v20; // rbx
  char v21; // cl
  __int64 v22; // r9
  char v23; // r8
  int v24; // edx
  char v25; // cl
  char *v26; // rsi
  __int64 v27; // rcx
  __int64 result; // rax
  const char *v29; // rdx
  const char *v30; // rsi
  unsigned __int64 v31; // r13
  char **v32; // rbx
  char v33; // cl
  int v34; // edx
  char *v35; // rsi
  unsigned __int64 v36; // r13
  char **v37; // rbx
  char v38; // cl
  __int64 v39; // r9
  char v40; // r8
  char v41; // cl
  __int64 v42; // r9
  char v43; // r8
  char v44; // cl
  int v45; // edx
  char *v46; // rsi
  __int64 v47; // [rsp-10h] [rbp-38h]
  __int64 v48; // [rsp-10h] [rbp-38h]
  __int64 v49; // [rsp-10h] [rbp-38h]
  __int64 v50; // [rsp-10h] [rbp-38h]

  v2 = (__int64 *)(a1 + 672);
  if ( *(_QWORD *)(a1 + 672) )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree();
    *(_QWORD *)(a1 + 672) = 0;
    *(_QWORD *)(a1 + 688) = 0;
  }
  v3 = *(_QWORD *)(a1 + 696);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 704);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 24 * i);
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 696);
        }
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    qfree();
    *(_QWORD *)(a1 + 696) = 0;
    *(_QWORD *)(a1 + 712) = 0;
  }
  if ( *(_QWORD *)(a1 + 720) )
  {
    *(_QWORD *)(a1 + 728) = 0;
    qfree();
    *(_QWORD *)(a1 + 720) = 0;
    *(_QWORD *)(a1 + 736) = 0;
  }
  v7 = *(_QWORD *)(a1 + 744);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 752);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + 24 * j);
        if ( *v10 )
        {
          v10[1] = 0;
          qfree();
          v7 = *(_QWORD *)(a1 + 744);
        }
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    qfree();
    *(_QWORD *)(a1 + 744) = 0;
    *(_QWORD *)(a1 + 760) = 0;
  }
  sub_E9E0((__int64)v2, off_234E0, 1);
  if ( a2 )
  {
    v31 = 0;
    v32 = &off_22AA0;
    while ( v31 < qword_22A80 )
    {
      v33 = *((_BYTE *)v32 + 13);
      v34 = *((_DWORD *)v32 + 2);
      v35 = *v32;
      v49 = (__int64)v32[3];
      ++v31;
      v32 += 4;
      sub_E4A0(v2, v35, v34, v33, *((_BYTE *)v32 - 20), (__int64)*(v32 - 2), v49);
    }
    v36 = 0;
    v37 = &off_22600;
    sub_E4A0(v2, off_22A60, dword_22A68, byte_22A6D, byte_22A6C, qword_22A70, qword_22A78);
    v38 = byte_22A4D;
    v39 = qword_22A50;
    v40 = byte_22A4C;
    *(_DWORD *)(a1 + 780) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v2, off_22A40, dword_22A48, v38, v40, v39, qword_22A58);
    v41 = byte_22A2D;
    v42 = qword_22A30;
    v43 = byte_22A2C;
    *(_DWORD *)(a1 + 784) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v2, off_22A20, dword_22A28, v41, v43, v42, qword_22A38);
    sub_E4A0(v2, off_22A00, dword_22A08, byte_22A0D, byte_22A0C, (__int64)off_22A10, qword_22A18);
    if ( qword_225E0 )
    {
      do
      {
        v44 = *((_BYTE *)v37 + 13);
        v45 = *((_DWORD *)v37 + 2);
        v46 = *v37;
        v50 = (__int64)v37[3];
        ++v36;
        v37 += 4;
        sub_E4A0(v2, v46, v45, v44, *((_BYTE *)v37 - 20), (__int64)*(v37 - 2), v50);
      }
      while ( v36 < qword_225E0 );
    }
    sub_E4A0(v2, off_225C0, dword_225C8, byte_225CD, byte_225CC, qword_225D0, qword_225D8);
    sub_E4A0(v2, off_225A0, dword_225A8, byte_225AD, byte_225AC, qword_225B0, qword_225B8);
    v27 = *(_QWORD *)(a1 + 680);
    if ( v27 == 68 )
      goto LABEL_25;
  }
  else
  {
    v11 = 0;
    v12 = &off_23340;
    while ( v11 < qword_23320 )
    {
      v13 = *((_BYTE *)v12 + 13);
      v14 = *((_DWORD *)v12 + 2);
      v15 = *v12;
      v47 = (__int64)v12[3];
      ++v11;
      v12 += 4;
      sub_E4A0(v2, v15, v14, v13, *((_BYTE *)v12 - 20), (__int64)*(v12 - 2), v47);
    }
    v16 = byte_2330D;
    v17 = qword_23310;
    v18 = dword_23308;
    v19 = 0;
    v20 = &off_22EA0;
    *(_DWORD *)(a1 + 780) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v2, off_23300, v18, v16, byte_2330C, v17, qword_23318);
    sub_E4A0(v2, off_232E0, dword_232E8, byte_232ED, byte_232EC, qword_232F0, qword_232F8);
    v21 = byte_232CD;
    v22 = qword_232D0;
    v23 = byte_232CC;
    *(_DWORD *)(a1 + 784) = *(_QWORD *)(a1 + 680);
    sub_E4A0(v2, off_232C0, dword_232C8, v21, v23, v22, qword_232D8);
    sub_E4A0(v2, off_232A0, dword_232A8, byte_232AD, byte_232AC, (__int64)off_232B0, qword_232B8);
    if ( qword_22E80 )
    {
      do
      {
        v24 = *((_DWORD *)v20 + 2);
        v25 = *((_BYTE *)v20 + 13);
        v26 = *v20;
        v48 = (__int64)v20[3];
        ++v19;
        v20 += 4;
        sub_E4A0(v2, v26, v24, v25, *((_BYTE *)v20 - 20), (__int64)*(v20 - 2), v48);
      }
      while ( v19 < qword_22E80 );
    }
    sub_E4A0(v2, off_22E60, dword_22E68, byte_22E6D, byte_22E6C, qword_22E70, qword_22E78);
    v27 = *(_QWORD *)(a1 + 680);
    if ( v27 == 50 )
    {
LABEL_25:
      result = debug;
      if ( (debug & 0x10000) != 0 )
      {
        v29 = s;
        if ( *(_QWORD *)(a1 + 840) )
          v29 = *(const char **)(a1 + 832);
        v30 = s;
        if ( *(_QWORD *)(a1 + 816) )
          v30 = *(const char **)(a1 + 808);
        return sub_9D40((__int64)"%s %s: preset_arm_registers nregs %d\n", v30, v29, v27);
      }
      return result;
    }
  }
  if ( under_debugger )
    BUG();
  return interr();
}

