__int64 __fastcall sub_D170(_QWORD *a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  unsigned int v6; // eax
  __int64 v8; // r13
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r13
  void *v16; // r12
  unsigned __int8 *v17; // rdi
  __int64 v18; // rax
  int v19; // r8d
  void *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // r14
  unsigned int v27; // ecx
  unsigned int v28; // edx
  __int64 (__fastcall *v29)(_QWORD *, char); // rax
  __int64 v30; // rbp
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  void *v33; // rsi
  __int64 (__fastcall *v34)(_QWORD *, char); // rax
  __int64 v35; // rbp
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  unsigned __int8 *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 *v43; // rdi
  unsigned __int64 v44; // rbp
  size_t v45; // r8
  size_t v46; // r9
  unsigned __int8 *v47; // rsi
  void (__fastcall *v48)(_QWORD *, unsigned __int8 *, __int64); // r15
  __int64 v49; // rax
  __int64 v50; // rax
  size_t v51; // [rsp+0h] [rbp-498h]
  size_t v52; // [rsp+8h] [rbp-490h]
  unsigned __int8 *v53; // [rsp+10h] [rbp-488h] BYREF
  unsigned __int64 v54; // [rsp+18h] [rbp-480h]
  unsigned __int64 v55; // [rsp+20h] [rbp-478h]
  void *src; // [rsp+30h] [rbp-468h] BYREF
  __int128 v57; // [rsp+38h] [rbp-460h]
  _BYTE v58[1032]; // [rsp+50h] [rbp-448h] BYREF
  unsigned __int64 v59; // [rsp+458h] [rbp-40h]

  v6 = a3 & 0xFF000000;
  v8 = a1[77];
  v59 = __readfsqword(0x28u);
  if ( (a3 & 0xFF000000) == 0xA000000 )
  {
    if ( netnode_supval(*(_QWORD *)(v8 + 144), a3, &src, 4, 97) <= 0 )
      goto LABEL_23;
    v28 = (unsigned int)src;
    v27 = a3;
LABEL_35:
    if ( !(unsigned __int8)sub_CE70(a1, -1, v28, v27, a4, a5, a6) )
      goto LABEL_23;
    return v59 - __readfsqword(0x28u);
  }
  if ( v6 <= 0xA000000 )
  {
    if ( v6 == 0x4000000 )
    {
      if ( netnode_supval(*(_QWORD *)(v8 + 144), a3, &src, 20, 97) <= 0
        || !(unsigned __int8)sub_CE70(a1, *(__int64 *)((char *)&v57 + 4), (unsigned int)src, a3, a4, a5, a6) )
      {
        goto LABEL_23;
      }
    }
    else if ( v6 > 0x4000000 )
    {
      if ( v6 != 100663296
        || netnode_supval(*(_QWORD *)(v8 + 144), a3, &src, 28, 97) <= 0
        || !(unsigned __int8)sub_CE70(a1, (unsigned int)v57, (unsigned int)src, a3, a4, a5, a6) )
      {
        goto LABEL_23;
      }
    }
    else
    {
      if ( ((v6 - 0x1000000) & 0xFE000000) != 0 )
      {
LABEL_23:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 84);
        return (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*a1 + 112LL))(a1, a3, 16);
      }
      sub_7AB0((__int64 *)&v53, (__int64)a1, a3, a4, a5, a6);
      v10 = a1;
      sub_7A10((__int64 *)&src, (__int64)a1, a3, a4, a5, a6);
      v15 = v57;
      v16 = src;
      if ( (unsigned __int64)v57 <= 1 )
      {
        if ( src )
          qfree(src, a1, v11, v12, v13, v14);
        v17 = v53;
        if ( !v53 )
          goto LABEL_23;
LABEL_10:
        v54 = 0;
        qfree(v17, v10, v11, v12, v13, v14);
        goto LABEL_23;
      }
      v44 = v54;
      v45 = v57 - 1;
      v46 = v57 - 1;
      if ( v54 )
      {
        v44 = v54 - 1;
        v46 = v45 + v54 - 1;
        v15 = v57 + v54 - 1;
      }
      v47 = v53;
      v48 = *(void (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 56LL);
      if ( v55 < v15 )
      {
        v52 = v57 - 1;
        v51 = v46;
        v53 = (unsigned __int8 *)qvector_reserve(&v53, v53, v15, 1);
        v45 = v52;
        v47 = v53;
        v46 = v51;
      }
      v54 = v15;
      v47[v46] = 0;
      memcpy(&v53[v44], v16, v45);
      v38 = (unsigned __int8 *)&unk_15584;
      if ( v54 )
        v38 = v53;
      v48(a1, v38, 34);
      if ( v16 )
        qfree(v16, v38, v39, v40, v41, v42);
      v43 = v53;
      if ( v53 )
      {
LABEL_58:
        v54 = 0;
        qfree(v43, v38, v39, v40, v41, v42);
      }
    }
    return v59 - __readfsqword(0x28u);
  }
  if ( v6 == 721420288 )
  {
    if ( netnode_supval(*(_QWORD *)(v8 + 144), a3, &src, 4, 97) <= 0 )
      goto LABEL_23;
    v27 = (unsigned int)src;
    v28 = 0;
    goto LABEL_35;
  }
  if ( v6 <= 0x2B000000 )
  {
    if ( v6 != 285212672 && v6 != 452984832 )
      goto LABEL_23;
    v57 = 0;
    src = nullptr;
    v53 = nullptr;
    v18 = netnode_supval(*(_QWORD *)(v8 + 144), a3, v58, 1024, 100);
    if ( v18 < 0 )
      goto LABEL_23;
    v53 = v58;
    sub_65F0((__int64)a1, (__int64 *)&src, &v53, (unsigned __int64)&v58[v18], v19);
    v20 = &unk_15584;
    if ( (_QWORD)v57 )
      v20 = src;
    (*(void (__fastcall **)(_QWORD *, void *, __int64))(*a1 + 56LL))(a1, v20, 34);
    if ( src )
    {
      *(_QWORD *)&v57 = 0;
      qfree(src, v20, v21, v22, v23, v24);
    }
    return v59 - __readfsqword(0x28u);
  }
  if ( v6 != 1879048192 )
    goto LABEL_23;
  v26 = netnode_altval(*(_QWORD *)(v8 + 144), a3, 114);
  if ( !v26 )
  {
    v10 = (_QWORD *)v8;
    sub_4E10((__int64 *)&v53, v8, a3);
    v17 = v53;
    if ( v54 <= 1 )
    {
      if ( !v53 )
        goto LABEL_23;
      goto LABEL_10;
    }
    v57 = 0;
    src = nullptr;
    idb_utf8(&src, v53, 0xFFFFFFFFLL, 1);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 11);
    v29 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v29 == sub_4B60 )
    {
      v30 = a1[4];
      v31 = 2;
      if ( v30 )
        v31 = v30-- + 1;
      v32 = a1[3];
      if ( a1[5] < v31 )
      {
        v50 = qvector_reserve(a1 + 3, v32, v31, 1);
        a1[3] = v50;
        v32 = v50;
      }
      a1[4] = v31;
      *(_BYTE *)(v32 + v30) = 34;
      *(_BYTE *)(a1[3] + v30 + 1) = 0;
    }
    else
    {
      v29(a1, 34);
    }
    v33 = &unk_15584;
    if ( (_QWORD)v57 )
      v33 = src;
    (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(*a1 + 56LL))(a1, v33, 0);
    v34 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v34 == sub_4B60 )
    {
      v35 = a1[4];
      v36 = 2;
      if ( v35 )
        v36 = v35-- + 1;
      v37 = a1[3];
      if ( a1[5] < v36 )
      {
        v49 = qvector_reserve(a1 + 3, v37, v36, 1);
        a1[3] = v49;
        v37 = v49;
      }
      a1[4] = v36;
      *(_BYTE *)(v37 + v35) = 34;
      *(_BYTE *)(a1[3] + v35 + 1) = 0;
    }
    else
    {
      v34(a1, 34);
    }
    v38 = (unsigned __int8 *)(byte_9 + 2);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 11);
    if ( src )
    {
      *(_QWORD *)&v57 = 0;
      qfree(src, 11, v39, v40, v41, v42);
    }
    v43 = v53;
    if ( v53 )
      goto LABEL_58;
    return v59 - __readfsqword(0x28u);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*a1 + 120LL))(a1, a2, v26, v26) )
    return v59 - __readfsqword(0x28u);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 18);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 104LL))(a1, v26, 16);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 18);
  return remember_problem(2, a1[30], 0);
}
