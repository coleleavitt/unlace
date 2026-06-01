__int64 __fastcall sub_3F04D0(__int64 a1, const char *a2, int a3, int a4, int *a5, double a6)
{
  unsigned __int64 v8; // r12
  char *v10; // rax
  char *v11; // r15
  char *v12; // rax
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // r15
  char *v17; // rax
  char v18; // cl
  int v19; // eax
  int v20; // [rsp+0h] [rbp-50h]
  int v21; // [rsp+0h] [rbp-50h]
  int v22; // [rsp+Ch] [rbp-44h]
  signed __int64 v23; // [rsp+10h] [rbp-40h]

  if ( (unsigned __int8)(a2[1] - 48) > 9u )
    return 0xFFFFFFFFLL;
  v8 = a3;
  v10 = strchr(a2, 46);
  v11 = v10;
  if ( v10 )
  {
    v12 = strchr("bhsdq", v10[1]);
    if ( !v12 )
      return 0xFFFFFFFFLL;
    v23 = v12 - "bhsdq";
    v22 = 1 << (v12 - "bhsdq");
    if ( v22 <= 0 )
      return 0xFFFFFFFFLL;
    v20 = (_DWORD)v11 - (_DWORD)a2;
    if ( v11 - a2 < v8 && v11[2] == 91 && (unsigned __int8)(v11[3] - 48) <= 9u )
    {
      v13 = strtol(v11 + 3, nullptr, 10);
      v14 = v22;
      if ( v22 <= 8 )
      {
        v15 = v13 - 1;
        if ( v15 < 16 >> v23 && v22 - 1 > a4 )
        {
          LOBYTE(v16) = *a2;
          LODWORD(v8) = v20;
          a4 += v15 << v23;
          goto LABEL_15;
        }
      }
      if ( !under_debugger )
        sub_3835A0(0xC856u, a6);
    }
    else if ( !under_debugger )
    {
      sub_3835A0(0xC855u, a6);
    }
    BUG();
  }
  v16 = *(unsigned __int8 *)a2;
  v17 = strchr("bhsdq", *a2);
  if ( !v17 )
    return 0xFFFFFFFFLL;
  v14 = 1 << (v17 - "bhsdq");
LABEL_15:
  v18 = 113;
  v21 = v14;
  if ( (_BYTE)v16 == 100 )
    v18 = 100;
  v19 = sub_3F0200(a1, (__int64)a2, v8, v18, nullptr);
  if ( a5 )
    *a5 = v21;
  if ( v19 != -1 )
    return (unsigned int)(a4 + v19);
  return 0xFFFFFFFFLL;
}

