__int64 __fastcall sub_58520(__int64 a1, _QWORD *a2, int a3)
{
  const char *v3; // r14
  bool v6; // zf
  __int64 v7; // rsi
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // r15
  char *v11; // rax
  __int64 v12; // rbx
  signed __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ebx
  size_t v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 *v22; // r10
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rax
  int v29; // [rsp+Ch] [rbp-74h] BYREF
  __int64 v30; // [rsp+10h] [rbp-70h] BYREF
  __int64 v31[2]; // [rsp+18h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  __int128 v33; // [rsp+30h] [rbp-50h]
  unsigned __int64 v34; // [rsp+40h] [rbp-40h]

  v3 = src;
  v34 = __readfsqword(0x28u);
  v6 = a2[40] == 0;
  v33 = 0;
  v32 = 0;
  if ( !v6 )
    v3 = (const char *)a2[39];
  v7 = 0;
  v8 = 0;
  if ( !v3 )
    return v8;
  v9 = 1;
LABEL_7:
  v14 = qvector_reserve(&v32, v7, v9, 24);
  v12 = v33;
  v32 = v14;
  v7 = v14;
  v9 = v33 + 1;
  while ( 1 )
  {
    *(_QWORD *)&v33 = v9;
    v10 = v7 + 24 * v12;
    *(_QWORD *)v10 = v3;
    *(_BYTE *)(v10 + 8) = *v3 == 36;
    v11 = strstr(v3, "::");
    v12 = v33;
    if ( !v11 )
      break;
    v9 = v33 + 1;
    v7 = v32;
    v13 = v11 - v3;
    v3 = v11 + 2;
    *(_QWORD *)(v10 + 16) = v13;
    if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v12 + 1) )
      goto LABEL_7;
  }
  v15 = v33 - 1;
  v16 = strlen(v3);
  v17 = v32;
  *(_QWORD *)(v10 + 16) = v16;
  v18 = *(_QWORD *)(a2[1] + 16LL);
  if ( v15 <= 0 )
  {
LABEL_23:
    v8 = 0;
    if ( !v17 )
      return v8;
    goto LABEL_24;
  }
  v19 = 0;
  v20 = 24LL * (unsigned int)v15;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v17 + v19 + 8);
      if ( !(_BYTE)v8 )
        goto LABEL_10;
      if ( (unsigned int)qsscanf(*(_QWORD *)(v17 + v19), "$<%llu,%d>", &v30, &v29) == 2 )
      {
        v21 = *(_QWORD *)(v18 + 144);
        v31[1] = *(_QWORD *)(a2[1] + 16LL);
        v31[0] = v30 | ((unsigned __int64)(v29 != 0) << 63);
        if ( !(unsigned int)sub_58480(v21, v31) )
          break;
      }
      v19 += 24;
      v17 = v32;
      if ( v19 == v20 )
        goto LABEL_23;
    }
    v23 = sub_561C0((__int64 **)a1, v22, nullptr);
    if ( !v23 )
      break;
    v24 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
    v25 = *(__int64 **)a1;
    if ( *(_QWORD *)a1 != v24 )
    {
      do
      {
        if ( v23 == (_QWORD *)*v25 )
          break;
        ++v25;
      }
      while ( (__int64 *)v24 != v25 );
    }
    v26 = v32;
    v17 = v32;
    if ( a3 > (int)(((__int64)v25 - *(_QWORD *)a1) >> 3) )
      goto LABEL_20;
LABEL_10:
    v19 += 24;
    if ( v19 == v20 )
      goto LABEL_23;
  }
  v26 = v32;
LABEL_20:
  v17 = v26;
  if ( v26 )
  {
LABEL_24:
    *(_QWORD *)&v33 = 0;
    qfree(v17);
  }
  return v8;
}

