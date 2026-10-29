__int64 __fastcall sub_6BC20(
        _QWORD *a1,
        __int64 a2,
        void (__fastcall *a3)(_QWORD *, __int64, __int64, __int64, __int64),
        __int64 a4)
{
  __int64 (__fastcall *v6)(__int64); // rax
  _BYTE *v7; // rax
  __int64 (__fastcall *v9)(__int64); // rax
  int v10; // eax
  __int64 (__fastcall *v11)(__int64); // rax
  const char *v12; // rbp
  char *(__fastcall *v13)(__int64, const char *); // rax
  _BYTE *v14; // rdi
  __int64 i; // rax
  int v16; // eax
  char **v17; // r12
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  char j; // al
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // r14
  size_t v26; // rax
  size_t v27; // r12
  unsigned __int64 v28; // r13
  _QWORD *v29; // rbx
  __int64 v30; // rbp
  __int64 (__fastcall *v31)(__int64, int); // rax
  const char *v32; // r10
  size_t v33; // rax
  const char *v34; // r10
  size_t v35; // r14
  __int64 (__fastcall *v36)(__int64, int); // rax
  const char *v37; // r14
  size_t v38; // rax
  size_t v39; // r12
  __int64 (__fastcall *v40)(__int64); // rax
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rax
  void *v44; // rdi
  void *v45; // rdx
  void *v46; // rdi
  void *v47; // rdx
  _QWORD *v48; // r14
  __int64 (__fastcall *v49)(__int64); // rax
  char v50; // al
  __int64 (__fastcall *v51)(__int64); // rax
  const void *v52; // r12
  size_t v53; // rax
  size_t v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  void *v58; // rdi
  size_t v59; // r13
  __int64 v60; // rax
  void *v61; // rdi
  size_t v62; // r13
  __int64 v63; // rax
  __int64 v64; // rax
  const char *src; // [rsp+0h] [rbp-68h]
  void *srcb; // [rsp+0h] [rbp-68h]
  void *srca; // [rsp+0h] [rbp-68h]
  _QWORD *v70; // [rsp+20h] [rbp-48h]
  const char *v71; // [rsp+28h] [rbp-40h]

  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL);
        if ( v6 == sub_453D0 )
        {
          v7 = *(_BYTE **)(a2 + 16);
          if ( !v7 || (int)v7 - *(_DWORD *)(a2 + 24) >= (unsigned int)(*(_DWORD *)(a2 + 32) - 1) || !*v7 )
            return 0;
          sub_44BA0(a2);
        }
        else if ( !(unsigned __int8)v6(a2) )
        {
          return 0;
        }
        v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
        v10 = v9 == sub_2A650 ? *(_DWORD *)(a2 + 36) : v9(a2);
        if ( v10 != 1 )
          break;
        v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 104LL);
        if ( v11 == sub_2A6D0 )
          v12 = *(const char **)(a2 + 48);
        else
          v12 = (const char *)v11(a2);
        if ( !a3 || strcmp(v12, "xi:include") )
          goto LABEL_31;
        v13 = *(char *(__fastcall **)(__int64, const char *))(*(_QWORD *)a2 + 56LL);
        if ( v13 == sub_2BDD0 )
        {
          v14 = (_BYTE *)operator new[](5u);
          for ( i = 0; i != 5; ++i )
            v14[i] = aHref[i];
          v16 = *(_DWORD *)(a2 + 124);
          if ( v16 <= 0 )
          {
LABEL_29:
            if ( v14 )
              operator delete[](v14);
            goto LABEL_31;
          }
          v17 = *(char ***)(a2 + 112);
          v18 = (__int64)&v17[4 * (unsigned int)(v16 - 1) + 4];
          while ( 1 )
          {
            v19 = 0;
            v20 = 0;
            for ( j = **v17; j; j = (*v17)[(int)v19] )
            {
              v22 = v14[v20];
              if ( !v22 )
                break;
              if ( j != v22 )
                goto LABEL_28;
              v19 = (unsigned int)(v19 + 1);
              v20 = (int)v19;
            }
            if ( *((_DWORD *)v17 + 3) == 5 )
              break;
LABEL_28:
            v17 += 4;
            if ( (char **)v18 == v17 )
              goto LABEL_29;
          }
          if ( v14 )
            operator delete[](v14);
          if ( !v17 )
            goto LABEL_31;
          v57 = (__int64)v17[2];
        }
        else
        {
          v57 = (__int64)v13(a2, "href");
        }
        if ( v57 )
        {
          a3(a1, v57, a4, v19, v18);
        }
        else
        {
LABEL_31:
          v23 = a1[7];
          v24 = a1[6];
          if ( a1[8] < (unsigned __int64)(v23 + 1) )
          {
            v60 = qvector_reserve();
            v23 = a1[7];
            a1[6] = v60;
            v24 = v60;
          }
          v25 = v24 + 96 * v23;
          *(_QWORD *)v25 = 0;
          *(_QWORD *)(v25 + 24) = 0;
          *(_QWORD *)(v25 + 48) = 0;
          *(_QWORD *)(v25 + 72) = 0;
          *(_OWORD *)(v25 + 8) = 0;
          *(_OWORD *)(v25 + 32) = 0;
          *(_OWORD *)(v25 + 56) = 0;
          *(_OWORD *)(v25 + 80) = 0;
          ++a1[7];
          if ( v12 && (v26 = strlen(v12), (v27 = v26) != 0) )
          {
            v58 = *(void **)v25;
            v59 = v26 + 1;
            if ( *(_QWORD *)(v25 + 16) < v26 + 1 )
            {
              v63 = qvector_reserve();
              *(_QWORD *)v25 = v63;
              v58 = (void *)v63;
            }
            *(_QWORD *)(v25 + 8) = v59;
            memmove(v58, v12, v27);
            *(_BYTE *)(*(_QWORD *)v25 + v27) = 0;
          }
          else
          {
            *(_QWORD *)(v25 + 8) = 0;
          }
          v70 = a1;
          v28 = 0;
          v29 = (_QWORD *)v25;
          while ( 1 )
          {
            v40 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
            if ( v40 != sub_2A660 )
              break;
            if ( v28 >= *(int *)(a2 + 124) )
              goto LABEL_62;
LABEL_53:
            v41 = v29[10];
            v42 = v29[9];
            if ( v29[11] < (unsigned __int64)(v41 + 1) )
            {
              v43 = qvector_reserve();
              v41 = v29[10];
              v29[9] = v43;
              v42 = v43;
            }
            v30 = v42 + 48 * v41;
            *(_QWORD *)v30 = 0;
            *(_QWORD *)(v30 + 24) = 0;
            *(_OWORD *)(v30 + 8) = 0;
            *(_OWORD *)(v30 + 32) = 0;
            ++v29[10];
            v31 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 40LL);
            if ( v31 != sub_2A670 )
            {
              v32 = (const char *)v31(a2, v28);
              if ( v32 )
              {
LABEL_41:
                src = v32;
                v33 = strlen(v32);
                v34 = src;
                v35 = v33;
                if ( !v33 )
                  goto LABEL_42;
                v44 = *(void **)v30;
                v45 = (void *)(v33 + 1);
                if ( *(_QWORD *)(v30 + 16) < v33 + 1 )
                {
                  srca = (void *)(v33 + 1);
                  v71 = v34;
                  v56 = qvector_reserve();
                  v34 = v71;
                  v45 = srca;
                  *(_QWORD *)v30 = v56;
                  v44 = (void *)v56;
                }
                *(_QWORD *)(v30 + 8) = v45;
                memmove(v44, v34, v35);
                *(_BYTE *)(*(_QWORD *)v30 + v35) = 0;
              }
              else
              {
LABEL_42:
                *(_QWORD *)(v30 + 8) = 0;
              }
              v36 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
              if ( v36 != sub_2A6A0 )
                goto LABEL_79;
              if ( (v28 & 0x80000000) != 0LL )
                goto LABEL_49;
              goto LABEL_45;
            }
            if ( (v28 & 0x80000000) != 0LL )
            {
              *(_QWORD *)(v30 + 8) = 0;
              v36 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
              if ( v36 == sub_2A6A0 )
                goto LABEL_49;
LABEL_79:
              v37 = (const char *)v36(a2, v28);
              goto LABEL_47;
            }
            if ( *(_DWORD *)(a2 + 124) <= (int)v28 )
            {
              *(_QWORD *)(v30 + 8) = 0;
              v36 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
              if ( v36 != sub_2A6A0 )
                goto LABEL_79;
            }
            else
            {
              v32 = *(const char **)(*(_QWORD *)(a2 + 112) + 32LL * (int)v28);
              if ( v32 )
                goto LABEL_41;
              *(_QWORD *)(v30 + 8) = 0;
              v36 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 48LL);
              if ( v36 != sub_2A6A0 )
                goto LABEL_79;
            }
