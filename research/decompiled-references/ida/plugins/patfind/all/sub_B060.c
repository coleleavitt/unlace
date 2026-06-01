__int64 __fastcall sub_B060(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  FILE *v3; // rbp
  __int64 v4; // rax
  size_t v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+8h] [rbp-450h]
  unsigned __int64 v13; // [rsp+8h] [rbp-450h]
  _BYTE src[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v2 = qfopen(a2, "r");
  if ( !v2 )
    return 0;
  v3 = (FILE *)v2;
  while ( !feof(v3) )
  {
    v4 = qfread(v3, src, 1024);
    v5 = v4;
    if ( !v4 )
      continue;
    v6 = a1[1];
    v7 = v6 + v4;
    if ( __CFADD__(v6, v4) )
    {
      if ( v6 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v6 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v8 = *a1;
    v9 = a1[1];
    if ( a1[2] < v7 )
    {
      v13 = v7;
      v11 = qvector_reserve(a1, v8, v7, 1);
      v7 = v13;
      *a1 = v11;
      v8 = v11;
      v9 = a1[1];
    }
    v12 = v7;
    memset((void *)(v8 + v9), 0, v7 - v9);
    a1[1] = v12;
LABEL_9:
    memcpy((void *)(v6 + *a1), src, v5);
  }
  qfclose(v3);
  return 1;
}

