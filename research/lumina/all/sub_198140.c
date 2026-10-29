__int64 __fastcall sub_198140(
        const char *a1,
        char *a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64, __int64),
        __int64 a5)
{
  FILE *v7; // rax
  FILE *v8; // rbp
  FILE *v9; // r12
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // r12d
  __int64 v15; // [rsp+8h] [rbp-1060h]
  __int64 v17; // [rsp+18h] [rbp-1050h]
  _BYTE ptr[4104]; // [rsp+20h] [rbp-1048h] BYREF
  unsigned __int64 v19; // [rsp+1028h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v7 = sub_196960(a1);
  if ( v7 )
  {
    v8 = v7;
    if ( sub_197CA0(a2) && !a3 )
    {
      return (unsigned int)-3;
    }
    else
    {
      v9 = sub_1969F0(a2);
      if ( v9 )
      {
        sub_198050(v8, 0, 2);
        v17 = sub_197FF0(v8);
        sub_198050(v8, 0, 0);
        v15 = 0;
        while ( 1 )
        {
          v11 = sub_197ED0(v8, ptr, 4096);
          if ( v11 <= 0 )
          {
            v12 = 0;
            sub_1980A0(v9);
            goto LABEL_10;
          }
          v10 = v11;
          if ( v11 != sub_197F70(v9, ptr, v11) )
          {
            v12 = -4;
            goto LABEL_13;
          }
          if ( a4 )
          {
            v15 += v10;
            if ( !a4(v15, v17, a5) )
              break;
          }
        }
        v12 = -5;
LABEL_13:
        sub_1980A0(v9);
        v14 = sub_18FA20();
        sub_198100(a2);
        sub_18FA40(v14);
LABEL_10:
        sub_1980A0(v8);
      }
      else
      {
        v12 = -2;
        sub_1980A0(v8);
      }
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v12;
}
