unsigned __int64 __fastcall sub_9940(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned int *v2; // r9
  unsigned int *v4; // r13
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  void *v19; // rcx
  const char *v20; // rcx
  _QWORD *v22; // [rsp+8h] [rbp-80h]
  __int64 v23; // [rsp+10h] [rbp-78h]
  unsigned int *v24; // [rsp+18h] [rbp-70h]
  const char *v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v1 = a1[25];
  v27 = __readfsqword(0x28u);
  v2 = (unsigned int *)a1[24];
  v24 = &v2[4 * v1];
  if ( v2 != v24 )
  {
    v4 = (unsigned int *)a1[24];
    v22 = a1 + 15;
    v5 = a1 + 16;
    while ( 1 )
    {
      v6 = a1[17];
      if ( !v6 )
        break;
      v7 = v4[2];
      v8 = (__int64)v5;
      do
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(v6 + 16);
          v10 = *(_QWORD *)(v6 + 24);
          if ( *(_DWORD *)(v6 + 32) < v7 )
            break;
          v8 = v6;
          v6 = *(_QWORD *)(v6 + 16);
          if ( !v9 )
            goto LABEL_8;
        }
        v6 = *(_QWORD *)(v6 + 24);
      }
      while ( v10 );
LABEL_8:
      if ( v5 == (_QWORD *)v8 || v7 < *(_DWORD *)(v8 + 32) )
        goto LABEL_10;
LABEL_11:
      v11 = &unk_10F58;
      if ( *(_QWORD *)(v8 + 48) )
        v11 = *(void **)(v8 + 40);
      set_name(*v4, v11, 2049);
      v12 = a1[17];
      v13 = v4[3];
      if ( v12 )
      {
        v14 = v4[2];
        v15 = (__int64)v5;
        do
        {
          while ( 1 )
          {
            v16 = *(_QWORD *)(v12 + 16);
            v17 = *(_QWORD *)(v12 + 24);
            if ( *(_DWORD *)(v12 + 32) < v14 )
              break;
            v15 = v12;
            v12 = *(_QWORD *)(v12 + 16);
            if ( !v16 )
              goto LABEL_18;
          }
          v12 = *(_QWORD *)(v12 + 24);
        }
        while ( v17 );
LABEL_18:
        if ( v5 != (_QWORD *)v15 && v14 >= *(_DWORD *)(v15 + 32) )
          goto LABEL_21;
      }
      else
      {
        v15 = (__int64)v5;
      }
      v23 = v4[3];
      v25 = (const char *)(v4 + 2);
      v18 = sub_8EC0(v22, v15, (__int64)&unk_10F59, (unsigned int **)&v25);
      v13 = v23;
      v15 = v18;
LABEL_21:
      v19 = &unk_10F58;
      if ( *(_QWORD *)(v15 + 48) )
        v19 = *(void **)(v15 + 40);
      sub_EC30(&v25, v22, *v4 == v4[1], v19, v13);
      v20 = (const char *)&unk_10F58;
      if ( v26 )
        v20 = v25;
      sub_3BA0(*v4, 1u, (__int64)"%s\n", v20);
      if ( v25 )
      {
        v26 = 0;
        qfree(v25);
      }
      v4 += 4;
      if ( v24 == v4 )
        return v27 - __readfsqword(0x28u);
    }
    v8 = (__int64)v5;
LABEL_10:
    v25 = (const char *)(v4 + 2);
    v8 = sub_8EC0(v22, v8, (__int64)&unk_10F59, (unsigned int **)&v25);
    goto LABEL_11;
  }
  return v27 - __readfsqword(0x28u);
}

