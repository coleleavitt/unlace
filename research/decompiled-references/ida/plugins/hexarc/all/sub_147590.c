__int64 __fastcall sub_147590(int a1, __int64 a2)
{
  unsigned int v2; // eax
  char v3; // r14
  int *v4; // r13
  unsigned int v5; // ebp
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-60h]
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v2 = *(_DWORD *)a2;
  v14 = __readfsqword(0x28u);
  if ( v2 <= 0x28 )
  {
    if ( v2 <= 0x26 && v2 != 29 )
      return 0;
    v4 = *(int **)(a2 + 40);
    v3 = 0;
    if ( (unsigned int)(*v4 - 19) > 2 )
      return 0;
  }
  else
  {
    v3 = 1;
    if ( v2 - 50 > 1 )
      return 0;
    v4 = *(int **)(a2 + 40);
    if ( (unsigned int)(*v4 - 19) > 2 )
      return 0;
  }
  v5 = sub_1196C0((char *)v4 + 48, &v11, 0);
  if ( !(_BYTE)v5 )
    return 0;
  v7 = *v4;
  v8 = 8 * v4[9] - 1;
  if ( (unsigned __int64)v8 > 0x3F )
  {
    if ( v7 != 20 )
      goto LABEL_20;
  }
  else
  {
    v9 = v11 & (1LL << v8);
    if ( v7 != 20 )
    {
      if ( v7 == 21 )
      {
        v10 = v11 & (1LL << v8);
        v12 = 0xFFFFFFFF00000000LL;
        v13 = 0;
        sub_116350((char *)&v12, (char *)v4 + 32);
        if ( v10 )
          sub_11A120((char *)&v12, a1, 7, *((_QWORD *)v4 + 3), SHIDWORD(v12));
        goto LABEL_21;
      }
      if ( v7 == 19 && v9 )
      {
        if ( !v3 )
        {
          if ( !under_debugger )
            sub_37B760(52367);
          goto LABEL_28;
        }
        return 0;
      }
LABEL_20:
      v13 = 0;
      v12 = 0xFFFFFFFF00000000LL;
      sub_116350((char *)&v12, (char *)v4 + 32);
LABEL_21:
      sub_116350((char *)(a2 + 32), (char *)&v12);
      sub_1166E0((__int64)&v12);
      return v5;
    }
    if ( v9 )
      goto LABEL_20;
  }
  if ( !v3 )
  {
    if ( !under_debugger )
      sub_37B760(52366);
LABEL_28:
    BUG();
  }
  return 0;
}

