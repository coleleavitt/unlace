__int64 __fastcall sub_504A0(__int64 a1, double a2, __m128i a3, __m128i a4)
{
  char v4; // al
  unsigned int v5; // ebp
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // bp
  unsigned __int8 v10; // al
  bool v11; // r13
  unsigned __int8 v12; // al
  bool v13; // dl
  __int64 v14; // rax
  int v15; // r13d
  int v16; // eax
  char v17; // r14
  int v18; // eax
  __int64 v19; // rax
  unsigned __int8 v20; // dl
  unsigned int v21; // r15d
  unsigned __int8 v22; // cl
  bool v23; // si
  bool v24; // cl
  unsigned int *v25; // rsi
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // al
  unsigned __int64 v36; // r12
  unsigned __int64 *v37; // rsi
  __int64 v38; // rcx
  unsigned __int64 *v39; // rdx
  unsigned __int64 *v40; // rax
  int v41; // edx
  unsigned __int8 v42; // cl
  __int64 (__fastcall *v43)(__int64, __int64); // rax
  unsigned __int8 v44; // al
  bool v45; // al
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v49; // [rsp+Ch] [rbp-5Ch]
  unsigned __int8 v50; // [rsp+Ch] [rbp-5Ch]
  unsigned int v51; // [rsp+1Ch] [rbp-4Ch] BYREF
  unsigned __int64 v52[9]; // [rsp+20h] [rbp-48h] BYREF

  v52[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 57) != 1 )
    return 0;
  if ( (*(_WORD *)(a1 + 40) & 0xFFFB) != 0x7A )
    return 0;
  v4 = *(_BYTE *)(a1 + 97);
  if ( (unsigned __int8)(v4 - 3) > 1u && (!*(_BYTE *)(a1 + 128) || v4 != 2) )
    return 0;
  v7 = *(_QWORD *)(a1 + 864);
  *(_BYTE *)(a1 + 970) = 1;
  if ( !*(_BYTE *)(v7 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
LABEL_10:
    *(_BYTE *)(a1 + 970) = 0;
    return 0;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, v7) )
    goto LABEL_10;
  v9 = *(_BYTE *)(v7 + 5);
  v10 = *(_BYTE *)(a1 + 61);
  v11 = v9 <= 0xF9u;
  if ( v10 <= 0xF9u )
  {
    if ( v9 > 0xF9u || v10 >= v9 || *(_BYTE *)(a1 + 8) && v10 == 2 )
      goto LABEL_18;
  }
  else if ( v9 > 0xF9u && v10 >= v9 )
  {
    goto LABEL_18;
  }
  LOBYTE(v8) = v10 < v9;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a1 + 56, v8);
  v13 = v11 || v12 < v9;
  if ( v12 <= 0xF9u )
    v13 = v11 && v12 < v9;
  if ( v13 )
    goto LABEL_10;
LABEL_18:
  v14 = *(unsigned __int8 *)(a1 + 101);
  *(_BYTE *)(a1 + 970) = 0;
  if ( (unsigned __int8)v14 > 7u )
    return 0;
  v15 = dword_95C80[v14];
  if ( v15 < 0 )
    return 0;
  v16 = 0;
  if ( *(_BYTE *)(a1 + 128) )
    v16 = *(_BYTE *)(a1 + 129) >> 6;
  if ( v16 != v15 )
    return 0;
  v5 = sub_4FB50(
         a1,
         (unsigned __int64 *)(a1 + 912),
         v52,
         &v51,
         a1 + 96,
         v15,
         a2,
         a3,
         a4,
         -1,
         0xFFFFFFFFFFFFFFFFLL,
         0xFFFFFFFFFFFFFFFFLL);
  if ( !(_BYTE)v5 )
    return 0;
  v17 = 7;
  v18 = *(_DWORD *)(a1 + 44) & 0x1018;
  if ( v18 != 4112 )
    v17 = 2 - (v18 == 4096 || v18 == 8);
  v19 = *(_QWORD *)(a1 + 864);
  v20 = *(_BYTE *)(a1 + 61);
  v21 = v51;
  v22 = *(_BYTE *)(v19 + 5);
  v23 = v22 <= 0xF9u;
  v24 = v20 < v22;
  if ( v20 > 0xF9u )
  {
    if ( !v23 && !v24 )
      goto LABEL_29;
  }
  else if ( !v24 || !v23 || v20 == 2 )
  {
    goto LABEL_29;
  }
  v48 = sub_71FC0(*(unsigned __int16 *)(a1 + 62), 0);
  v41 = sub_71FC0(v21, 0);
  v19 = *(_QWORD *)(a1 + 864);
  if ( v48 == v41 )
  {
    v17 = *(_BYTE *)(a1 + 61);
    goto LABEL_29;
  }
  v42 = *(_BYTE *)(v19 + 5);
  v43 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v43 == sub_48DC0 )
  {
    if ( *(_BYTE *)(a1 + 970) )
    {
      v44 = 7;
      goto LABEL_74;
    }
    v49 = v42;
    v44 = sub_48C40(a1, a1 + 56);
    v42 = v49;
  }
  else
  {
    v50 = v42;
    v44 = v43(a1, a1 + 56);
    v42 = v50;
  }
  if ( v44 <= 0xF9u )
  {
LABEL_74:
    v45 = v42 <= 0xF9u && v44 < v42;
    goto LABEL_71;
  }
  v45 = v42 <= 0xF9u || v44 < v42;
