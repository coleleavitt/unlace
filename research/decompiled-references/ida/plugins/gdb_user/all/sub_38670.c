unsigned __int64 __fastcall sub_38670(__int64 a1, __int64 *a2, char *a3, unsigned __int64 a4)
{
  char v7; // r12
  char *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( !a2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  a2[1] = 0;
  if ( a2[2] < a4 )
  {
    *a2 = qvector_reserve();
LABEL_4:
    v7 = *a3;
    v8 = &a3[a4];
    if ( *a3 == 125 )
      goto LABEL_8;
    while ( 1 )
    {
      v9 = a2[1];
      v10 = *a2;
      if ( a2[2] < (unsigned __int64)(v9 + 1) )
        goto LABEL_10;
      while ( 1 )
      {
        ++a3;
        *(_BYTE *)(v10 + v9) = v7;
        ++a2[1];
        if ( v8 == a3 )
          return v13 - __readfsqword(0x28u);
        v7 = *a3;
        if ( *a3 != 125 )
          break;
LABEL_8:
        if ( v8 == ++a3 )
          return v13 - __readfsqword(0x28u);
        v9 = a2[1];
        v10 = *a2;
        v7 = *a3 ^ 0x20;
        if ( a2[2] < (unsigned __int64)(v9 + 1) )
        {
LABEL_10:
          v11 = qvector_reserve();
          *a2 = v11;
          v10 = v11;
          v9 = a2[1];
        }
      }
    }
  }
  if ( a4 )
    goto LABEL_4;
  return v13 - __readfsqword(0x28u);
}

