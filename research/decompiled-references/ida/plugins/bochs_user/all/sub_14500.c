__int64 __fastcall sub_14500(char *s1, __int64 a2)
{
  unsigned int v2; // r12d
  const char *v3; // rbp
  __int64 v5; // r14
  size_t v6; // rbx
  char v7; // al
  _BYTE *v8; // rsi
  size_t v9; // rbp
  __int64 v10; // rbx
  const char **v11; // rbx
  _BYTE *v13; // [rsp+10h] [rbp-58h]

  v3 = s1;
  v5 = sub_F290((__int64)s1, a2);
  LOBYTE(v2) = s1 == nullptr || *(_QWORD *)(v5 + 15608) == 0;
  if ( (_BYTE)v2 )
    return 0;
  v13 = nullptr;
  v6 = strlen(s1);
  if ( s1 == &s1[v6] )
  {
    v10 = 2;
    v9 = 0;
LABEL_22:
    v13 = (_BYTE *)qvector_reserve();
    v8 = v13;
    goto LABEL_8;
  }
  v7 = s1[v6 - 1];
  if ( v7 == 10 || v7 == 13 )
    goto LABEL_10;
  v13 = (_BYTE *)qvector_reserve();
  memmove(v13, s1, v6);
  v13[v6] = 0;
  v8 = v13;
  if ( v6 == -1 )
  {
    v9 = 0;
    v10 = 2;
  }
  else
  {
    v9 = v6;
    v10 = v6 + 2;
  }
  if ( v10 )
    goto LABEL_22;
LABEL_8:
  v8[v9] = 10;
  v13[v9 + 1] = 0;
  v3 = ::s1;
  if ( v10 )
    v3 = v13;
LABEL_10:
  v11 = (const char **)&off_70F60;
  do
  {
    if ( !strcasecmp(v3, *v11) )
    {
      sub_EBD0((__int64)"This command cannot be passed to Bochs directly, please use IDA Debugger menu to achieve the same result.\n");
      goto LABEL_15;
    }
    ++v11;
  }
  while ( v11 != (const char **)algn_70FA8 );
  if ( !(unsigned int)sub_267A0(*(_QWORD *)(v5 + 15608) + 1208LL, v3, a2) )
  {
    callui(1082, 0, 0, 0xFFFF);
    v2 = 1;
  }
LABEL_15:
  if ( v13 )
    qfree();
  return v2;
}

