__int64 __fastcall sub_5CB40(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rbp
  __int16 v6; // ax
  unsigned __int64 *v8; // rax
  __int64 v9; // rdi
  char *v10; // r12
  const char *v11; // rsi
  unsigned int v12; // ecx
  bool v13; // dl
  _QWORD *v14; // r13
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rsi
  char v24; // r12
  __int64 v25; // rax
  const char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-1F0h]
  __int64 v31; // [rsp+8h] [rbp-1F0h]
  __int64 v32; // [rsp+8h] [rbp-1F0h]
  __int64 v33; // [rsp+10h] [rbp-1E8h]
  __int64 v34; // [rsp+18h] [rbp-1E0h]
  char v35[2]; // [rsp+2Eh] [rbp-1CAh] BYREF
  _QWORD *v36; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v37; // [rsp+38h] [rbp-1C0h]
  char v38; // [rsp+48h] [rbp-1B0h]
  __int128 v39; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-198h]
  __int64 v41; // [rsp+68h] [rbp-190h]
  __int64 v42; // [rsp+70h] [rbp-188h]
  _BYTE v43[40]; // [rsp+78h] [rbp-180h] BYREF
  char v44; // [rsp+A0h] [rbp-158h] BYREF
  unsigned __int64 v45; // [rsp+1B8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a1 + 72) + a2[1];
  v45 = __readfsqword(0x28u);
  v33 = a1 + 64;
  if ( *(_QWORD *)(a1 + 80) < v3 )
    *(_QWORD *)(a1 + 64) = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v3, 8);
  v34 = a1 + 88;
  if ( *(_QWORD *)(a1 + 104) < v3 )
    *(_QWORD *)(a1 + 88) = qvector_reserve(a1 + 88, *(_QWORD *)(a1 + 88), v3, 1);
  v5 = *a2;
  if ( !(24 * a2[1]) )
    return 1;
  while ( 1 )
  {
    v6 = sub_35600(*(unsigned __int16 *)(v5 + 16));
    if ( v6 == -1 )
      return 0;
    if ( (v6 & 0x400) == 0 )
      return 0;
    if ( (v6 & 0xF) != 1 )
      return 0;
    if ( (v6 & 0x800) != 0 )
      return 0;
    v8 = (unsigned __int64 *)v43;
    v40 = -1;
    v41 = 0;
    v42 = 0;
    v39 = -1;
    do
    {
      *(_WORD *)v8 = 0;
      v8 += 5;
      *((_WORD *)v8 - 19) = 0;
      *((_WORD *)v8 - 18) = 0;
      *((_DWORD *)v8 - 2) = 0;
      *((_WORD *)v8 - 17) = 0;
      *((_OWORD *)v8 - 2) = 0;
      *(v8 - 2) = 0;
    }
    while ( v8 != &v45 );
    if ( (int)decode_insn(&v39, *(_QWORD *)(v5 + 8), 0, 0.0) <= 0 )
      return 0;
    v9 = *(_QWORD *)a1;
    v10 = &v44;
    if ( (*(_BYTE *)(v5 + 18) & 1) != 0 )
      v10 = v43;
    v11 = (const char *)&v36;
    v38 = 0;
    v12 = *((unsigned __int16 *)v10 + 3);
    v36 = nullptr;
    v37 = 0;
    v13 = sub_5B9B0(v9, (__int64 *)&v36, v40, v12, 0, 10);
    v14 = v36;
    if ( !v13 || (unsigned __int8)(v38 - 10) > 1u )
      goto LABEL_23;
    v15 = *v36;
    if ( (_QWORD)v37 != 1 )
    {
      v16 = v36 + 3;
      if ( 24LL * (_QWORD)v37 != 24 )
      {
        while ( *v16 == v15 )
        {
          v16 += 3;
          if ( &v36[3 * (_QWORD)v37] == v16 )
            goto LABEL_25;
        }
LABEL_23:
        if ( v14 )
          qfree(v14, v11, 0.0);
        return 0;
      }
    }
LABEL_25:
    if ( *(_QWORD *)(a1 + 72) )
    {
      if ( *(_QWORD *)(a1 + 144) != v15 )
        goto LABEL_23;
    }
    else
    {
      *(_QWORD *)(a1 + 144) = v15;
    }
    v11 = v35;
    if ( !(unsigned __int8)sub_5C850((__int64 *)a1, v35, (__int64)&v36) )
      goto LABEL_23;
    v17 = *(_QWORD *)(a1 + 72);
    if ( v17 )
    {
      if ( *(_BYTE *)(a1 + 152) != v35[0] )
        goto LABEL_23;
    }
    else
    {
      *(_BYTE *)(a1 + 152) = v35[0];
    }
    v18 = *((_QWORD *)v10 + 6);
    v19 = *(_QWORD *)(a1 + 64);
    v20 = *(_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(a1 + 80) < (unsigned __int64)(v17 + 1) )
    {
      v32 = v18;
      v29 = qvector_reserve(v33, v19, v17 + 1, 8);
      v17 = *(_QWORD *)(a1 + 72);
      v18 = v32;
      *(_QWORD *)(a1 + 64) = v29;
      v19 = v29;
    }
    *(_QWORD *)(v19 + 8 * v17) = v20;
    v21 = *(_QWORD *)(a1 + 96);
    ++*(_QWORD *)(a1 + 72);
    v22 = *(_QWORD *)(a1 + 104);
    v23 = *(_QWORD *)(a1 + 88);
    v24 = *(_BYTE *)(v5 + 18) & 1;
    v35[1] = v24;
    if ( v22 < v21 + 1 )
    {
      v31 = v18;
      v28 = qvector_reserve(v34, v23, v21 + 1, 1);
      *(_QWORD *)(a1 + 88) = v28;
      v23 = v28;
      v18 = v31;
      v21 = *(_QWORD *)(a1 + 96);
    }
    *(_BYTE *)(v23 + v21) = v24;
    v25 = *(_QWORD *)(a1 + 120);
    ++*(_QWORD *)(a1 + 96);
    v26 = *(const char **)(a1 + 112);
    if ( *(_QWORD *)(a1 + 128) < (unsigned __int64)(v25 + 1) )
    {
      v30 = v18;
      v27 = qvector_reserve(a1 + 112, v26, v25 + 1, 8);
      *(_QWORD *)(a1 + 112) = v27;
      v26 = (const char *)v27;
      v18 = v30;
      v25 = *(_QWORD *)(a1 + 120);
    }
    *(_QWORD *)&v26[8 * v25] = v18;
    ++*(_QWORD *)(a1 + 120);
    if ( v14 )
      qfree(v14, v26, 0.0);
    v5 += 24;
    if ( v5 == *a2 + 24 * a2[1] )
      return 1;
  }
}

