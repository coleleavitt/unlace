__int64 __fastcall sub_6690(__int64 a1, const char *a2, size_t a3)
{
  const char *v3; // rbx
  size_t v5; // rax
  const char *v6; // rbp
  unsigned int v7; // r13d
  signed __int64 v8; // rbx
  _BYTE v10[1032]; // [rsp+10h] [rbp-438h]
  unsigned __int64 v11; // [rsp+418h] [rbp-30h]

  v3 = a2;
  v11 = __readfsqword(0x28u);
  v5 = strlen(a2);
  if ( !v5 || v5 < a3 )
    return -1;
  v6 = &a2[a3 - (v5 == a3)];
  if ( a2 < v6 )
  {
    while ( 1 )
    {
      v7 = *(v6 - 1);
      if ( v7 > 0x7F || !isxdigit(v7) )
        break;
      if ( a2 == --v6 )
        goto LABEL_9;
    }
  }
  v7 = *v6;
  v8 = 0;
  if ( v7 <= 0x7F )
  {
    v3 = v6;
    do
    {
LABEL_9:
      if ( !isxdigit(v7) )
        break;
      v7 = *++v3;
    }
    while ( v7 <= 0x7F );
    v8 = v3 - v6;
  }
  __memcpy_chk();
  v10[v8] = 0;
  str2ea();
  return -1;
}

