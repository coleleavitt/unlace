__int64 __fastcall sub_EE250(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  char v7; // r8
  __int64 v8; // rdi
  int v10; // r14d
  unsigned __int8 v11; // al
  int v12; // ecx
  int v13; // r15d
  __int64 v14; // r10
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // edx
  __int64 result; // rax
  char v20; // al
  __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rax
  const char *v24; // rax
  const char *v25; // r13
  size_t v26; // rax
  size_t v27; // r14
  size_t v28; // rbx
  _QWORD *v29; // rbx
  int v30; // eax
  const char *v31; // rdx
  bool v32; // zf
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int8 v35; // [rsp+0h] [rbp-158h]
  unsigned __int8 v36; // [rsp+0h] [rbp-158h]
  unsigned __int8 v37; // [rsp+0h] [rbp-158h]
  char v38; // [rsp+8h] [rbp-150h]
  unsigned __int8 v40; // [rsp+10h] [rbp-148h]
  __int64 v41; // [rsp+18h] [rbp-140h]
  _DWORD *v42; // [rsp+38h] [rbp-120h] BYREF
  int v43[4]; // [rsp+40h] [rbp-118h] BYREF
  void *v44; // [rsp+50h] [rbp-108h]
  __int128 v45; // [rsp+58h] [rbp-100h]
  unsigned __int64 v46; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v47; // [rsp+78h] [rbp-E0h]
  int v48; // [rsp+88h] [rbp-D0h]
  _BYTE v49[8]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+98h] [rbp-C0h]
  __int64 v51; // [rsp+A0h] [rbp-B8h]
  __int64 v52; // [rsp+B0h] [rbp-A8h]
  __int64 v53; // [rsp+B8h] [rbp-A0h]
  unsigned int v54; // [rsp+D8h] [rbp-80h]
  int *v55; // [rsp+E0h] [rbp-78h]
  __int64 v56; // [rsp+E8h] [rbp-70h]
  __int64 v57; // [rsp+F0h] [rbp-68h]
  __int64 v58; // [rsp+100h] [rbp-58h]
  __int64 v59; // [rsp+108h] [rbp-50h]
  unsigned __int64 v60; // [rsp+118h] [rbp-40h]

  v5 = 80LL * a4;
  v6 = *(_QWORD *)(a2 + 480);
  v7 = *(_BYTE *)(v6 + 145);
  v8 = v5 + *(_QWORD *)(a1 + 24);
  v60 = __readfsqword(0x28u);
  v38 = v7;
  if ( v7 == (unsigned __int8)sub_118090(v8, v6, 0) )
  {
    v10 = a4;
    if ( !v38 )
    {
      v10 = a4 - 1;
      v5 = 80LL * (a4 - 1);
    }
  }
  else
  {
    v10 = a4 + 1;
    v5 = 80LL * (a4 + 1);
  }
  v11 = sub_118090(v8, v6, 0);
  v12 = v10;
  v13 = a4 - v11;
  if ( v10 > v13 )
    v12 = v13;
  if ( *(_DWORD *)(a1 + 8) > v12 )
    return 0;
  if ( (unsigned __int64)(v12 + 1) >= *(_QWORD *)(a1 + 32) )
    return 0;
  v14 = *(_QWORD *)(a1 + 24);
  v15 = v14 + v5;
  if ( ((*(_DWORD *)(v15 + 56) - 2) & 0xFFFFFFFD) == 0 )
    return 0;
  v16 = 80LL * v13;
  v17 = v14 + v16;
  v41 = v16;
  v18 = *(_DWORD *)(v14 + v16 + 56) - 2;
  result = 0;
  if ( (v18 & 0xFFFFFFFD) == 0 )
    return result;
  sub_CC4F0((__int64)v49, *(_QWORD *)(a2 + 480), 0x40u);
  v43[0] = 0;
  copy_argloc();
  sub_1BFAB0(*(_QWORD *)(a2 + 480), v43, *(int *)(v15 + 4), v17 + 56, *(int *)(v17 + 4));
  sub_326800(&v42, *(_QWORD *)(v6 + 112), (unsigned int)(*(_DWORD *)(v15 + 4) + *(_DWORD *)(v17 + 4)));
  if ( !sub_D1C00(v55, v43, &v42, 0xFFFFFFFFLL, v54) && !(unsigned __int8)sub_D1B90((__int64)v49, v43, (__int64)&v42, 1) )
    goto LABEL_12;
  if ( (unsigned __int8)sub_12C000(a2, a3, v15, a3, v17, 0) )
  {
    if ( !(unsigned __int8)sub_12E260(a2, a3, v15, a3, v17, 8) )
      goto LABEL_12;
LABEL_35:
    copy_argloc();
    copy_tinfo_t();
    v24 = (const char *)sub_1ADBE0(v15, &v42);
    v44 = nullptr;
    v25 = v24;
    v45 = 0;
    if ( v24 )
    {
      v26 = strlen(v24);
      v27 = v26 + 1;
      v28 = v26;
      v44 = (void *)qvector_reserve();
      *(_QWORD *)&v45 = v27;
      memmove(v44, v25, v28);
      *((_BYTE *)v44 + v28) = 0;
    }
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 24) + v41);
    cleanup_argloc();
    if ( v29[4] )
    {
      v29[5] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1181E0(v29);
    memmove(v29, v29 + 10, *(_QWORD *)(a1 + 24) + 80LL * *(_QWORD *)(a1 + 32) - (_QWORD)v29 - 80);
    --*(_QWORD *)(a1 + 32);
    if ( (unsigned __int8)sub_315CB0(*(_QWORD *)(a2 + 480)) && (unsigned int)(*(_DWORD *)(a1 + 20) - 208) > 0x2F )
    {
      v33 = *(_QWORD *)(a2 + 64);
      v47 = 0;
      v46 = 0;
      v48 = 0;
      sub_D16E0((__int64)v49, (unsigned int *)&v46, v33, (_QWORD *)(a1 + 24));
    }
    v30 = *(_DWORD *)(a2 + 24);
    v31 = s1;
    BYTE1(v30) &= ~2u;
    LOBYTE(v30) = v30 | 0x80;
    v32 = (_QWORD)v45 == 0;
    *(_DWORD *)(a2 + 24) = v30;
    if ( !v32 )
      v31 = (const char *)v44;
    sub_9D960(a2, (__int64)"combined partial callarg %s", v31);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree();
    }
    v20 = 1;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v15 + 4) == *(_DWORD *)(v17 + 4) )
  {
    v21 = *(_QWORD *)(a2 + 480);
    v22 = *(_QWORD *)(v21 + 112);
    if ( !(unsigned __int8)sub_118090(v15, v21, 0)
      && *(_BYTE *)v17 == 4
      && (v34 = *(_QWORD *)(v17 + 8), *(_DWORD *)v34 == 11)
      && *(_BYTE *)(v34 + 32) == 1
      && *(_BYTE *)v15 == 1
      && *(_DWORD *)(v34 + 40) == *(_DWORD *)(v15 + 8)
      && (unsigned __int8)sub_118150(v34 + 32, v22) )
    {
      sub_1205C0(v15);
    }
    else
    {
      if ( !(unsigned __int8)sub_118090(v17, v21, 0) )
        goto LABEL_12;
      if ( *(_BYTE *)v15 != 4 )
        goto LABEL_12;
      v23 = *(_QWORD *)(v15 + 8);
      if ( *(_DWORD *)v23 != 10
        || *(_BYTE *)(v23 + 32) != 1
        || *(_BYTE *)v17 != 1
        || *(_DWORD *)(v23 + 40) != *(_DWORD *)(v17 + 8)
        || !(unsigned __int8)sub_118150(v23 + 32, v22) )
      {
        goto LABEL_12;
      }
      *(_QWORD *)&v47 = 0;
      v46 = 0xFFFFFFFF00000000LL;
      sub_117E50(&v46, *(_QWORD *)(v15 + 8) + 32LL);
      sub_117E50(v15, &v46);
      sub_1181E0(&v46);
    }
    goto LABEL_35;
  }
LABEL_12:
  v20 = 0;
LABEL_13:
  v40 = v20;
  clear_tinfo_t();
  cleanup_argloc();
  result = v40;
  if ( v58 )
  {
    v59 = 0;
    qfree();
    result = v40;
  }
  if ( v56 )
  {
    v35 = result;
    v57 = 0;
    qfree();
    result = v35;
  }
  if ( v52 )
  {
    v36 = result;
    v53 = 0;
    qfree();
    result = v36;
  }
  if ( v50 )
  {
    v37 = result;
    v51 = 0;
    qfree();
    return v37;
  }
  return result;
}

