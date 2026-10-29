unsigned __int64 __fastcall sub_701D0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // rbp
  size_t v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 *v8; // rbp
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rbx
  size_t v14; // rdx
  const char *v15; // r14
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rbx
  size_t v19; // rdx
  const char *v20; // r14
  __int64 v21; // rax
  __int64 v23; // [rsp+0h] [rbp-88h]
  __int64 v24; // [rsp+20h] [rbp-68h]
  _BYTE v25[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v26[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v27[8]; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0;
  v27[0] = __readfsqword(0x28u);
  v3 = a1[3];
  sub_69D50(a2);
  if ( v3 )
  {
    do
    {
      v4 = sub_196CD0(v25, v26) - (_QWORD)v25;
      if ( v4 )
        sub_67AC0(a2, v25, v4);
      ++v2;
    }
    while ( v3 != v2 );
  }
  v5 = a1[6];
  sub_69D50(a2);
  v24 = 0;
  if ( v5 )
  {
    do
    {
      v6 = 0;
      v7 = *(_QWORD *)(a1[5] + 24 * v24 + 8);
      v23 = v7;
      sub_69D50(a2);
      if ( v7 )
      {
        do
        {
          v8 = (__int64 *)(*(_QWORD *)(a1[5] + 24 * v24) + 80 * v6);
          sub_70140(v8, a2);
          v9 = sub_196E10(v25, v27, v8[8]) - (_QWORD)v25;
          if ( v9 )
            sub_67AC0(a2, v25, v9);
          v10 = sub_196CD0(v25, v26) - (_QWORD)v25;
          if ( v10 )
            sub_67AC0(a2, v25, v10);
          v11 = sub_196CD0(v25, v26) - (_QWORD)v25;
          if ( v11 )
            sub_67AC0(a2, v25, v11);
          ++v6;
        }
        while ( v23 != v6 );
      }
      ++v24;
    }
    while ( v24 != v5 );
  }
  v12 = a1[9];
  v13 = 0;
  sub_69D50(a2);
  if ( v12 )
  {
    do
    {
      v15 = s1;
      v16 = a1[8] + 24 * v13;
      if ( *(_QWORD *)(v16 + 8) )
        v15 = *(const char **)v16;
      if ( v15 )
      {
        v14 = strlen(v15) + 1;
      }
      else
      {
        v14 = 1;
        v15 = "";
      }
      ++v13;
      sub_67AC0(a2, v15, v14);
    }
    while ( v13 != v12 );
  }
  v17 = a1[12];
  v18 = 0;
  sub_69D50(a2);
  if ( v17 )
  {
    do
    {
      v20 = s1;
      v21 = a1[11] + 24 * v18;
      if ( *(_QWORD *)(v21 + 8) )
        v20 = *(const char **)v21;
      if ( v20 )
      {
        v19 = strlen(v20) + 1;
      }
      else
      {
        v19 = 1;
        v20 = "";
      }
      ++v18;
      sub_67AC0(a2, v20, v19);
    }
    while ( v18 != v17 );
  }
  return v27[0] - __readfsqword(0x28u);
}
