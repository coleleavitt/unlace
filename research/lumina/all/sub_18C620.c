__int64 __fastcall sub_18C620(char **a1)
{
  unsigned int v1; // ebp
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  char *v7; // r12
  char v8; // al
  char v9; // al
  char *v11; // r12
  unsigned int v12; // edi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // edi
  char *v17; // r14
  char v18; // bp
  _BYTE v19[4]; // [rsp+0h] [rbp-38h] BYREF
  char v20; // [rsp+4h] [rbp-34h] BYREF
  char v21; // [rsp+5h] [rbp-33h]
  char v22; // [rsp+6h] [rbp-32h]
  char v23; // [rsp+7h] [rbp-31h]
  unsigned __int64 v24; // [rsp+8h] [rbp-30h]

  v1 = 0;
  v24 = __readfsqword(0x28u);
  v3 = sub_18ECE0(a1);
  if ( v3 != -1 )
  {
    v1 = 92;
    if ( v3 <= 0xFF )
    {
      v1 = v3;
      if ( (unsigned __int8)(v3 - 48) <= 7u )
      {
        v7 = *a1;
        v20 = v3;
        v8 = *v7;
        if ( (unsigned __int8)(*v7 - 48) <= 7u )
          ++v7;
        else
          v8 = 0;
        v21 = v8;
        v9 = *v7;
        if ( (unsigned __int8)(*v7 - 48) > 7u )
          v9 = 0;
        else
          ++v7;
        v22 = v9;
        v23 = 0;
        sub_19DA80((unsigned int)&v20, (unsigned int)"%o", (unsigned int)v19, v4, v5, v6);
        *a1 = v7;
        return v19[0];
      }
      else
      {
        switch ( (char)v3 )
        {
          case 'a':
            v1 = 7;
            break;
          case 'b':
            v1 = 8;
            break;
          case 'f':
            v1 = 12;
            break;
          case 'n':
            v1 = 10;
            break;
          case 'r':
            v1 = 13;
            break;
          case 't':
            v1 = 9;
            break;
          case 'v':
            v1 = 11;
            break;
          case 'x':
            v11 = *a1;
            v12 = **a1;
            if ( v12 <= 0x7F && isxdigit(v12) )
            {
              v20 = v12;
              v16 = v11[1];
              v17 = v11 + 1;
              v18 = v11[1];
              if ( v16 <= 0x7F && isxdigit(v16) )
                v17 = v11 + 2;
              else
                v18 = 0;
              v21 = v18;
              v22 = 0;
              sub_19DA80((unsigned int)&v20, (unsigned int)"%x", (unsigned int)v19, v13, v14, v15);
              *a1 = v17;
              v1 = v19[0];
            }
            break;
          default:
            return v1;
        }
      }
    }
  }
  return v1;
}
