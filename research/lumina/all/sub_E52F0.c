__int64 __fastcall sub_E52F0(__int64 a1, __int64 a2)
{
  __int64 *v2; // r15
  __int64 v3; // rbp
  int v4; // eax
  int *v5; // r13
  int *v6; // rbx
  int v7; // r14d
  _QWORD *v8; // r11
  __int64 v9; // rax
  int *v10; // rax
  __int64 v11; // rsi
  int *v12; // rdx
  int v13; // ebx
  _QWORD *v14; // rsi
  int v16; // [rsp+Ch] [rbp-4Ch]

  v2 = *(__int64 **)(a1 + 40);
  v3 = *(_QWORD *)*v2;
  v4 = sub_CA320(v3, (unsigned __int8 *)v2[9]);
  v5 = *(int **)(a2 + 40);
  v16 = v4;
  if ( !v5 )
    return 0;
  v6 = v5 + 2;
  if ( *v5 <= 0 )
  {
LABEL_13:
    v12 = *(int **)(a2 + 104);
    if ( v12 && *v12 > 0 )
    {
      v13 = 0;
      do
      {
        v14 = *(_QWORD **)&v12[12 * v13 + 8];
        if ( v14 && *(_QWORD *)(a1 + 16) )
        {
          if ( (unsigned int)sub_CDAF0(a1, v14) )
            return 2;
          v12 = *(int **)(a2 + 104);
        }
        ++v13;
      }
      while ( *v12 > v13 );
    }
    return 0;
  }
  v7 = 0;
  while ( *((_BYTE *)v2 + 64) )
  {
LABEL_9:
    v10 = &v5[26 * v7];
    if ( (*((_BYTE *)v10 + 70) & 2) == 0 )
    {
      v11 = *((_QWORD *)v10 + 10);
      if ( v11 )
      {
        if ( (unsigned int)sub_CDCD0((__int64)(v2 + 1), v11) )
          return 2;
      }
    }
    ++v7;
    v6 += 26;
    if ( *v5 <= v7 )
      goto LABEL_13;
  }
  if ( !*((_QWORD *)v6 + 1) )
  {
LABEL_8:
    v9 = v2[7];
    *((_BYTE *)v6 + 61) |= 0x40u;
    *(_QWORD *)v6 = v9;
    goto LABEL_9;
  }
  if ( (unsigned int)sub_CA320(v3, *((unsigned __int8 **)v6 + 1)) == v16 )
  {
    sub_C9250(v3, v8);
    *((_BYTE *)v6 + 62) |= 1u;
    *((_QWORD *)v6 + 1) = 0;
    goto LABEL_8;
  }
  sub_DBD10(*v2, "%s %T cannot reference objects in database %s", v2[10], v2[11], v8);
  return 2;
}
