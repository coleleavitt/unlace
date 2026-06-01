__int64 __fastcall sub_52900(__int64 a1, const char *a2)
{
  char *v2; // rax
  char v3; // r15
  char *v4; // r13
  __int64 i; // rbx
  __int64 v6; // r14
  __int64 v7; // rsi
  char v8; // bp
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-B8h]

  sub_1BF10(a1, (__int64)"launch: %s\n", a2);
  v2 = (char *)skip_spaces();
  v3 = *v2;
  v4 = v2;
  if ( *v2 == 34 || v3 == 39 )
    v4 = v2 + 1;
  else
    v3 = 0;
  v11 = 0;
  for ( i = 0; ; i = v6 )
  {
    v8 = *v4;
    if ( v3 )
    {
      if ( v3 == v8 )
        break;
      goto LABEL_6;
    }
    if ( (unsigned int)v8 > 0x7F )
      goto LABEL_7;
    if ( isspace(v8) )
      break;
LABEL_6:
    if ( !v8 )
      break;
LABEL_7:
    ++v4;
    v6 = 2;
    if ( i )
      v6 = i-- + 1;
    v7 = v11;
    if ( v6 )
    {
      v11 = qvector_reserve();
      v7 = v11;
    }
    *(_BYTE *)(v7 + i) = v8;
    *(_BYTE *)(v11 + i + 1) = 0;
  }
  getinf_flag();
  v9 = launch_process();
  LOBYTE(i) = v9 != 0;
  *(_QWORD *)(a1 + 1688) = v9;
  if ( v11 )
    qfree();
  return (unsigned int)i;
}

