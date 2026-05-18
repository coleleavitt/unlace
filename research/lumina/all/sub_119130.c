__int64 __fastcall sub_119130(__int64 a1, __int64 i)
{
  __int64 v3; // rdi
  int v4; // ebp
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r15
  unsigned int v11; // r13d
  __int64 *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r14
  char v16; // bl
  __int64 v17; // rdi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    xmmword_241500(v3);
  if ( !*(_BYTE *)(a1 + 111) )
    sub_CC760(a1);
  v4 = 0;
  v5 = 0;
  while ( 2 )
  {
    v6 = *(unsigned int *)(a1 + 40);
    while ( 1 )
    {
      do
      {
        if ( (int)v6 <= v5 )
        {
          v16 = 0;
          v11 = 0;
          if ( *(_BYTE *)(a1 + 111) )
            goto LABEL_23;
          goto LABEL_30;
        }
        v7 = v5++;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v7 + 8);
      }
      while ( !v8 || *(_BYTE *)(v8 + 16) != 2 );
      v9 = *(__int64 **)(v8 + 8);
      v10 = *v9;
      v11 = *(_DWORD *)(*v9 + 48);
      if ( !*(_BYTE *)(*v9 + 19) )
      {
        v12 = *(__int64 **)(v10 + 288);
        v13 = *v12;
        if ( *v12 )
        {
          do
          {
            v14 = *(_QWORD *)(v13 + 56);
            *(_QWORD *)(v13 + 32) = v14;
            v13 = v14;
          }
          while ( v14 );
          v13 = *v12;
        }
        for ( i = sub_C8CA0(v13); !v11 && i; i = v15 )
        {
          v11 = 0;
          v15 = *(_QWORD *)(i + 32);
          if ( !*(_WORD *)(i + 54) )
            v11 = sub_119020(v10, i);
        }
      }
      if ( v11 != 5 )
        break;
      v6 = *(unsigned int *)(a1 + 40);
      v4 = 1;
    }
    if ( !v11 )
      continue;
    break;
  }
  v16 = 1;
  if ( !*(_BYTE *)(a1 + 111) )
LABEL_30:
    sub_CC7E0(a1, i, v6);
LABEL_23:
  v17 = *(_QWORD *)(a1 + 24);
  if ( v17 )
    xmmword_241510(v17, i, v6);
  if ( v4 && !v16 )
    return 5;
  return v11;
}
