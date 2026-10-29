unsigned __int64 __fastcall sub_38A240(__int64 *a1, const char *a2)
{
  char *v4; // rbx
  int v5; // r14d
  char v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  int *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  char v14; // si
  int v15; // edx
  int v16; // eax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v22; // rax
  const char *v23; // [rsp+0h] [rbp-70h] BYREF
  _DWORD v24[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v25; // [rsp+18h] [rbp-58h] BYREF
  __int128 v26; // [rsp+20h] [rbp-50h]
  unsigned __int64 v27; // [rsp+30h] [rbp-40h]

  v23 = a2;
  v27 = __readfsqword(0x28u);
  v24[0] = 0;
  v25 = 0;
  v26 = 0;
  v4 = (char *)sub_387C00((__int64)&v25, &v23, v24);
  if ( !v4 )
  {
    v20 = v25;
    if ( !v25 )
      return v27 - __readfsqword(0x28u);
    goto LABEL_23;
  }
  v5 = (_DWORD)v23 - v24[0];
  v23 -= v24[0];
  while ( 1 )
  {
    v6 = *(_BYTE *)tag_skipcodes();
    if ( v6 == 41 || !v6 )
      break;
    while ( *v4 == 32 )
      ++v4;
    v7 = a1[1];
    v8 = a1[2];
    v9 = *a1;
    v24[1] = (_DWORD)v4 - v5;
    if ( v8 < v7 + 1 )
    {
      v22 = qvector_reserve((__int64)a1, v9, v7 + 1, 4);
      *a1 = v22;
      v9 = v22;
      v7 = a1[1];
    }
    *(_DWORD *)(v9 + 4 * v7) = (_DWORD)v4 - v5;
    v10 = a1[1] + 1;
    a1[1] = v10;
    if ( *(_WORD *)v4 == 11822 && v4[2] == 46 )
      goto LABEL_13;
    v4 = sub_385BF0(v4);
  }
  v10 = a1[1];
LABEL_13:
  v11 = (int *)*a1;
  v12 = *a1 + 4 * v10;
  if ( v12 != *a1 )
  {
    do
    {
      v13 = *v11;
      v14 = a2[v13];
      v15 = *v11;
      v16 = v13 + 2;
      if ( v14 == 2 )
      {
        while ( a2[v16 - 1] )
        {
          v17 = v16;
          *v11 = v16;
          v15 = v16;
          v16 += 2;
          v14 = a2[v17];
          if ( v14 != 2 )
            goto LABEL_19;
        }
        v14 = a2[*v11];
        v15 = *v11;
      }
LABEL_19:
      v18 = v15 + 1;
      if ( v14 == 32 )
      {
        do
        {
          v19 = v18;
          *v11 = v18++;
        }
        while ( a2[v19] == 32 );
      }
      ++v11;
    }
    while ( (int *)v12 != v11 );
  }
  v20 = v25;
  if ( v25 )
  {
LABEL_23:
    *(_QWORD *)&v26 = 0;
    qfree(v20);
  }
  return v27 - __readfsqword(0x28u);
}

