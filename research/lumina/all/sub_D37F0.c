__int64 __fastcall sub_D37F0(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r12d
  __int64 v13; // rax
  _QWORD *v14; // rbp
  __int64 v15; // r14
  int v16; // esi
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  int v22; // r12d
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax

  v6 = a1;
  v7 = a3;
  v8 = sub_C2020(a1, nullptr);
  v10 = 5;
  if ( v8 > 0 )
    return (unsigned int)v10;
  if ( *(_BYTE *)(a1 + 416) )
  {
    a1 = *(_QWORD *)(a1 + 480);
    v11 = v7 & 0xFFFFFFF8;
    sub_C91C0(a1, 0);
    if ( (int)(v7 & 0xFFFFFFF8) <= 8 )
      goto LABEL_4;
  }
  else
  {
    v11 = v7 & 0xFFFFFFF8;
    if ( (int)(v7 & 0xFFFFFFF8) <= 8 )
    {
LABEL_4:
      *(_QWORD *)(v6 + 440) = 0;
      *(_QWORD *)(v6 + 448) = 0;
      *(_WORD *)(v6 + 414) = 0;
LABEL_5:
      *(_QWORD *)(v6 + 480) = v6;
      *(_QWORD *)(v6 + 456) = 0;
      *(_QWORD *)(v6 + 464) = 0;
      *(_QWORD *)(v6 + 472) = v6;
      LODWORD(v10) = 0;
      *(_QWORD *)(v6 + 488) = v6;
      *(_DWORD *)(v6 + 408) = 1;
      *(_WORD *)(v6 + 412) = 0;
      *(_BYTE *)(v6 + 416) = 0;
      *(_DWORD *)(v6 + 420) = 0;
      return (unsigned int)v10;
    }
  }
  if ( a4 <= 0 )
    goto LABEL_4;
  v13 = a4;
  v14 = a2;
  v15 = v13 * v7;
  if ( !a2 )
  {
    if ( qword_2424C0 )
      qword_2424C0(a1, 0, v9, v10);
    v14 = (_QWORD *)sub_D1E10(v15, 0);
    if ( qword_2424C8 )
      qword_2424C8();
    if ( v14 )
      v15 = ((int (__fastcall *)(_QWORD *))*(&xmmword_2414B0 + 1))(v14);
  }
  if ( v11 > 383 )
  {
    v16 = v11 + 384;
LABEL_11:
    v17 = v15 / v16;
    v18 = (v15 - v11 * v17) / 128;
    goto LABEL_12;
  }
  if ( v11 > 255 )
  {
    v16 = v11 + 128;
    goto LABEL_11;
  }
  LODWORD(v18) = 0;
  v17 = v15 / v11;
LABEL_12:
  *(_QWORD *)(v6 + 480) = v14;
  *(_QWORD *)(v6 + 440) = 0;
  *(_QWORD *)(v6 + 448) = 0;
  *(_WORD *)(v6 + 412) = v11;
  *(_WORD *)(v6 + 414) = v11;
  if ( !v14 )
    goto LABEL_5;
  if ( v17 <= 0 )
  {
    v22 = v17;
  }
  else
  {
    v19 = v11;
    v20 = v14;
    v21 = nullptr;
    v22 = 0;
    while ( 1 )
    {
      ++v22;
      *v20 = v21;
      *(_QWORD *)(v6 + 440) = v20;
      v21 = v20;
      if ( v17 == v22 )
        break;
      v20 = (_QWORD *)((char *)v20 + v19);
    }
    v14 = (_QWORD *)((char *)v14 + ((unsigned int)(v22 - 1) + 1LL) * v19);
  }
  *(_QWORD *)(v6 + 456) = 0;
  *(_QWORD *)(v6 + 464) = 0;
  *(_QWORD *)(v6 + 472) = v14;
  if ( (int)v18 <= 0 )
  {
    v25 = v14;
  }
  else
  {
    v23 = nullptr;
    v24 = &v14[16 * (unsigned int)(v18 - 1) + 16];
    while ( 1 )
    {
      v25 = v14 + 16;
      *v14 = v23;
      *(_QWORD *)(v6 + 456) = v14;
      v23 = v14;
      if ( v14 + 16 == v24 )
        break;
      v14 += 16;
    }
  }
  *(_QWORD *)(v6 + 488) = v25;
  *(_DWORD *)(v6 + 408) = 0;
  *(_BYTE *)(v6 + 416) = a2 == nullptr;
  *(_DWORD *)(v6 + 420) = v18 + v22;
  return 0;
}
