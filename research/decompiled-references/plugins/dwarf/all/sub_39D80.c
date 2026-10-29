__int64 __fastcall sub_39D80(_QWORD *a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 i; // rax
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  const char *v10; // rdx
  const char *v11; // rbp
  __int64 *v12; // rax
  const char *v13; // r12
  __int64 *v14; // rax
  int v15; // r8d
  int v16; // r9d
  const char *v17; // rsi
  __int64 *v18; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  const char *v24; // rbp
  __int64 *v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  const char *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // r12
  unsigned __int64 v34; // r13
  const void *v35; // r15
  int v36; // [rsp+Ch] [rbp-4Ch] BYREF
  _QWORD v37[9]; // [rsp+10h] [rbp-48h] BYREF

  v1 = a1[8] == 0;
  v37[1] = __readfsqword(0x28u);
  if ( v1 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v18 = sub_34340((__int64)a1);
      v23 = src;
      if ( v18[1] )
        v23 = (const char *)*v18;
      sub_88B80((unsigned int)"Error typedef DIE %s missing name\n", (_DWORD)v23, v19, v20, v21, v22);
    }
    return 5;
  }
  sub_39C30((__int64)a1);
  v3 = a1[11];
  if ( !v3 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v24 = src;
      if ( a1[6] )
        v24 = (const char *)a1[5];
      v25 = sub_34340((__int64)a1);
      v29 = src;
      if ( v25[1] )
        v29 = (const char *)*v25;
      sub_88B80(
        (unsigned int)"Error typedef DIE %s finding DIE record for %s\n",
        (_DWORD)v29,
        (_DWORD)v24,
        v26,
        v27,
        v28);
    }
    return 5;
  }
  for ( i = *(_QWORD *)(v3 + 96); i; i = *(_QWORD *)(i + 96) )
  {
    a1[11] = i;
    v3 = i;
  }
  if ( a1 != (_QWORD *)v3 )
  {
    if ( *(_WORD *)(v3 + 140) == 1 )
    {
      if ( a1[8] )
      {
        v7 = *(_QWORD *)(v3 + 80);
        v8 = *(_QWORD *)(v3 + 104);
        v36 = 0;
        if ( !(*(unsigned int (__fastcall **)(__int64, __int64, int *, _QWORD *))(*(_QWORD *)(*(_QWORD *)(v7 + 144)
                                                                                            + 88LL)
                                                                                + 112LL))(
                v8,
                8455,
                &v36,
                v37) )
        {
          if ( v36 )
          {
            v9 = a1[10];
            v1 = a1[6] == 0;
            v37[0] = 0;
            v10 = src;
            if ( !v1 )
              v10 = (const char *)a1[5];
            if ( !(unsigned __int8)sub_1FE00(*(_QWORD *)(*(_QWORD *)(v9 + 144) + 128LL), (__int64)v37, (__int64)v10) )
            {
              clear_tinfo_t(v37);
              return 0;
            }
            v30 = a1[11];
            v31 = *(_QWORD *)(v30 + 8);
            *(_QWORD *)(v30 + 8) = v37[0];
            v32 = a1[11];
            v37[0] = v31;
            sub_34840(v32, 3u);
            v33 = a1[11];
            if ( (_QWORD *)(v33 + 40) != a1 + 5 )
            {
              v34 = a1[6];
              if ( v34 > 1 )
              {
                v35 = (const void *)a1[5];
                if ( *(_QWORD *)(v33 + 56) < v34 )
                  *(_QWORD *)(v33 + 40) = qvector_reserve(v33 + 40, *(_QWORD *)(v33 + 40), a1[6], 1);
                *(_QWORD *)(v33 + 48) = v34;
                memmove(*(void **)(v33 + 40), v35, v34 - 1);
                *(_BYTE *)(*(_QWORD *)(v33 + 40) + v34 - 1) = 0;
                v33 = a1[11];
              }
              else
              {
                *(_QWORD *)(v33 + 48) = 0;
                v33 = a1[11];
              }
            }
            sub_348C0(v33, a1 + 8);
            copy_tinfo_t(a1 + 1, a1[11] + 8LL);
            clear_tinfo_t(v37);
            return 3;
          }
        }
      }
    }
    v5 = a1[11];
    if ( *(_BYTE *)(v5 + 142) != 5 )
      return 0;
    if ( (debug & 0x400000) != 0 )
    {
      v11 = src;
      if ( a1[6] )
        v11 = (const char *)a1[5];
      v12 = sub_34340(v5);
      v13 = src;
      if ( v12[1] )
        v13 = (const char *)*v12;
      v14 = sub_34340((__int64)a1);
      v17 = src;
      if ( v14[1] )
        v17 = (const char *)*v14;
      sub_88B80(
        (unsigned int)"Error typedef DIE %s dependency DIE %s for type %s\n",
        (_DWORD)v17,
        (_DWORD)v13,
        (_DWORD)v11,
        v15,
        v16);
    }
    return 5;
  }
  create_tinfo(a1 + 1, 1, 7, 0);
  sub_345A0((__int64)a1, 0);
  return 3;
}
