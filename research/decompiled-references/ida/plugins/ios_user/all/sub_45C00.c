__int64 __fastcall sub_45C00(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rbx
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // ecx
  unsigned int v16; // r13d
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // r14
  _DWORD *v23; // r15
  __int64 v24; // r13
  unsigned __int64 v25; // rdi
  int v26; // edx
  unsigned __int64 v27; // rsi
  __int64 v28; // rax
  int v29; // edi
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  const char *v35; // rdx
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // r15
  _DWORD *v41; // r12
  unsigned __int64 v42; // r13
  __int64 v43; // r14
  int v44; // ebp
  __int64 v45; // rbx
  unsigned __int64 v46; // r15
  __int64 v47; // rbp
  unsigned __int64 v48; // r14
  int v49; // eax
  const char *v50; // rdx
  __int64 v51; // rdi
  const char *v52; // r8
  __int64 v53; // rdi
  const char *v54; // r8
  unsigned __int8 v55; // [rsp+8h] [rbp-80h]
  int v56; // [rsp+8h] [rbp-80h]
  unsigned __int64 v57; // [rsp+10h] [rbp-78h]
  unsigned __int64 v58; // [rsp+18h] [rbp-70h]
  unsigned __int64 v59; // [rsp+20h] [rbp-68h]
  __int64 ph; // [rsp+28h] [rbp-60h]
  __int64 v61; // [rsp+30h] [rbp-58h] BYREF
  __int128 v62; // [rsp+38h] [rbp-50h]
  unsigned __int64 v63; // [rsp+48h] [rbp-40h]

  v8 = a1;
  v9 = *(_DWORD *)(a2 + 8);
  v10 = *(_DWORD *)(a2 + 4);
  v63 = __readfsqword(0x28u);
  sub_65BB0(
    a1,
    (unsigned int)"GDB: Refining ida target with 'T' stop reply information (is_64 %d) (is_be %d)\n",
    v10,
    v9,
    a5,
    a6);
  if ( *(int *)(a2 + 8) >= 0 )
  {
LABEL_2:
    v15 = *(_DWORD *)(a2 + 4);
    v16 = 0;
    if ( v15 < 0 )
      goto LABEL_28;
    return v16;
  }
  sub_65BB0(a1, (unsigned int)"GDB:  detecting endianness\n", v11, v12, v13, v14);
  ph = get_ph();
  v22 = *a3 + 32LL * a3[1];
  if ( *a3 == v22 )
  {
LABEL_48:
    sub_65BB0(v8, (unsigned int)"GDB:  could not detect endianness\n", v18, v19, v20, v21);
    goto LABEL_2;
  }
  v58 = 0;
  v23 = (_DWORD *)*a3;
  v24 = a1 + 1296;
  v59 = 0;
  do
  {
    v25 = *((_QWORD *)v23 + 2);
    if ( !v25 )
    {
      v18 = *(_QWORD *)(v8 + 1304);
      v29 = *v23;
      v21 = 0;
      v27 = 0;
      if ( !v18 )
        goto LABEL_23;
LABEL_10:
      v20 = v8 + 1296;
      do
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(v18 + 16);
          v30 = *(_QWORD *)(v18 + 24);
          if ( *(_DWORD *)(v18 + 32) < v29 )
            break;
          v20 = v18;
          v18 = *(_QWORD *)(v18 + 16);
          if ( !v19 )
            goto LABEL_14;
        }
        v18 = *(_QWORD *)(v18 + 24);
      }
      while ( v30 );
LABEL_14:
      if ( v24 != v20 && v29 >= *(_DWORD *)(v20 + 32) )
      {
        v31 = *(_DWORD *)(v20 + 36);
        if ( v31 != -1 && *(_DWORD *)(v8 + 784) == v31 )
        {
          v32 = *(_DWORD *)(ph + 16);
          v33 = v32 + 14;
          v34 = v32 + 7;
          if ( v34 >= 0 )
            v33 = v34;
          v19 = (unsigned int)(v33 >> 3);
          v21 /= v19;
          v18 = v27 % v19;
          v27 /= v19;
        }
      }
      goto LABEL_21;
    }
    v19 = *((_QWORD *)v23 + 1);
    v20 = v25 - 1;
    v26 = 0;
    v21 = 0;
    v27 = 0;
    v28 = 0;
    do
    {
      ++v26;
      v21 = *(unsigned __int8 *)(v19 + v28) | (v21 << 8);
      v27 = *(unsigned __int8 *)(v19 + v20 - v28) | (v27 << 8);
      v28 = v26;
    }
    while ( v26 < v25 );
    v18 = *(_QWORD *)(v8 + 1304);
    v29 = *v23;
    if ( v18 )
      goto LABEL_10;
