__int64 __fastcall sub_16D050(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  __int64 v6; // r13
  __int64 v8; // r8
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rbx
  unsigned int v12; // r15d
  __int64 v14; // r9
  __int128 v15; // rdi
  int v16; // r8d
  int v17; // r9d
  int v18; // r9d
  int v19; // ebp
  __int64 i; // rax
  _DWORD *v21; // rdi
  __int64 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  unsigned __int64 *v29; // [rsp+20h] [rbp-68h] BYREF
  __int128 v30; // [rsp+28h] [rbp-60h]
  __int128 v31; // [rsp+38h] [rbp-50h]
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v6 = a2 + 32;
  v32 = __readfsqword(0x28u);
  v8 = a1[7];
  v9 = *(_QWORD *)(v8 + 16);
  if ( !v9 )
    return 0;
  while ( 1 )
  {
    v10 = *(_DWORD *)v9;
    v11 = v9;
    if ( *(_DWORD *)v9 == 67 )
    {
      while ( *(_DWORD *)(v11 + 36) == *(_DWORD *)(v11 + 68) && *(_BYTE *)(v11 + 32) == 4 )
      {
        v11 = *(_QWORD *)(v11 + 40);
        v10 = *(_DWORD *)v11;
        if ( *(_DWORD *)v11 != 67 )
          goto LABEL_10;
      }
      goto LABEL_7;
    }
LABEL_10:
    if ( v10 == 65 )
      break;
LABEL_7:
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      return 0;
  }
  v14 = a2 + 32;
  *((_QWORD *)&v15 + 1) = a1;
  *(_QWORD *)&v15 = *(_QWORD *)(a1[60] + 112);
  if ( !sub_30CFD0(v15, v9, v11 + 32, v8, v14) )
    return 0;
  if ( *(_QWORD *)(v9 + 8) == a1[7] )
    goto LABEL_17;
  v29 = nullptr;
  v30 = 0u;
  v31 = 0;
  sub_127FE0((__int64)a1, (__int64 *)&v29, v9 + 64, 0, v16, v17, 0.0, a5);
  if ( sub_A9AA0((__int64)a1, &v29, *(_QWORD *)(v9 + 8), 0, 1u) )
  {
    if ( *((_QWORD *)&v30 + 1) )
    {
      *(_QWORD *)&v31 = 0;
      qfree(*((__int64 *)&v30 + 1));
    }
    qfree((__int64)v29);
    return 0;
  }
  if ( *((_QWORD *)&v30 + 1) )
  {
    *(_QWORD *)&v31 = 0;
    qfree(*((__int64 *)&v30 + 1));
  }
  qfree((__int64)v29);
LABEL_17:
  if ( !v11 )
    return 0;
  v29 = nullptr;
  v30 = 0;
  v12 = sub_16CEF0(a3, (__int64)&v29, v9 + 64, *(_DWORD *)(v11 + 36), v16, (int)v9 + 64, 0.0, a5);
  if ( (_BYTE)v12 && (int)sub_16CAA0((__int64)a1, v9 + 64, (_BYTE *)v9, *(_QWORD *)(v9 + 8), a1[7], v18, 0.0, a5) >= 0 )
  {
    v19 = 0;
    for ( i = 0; v19 < (unsigned __int64)v30; i = v19 )
    {
      v21 = (_DWORD *)v29[i];
      *v21 = 67;
      sub_11CDA0((__int64)(v21 + 12));
      ++v19;
    }
    v22 = (__int64 *)v6;
    v28 = a1[7];
    v23 = sub_129440((__int64)a1, v6, (__int64)&v28, 0, 0.0, a5);
    if ( v23 && *(_DWORD *)v23 == 2 )
    {
      v22 = *(__int64 **)(v11 + 24);
      sub_B57F0(a1[8], v22, *(_QWORD *)(v23 + 24));
    }
    *(_DWORD *)v11 = 66;
    sub_B57E0(a3, (__int64)v22, v24, v25, v26, v27);
    sub_A2520((__int64)a1, "U2F");
  }
  else
  {
    v12 = 0;
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree((__int64)v29);
  }
  return v12;
}