LABEL_71:
  if ( v45 )
    return 0;
  v19 = *(_QWORD *)(a1 + 864);
LABEL_29:
  *(_BYTE *)(v19 + 1) = 1;
  *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v21;
  *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = v17;
  v25 = *(unsigned int **)(a1 + 376);
  v26 = *v25 & 0xFFFFF7FD;
  if ( v15 == 2 )
  {
    *v25 = v26 | 2;
  }
  else if ( 1 << v15 > 4 )
  {
    *v25 |= 0x802u;
  }
  else
  {
    v27 = *v25 & 0xFFFFF7FD;
    if ( !v15 )
    {
      BYTE1(v27) = BYTE1(v26) | 8;
      v26 = v27;
    }
    *v25 = v26;
  }
  v28 = *(_QWORD *)(a1 + 912);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 24LL) != 8 )
    v28 = (int)v28;
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 48LL) = v28;
  if ( *(_BYTE *)(a1 + 97) == 3 || (v29 = *(_QWORD *)(a1 + 112)) == 0 )
  {
    v36 = v52[0];
    if ( v52[0] != -1 )
    {
      v37 = *(unsigned __int64 **)(a1 + 840);
      v38 = *(_QWORD *)(a1 + 848);
      v39 = &v37[v38];
      if ( v37 == v39 )
        goto LABEL_57;
      v40 = *(unsigned __int64 **)(a1 + 840);
      while ( v52[0] != *v40 )
      {
        if ( v39 == ++v40 )
          goto LABEL_57;
      }
      if ( v39 == v40 )
      {
LABEL_57:
        if ( *(_QWORD *)(a1 + 856) < (unsigned __int64)(v38 + 1) )
        {
          v46 = qvector_reserve();
          v47 = *(_QWORD *)(a1 + 848);
          *(_QWORD *)(a1 + 840) = v46;
          v39 = (unsigned __int64 *)(v46 + 8 * v47);
        }
        *v39 = v36;
        ++*(_QWORD *)(a1 + 848);
      }
    }
  }
  else
  {
    v30 = *(_QWORD *)(a1 + 376);
    v31 = *(_QWORD *)(v30 + 48) + v29;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 888) + 32LL) + 24LL) != 8 )
      v31 = (int)v31;
    *(_QWORD *)(v30 + 48) = v31;
  }
  v32 = *(_DWORD *)(a1 + 964);
  if ( v32 != -1 )
  {
    *(_DWORD *)(a1 + 972) = v32;
    v33 = *(_QWORD *)(a1 + 376);
    *(_DWORD *)(a1 + 976) = *(_DWORD *)(v33 + 64);
    *(_BYTE *)(a1 + 980) = *(_BYTE *)(v33 + 68);
  }
  v34 = *(_QWORD *)(a1 + 864);
  *(_DWORD *)(a1 + 964) = 5;
  if ( *(_BYTE *)(v34 + 1) == 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 376) + 64LL) = *(unsigned __int16 *)(v34 + 6);
    *(_BYTE *)(*(_QWORD *)(a1 + 376) + 68LL) = *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL);
  }
  v35 = *(_BYTE *)(a1 + 96);
  *(_BYTE *)(a1 + 969) = 0;
  *(_DWORD *)(a1 + 960) = 5;
  *(_BYTE *)(a1 + 920) = v35;
  return v5;
}
