__int64 __fastcall sub_557D0(__int64 a1, _DWORD *a2)
{
  unsigned __int8 *v3; // rdi
  unsigned __int64 v4; // r12
  int v5; // r15d
  unsigned __int8 **v6; // r13
  int v7; // eax
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rax
  int v10; // edx
  const char *v11; // r14
  size_t v12; // rax
  size_t v13; // r8
  size_t v14; // rax
  size_t v15; // r8
  bool v16; // dl
  char v17; // dl
  unsigned __int8 *v18; // rax
  int v19; // edx
  unsigned __int8 *v20; // rcx
  unsigned __int8 v21; // al
  int v22; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  void *v31; // rdi
  size_t v32; // rdx
  void *v33; // rdi
  size_t v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  char *s; // [rsp+0h] [rbp-80h]
  size_t v38; // [rsp+8h] [rbp-78h]
  size_t v39; // [rsp+8h] [rbp-78h]
  size_t v40; // [rsp+8h] [rbp-78h]
  size_t v41; // [rsp+8h] [rbp-78h]
  size_t v42; // [rsp+10h] [rbp-70h]
  size_t v43; // [rsp+10h] [rbp-70h]
  unsigned __int8 *v44; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int8 *v45; // [rsp+28h] [rbp-58h]
  __int128 v46; // [rsp+30h] [rbp-50h]
  unsigned __int64 v47; // [rsp+40h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v46 = 0;
  v45 = nullptr;
  v3 = nullptr;
  if ( netnode_qgetblob() <= 0 )
    goto LABEL_27;
  v44 = v45;
  v4 = (unsigned __int64)&v45[v46];
  if ( v45 >= &v45[(unsigned __int64)v46] )
  {
    v5 = 0;
    goto LABEL_4;
  }
  v5 = *v45;
  v44 = v45 + 1;
  if ( v5 > 6 )
  {
LABEL_27:
    LODWORD(v6) = 0;
    goto LABEL_28;
  }
LABEL_4:
  v6 = &v44;
  v7 = unpack_dd();
  v8 = v44;
  *(_DWORD *)a1 = v7;
  if ( (unsigned __int64)v8 >= v4 )
  {
    *(_QWORD *)(a1 + 4) = 0;
    v9 = v8;
    goto LABEL_6;
  }
  v24 = *v8;
  v9 = v8 + 1;
  v44 = v8 + 1;
  *(_DWORD *)(a1 + 4) = v24;
  if ( (unsigned __int64)(v8 + 1) >= v4 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    goto LABEL_6;
  }
  v25 = v8[1];
  v9 = v8 + 2;
  v44 = v8 + 2;
  *(_DWORD *)(a1 + 8) = v25;
  if ( (unsigned __int64)(v8 + 2) >= v4 )
  {
LABEL_6:
    *(_DWORD *)(a1 + 12) = 0;
LABEL_7:
    *(_DWORD *)(a1 + 20) = 0;
LABEL_8:
    *(_DWORD *)(a1 + 24) = 0;
LABEL_9:
    *(_DWORD *)(a1 + 28) = 0;
LABEL_10:
    *(_DWORD *)(a1 + 32) = 0;
LABEL_11:
    *(_DWORD *)(a1 + 36) = 0;
    v10 = 0;
    goto LABEL_12;
  }
  v26 = v8[2];
  v9 = v8 + 3;
  v44 = v8 + 3;
  *(_DWORD *)(a1 + 12) = v26;
  if ( (unsigned __int64)(v8 + 3) >= v4 )
    goto LABEL_7;
  v27 = v8[3];
  v9 = v8 + 4;
  v44 = v8 + 4;
  *(_DWORD *)(a1 + 20) = v27;
  if ( (unsigned __int64)(v8 + 4) >= v4 )
    goto LABEL_8;
  v28 = v8[4];
  v9 = v8 + 5;
  v44 = v8 + 5;
  *(_DWORD *)(a1 + 24) = v28;
  if ( (unsigned __int64)(v8 + 5) >= v4 )
    goto LABEL_9;
  v29 = v8[5];
  v9 = v8 + 6;
  v44 = v8 + 6;
  *(_DWORD *)(a1 + 28) = v29;
  if ( (unsigned __int64)(v8 + 6) >= v4 )
    goto LABEL_10;
  v30 = v8[6];
  v9 = v8 + 7;
  v44 = v8 + 7;
  *(_DWORD *)(a1 + 32) = v30;
  if ( (unsigned __int64)(v8 + 7) >= v4 )
    goto LABEL_11;
  v9 = v8 + 8;
  *(_DWORD *)(a1 + 36) = v8[7];
  if ( (unsigned __int64)(v8 + 8) >= v4 )
  {
    v10 = 0;
  }
  else
  {
    v9 = v8 + 9;
    v10 = v8[8];
  }
LABEL_12:
  *(_DWORD *)(a1 + 40) = v10;
  v44 = v9;
  v11 = (const char *)unpack_ds();
  s = (char *)unpack_ds();
  LOBYTE(v6) = s != nullptr && v11 != nullptr;
  if ( (_BYTE)v6 )
  {
    v12 = strlen(v11);
    v13 = v12;
    if ( v12 )
    {
      v31 = *(void **)(a1 + 48);
      v32 = v12 + 1;
      if ( *(_QWORD *)(a1 + 64) < v12 + 1 )
      {
        v43 = v12;
        v41 = v12 + 1;
        v36 = qvector_reserve();
        *(_QWORD *)(a1 + 48) = v36;
        v13 = v43;
        v31 = (void *)v36;
        v32 = v41;
      }
      *(_QWORD *)(a1 + 56) = v32;
      v38 = v13;
      memmove(v31, v11, v13);
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + v38) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
    }
    v14 = strlen(s);
    v15 = v14;
    if ( v14 )
    {
      v33 = *(void **)(a1 + 72);
      v34 = v14 + 1;
      if ( *(_QWORD *)(a1 + 88) < v14 + 1 )
      {
        v42 = v14;
        v40 = v14 + 1;
        v35 = qvector_reserve();
        *(_QWORD *)(a1 + 72) = v35;
        v15 = v42;
        v33 = (void *)v35;
        v34 = v40;
      }
      *(_QWORD *)(a1 + 80) = v34;
      v39 = v15;
      memmove(v33, s, v15);
      *(_BYTE *)(*(_QWORD *)(a1 + 72) + v39) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
  qfree();
  qfree();
  v3 = v45;
  if ( v5 <= 1 )
  {
    *(_BYTE *)(a1 + 96) = 0;
    goto LABEL_28;
  }
  v16 = 0;
  if ( (unsigned __int64)v44 < v4 )
  {
    v17 = *v44++;
    v16 = v17 != 0;
  }
  *(_BYTE *)(a1 + 96) = v16;
  if ( v5 > 4 )
  {
    v18 = v44;
    if ( (unsigned __int64)v44 >= v4 )
    {
      *(_DWORD *)(a1 + 16) = 0;
      if ( v5 != 6 )
        goto LABEL_28;
      goto LABEL_44;
    }
    v19 = *v44;
    v20 = ++v44;
    *(_DWORD *)(a1 + 16) = v19;
    if ( v5 == 6 )
    {
      if ( (unsigned __int64)v20 < v4 )
      {
        v21 = v18[1];
LABEL_25:
        *(_BYTE *)(a1 + 97) = v21;
        goto LABEL_28;
      }
LABEL_44:
      v21 = 0;
      goto LABEL_25;
    }
  }
LABEL_28:
  v22 = 16;
  if ( !a2[51] && !a2[52] )
    v22 = 8;
  a2[128] = v22;
  if ( v3 )
  {
    *(_QWORD *)&v46 = 0;
    qfree();
  }
  return (unsigned int)v6;
}

