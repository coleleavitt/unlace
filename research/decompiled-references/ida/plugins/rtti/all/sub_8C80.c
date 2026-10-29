unsigned __int64 __fastcall sub_8C80(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r13
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  char *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r10
  void *v15; // rax
  char *v16; // rcx
  const void *v17; // rsi
  char v18; // al
  char *v19; // r12
  __int64 v20; // rdi
  void *v21; // rax
  const void *v22; // rsi
  __int64 v23; // [rsp+10h] [rbp-208h]
  __int64 v24; // [rsp+18h] [rbp-200h]
  char *v25; // [rsp+18h] [rbp-200h]
  char *v26; // [rsp+20h] [rbp-1F8h]
  __int64 v27; // [rsp+20h] [rbp-1F8h]
  __int64 n; // [rsp+28h] [rbp-1F0h]
  void *v29; // [rsp+30h] [rbp-1E8h] BYREF
  __int128 v30; // [rsp+38h] [rbp-1E0h]
  __int128 v31; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-1B8h]
  __int128 v33; // [rsp+68h] [rbp-1B0h]
  __int64 v34; // [rsp+78h] [rbp-1A0h]
  __int128 v35; // [rsp+80h] [rbp-198h]
  _BYTE v36[40]; // [rsp+90h] [rbp-188h] BYREF
  __int64 v37; // [rsp+B8h] [rbp-160h]
  __int64 v38; // [rsp+C0h] [rbp-158h]
  int v39; // [rsp+C8h] [rbp-150h]
  int v40; // [rsp+D0h] [rbp-148h]
  __int64 v41; // [rsp+D8h] [rbp-140h]
  void *v42; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-130h]
  __int64 v44; // [rsp+F8h] [rbp-120h]
  int v45; // [rsp+100h] [rbp-118h]
  __int64 v46; // [rsp+108h] [rbp-110h]
  _BYTE v47[192]; // [rsp+110h] [rbp-108h] BYREF
  char v48; // [rsp+1D0h] [rbp-48h] BYREF
  unsigned __int64 v49; // [rsp+1D8h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return v49 - __readfsqword(0x28u);
  if ( *(_BYTE *)a3 != 63 )
    return v49 - __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 1) != 63 )
    return v49 - __readfsqword(0x28u);
  if ( *(_BYTE *)(a3 + 2) != 82 )
    return v49 - __readfsqword(0x28u);
  if ( (unsigned __int8)(*(_BYTE *)(a3 + 3) - 48) > 4u )
    return v49 - __readfsqword(0x28u);
  if ( !*(_BYTE *)(a3 + 4) )
    return v49 - __readfsqword(0x28u);
  if ( !(unsigned __int8)is_mapped() )
    return v49 - __readfsqword(0x28u);
  v23 = a1 + 120;
  if ( *(_QWORD *)(a1 + 128) )
  {
    if ( rangeset_t_find_range() )
      return v49 - __readfsqword(0x28u);
  }
  v29 = 0;
  v30 = 0;
  if ( a3 )
  {
    v6 = strlen((const char *)a3);
    v7 = v6 + 1;
    v8 = v6;
    v29 = (void *)qvector_reserve();
    *(_QWORD *)&v30 = v7;
    memmove(v29, (const void *)a3, v8);
    *((_BYTE *)v29 + v8) = 0;
  }
  if ( (unsigned __int8)sub_101D0(&v29, 0x10000000) )
  {
    v9 = *(_QWORD *)(a1 + 128);
    v42 = 0;
    v43 = 0;
    if ( v9 )
    {
      v21 = (void *)qalloc_or_throw();
      v22 = *(const void **)(a1 + 120);
      v42 = v21;
      *((_QWORD *)&v43 + 1) = v9;
      memcpy(v21, v22, 16 * v9);
      *(_QWORD *)&v43 = v9;
    }
    v10 = *(_QWORD *)(a1 + 160);
    v44 = 0;
    v11 = a1 + 168;
    v45 = -1;
    v12 = v47;
    v13 = 7;
    v46 = v10;
    do
    {
      v14 = *(_QWORD *)(v11 + 8);
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = 0;
      if ( v14 )
      {
        v26 = v12;
        v24 = v14;
        n = 8 * v14;
        v15 = (void *)qalloc_or_throw();
        v16 = v26;
        v17 = *(const void **)v11;
        *((_QWORD *)v26 + 2) = v24;
        *(_QWORD *)v26 = v15;
        v27 = v24;
        v25 = v16;
        memcpy(v15, v17, n);
        v12 = v25;
        *((_QWORD *)v25 + 1) = v27;
      }
      --v13;
      v12 += 24;
      v11 += 24;
    }
    while ( &v48 != v12 );
    v48 = *(_BYTE *)(a1 + 360);
    v18 = *(_BYTE *)(a3 + 3);
    if ( v18 == 51 )
    {
      v32 = 0;
      v34 = a1;
      *(_QWORD *)&v35 = 0xFFFFFFFFLL;
      DWORD2(v35) = 0;
      *(_QWORD *)v36 = -1;
      v31 = 0;
      v33 = 0;
      if ( (unsigned __int8)sub_6800(&v31, (__int64)&v42, a2, 0, -1) )
        sub_6800(&v31, v23, a2, 48, -1);
      if ( v32 )
        goto LABEL_42;
    }
    else
    {
      if ( v18 <= 51 )
      {
        if ( v18 == 48 )
        {
          v32 = 0;
          v34 = a1;
          memset(v36, 0, 24);
          v31 = 0;
          v33 = 0;
          v35 = -1;
          *(_QWORD *)v36 = qvector_reserve();
          *(_QWORD *)&v36[8] = 1;
          **(_BYTE **)v36 = 0;
          if ( (unsigned __int8)sub_7690(&v31, (__int64)&v42, a2, 0) )
            sub_7690(&v31, v23, a2, 0x30u);
          sub_51B0(&v31);
        }
        else if ( v18 == 49 )
        {
          v34 = a1;
          v32 = 0;
          v37 = a1;
          *(_QWORD *)&v35 = -1;
          DWORD2(v35) = 0;
          v38 = -1;
          v39 = -1;
          v40 = 0;
          v41 = -1;
          v31 = 0;
          v33 = 0;
          memset(v36, 0, sizeof(v36));
          if ( (unsigned __int8)sub_81A0(&v31, (__int64)&v42, a2, 0) )
            sub_81A0(&v31, v23, a2, 0x30u);
          sub_51F0(&v31);
        }
        goto LABEL_30;
      }
      if ( v18 == 52 )
      {
        v32 = 0;
        v31 = 0;
        v33 = 0;
        v34 = a1;
        *(_QWORD *)&v35 = 0xFFFFFFFFLL;
        DWORD2(v35) = 0;
        memset(v36, 255, 24);
        if ( (unsigned __int8)sub_6C70(&v31, (__int64)&v42, a2, 0) )
          sub_6C70(&v31, v23, a2, 0x30u);
        if ( v32 )
        {
LABEL_42:
          *(_QWORD *)&v33 = 0;
          qfree();
        }
      }
    }
LABEL_30:
    v19 = &v48;
    do
    {
      v20 = *((_QWORD *)v19 - 3);
      v19 -= 24;
      if ( v20 )
      {
        *((_QWORD *)v19 + 1) = 0;
        qfree();
      }
    }
    while ( v19 != v47 );
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree();
    }
    if ( v29 )
      goto LABEL_14;
    return v49 - __readfsqword(0x28u);
  }
  if ( v29 )
  {
LABEL_14:
    *(_QWORD *)&v30 = 0;
    qfree();
  }
  return v49 - __readfsqword(0x28u);
}
