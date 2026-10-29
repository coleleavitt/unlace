__int64 __fastcall sub_400A0(__int64 *a1)
{
  __int64 v1; // rax
  FILE *v2; // rbp
  __int64 v3; // rax
  size_t v4; // rbx
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r9
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // [rsp+8h] [rbp-450h]
  unsigned __int64 v12; // [rsp+8h] [rbp-450h]
  char src[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v14; // [rsp+418h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v1 = qfopen();
  if ( !v1 )
    return 0;
  v2 = (FILE *)v1;
  while ( !feof(v2) )
  {
    v3 = qfread();
    v4 = v3;
    if ( !v3 )
      continue;
    v5 = a1[1];
    v6 = v5 + v3;
    if ( __CFADD__(v5, v3) )
    {
      if ( v5 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v5 != 0x7FFFFFFFFFFFFFFFLL )
          a1[1] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v6 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v7 = *a1;
    v8 = a1[1];
    if ( a1[2] < v6 )
    {
      v12 = v6;
      v10 = qvector_reserve();
      v6 = v12;
      *a1 = v10;
      v7 = v10;
      v8 = a1[1];
    }
    v11 = v6;
    memset((void *)(v7 + v8), 0, v6 - v8);
    a1[1] = v11;
LABEL_9:
    memcpy((void *)(v5 + *a1), src, v4);
  }
  qfclose();
  return 1;
}

