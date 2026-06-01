__int64 __fastcall sub_14DC50(unsigned __int64 *a1, __int64 a2, __m128i a3)
{
  unsigned int v3; // eax
  char v4; // r14
  int *v5; // r13
  unsigned int v6; // ebp
  int v8; // edx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v3 = *(_DWORD *)a2;
  v15 = __readfsqword(0x28u);
  if ( v3 <= 0x28 )
  {
    if ( v3 <= 0x26 && v3 != 29 )
      return 0;
    v5 = *(int **)(a2 + 40);
    v4 = 0;
    if ( (unsigned int)(*v5 - 19) > 2 )
      return 0;
  }
  else
  {
    v4 = 1;
    if ( v3 - 50 > 1 )
      return 0;
    v5 = *(int **)(a2 + 40);
    if ( (unsigned int)(*v5 - 19) > 2 )
      return 0;
  }
  v6 = sub_11FD80((char *)v5 + 48, &v12, 0);
  if ( !(_BYTE)v6 )
    return 0;
  v8 = *v5;
  v9 = 8 * v5[9] - 1;
  if ( (unsigned __int64)v9 > 0x3F )
  {
    if ( v8 != 20 )
      goto LABEL_20;
  }
  else
  {
    v10 = v12 & (1LL << v9);
    if ( v8 != 20 )
    {
      if ( v8 == 21 )
      {
        v11 = v12 & (1LL << v9);
        v13 = 0xFFFFFFFF00000000LL;
        v14 = 0;
        sub_11CA10((char *)&v13, (char *)v5 + 32);
        if ( v11 )
          sub_1207E0((char *)&v13, a1, 7, *((_QWORD *)v5 + 3), SHIDWORD(v13), a3);
        goto LABEL_21;
      }
      if ( v8 == 19 && v10 )
      {
        if ( !v4 )
        {
          if ( !under_debugger )
            sub_383060(0xCC8Fu, *(double *)a3.m128i_i64);
          goto LABEL_28;
        }
        return 0;
      }
LABEL_20:
      v14 = 0;
      v13 = 0xFFFFFFFF00000000LL;
      sub_11CA10((char *)&v13, (char *)v5 + 32);
LABEL_21:
      sub_11CA10((char *)(a2 + 32), (char *)&v13);
      sub_11CDA0((__int64)&v13);
      return v6;
    }
    if ( v10 )
      goto LABEL_20;
  }
  if ( !v4 )
  {
    if ( !under_debugger )
      sub_383060(0xCC8Eu, *(double *)a3.m128i_i64);
LABEL_28:
    BUG();
  }
  return 0;
}

