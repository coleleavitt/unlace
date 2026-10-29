__int64 __fastcall sub_3B730(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebp
  __int64 v4; // rax
  __int64 *v5; // rsi
  _QWORD *v6; // r13
  __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // edx
  int v18; // ebp
  __int64 *v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  const char *v23; // rsi
  int v24; // ebp
  __int64 *v25; // rax
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  const char *v29; // rsi
  __int64 *v30; // rax
  const char *v31; // rbp
  __int64 *v32; // rax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  const char *v36; // rsi
  __int64 *v37; // rax
  int v38; // edx
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  const char *v42; // rsi
  __int64 *v43; // rax
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  const char *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // [rsp+8h] [rbp-80h]
  __int16 v51; // [rsp+1Eh] [rbp-6Ah] BYREF
  __int64 v52; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v53; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v54[11]; // [rsp+30h] [rbp-58h] BYREF

  v54[3] = __readfsqword(0x28u);
  sub_39C30(a1);
  v2 = *(_QWORD *)(a1 + 88);
  if ( !v2 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v37 = sub_34340(a1);
      v42 = src;
      if ( v37[1] )
        v42 = (const char *)*v37;
      sub_88B80(
        (unsigned int)"Error enumeration DIE %s unable to resolve type DIE record\n",
        (_DWORD)v42,
        v38,
        v39,
        v40,
        v41);
    }
    return 5;
  }
  if ( *(_BYTE *)(v2 + 142) == 5 )
  {
    if ( (debug & 0x400000) != 0 )
    {
      v30 = sub_34340(v2);
      v31 = src;
      if ( v30[1] )
        v31 = (const char *)*v30;
      v32 = sub_34340(a1);
      v36 = src;
      if ( v32[1] )
        v36 = (const char *)*v32;
      sub_88B80((unsigned int)"Error enumeration DIE %s dependency DIE %s\n", (_DWORD)v36, (_DWORD)v31, v33, v34, v35);
    }
    return 5;
  }
  v3 = *(_DWORD *)(a1 + 136);
  if ( a1 != v2 )
  {
    if ( v3 )
      goto LABEL_5;
    sub_345A0(a1, *(_DWORD *)(v2 + 136));
    v3 = *(_DWORD *)(a1 + 136);
  }
  if ( !v3 )
  {
LABEL_20:
    if ( (debug & 0x400000) != 0 )
    {
      v43 = sub_34340(a1);
      v47 = src;
      if ( v43[1] )
        v47 = (const char *)*v43;
      sub_88B80((unsigned int)"Error enumeration DIE %s invalid byte size %u\n", (_DWORD)v47, v3, v44, v45, v46);
    }
    return 5;
  }
LABEL_5:
  if ( (v3 & (v3 - 1)) != 0 )
    goto LABEL_20;
  v4 = *(_QWORD *)(a1 + 80);
  v52 = 0;
  v5 = (__int64 *)&v53;
  v6 = *(_QWORD **)(v4 + 144);
  v7 = v6[11];
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 **, __int64 *))(v7 + 32))(*(_QWORD *)(a1 + 104), &v53, &v52);
  if ( v8 )
  {
LABEL_23:
    v16 = 0;
    if ( v8 == -1 )
      return v16;
    if ( (debug & 0x400000) != 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v7 + 464))(v52, v5, 0);
      v19 = sub_34340(a1);
      v23 = src;
      if ( v19[1] )
        v23 = (const char *)*v19;
      sub_88B80((unsigned int)"Error enumeration DIE %s enumeration failed : %s", (_DWORD)v23, v18, v20, v21, v22);
    }
  }
  else
  {
    while ( !(*(unsigned int (__fastcall **)(__int64 *, __int16 *, __int64 *))(v7 + 56))(v53, &v51, &v52) )
    {
      if ( v51 == 40 )
      {
        v9 = sub_28270(*(_QWORD *)(a1 + 80), (__int64)v53, 0);
        v54[0] = v9;
        v54[1] = v10;
        if ( (v9 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v9 != -1 )
        {
          v11 = sub_39BA0(v6[18] + 72LL, (__int64)v54);
          if ( v11 == v6[18] + 80LL )
          {
            v49 = *(_QWORD *)(a1 + 144);
            if ( v49 )
            {
              *(_QWORD *)(a1 + 152) = 0;
              qfree(v49);
              *(_QWORD *)(a1 + 144) = 0;
              *(_QWORD *)(a1 + 160) = 0;
            }
            return 5;
          }
          v50 = *(_QWORD *)(v11 + 48);
          v12 = sub_30F60(a1, v50 + 40);
          v13 = v50;
          if ( !v12 )
          {
            v14 = *(_QWORD *)(a1 + 152);
            v15 = *(_QWORD *)(a1 + 144);
            if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v14 + 1) )
            {
              v48 = qvector_reserve(a1 + 144, v15, v14 + 1, 8);
              v13 = v50;
              *(_QWORD *)(a1 + 144) = v48;
              v15 = v48;
              v14 = *(_QWORD *)(a1 + 152);
            }
            *(_QWORD *)(v15 + 8 * v14) = v13;
            ++*(_QWORD *)(a1 + 152);
          }
        }
      }
      v5 = v53;
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64 **, __int64 *))(v7 + 24))(
             v6[20],
             v53,
             *(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) >> 63,
             &v53,
             &v52);
      if ( v8 )
        goto LABEL_23;
    }
    if ( (debug & 0x400000) != 0 )
    {
      v24 = (*(__int64 (__fastcall **)(__int64))(v7 + 464))(v52);
      v25 = sub_34340(a1);
      v29 = src;
      if ( v25[1] )
        v29 = (const char *)*v25;
      sub_88B80((unsigned int)"Error enumeration DIE %s retrieving child tag : %s", (_DWORD)v29, v24, v26, v27, v28);
    }
  }
  return 5;
}

