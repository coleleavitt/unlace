__int64 __fastcall sub_508C0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // ecx
  unsigned int v14; // r13d
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r14
  _DWORD *v20; // r15
  __int64 v21; // r13
  unsigned __int64 v22; // rdi
  int v23; // edx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // edi
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  const char *v33; // rdx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // r15
  _DWORD *v38; // r12
  unsigned __int64 v39; // r13
  __int64 v40; // r14
  int v41; // ebp
  __int64 v42; // rbx
  unsigned __int64 v43; // r15
  __int64 v44; // rbp
  unsigned __int64 v45; // r14
  int v46; // eax
  const char *v47; // rdx
  __int64 v48; // rdi
  const char *v49; // r8
  __int64 v50; // rdi
  const char *v51; // r8
  unsigned __int8 v52; // [rsp+8h] [rbp-80h]
  int v53; // [rsp+8h] [rbp-80h]
  unsigned __int64 v54; // [rsp+10h] [rbp-78h]
  unsigned __int64 v55; // [rsp+18h] [rbp-70h]
  unsigned __int64 v56; // [rsp+20h] [rbp-68h]
  __int64 ph; // [rsp+28h] [rbp-60h]
  __int64 v58; // [rsp+30h] [rbp-58h] BYREF
  __int128 v59; // [rsp+38h] [rbp-50h]
  unsigned __int64 v60; // [rsp+48h] [rbp-40h]

  v7 = a1;
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(_DWORD *)(a2 + 4);
  v60 = __readfsqword(0x28u);
  sub_70460(
    a1,
    (unsigned int)"GDB: Refining ida target with 'T' stop reply information (is_64 %d) (is_be %d)\n",
    v9,
    v8,
    a5);
  if ( *(int *)(a2 + 8) >= 0 )
  {
LABEL_2:
    v13 = *(_DWORD *)(a2 + 4);
    v14 = 0;
    if ( v13 < 0 )
      goto LABEL_28;
    return v14;
  }
  sub_70460(a1, (unsigned int)"GDB:  detecting endianness\n", v10, v11, v12);
  ph = get_ph();
  v19 = *a3 + 32LL * a3[1];
  if ( *a3 == v19 )
  {
LABEL_48:
    sub_70460(v7, (unsigned int)"GDB:  could not detect endianness\n", v16, v17, v18);
    goto LABEL_2;
  }
  v55 = 0;
  v20 = (_DWORD *)*a3;
  v21 = a1 + 1296;
  v56 = 0;
  do
  {
    v22 = *((_QWORD *)v20 + 2);
    if ( !v22 )
    {
      v16 = *(_QWORD *)(v7 + 1304);
      v27 = *v20;
      v24 = 0;
      v25 = 0;
      if ( !v16 )
        goto LABEL_23;
LABEL_10:
      v18 = v7 + 1296;
      do
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v16 + 16);
          v28 = *(_QWORD *)(v16 + 24);
          if ( *(_DWORD *)(v16 + 32) < v27 )
            break;
          v18 = v16;
          v16 = *(_QWORD *)(v16 + 16);
          if ( !v17 )
            goto LABEL_14;
        }
        v16 = *(_QWORD *)(v16 + 24);
      }
      while ( v28 );
LABEL_14:
      if ( v21 != v18 && v27 >= *(_DWORD *)(v18 + 32) )
      {
        v29 = *(_DWORD *)(v18 + 36);
        if ( v29 != -1 && *(_DWORD *)(v7 + 784) == v29 )
        {
          v30 = *(_DWORD *)(ph + 16);
          v31 = v30 + 14;
          v32 = v30 + 7;
          if ( v32 >= 0 )
            v31 = v32;
          v17 = (unsigned int)(v31 >> 3);
          v24 /= v17;
          v16 = v25 % v17;
          v25 /= v17;
        }
      }
      goto LABEL_21;
    }
    v17 = *((_QWORD *)v20 + 1);
    v18 = v22 - 1;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    do
    {
      ++v23;
      v24 = *(unsigned __int8 *)(v17 + v26) | (v24 << 8);
      v25 = *(unsigned __int8 *)(v17 + v18 - v26) | (v25 << 8);
      v26 = v23;
    }
    while ( v23 < v22 );
    v16 = *(_QWORD *)(v7 + 1304);
    v27 = *v20;
    if ( v16 )
      goto LABEL_10;
LABEL_21:
    if ( v25 )
    {
      v50 = *(_QWORD *)(v7 + 864);
      v54 = v24;
      v58 = 0;
      v59 = 0;
      sub_67CB0(v50, v25, 1, &v58);
      v51 = "not ";
      if ( (_QWORD)v59 )
      {
        ++v56;
        v51 = (const char *)&unk_7D386;
      }
      sub_70460(v7, (unsigned int)"GDB:  register (gdb #%d) le (%a) %sloaded\n", *v20, v25, (_DWORD)v51);
      v24 = v54;
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
        v24 = v54;
      }
    }
    if ( v24 )
    {
      v48 = *(_QWORD *)(v7 + 864);
      v53 = v24;
      v58 = 0;
      v59 = 0;
      sub_67CB0(v48, v24, 1, &v58);
      v49 = "not ";
      if ( (_QWORD)v59 )
      {
        ++v55;
        v49 = (const char *)&unk_7D386;
      }
      sub_70460(v7, (unsigned int)"GDB:  register (gdb #%d) be (%a) %sloaded\n", *v20, v53, (_DWORD)v49);
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
    }
LABEL_23:
    v20 += 8;
  }
  while ( (_DWORD *)v19 != v20 );
  if ( v55 == v56 )
    goto LABEL_48;
  v33 = "little-endian";
  v14 = 1;
  *(_DWORD *)(a2 + 8) = v56 < v55;
  if ( v56 < v55 )
    v33 = "big-endian";
  sub_70460(v7, (unsigned int)"GDB:  endianness detected (%s)\n", (_DWORD)v33, v17, v18);
  v13 = *(_DWORD *)(a2 + 4);
  if ( v13 < 0 )
  {
LABEL_28:
    sub_70460(v7, (unsigned int)"GDB:  detecting bitness\n", v10, v13, v12);
    v37 = *a3 + 32LL * a3[1];
    if ( v37 == *a3 )
      goto LABEL_47;
    v52 = v14;
    v38 = (_DWORD *)*a3;
    v39 = 0;
    v40 = a2;
    v41 = v7;
    v42 = v37;
    do
    {
      v43 = *((_QWORD *)v38 + 2);
      sub_70460(v41, (unsigned int)"  register (gdb #%d) with size %d\n", *v38, v43, v36);
      if ( v39 < v43 )
        v39 = v43;
      v38 += 8;
    }
    while ( (_DWORD *)v42 != v38 );
    LODWORD(v7) = v41;
    v44 = v40;
    v45 = v39;
    v14 = v52;
    if ( !v45 )
    {
LABEL_47:
      sub_70460(v7, (unsigned int)"GDB:  could not detect bitness\n", v34, v35, v36);
    }
    else
    {
      v46 = 1;
      v47 = "64-bit";
      if ( v45 <= 4 )
      {
        v46 = 0;
        v47 = "32-bit";
      }
      *(_DWORD *)(v44 + 4) = v46;
      v14 = 1;
      sub_70460(v7, (unsigned int)"GDB:  bitness detected (%s)\n", (_DWORD)v47, v35, v36);
    }
  }
  return v14;
}

