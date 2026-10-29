unsigned __int64 __fastcall sub_F1A70(__int64 a1, __int64 a2)
{
  int v2; // r14d
  int v3; // r12d
  int v4; // eax
  int v5; // r15d
  __int64 v6; // r13
  int v7; // r12d
  int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // al
  char v13; // al
  char v14; // dl
  __int64 v15; // rdx
  char *v16; // rcx
  int v17; // r10d
  __int64 v18; // rbp
  _QWORD *v19; // r11
  __int64 i; // r9
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int n; // [rsp+0h] [rbp-88h]
  __int64 na; // [rsp+0h] [rbp-88h]
  int v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  _QWORD *v41; // [rsp+18h] [rbp-70h]
  int v42; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 *v43; // [rsp+30h] [rbp-58h] BYREF
  __int64 v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-48h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 312);
  v2 = *(_DWORD *)(a2 + 52);
  v3 = *(_DWORD *)(a2 + 56);
  v4 = *(_DWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 312) = 0;
  v5 = *(__int16 *)(a2 + 288);
  v6 = *(_QWORD *)a1;
  v7 = v2 + v3;
  v42 = v4;
  if ( !v2 )
    v7 -= (v7 <= 0) - 1;
  v8 = 24 * *(_DWORD *)(a1 + 144);
  v9 = (__int64 *)(*(_QWORD *)(a1 + 136) + v8);
  v44 = (int)((*(_DWORD *)(a2 + 60) - v8) & 0xFFFFFFF8);
  v43 = v9;
  sub_C9990(a1, &v42);
  v12 = 0;
  if ( *(_BYTE *)(a2 + 32) )
    v12 = *(_BYTE *)(a2 + 33) != 0;
  v13 = (32 * v12) | *(_BYTE *)(a1 + 198) & 0xDF;
  *(_BYTE *)(a1 + 198) = v13;
  v14 = *(_BYTE *)(a2 + 291);
  if ( v14 )
  {
    if ( v7 < 10 )
      v7 = 10;
    v15 = 4 * (v14 & 3u);
    *(_BYTE *)(a1 + 198) = v15 | v13 & 0xF3;
    if ( *(_BYTE *)(a2 + 291) == 2 )
    {
      sub_DE530(a1, 4, v15, 10, v10, v11);
      v16 = "id";
      n = 12;
      v17 = 8;
    }
    else
    {
      sub_DE530(a1, 8, v15, 10, v10, v11);
      v16 = "addr";
      n = 8;
      v17 = 0;
    }
    v18 = 0;
    v19 = &unk_23A918;
    for ( i = v17 + 1; ; v16 = (char *)v19[i + v18] )
    {
      if ( *(_BYTE *)(*(_QWORD *)a1 + 103LL) )
      {
        if ( n <= v17 + (int)++v18 )
          break;
      }
      else
      {
        v21 = v18;
        v41 = v19;
        v40 = i;
        v39 = v17;
        ++v18;
        sub_F1A30(a1, v21, 0, v16, nullptr);
        v17 = v39;
        v19 = v41;
        i = v40;
        if ( n <= v39 + (int)v18 )
          break;
      }
    }
  }
  *(_BYTE *)(a1 + 198) &= 0xFCu;
  v45 = 0;
  *(_QWORD *)(a1 + 104) = sub_CD5D0(&v43, 56LL * v7);
  v22 = sub_CD5D0(&v43, 56LL * (__int16)v5);
  v23 = v42;
  *(_QWORD *)(a1 + 128) = v22;
  *(_QWORD *)(a1 + 112) = sub_CD5D0(&v43, 8 * v23);
  na = 8LL * v2;
  v24 = sub_CD5D0(&v43, na);
  v25 = v45;
  *(_QWORD *)(a1 + 120) = v24;
  if ( v25 )
  {
    v31 = sub_DBF10(v6, v25);
    *(_QWORD *)(a1 + 256) = v31;
    v32 = *(_BYTE *)(v6 + 103) == 0;
    v43 = v31;
    v44 = v45;
    if ( !v32 )
      goto LABEL_29;
    v33 = *(_QWORD *)(a1 + 104);
    if ( !v33 )
      v33 = sub_CD5D0(&v43, 56LL * v7);
    *(_QWORD *)(a1 + 104) = v33;
    v34 = *(_QWORD *)(a1 + 128);
    if ( !v34 )
      v34 = sub_CD5D0(&v43, 56LL * (__int16)v5);
    *(_QWORD *)(a1 + 128) = v34;
    v35 = *(_QWORD *)(a1 + 112);
    if ( !v35 )
      v35 = sub_CD5D0(&v43, 8LL * v42);
    *(_QWORD *)(a1 + 112) = v35;
    v36 = *(_QWORD *)(a1 + 120);
    if ( !v36 )
      v36 = sub_CD5D0(&v43, na);
    *(_QWORD *)(a1 + 120) = v36;
  }
  if ( *(_BYTE *)(v6 + 103) )
  {
LABEL_29:
    *(_QWORD *)(a1 + 36) = 0;
    *(_WORD *)(a1 + 32) = 0;
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 40) = v2;
  *(_WORD *)(a1 + 32) = v5;
  if ( (__int16)v5 > 0 )
  {
    v29 = *(_QWORD *)(a1 + 128);
    v30 = v29 + 56 * ((unsigned int)(v5 - 1) + 1LL);
    do
    {
      *(_QWORD *)(v29 + 24) = v6;
      *(_DWORD *)(v29 + 32) = 0;
      *(_WORD *)(v29 + 20) = 1;
      v29 += 56;
    }
    while ( v29 != v30 );
    *(_DWORD *)(a1 + 36) = v7;
    if ( v7 <= 0 )
      goto LABEL_19;
    goto LABEL_21;
  }
  *(_DWORD *)(a1 + 36) = v7;
  if ( v7 > 0 )
  {
LABEL_21:
    v27 = *(_QWORD *)(a1 + 104);
    v28 = v27 + 56 * ((unsigned int)(v7 - 1) + 1LL);
    do
    {
      *(_QWORD *)(v27 + 24) = v6;
      *(_DWORD *)(v27 + 32) = 0;
      *(_WORD *)(v27 + 20) = 0;
      v27 += 56;
    }
    while ( v27 != v28 );
  }
LABEL_19:
  memset(*(void **)(a1 + 120), 0, na);
LABEL_20:
  *(_BYTE *)(a1 + 197) = 1;
  *(_QWORD *)(a1 + 52) = 0;
  *(_WORD *)(a1 + 194) = -254;
  *(_QWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 44) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 80) = 0;
  return __readfsqword(0x28u) ^ v46;
}
