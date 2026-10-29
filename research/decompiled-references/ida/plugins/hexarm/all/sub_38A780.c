unsigned __int64 __fastcall sub_38A780(__int64 *a1, const char *a2)
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
  __int64 v21; // rax
  const char *v22; // [rsp+0h] [rbp-70h] BYREF
  _DWORD v23[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v24; // [rsp+18h] [rbp-58h] BYREF
  __int128 v25; // [rsp+20h] [rbp-50h]
  unsigned __int64 v26; // [rsp+30h] [rbp-40h]

  v22 = a2;
  v26 = __readfsqword(0x28u);
  v23[0] = 0;
  v24 = 0;
  v25 = 0;
  v4 = (char *)sub_388140((__int64)&v24, &v22, v23);
  if ( !v4 )
  {
    if ( !v24 )
      return v26 - __readfsqword(0x28u);
    goto LABEL_24;
  }
  v5 = (_DWORD)v22 - v23[0];
  v22 -= v23[0];
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
    v23[1] = (_DWORD)v4 - v5;
    if ( v8 < v7 + 1 )
    {
      v21 = qvector_reserve();
      *a1 = v21;
      v9 = v21;
      v7 = a1[1];
    }
    *(_DWORD *)(v9 + 4 * v7) = (_DWORD)v4 - v5;
    v10 = a1[1] + 1;
    a1[1] = v10;
    if ( *v4 == 46 && v4[1] == 46 && v4[2] == 46 )
      goto LABEL_14;
    v4 = sub_386130(v4);
  }
  v10 = a1[1];
LABEL_14:
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
            goto LABEL_20;
        }
        v14 = a2[*v11];
        v15 = *v11;
      }
LABEL_20:
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
  if ( v24 )
  {
LABEL_24:
    *(_QWORD *)&v25 = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}

