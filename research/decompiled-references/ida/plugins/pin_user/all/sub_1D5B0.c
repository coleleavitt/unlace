__int64 __fastcall sub_1D5B0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  char v4; // bp
  const char *v5; // r12
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+8h] [rbp-30h]
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v7 = 0;
  v8 = -1;
  if ( (unsigned __int8)sub_18B00(a1, 0xAu, 0, 0) && (unsigned __int8)sub_18D10(a1, (int *)&v7) )
  {
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 != 1 && !*(_BYTE *)(a1 + 1289) )
        sub_BDA0((__int64)"Error in send message, packet code %x.\n", 10);
    }
    else if ( (unsigned __int8)sub_1CD70((__int64 *)a1, v8, nullptr, v1, v2, v3) )
    {
      goto LABEL_6;
    }
  }
  sub_BDA0((__int64)"Error retrieving the trace...\n");
LABEL_6:
  *(_BYTE *)(a1 + 81) = 1;
  v4 = sub_18B00(a1, 3u, 0, 0);
  if ( (dword_3A5A0 & 1) != 0 )
  {
    if ( *(_QWORD *)(a1 + 56) )
    {
      v5 = *(const char **)(a1 + 48);
      if ( !strcmp(v5, "localhost") || !strcmp(v5, "127.0.0.1") )
      {
        if ( !v4 )
        {
          if ( !*(_QWORD *)(a1 + 40) || (unsigned int)term_process() )
            return 0;
          *(_QWORD *)(a1 + 40) = 0;
        }
LABEL_13:
        sub_19810(a1);
        return 1;
      }
    }
  }
  if ( v4 )
    goto LABEL_13;
  return 0;
}

