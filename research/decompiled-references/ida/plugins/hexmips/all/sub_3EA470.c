__int64 __fastcall sub_3EA470(__int64 a1, __m128 a2)
{
  const char *v2; // rax
  __int64 v3; // rbp
  char v4; // al
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int8 *v7; // r12
  int v8; // r13d
  int v9; // edx
  char v10; // al

  v2 = "HEXMIPS64";
  v3 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(v3 + 144) )
    v2 = "HEXMIPS";
  *(_QWORD *)(a1 + 24) = v2;
  v4 = 0;
  if ( *(_DWORD *)(v3 + 152) == 18 )
  {
    v4 = sub_325950(v3);
    v3 = *(_QWORD *)(a1 + 96);
  }
  *(_BYTE *)(a1 + 744) = v4;
  v5 = *(_QWORD *)(v3 + 168);
  if ( !v5 )
    return 0;
  v6 = v5 - 1;
  if ( v6 <= 2 )
    return 0;
  v7 = *(unsigned __int8 **)(v3 + 160);
  v8 = *v7;
  if ( v8 == 111 && v7[1] == 51 && v7[2] == 50 )
  {
    v9 = 0;
    v10 = 0;
    goto LABEL_17;
  }
  if ( v8 == 110 )
  {
    if ( v7[1] == 51 && v7[2] == 50 )
    {
      v9 = 1;
      v10 = 0;
      goto LABEL_17;
    }
    if ( v7[1] == 54 && v7[2] == 52 )
    {
      v9 = 2;
      v10 = 1;
      goto LABEL_17;
    }
  }
  if ( v8 == 111 && v7[1] == 54 && v7[2] == 52 )
  {
    v9 = 4;
    v10 = 0;
  }
  else if ( v6 > 5 && !strncmp(*(const char **)(v3 + 160), "eabi32", 6u) )
  {
    v9 = 3;
    v10 = 0;
  }
  else
  {
    if ( v8 != 112 || v7[1] != 51 || v7[2] != 50 )
      return 0;
    v9 = 5;
    v10 = 0;
  }
LABEL_17:
  *(_DWORD *)(a1 + 748) = v9;
  if ( *(_BYTE *)(v3 + 144) != v10 )
    return 0;
  sub_3E8690(a1, a2);
  return 1;
}

