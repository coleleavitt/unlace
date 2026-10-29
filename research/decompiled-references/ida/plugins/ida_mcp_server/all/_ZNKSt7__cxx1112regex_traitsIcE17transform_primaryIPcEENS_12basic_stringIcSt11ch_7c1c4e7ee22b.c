__int64 __fastcall std::regex_traits<char>::transform_primary<char *>(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v9; // r14
  const char *v10; // rdi
  const char *v11; // rsi
  __int64 v12; // r8
  size_t v13; // rcx
  _QWORD *v14; // rax
  double *v15; // rdi
  size_t v16; // rdx
  double v17; // rcx
  _QWORD *v19; // rdi
  char *v20; // [rsp+8h] [rbp-B0h]
  __int64 v21; // [rsp+8h] [rbp-B0h]
  __int64 v22; // [rsp+8h] [rbp-B0h]
  _QWORD *v23; // [rsp+30h] [rbp-88h]
  _QWORD v24[2]; // [rsp+40h] [rbp-78h] BYREF
  void *v25; // [rsp+50h] [rbp-68h] BYREF
  size_t v26; // [rsp+58h] [rbp-60h]
  double src[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = a1 + 16;
  *(_QWORD *)&src[3] = __readfsqword(0x28u);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::collate<char>::id));
  if ( !v9 )
    std::__throw_bad_cast();
  v10 = *(const char **)(*(_QWORD *)(*(_QWORD *)v9 - 8LL) + 8LL);
  v11 = (const char *)`typeinfo for'std::collate<char>[1];
  if ( v10 == v11 || *v10 != 42 && !strcmp(v10, &v11[*v11 == 42]) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL)
                    + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
    if ( !v12 )
      std::__throw_bad_cast();
    v13 = a4 - (_QWORD)a3;
    v23 = v24;
    if ( (unsigned __int64)(a4 - (_QWORD)a3) > 0xF )
    {
      v21 = v12;
      v23 = (_QWORD *)std::string::_M_create();
      v19 = v23;
      v12 = v21;
      v13 = a4 - (_QWORD)a3;
      v24[0] = a4 - (_QWORD)a3;
    }
    else
    {
      if ( v13 == 1 )
      {
        LOBYTE(v24[0]) = *a3;
        v14 = v24;
        goto LABEL_9;
      }
      v14 = v24;
      if ( !v13 )
        goto LABEL_9;
      v19 = v24;
    }
    v22 = v12;
    memcpy(v19, a3, v13);
    v13 = a4 - (_QWORD)a3;
    v14 = v23;
    v12 = v22;
LABEL_9:
    *((_BYTE *)v14 + v13) = 0;
    v20 = (char *)v23 + v13;
    (*(void (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v12 + 40LL))(v12, v23, (char *)v23 + v13);
    (*(void (__fastcall **)(void **, __int64, _QWORD *, char *))(*(_QWORD *)v9 + 24LL))(&v25, v9, v23, v20);
    v15 = *(double **)a1;
    v16 = v26;
    if ( v5 == *(_QWORD *)a1 )
    {
      if ( v25 != src )
      {
        *(_QWORD *)a1 = v25;
        *(__m128 *)(a1 + 8) = _mm_loadh_ps(src);
        goto LABEL_23;
      }
    }
    else if ( v25 != src )
    {
      v17 = *(double *)(a1 + 16);
      *(_QWORD *)a1 = v25;
      *(__m128 *)(a1 + 8) = _mm_loadh_ps(src);
      if ( v15 )
      {
        v25 = v15;
        src[0] = v17;
LABEL_13:
        *(_BYTE *)v15 = 0;
        if ( v25 != src )
          operator delete(v25, *(_QWORD *)&src[0] + 1LL);
        if ( v23 != v24 )
          operator delete(v23, v24[0] + 1LL);
        return a1;
      }
LABEL_23:
      v25 = src;
      v15 = src;
      goto LABEL_13;
    }
    if ( v26 )
    {
      if ( v26 == 1 )
        *(_BYTE *)v15 = LOBYTE(src[0]);
      else
        memcpy(v15, src, v26);
      v16 = v26;
      v15 = *(double **)a1;
    }
    *(_QWORD *)(a1 + 8) = v16;
    *((_BYTE *)v15 + v16) = 0;
    v15 = (double *)v25;
    goto LABEL_13;
  }
  return a1;
}