LABEL_21:
    if ( v27 )
    {
      v53 = *(_QWORD *)(v8 + 864);
      v57 = v21;
      v61 = 0;
      v62 = 0;
      sub_5D4E0(v53, v27, 1, &v61);
      v54 = "not ";
      if ( (_QWORD)v62 )
      {
        ++v59;
        v54 = (const char *)&unk_71F21;
      }
      sub_65BB0(v8, (unsigned int)"GDB:  register (gdb #%d) le (%a) %sloaded\n", *v23, v27, (_DWORD)v54, v57);
      v21 = v57;
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree();
        v21 = v57;
      }
    }
    if ( v21 )
    {
      v51 = *(_QWORD *)(v8 + 864);
      v56 = v21;
      v61 = 0;
      v62 = 0;
      sub_5D4E0(v51, v21, 1, &v61);
      v52 = "not ";
      if ( (_QWORD)v62 )
      {
        ++v58;
        v52 = (const char *)&unk_71F21;
      }
      sub_65BB0(v8, (unsigned int)"GDB:  register (gdb #%d) be (%a) %sloaded\n", *v23, v56, (_DWORD)v52, v56);
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree();
      }
    }
LABEL_23:
    v23 += 8;
  }
  while ( (_DWORD *)v22 != v23 );
  if ( v58 == v59 )
    goto LABEL_48;
  v35 = "little-endian";
  v16 = 1;
  *(_DWORD *)(a2 + 8) = v59 < v58;
  if ( v59 < v58 )
    v35 = "big-endian";
  sub_65BB0(v8, (unsigned int)"GDB:  endianness detected (%s)\n", (_DWORD)v35, v19, v20, v21);
  v15 = *(_DWORD *)(a2 + 4);
  if ( v15 < 0 )
  {
LABEL_28:
    sub_65BB0(v8, (unsigned int)"GDB:  detecting bitness\n", v11, v15, v13, v14);
    v40 = *a3 + 32LL * a3[1];
    if ( v40 == *a3 )
      goto LABEL_47;
    v55 = v16;
    v41 = (_DWORD *)*a3;
    v42 = 0;
    v43 = a2;
    v44 = v8;
    v45 = v40;
    do
    {
      v46 = *((_QWORD *)v41 + 2);
      sub_65BB0(v44, (unsigned int)"  register (gdb #%d) with size %d\n", *v41, v46, v38, v39);
      if ( v42 < v46 )
        v42 = v46;
      v41 += 8;
    }
    while ( (_DWORD *)v45 != v41 );
    LODWORD(v8) = v44;
    v47 = v43;
    v48 = v42;
    v16 = v55;
    if ( !v48 )
    {
LABEL_47:
      sub_65BB0(v8, (unsigned int)"GDB:  could not detect bitness\n", v36, v37, v38, v39);
    }
    else
    {
      v49 = 1;
      v50 = "64-bit";
      if ( v48 <= 4 )
      {
        v49 = 0;
        v50 = "32-bit";
      }
      *(_DWORD *)(v47 + 4) = v49;
      v16 = 1;
      sub_65BB0(v8, (unsigned int)"GDB:  bitness detected (%s)\n", (_DWORD)v50, v37, v38, v39);
    }
  }
  return v16;
}

