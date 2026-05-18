__int64 __fastcall sub_45B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  void **p_ptr; // rdi
  void **v7; // rsi
  int v9; // eax
  char **v10; // rdi
  __int64 v11; // r13
  unsigned int v13; // eax
  __m128i v14; // xmm0
  void *v15; // rdx
  __m128i v16; // xmm1
  unsigned __int64 v17; // r14
  __int64 v18; // r14
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  const char *v23; // r8
  const char *v24; // rsi
  const char *v25; // rcx
  const char *v26; // r9
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  const char *v31; // rdi
  const char *v32; // rsi
  const char *v33; // rcx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  void **v38; // r8
  void **v39; // r8
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  __int64 v44; // rax
  __int64 v45; // rax
  void **v46; // [rsp+0h] [rbp-170h]
  void **v47; // [rsp+0h] [rbp-170h]
  void *ptr; // [rsp+10h] [rbp-160h] BYREF
  __int128 v50; // [rsp+18h] [rbp-158h]
  void *v51; // [rsp+30h] [rbp-140h] BYREF
  __int128 v52; // [rsp+38h] [rbp-138h]
  void *v53; // [rsp+48h] [rbp-128h]
  __int128 v54; // [rsp+50h] [rbp-120h]
  void *v55; // [rsp+60h] [rbp-110h]
  __int128 v56; // [rsp+68h] [rbp-108h]
  void *v57; // [rsp+78h] [rbp-F8h]
  __int128 v58; // [rsp+80h] [rbp-F0h]
  __int64 v59; // [rsp+90h] [rbp-E0h]
  __int64 v60; // [rsp+98h] [rbp-D8h]
  int v61; // [rsp+A0h] [rbp-D0h]
  void *v62; // [rsp+B0h] [rbp-C0h] BYREF
  __m128i v63; // [rsp+B8h] [rbp-B8h] BYREF
  void *v64; // [rsp+C8h] [rbp-A8h]
  __int128 v65; // [rsp+D0h] [rbp-A0h]
  void *src; // [rsp+E0h] [rbp-90h]
  __int128 v67; // [rsp+E8h] [rbp-88h]
  void *v68; // [rsp+F8h] [rbp-78h]
  __int128 v69; // [rsp+100h] [rbp-70h]
  void *v70; // [rsp+110h] [rbp-60h]
  __int128 v71; // [rsp+118h] [rbp-58h]
  __int64 v72; // [rsp+128h] [rbp-48h]
  char v73; // [rsp+130h] [rbp-40h]
  unsigned __int64 v74; // [rsp+138h] [rbp-38h]

  v4 = a4 + 48;
  p_ptr = &ptr;
  v7 = &v62;
  v74 = __readfsqword(0x28u);
  v73 = 0;
  v62 = nullptr;
  v64 = nullptr;
  src = nullptr;
  v68 = nullptr;
  v70 = nullptr;
  v72 = 0;
  v51 = nullptr;
  v53 = nullptr;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  v69 = 0;
  v71 = 0;
  v52 = 0;
  v54 = 0;
  v55 = nullptr;
  v57 = nullptr;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  ptr = nullptr;
  v56 = 0;
  v58 = 0;
  v50 = 0;
  v9 = sub_44F40((__int64)&ptr, (__int64)&v62, (char *)(a4 + 48), a4 + 72);
  if ( v9 == 4 )
  {
    v13 = sub_44C20(a1, a2, (__int64)&v51, v4);
    if ( v13 )
      sub_44E80(a1, v13);
    goto LABEL_30;
  }
  if ( v9 == 53 )
  {
LABEL_30:
    v10 = (char **)(a2 + 16);
    goto LABEL_5;
  }
  if ( v9 )
  {
    v10 = (char **)(a2 + 16);
LABEL_5:
    sub_299F0(v10);
LABEL_6:
    LODWORD(v11) = 0;
    goto LABEL_7;
  }
  v14 = _mm_loadu_si128((const __m128i *)(a3 + 80));
  v15 = v62;
  v16 = _mm_loadu_si128(&v63);
  v17 = v65;
  v62 = *(void **)(a3 + 72);
  *(_QWORD *)(a3 + 72) = v15;
  *(__m128i *)(a3 + 80) = v16;
  v63 = v14;
  if ( v17 > 1 )
  {
    v39 = (void **)v64;
    p_ptr = *(void ***)(a3 + 24);
    if ( *(_QWORD *)(a3 + 40) < v17 )
    {
      v46 = (void **)v64;
      v44 = sub_1987B0(a3 + 24, *(_QWORD *)(a3 + 24), v17, 1);
      *(_QWORD *)(a3 + 24) = v44;
      v39 = v46;
      p_ptr = (void **)v44;
    }
    *(_QWORD *)(a3 + 32) = v17;
    v7 = v39;
    memmove(p_ptr, v39, v17 - 1);
    *(_BYTE *)(*(_QWORD *)(a3 + 24) + v17 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a3 + 32) = 0;
  }
  v18 = v67;
  if ( (unsigned __int64)v67 > 1 )
  {
    v38 = (void **)src;
    p_ptr = *(void ***)(a3 + 48);
    if ( *(_QWORD *)(a3 + 64) < (unsigned __int64)v67 )
    {
      v47 = (void **)src;
      v45 = sub_1987B0(a3 + 48, *(_QWORD *)(a3 + 48), v67, 1);
      *(_QWORD *)(a3 + 48) = v45;
      v38 = v47;
      p_ptr = (void **)v45;
    }
    *(_QWORD *)(a3 + 56) = v18;
    v7 = v38;
    memmove(p_ptr, v38, v18 - 1);
    *(_BYTE *)(*(_QWORD *)(a3 + 48) + v18 - 1) = 0;
  }
  else
  {
    *(_QWORD *)(a3 + 56) = 0;
  }
  v19 = *(_DWORD *)(a3 + 112) & 0xFFFFFFFE;
  if ( v73 )
    v19 = *(_DWORD *)(a3 + 112) | 1;
  *(_DWORD *)(a3 + 112) = v19 | 2;
  *(_QWORD *)(a3 + 104) = sub_199140(p_ptr, v7);
  v11 = (unsigned int)sub_44C20(a1, a2, (__int64)&v51, v4);
  v20 = *(_QWORD *)(a3 + 104);
  v21 = *(_QWORD *)(a3 + 8);
  v22 = *(_DWORD *)(a3 + 112) & 1;
  if ( (_DWORD)v11 )
  {
    v31 = s1;
    *(_DWORD *)(a3 + 96) = v59;
    if ( v21 )
      v31 = *(const char **)a3;
    v32 = s1;
    if ( *(_QWORD *)(a3 + 56) )
      v32 = *(const char **)(a3 + 48);
    v33 = s1;
    if ( *(_QWORD *)(a3 + 32) )
      v33 = *(const char **)(a3 + 24);
    sub_33870(
      *(_QWORD *)(a1 + 8),
      a2 + 40,
      nullptr,
      "UPDATE users SET is_admin = ?, license_name = ?, license_email = ?, license_id = ?, last_active = ?, is_deleted = 0 WHERE id = ? ",
      (__int64)"yssstu",
      (unsigned int)v22,
      v33,
      v32,
      v31,
      v20,
      v11);
    if ( *(_QWORD *)(a2 + 48) > 1u )
      sub_16B870(
        (unsigned int)"Error while updating users with vault_server data: %s\n",
        *(_QWORD *)(a2 + 40),
        v34,
        v35,
        v36,
        v37);
  }
  else
  {
    *(_DWORD *)(a3 + 96) = 0;
    v23 = s1;
    if ( v21 )
      v23 = *(const char **)a3;
    v24 = s1;
    if ( *(_QWORD *)(a3 + 56) )
      v24 = *(const char **)(a3 + 48);
    v25 = s1;
    if ( *(_QWORD *)(a3 + 32) )
      v25 = *(const char **)(a3 + 24);
    v26 = s1;
    if ( *(_QWORD *)(a3 + 80) )
      v26 = *(const char **)(a3 + 72);
    if ( !(unsigned __int8)sub_33870(
                             *(_QWORD *)(a1 + 8),
                             a2 + 40,
                             nullptr,
                             "INSERT INTO users ( user_name, license_name, license_email, license_id, is_admin, last_acti"
                             "ve) VALUES (?, ?, ?, ?, ?, ?)",
                             (__int64)"ssssyt",
                             v26,
                             v25,
                             v24,
                             v23,
                             v22,
                             v20) )
    {
      if ( *(_QWORD *)(a2 + 48) > 1u )
        sub_16B870(
          (unsigned int)"Error while inserting users with vault_server data: %s\n",
          *(_QWORD *)(a2 + 40),
          v27,
          v28,
          v29,
          v30);
      goto LABEL_6;
    }
    LODWORD(v11) = sub_31420(*(_QWORD *)(a1 + 8), a2 + 40);
    if ( *(_QWORD *)(a2 + 48) > 1u )
      sub_16B870(
        (unsigned int)"Error while retrieving last inserted id: %s\n",
        *(_QWORD *)(a2 + 40),
        v40,
        v41,
        v42,
        v43);
  }
LABEL_7:
  if ( ptr )
  {
    *(_QWORD *)&v50 = 0;
    j__free(ptr);
  }
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    j__free(v57);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    j__free(v55);
  }
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    j__free(v53);
  }
  if ( v51 )
  {
    *(_QWORD *)&v52 = 0;
    j__free(v51);
  }
  if ( v70 )
  {
    *(_QWORD *)&v71 = 0;
    j__free(v70);
  }
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    j__free(v68);
  }
  if ( src )
  {
    *(_QWORD *)&v67 = 0;
    j__free(src);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    j__free(v64);
  }
  if ( v62 )
  {
    v63.m128i_i64[0] = 0;
    j__free(v62);
  }
  return (unsigned int)v11;
}
