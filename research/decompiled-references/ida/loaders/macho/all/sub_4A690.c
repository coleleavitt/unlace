__int64 __fastcall sub_4A690(__int64 a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rsi
  unsigned __int8 (*v4)(void); // rax
  _BYTE *v5; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 (__fastcall *v9)(__int64); // rcx
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // eax
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 (__fastcall *v14)(__int64); // rdx
  __int64 (*v15)(void); // rax
  const void *v16; // r12
  size_t v17; // rax
  size_t v18; // rbx
  __int64 (*v19)(void); // rax
  const char *v20; // rbx
  size_t v21; // rax
  size_t v22; // r15
  size_t v23; // r12
  __int64 v24; // r12
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r15
  const char *v27; // r14
  unsigned __int64 v28; // rbx
  unsigned int v29; // edi
  unsigned __int64 i; // r12
  unsigned int v31; // edi
  size_t v32; // rbx
  void *v33; // rdi
  const char *v34; // rbx
  __int64 v35; // r12
  _DWORD *v36; // rbx
  void *v37; // rdi
  size_t v38; // r15
  __int64 v39; // rax
  void *v40; // rbx
  void *v41; // rdi
  __int64 v42; // rax
  void *src; // [rsp+0h] [rbp-78h] BYREF
  __int128 v44; // [rsp+8h] [rbp-70h]
  __int64 v45; // [rsp+18h] [rbp-60h]
  char *v46; // [rsp+20h] [rbp-58h]
  __int128 v47; // [rsp+28h] [rbp-50h]
  unsigned __int64 v48; // [rsp+38h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  while ( 1 )
  {
    if ( **(_DWORD **)(a1 + 16) )
      return 0;
    v2 = *(_QWORD *)a1;
    v3 = sub_4A650;
    v4 = *(unsigned __int8 (**)(void))(**(_QWORD **)a1 + 16LL);
    if ( (char *)v4 == (char *)sub_4A650 )
    {
      v5 = *(_BYTE **)(v2 + 16);
      if ( !v5 )
        return 0;
      LODWORD(v3) = *(_DWORD *)(v2 + 32);
      if ( (int)v5 - *(_DWORD *)(v2 + 24) >= (unsigned int)((_DWORD)v3 - 1) || !*v5 )
        return 0;
      sub_49E20(v2);
    }
    else if ( !v4() )
    {
      return 0;
    }
    v9 = sub_11060;
    v10 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)a1 + 24LL);
    v11 = v10 == sub_11060 ? *(_DWORD *)(*(_QWORD *)a1 + 36LL) : ((__int64 (*)(void))v10)();
    switch ( v11 )
    {
      case 2:
        return 1;
      case 3:
        if ( *(_QWORD *)(a1 + 32) > 1u )
        {
          v19 = *(__int64 (**)(void))(**(_QWORD **)a1 + 112LL);
          if ( (char *)v19 == (char *)sub_110F0 )
            v20 = *(const char **)(*(_QWORD *)a1 + 48LL);
          else
            v20 = (const char *)v19();
          v46 = nullptr;
          v47 = 0;
          if ( v20
            && (v21 = strlen(v20),
                v22 = v21 + 1,
                v23 = v21,
                v46 = (char *)qvector_reserve(),
                *(_QWORD *)&v47 = v22,
                memmove(v46, v20, v23),
                v46[v23] = 0,
                (v24 = v47) != 0) )
          {
            v25 = v47 - 1;
            v26 = v47 - 1;
            if ( (_QWORD)v47 == 1 )
            {
              v27 = v46;
              v28 = 0;
LABEL_53:
              if ( v28 <= v26 )
                v26 = v28;
              v32 = v28 - v26;
            }
            else
            {
              v27 = v46;
              v28 = 0;
              while ( 1 )
              {
                v29 = v27[v28];
                if ( v29 > 0x7F || !isspace(v29) )
                  break;
                if ( v25 == ++v28 )
                {
                  if ( !v24 )
                    goto LABEL_64;
                  goto LABEL_53;
                }
              }
              for ( i = v24 - 1; v28 < i; --i )
              {
                v31 = v27[i - 1];
                if ( v31 > 0x7F || !isspace(v31) )
                  break;
              }
              if ( v25 >= i )
              {
                v26 = v28;
                v28 = i;
                goto LABEL_53;
              }
              if ( v28 > v25 )
                v28 = v25;
              v26 = v28;
              v32 = v25 - v28;
            }
          }
          else
          {
            v26 = 0;
            v28 = 0;
LABEL_64:
            v27 = s1;
            if ( v26 > v28 )
              v26 = v28;
            v32 = v28 - v26;
          }
          src = nullptr;
          v44 = 0;
          if ( v32 )
          {
            v33 = nullptr;
            if ( v32 != -1 )
            {
              src = (void *)qvector_reserve();
              v33 = src;
            }
            *(_QWORD *)&v44 = v32 + 1;
            memmove(v33, &v27[v26], v32);
            *((_BYTE *)src + v32) = 0;
          }
          if ( v46 )
          {
            *(_QWORD *)&v47 = 0;
            qfree();
          }
          if ( *(_QWORD *)(a1 + 32) && (v34 = *(const char **)(a1 + 24), !strcmp(v34, "key")) )
          {
            v35 = v44;
            if ( (unsigned __int64)v44 > 1 )
            {
              v40 = src;
              v41 = *(void **)(a1 + 48);
              if ( *(_QWORD *)(a1 + 64) < (unsigned __int64)v44 )
              {
                v42 = qvector_reserve();
                *(_QWORD *)(a1 + 48) = v42;
                v41 = (void *)v42;
              }
              *(_QWORD *)(a1 + 56) = v35;
              memmove(v41, v40, v35 - 1);
              *(_BYTE *)(*(_QWORD *)(a1 + 48) + v35 - 1) = 0;
              v34 = *(const char **)(a1 + 24);
            }
            else
            {
              *(_QWORD *)(a1 + 56) = 0;
            }
          }
          else
          {
            v36 = *(_DWORD **)(a1 + 16);
            *v36 = (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64, void **))(a1 + 8))(
                     *(_QWORD *)(a1 + 8),
                     a1 + 48,
                     a1 + 24,
                     &src);
            v34 = *(const char **)(a1 + 24);
          }
          if ( v34 )
          {
            *(_QWORD *)(a1 + 32) = 0;
            qfree();
            *(_QWORD *)(a1 + 24) = 0;
            *(_QWORD *)(a1 + 40) = 0;
          }
          if ( src )
          {
            *(_QWORD *)&v44 = 0;
            qfree();
          }
        }
        break;
      case 1:
        v12 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)a1 + 120LL);
        if ( !(v12 == sub_11100 ? *(_BYTE *)(*(_QWORD *)a1 + 80LL) : ((__int64 (*)(void))v12)()) )
        {
          v14 = sub_110E0;
          v15 = *(__int64 (**)(void))(**(_QWORD **)a1 + 104LL);
          if ( (char *)v15 == (char *)sub_110E0 )
            v16 = *(const void **)(*(_QWORD *)a1 + 48LL);
          else
            v16 = (const void *)v15();
          if ( v16 && (v17 = strlen((const char *)v16), (v18 = v17) != 0) )
          {
            v37 = *(void **)(a1 + 24);
            v38 = v17 + 1;
            if ( *(_QWORD *)(a1 + 40) < v17 + 1 )
            {
              v39 = qvector_reserve();
              *(_QWORD *)(a1 + 24) = v39;
              v37 = (void *)v39;
            }
            *(_QWORD *)(a1 + 32) = v38;
            LODWORD(v3) = (_DWORD)v16;
            memmove(v37, v16, v18);
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v18) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 32) = 0;
          }
          sub_4A690(
            a1,
            (_DWORD)v3,
            (_DWORD)v14,
            (_DWORD)v9,
            v7,
            v8,
            (__int64)src,
            v44,
            DWORD2(v44),
            v45,
            (__int64)v46,
            v47,
            *((__int64 *)&v47 + 1));
        }
        break;
    }
  }
}

