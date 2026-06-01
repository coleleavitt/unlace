__int64 __fastcall sub_195FF0(__int64 a1, __int64 a2, double a3)
{
  bool v3; // zf
  char v4; // dl
  __int64 result; // rax
  int *v6; // rdx
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+8h] [rbp-60h]
  unsigned int v14; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v15; // [rsp+18h] [rbp-50h]
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  int v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]

  v3 = *(_BYTE *)a2 == 9;
  v18 = __readfsqword(0x28u);
  if ( v3 )
  {
    v6 = *(int **)(a2 + 8);
    v7 = v6[4];
    if ( *(_QWORD *)(*(_QWORD *)v6 + 440LL) < v7 )
      sub_1953E0(a3);
    v8 = *(_QWORD *)(*(_QWORD *)v6 + 432LL) + 104 * v7;
    if ( *(_DWORD *)v8 == 1 )
    {
      return *((_QWORD *)v6 + 1) + *(_QWORD *)(v8 + 8);
    }
    else
    {
      result = -1;
      if ( *(_DWORD *)v8 == 2 )
      {
        v14 = 0;
        copy_argloc();
        if ( (unsigned __int8)sub_1C55E0(
                                &v14,
                                a1,
                                *(_DWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                                *(unsigned int *)(v8 + 88),
                                1) )
        {
          if ( v14 == 2 && v15[1] )
          {
            v11 = *v15;
            LODWORD(v16[0]) = 0;
            copy_argloc();
            v17 = *(_DWORD *)(v11 + 16);
          }
          else
          {
            LODWORD(v16[0]) = 0;
            copy_argloc();
            v17 = 0xFFFF;
          }
          v9 = -1;
          if ( LODWORD(v16[0]) == 1 )
            v9 = v16[1];
          v12 = v9;
          cleanup_argloc();
          v10 = v12;
        }
        else
        {
          v10 = -1;
        }
        v13 = v10;
        cleanup_argloc();
        return v13;
      }
    }
  }
  else
  {
    v4 = sub_32F330(a2, v16);
    result = -1;
    if ( v4 )
      return v16[0];
  }
  return result;
}

