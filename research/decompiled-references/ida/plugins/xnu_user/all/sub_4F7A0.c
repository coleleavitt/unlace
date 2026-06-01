__int64 __fastcall sub_4F7A0(char *a1)
{
  char *v1; // r14
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // rbp
  __int64 result; // rax
  __int64 i; // rdx
  size_t v8; // rax
  size_t v9; // r10
  void *v10; // rdx
  const char *v11; // r11
  const char *v12; // rsi
  __int64 v13; // rdx
  size_t v14; // rax
  size_t v15; // r10
  void *v16; // rdx
  const char *v17; // r11
  size_t v18; // rax
  size_t v19; // r10
  void *v20; // rdx
  const char *v21; // r11
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  const char *v25; // r12
  char *v26; // r15
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // r14
  _DWORD *v32; // rax
  size_t v33; // rax
  size_t v34; // r10
  __int64 v35; // rax
  void *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // [rsp+0h] [rbp-68h]
  __int64 v42; // [rsp+8h] [rbp-60h]
  __int64 v43; // [rsp+10h] [rbp-58h]
  char *src; // [rsp+18h] [rbp-50h]
  _BYTE *srcd; // [rsp+18h] [rbp-50h]
  const char *srca; // [rsp+18h] [rbp-50h]
  _BYTE *srcf; // [rsp+18h] [rbp-50h]
  const char *srcb; // [rsp+18h] [rbp-50h]
  _BYTE *srch; // [rsp+18h] [rbp-50h]
  _BYTE *srcj; // [rsp+18h] [rbp-50h]
  void *srci; // [rsp+18h] [rbp-50h]
  void *srcg; // [rsp+18h] [rbp-50h]
  void *srce; // [rsp+18h] [rbp-50h]
  void *srcc; // [rsp+18h] [rbp-50h]
  size_t v55; // [rsp+20h] [rbp-48h]
  const char *v56; // [rsp+20h] [rbp-48h]
  const char *v57; // [rsp+20h] [rbp-48h]
  char *v58; // [rsp+20h] [rbp-48h]
  size_t v59; // [rsp+28h] [rbp-40h]
  size_t v60; // [rsp+28h] [rbp-40h]
  size_t v61; // [rsp+28h] [rbp-40h]

  v1 = a1;
  v2 = 0;
  v3 = xmmword_9AD38;
  if ( (_QWORD)xmmword_9AD38 )
  {
    do
    {
      v4 = qword_9AD30 + 144 * v2;
      if ( *(_QWORD *)(v4 + 96) )
      {
        *(_QWORD *)(v4 + 104) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v4 + 72) )
      {
        *(_QWORD *)(v4 + 80) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v4 + 48) )
      {
        *(_QWORD *)(v4 + 56) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v4 + 24) )
      {
        *(_QWORD *)(v4 + 32) = 0;
        qfree();
      }
      a1 = *(char **)v4;
      if ( *(_QWORD *)v4 )
      {
        *(_QWORD *)(v4 + 8) = 0;
        qfree();
      }
      ++v2;
    }
    while ( v3 != v2 );
  }
  *(_QWORD *)&xmmword_9AD38 = 0;
  v5 = *(_QWORD *)v1;
  result = *(_QWORD *)v1 + 40LL * *((_QWORD *)v1 + 1);
  v42 = result;
  if ( result != *(_QWORD *)v1 )
  {
    for ( i = 0; ; i = xmmword_9AD38 )
    {
      v25 = ::src;
      if ( *(_QWORD *)(v5 + 8) )
        v25 = *(const char **)v5;
      v12 = (const char *)qword_9AD30;
      if ( *((_QWORD *)&xmmword_9AD38 + 1) < (unsigned __int64)(i + 1) )
      {
        a1 = (char *)&qword_9AD30;
        v35 = qvector_reserve();
        i = xmmword_9AD38;
        qword_9AD30 = v35;
        v12 = (const char *)v35;
      }
      v26 = (char *)&v12[144 * i];
      *(_QWORD *)v26 = 0;
      *((_QWORD *)v26 + 3) = 0;
      *((_QWORD *)v26 + 6) = 0;
      *((_QWORD *)v26 + 9) = 0;
      *((_QWORD *)v26 + 12) = 0;
      *(_OWORD *)(v26 + 8) = 0;
      *((_OWORD *)v26 + 2) = 0;
      *(_OWORD *)(v26 + 56) = 0;
      *((_OWORD *)v26 + 5) = 0;
      *(_OWORD *)(v26 + 104) = 0;
      *(_QWORD *)&xmmword_9AD38 = xmmword_9AD38 + 1;
      v27 = *(_QWORD *)(sub_158A0() + 872);
      v43 = v27;
      if ( *(_DWORD *)(v5 + 24) != 4 )
        sub_4BC60((__int64)"%s.cfg: architecture %s is not an array", v27, (__int64)v25, v28, v29, v30, v41);
      v31 = *(_QWORD **)(v5 + 32);
      if ( v31[1] != 9 )
        goto LABEL_75;
      v32 = (_DWORD *)*v31;
      if ( *(_DWORD *)*v31 != 1
        || v32[4] != 1
        || v32[8] != 1
        || v32[12] != 1
        || v32[16] != 2
        || v32[20] != 2
        || v32[24] != 2
        || v32[28] != 2
        || v32[32] != 1 )
      {
        sub_4BC60(
          (__int64)"%s.cfg: bad type of an array entry for architecture %s",
          v43,
          (__int64)v25,
          v28,
          v29,
          v30,
          v41);
      }
      if ( v25 && (a1 = (char *)v25, v33 = strlen(v25), (v34 = v33) != 0) )
      {
        a1 = *((char **)v26 + 3);
        v36 = (void *)(v33 + 1);
        if ( *((_QWORD *)v26 + 5) < v33 + 1 )
        {
          v55 = v33;
          srci = (void *)(v33 + 1);
          v37 = qvector_reserve();
          v34 = v55;
          v36 = srci;
          *((_QWORD *)v26 + 3) = v37;
          a1 = (char *)v37;
        }
        *((_QWORD *)v26 + 4) = v36;
        v12 = v25;
        srcj = (_BYTE *)v34;
        memmove(a1, v25, v34);
        srcj[*((_QWORD *)v26 + 3)] = 0;
      }
      else
      {
        *((_QWORD *)v26 + 4) = 0;
      }
      if ( *(_DWORD *)*v31 != 1 )
        break;
      *((_DWORD *)v26 + 30) = *(_QWORD *)(*v31 + 8LL);
      if ( *(_DWORD *)(*v31 + 16LL) != 1 )
        break;
      *((_DWORD *)v26 + 31) = *(_QWORD *)(*v31 + 24LL);
      if ( *(_DWORD *)(*v31 + 32LL) != 1 )
        break;
      *((_DWORD *)v26 + 32) = *(_QWORD *)(*v31 + 40LL);
      if ( *(_DWORD *)(*v31 + 48LL) != 1 )
        break;
      *((_DWORD *)v26 + 33) = *(_QWORD *)(*v31 + 56LL);
      v13 = *(_QWORD *)(*v31 + 72LL);
      if ( *(_DWORD *)(*v31 + 64LL) != 2 )
        goto LABEL_74;
      if ( *(_QWORD *)(v13 + 8)
        && *(_QWORD *)v13
        && (a1 = *(char **)v13, src = *(char **)v13, v8 = strlen(*(const char **)v13), (v9 = v8) != 0) )
      {
        v10 = (void *)(v8 + 1);
        a1 = *((char **)v26 + 6);
        v11 = src;
        if ( *((_QWORD *)v26 + 8) < v8 + 1 )
        {
          v61 = v8;
          v58 = src;
          srcc = (void *)(v8 + 1);
          v40 = qvector_reserve();
          v9 = v61;
          v11 = v58;
          *((_QWORD *)v26 + 6) = v40;
          v10 = srcc;
          a1 = (char *)v40;
        }
        *((_QWORD *)v26 + 7) = v10;
        v12 = v11;
        srcd = (_BYTE *)v9;
        memmove(a1, v11, v9);
        srcd[*((_QWORD *)v26 + 6)] = 0;
      }
      else
      {
        *((_QWORD *)v26 + 7) = 0;
      }
      v13 = *(_QWORD *)(*v31 + 88LL);
      if ( *(_DWORD *)(*v31 + 80LL) != 2 )
        goto LABEL_74;
      if ( *(_QWORD *)(v13 + 8)
        && *(_QWORD *)v13
        && (a1 = *(char **)v13, srca = *(const char **)v13, v14 = strlen(*(const char **)v13), (v15 = v14) != 0) )
      {
        v16 = (void *)(v14 + 1);
        a1 = *(char **)v26;
        v17 = srca;
        if ( *((_QWORD *)v26 + 2) < v14 + 1 )
        {
          v57 = srca;
          srce = (void *)(v14 + 1);
          v60 = v14;
          v39 = qvector_reserve();
          v15 = v60;
          v17 = v57;
          *(_QWORD *)v26 = v39;
          v16 = srce;
          a1 = (char *)v39;
        }
        *((_QWORD *)v26 + 1) = v16;
        v12 = v17;
        srcf = (_BYTE *)v15;
        memmove(a1, v17, v15);
        srcf[*(_QWORD *)v26] = 0;
      }
      else
      {
        *((_QWORD *)v26 + 1) = 0;
      }
      v13 = *(_QWORD *)(*v31 + 104LL);
      if ( *(_DWORD *)(*v31 + 96LL) != 2 )
        goto LABEL_74;
      if ( *(_QWORD *)(v13 + 8)
        && *(_QWORD *)v13
        && (a1 = *(char **)v13, srcb = *(const char **)v13, v18 = strlen(*(const char **)v13), (v19 = v18) != 0) )
      {
        v20 = (void *)(v18 + 1);
        a1 = *((char **)v26 + 9);
        v21 = srcb;
        if ( *((_QWORD *)v26 + 11) < v18 + 1 )
        {
          v59 = v18;
          v56 = srcb;
          srcg = (void *)(v18 + 1);
          v38 = qvector_reserve();
          v19 = v59;
          v21 = v56;
          *((_QWORD *)v26 + 9) = v38;
          v20 = srcg;
          a1 = (char *)v38;
        }
        *((_QWORD *)v26 + 10) = v20;
        v12 = v21;
        srch = (_BYTE *)v19;
        memmove(a1, v21, v19);
        srch[*((_QWORD *)v26 + 9)] = 0;
      }
      else
      {
        *((_QWORD *)v26 + 10) = 0;
      }
      v13 = *(_QWORD *)(*v31 + 120LL);
      if ( *(_DWORD *)(*v31 + 112LL) != 2 )
        goto LABEL_74;
      v12 = ::src;
      if ( *(_QWORD *)(v13 + 8) )
        v12 = *(const char **)v13;
      a1 = v26 + 96;
      if ( !(unsigned __int8)sub_63ED0(v26 + 96, v12) )
        sub_4BC60((__int64)"%s.cfg: bad software breakpoint for architecture %s", v43, (__int64)v25, v22, v23, v24, v41);
      if ( *(_DWORD *)(*v31 + 128LL) != 1 )
        break;
      result = *(_QWORD *)(*v31 + 136LL);
      v5 += 40;
      *((_DWORD *)v26 + 34) = result;
      if ( v42 == v5 )
        return result;
    }
    sub_471E0();
LABEL_74:
    sub_472A0(a1, v12, v13);
LABEL_75:
    sub_4BC60((__int64)"%s.cfg: bad number of entries for architecture %s", v43, (__int64)v25, v28, v29, v30, v41);
  }
  return result;
}

