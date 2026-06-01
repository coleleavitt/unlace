unsigned __int64 __fastcall sub_426B0(_QWORD *a1, _DWORD a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 i; // r13
  __int64 v6; // r12
  unsigned __int8 v7; // al
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int8 v14; // al
  int v15; // esi
  unsigned __int8 v16; // r13
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // r12
  unsigned __int8 v22; // bl
  __int64 v23; // rax
  __int64 v24; // rdi
  char v25; // r12
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // r12
  unsigned __int64 v33; // rax
  __int64 *v34; // rax
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  const char *v39; // rsi
  unsigned __int8 v41; // [rsp+0h] [rbp-88h]
  unsigned int v42; // [rsp+4h] [rbp-84h]
  __int64 v43; // [rsp+10h] [rbp-78h]
  int v45; // [rsp+24h] [rbp-64h] BYREF
  char v46[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  __int128 v48; // [rsp+38h] [rbp-50h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  sub_41760(a1, a3);
  v3 = a1[18];
  v4 = *(_QWORD *)(v3 + 96);
  for ( i = v3 + 80; i != v4; v4 = std::_Rb_tree_increment(v4) )
  {
    v6 = *(_QWORD *)(v4 + 48);
    v7 = sub_34F40(v6);
    sub_34840(v6, v7);
  }
  sub_34EE0(a1);
  v11 = 0;
  v42 = 0;
  v43 = a1[18];
  while ( 2 )
  {
    ++v42;
    v47 = 0;
    v48 = 0;
    if ( (debug & 0x400000) != 0 )
    {
      sub_88A30((unsigned int)&v47, (unsigned int)"#%02u: ", v42, v8, v9, v10);
      if ( (debug & 0x400000) != 0 )
        sub_88B80((unsigned int)"Pass #%02u: ", v42, v26, v27, v28, v29);
    }
    (*(void (**)(__int64, const char *, ...))(*(_QWORD *)a3 + 8LL))(
      a3,
      "Types (Pass %u): %2llu%%",
      v42,
      (unsigned __int64)(100 * v11) / *(_QWORD *)(v43 + 112));
    (**(void (__fastcall ***)(__int64))a3)(a3);
    v12 = *(_QWORD *)(v43 + 96);
    v13 = v43 + 80;
    if ( v12 == v43 + 80 )
    {
      v25 = 1;
      v11 = 0;
      goto LABEL_21;
    }
    v41 = 0;
    v11 = 0;
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v12 + 48);
        v22 = *(_BYTE *)(v21 + 142);
        if ( v22 == 5 )
          break;
        if ( v42 != 1 )
          goto LABEL_7;
        if ( *(_WORD *)(v21 + 140) == 36 )
        {
          v23 = *(_QWORD *)(v21 + 80);
          v24 = *(_QWORD *)(v21 + 104);
          v45 = 0;
          if ( ((*(unsigned int (__fastcall **)(__int64, __int64, int *, char *))(*(_QWORD *)(*(_QWORD *)(v23 + 144)
                                                                                            + 88LL)
                                                                                + 112LL))(
                  v24,
                  8455,
                  &v45,
                  v46)
             || !v45)
            && (*(_BYTE *)(v21 + 144) != 3 || *(_DWORD *)(v21 + 136) <= 8u) )
          {
            v22 = *(_BYTE *)(v21 + 142);
LABEL_7:
            v14 = sub_35200(v21);
            v15 = v14;
            v16 = v14;
            sub_34840(v21, v14);
            v20 = v41 ^ 1;
            LOBYTE(v20) = (v22 < v16) & (v41 ^ 1);
            if ( (_BYTE)v20 )
            {
              if ( (debug & 0x400000) != 0 )
              {
                sub_88B80((unsigned int)"Pass made some progress\n", v15, v17, v20, v18, v19);
                LOBYTE(v20) = (v22 < v16) & (v41 ^ 1);
              }
              v41 = v20;
            }
            v11 -= (v16 < 3u) - 1LL;
          }
        }
        v12 = std::_Rb_tree_increment(v12);
        if ( v13 == v12 )
          goto LABEL_20;
      }
      ++v11;
      v12 = std::_Rb_tree_increment(v12);
    }
    while ( v13 != v12 );
LABEL_20:
    v25 = v41 ^ 1;
LABEL_21:
    if ( v42 <= 1 || !v25 )
    {
      sub_81710(&v47);
      continue;
    }
    break;
  }
  sub_81710(&v47);
  v30 = *(_QWORD *)(v43 + 96);
  if ( v13 != v30 )
  {
    v31 = 0x1000C80014LL;
    do
    {
      v47 = 0;
      v32 = *(_QWORD *)(v30 + 48);
      if ( *(_QWORD *)(v32 + 64) )
      {
        if ( *(_BYTE *)(v32 + 142) != 4 )
        {
          v33 = *(unsigned __int16 *)(v32 + 140);
          if ( (unsigned __int16)v33 <= 0x24u )
          {
            if ( _bittest64(&v31, v33) )
            {
              if ( (debug & 0x400000) != 0 )
              {
                v34 = sub_34340(v32);
                v39 = src;
                if ( v34[1] )
                  v39 = (const char *)*v34;
                sub_88B80((unsigned int)"Persisting %s as invalid type\n", (_DWORD)v39, v35, v36, v37, v38);
              }
              sub_350A0(v32, (__int64)&v47);
            }
          }
        }
      }
      clear_tinfo_t(&v47);
      v30 = std::_Rb_tree_increment(v30);
    }
    while ( v13 != v30 );
  }
  return v49 - __readfsqword(0x28u);
}