LABEL_45:
            if ( *(_DWORD *)(a2 + 124) <= (int)v28 )
              goto LABEL_49;
            v37 = *(const char **)(*(_QWORD *)(a2 + 112) + 32LL * (int)v28 + 16);
LABEL_47:
            if ( !v37 || (v38 = strlen(v37), (v39 = v38) == 0) )
            {
LABEL_49:
              *(_QWORD *)(v30 + 32) = 0;
              goto LABEL_50;
            }
            v46 = *(void **)(v30 + 24);
            v47 = (void *)(v38 + 1);
            if ( *(_QWORD *)(v30 + 40) < v38 + 1 )
            {
              srcb = (void *)(v38 + 1);
              v55 = qvector_reserve();
              v47 = srcb;
              *(_QWORD *)(v30 + 24) = v55;
              v46 = (void *)v55;
            }
            *(_QWORD *)(v30 + 32) = v47;
            memmove(v46, v37, v39);
            *(_BYTE *)(*(_QWORD *)(v30 + 24) + v39) = 0;
LABEL_50:
            ++v28;
          }
          if ( v28 < (int)v40(a2) )
            goto LABEL_53;
LABEL_62:
          v48 = v29;
          a1 = v70;
          v49 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL);
          if ( v49 == sub_2A6F0 )
            v50 = *(_BYTE *)(a2 + 80);
          else
            v50 = v49(a2);
          if ( !v50 )
            sub_6BC20(v48, a2, a3, a4);
        }
      }
      if ( v10 != 3 )
        break;
      v51 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 112LL);
      if ( v51 == sub_2A6E0 )
        v52 = *(const void **)(a2 + 48);
      else
        v52 = (const void *)v51(a2);
      if ( v52 && (v53 = strlen((const char *)v52), (v54 = v53) != 0) )
      {
        v61 = (void *)a1[3];
        v62 = v53 + 1;
        if ( a1[5] < v53 + 1 )
        {
          v64 = qvector_reserve();
          a1[3] = v64;
          v61 = (void *)v64;
        }
        a1[4] = v62;
        memmove(v61, v52, v54);
        *(_BYTE *)(a1[3] + v54) = 0;
      }
      else
      {
        a1[4] = 0;
      }
    }
  }
  while ( v10 != 2 );
  return 1;
}

