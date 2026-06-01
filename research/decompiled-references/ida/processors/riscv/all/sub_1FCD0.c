unsigned __int64 __fastcall sub_1FCD0(__int64 a1, char a2)
{
  char *v2; // r12
  char *v3; // rbx
  const char **v4; // r15
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v8; // rax
  char **v9; // rdx
  unsigned __int64 v10; // [rsp+0h] [rbp-78h]
  __int128 v11; // [rsp+10h] [rbp-68h] BYREF
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+28h] [rbp-50h]
  unsigned __int64 v14; // [rsp+38h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  s1 = nullptr;
  get_abi_name(&s1);
  v2 = s1;
  v3 = (char *)&unk_2B040;
  v4 = (const char **)&off_34160;
  v10 = v13;
  if ( (_QWORD)v13 )
    v3 = s1;
  v5 = 0;
  while ( !*v4 || strcmp(v3, *v4) )
  {
    ++v5;
    v4 += 2;
    if ( v5 == 8 )
    {
      if ( v10 <= 1 )
        sub_1F3B0((__int64)"No ABI name\n");
      else
        sub_1F3B0((__int64)"ABI name '%s' is unknown, ignored\n", v2);
LABEL_9:
      v6 = *(_QWORD *)(a1 + 32);
      v11 = 0;
      set_compiler(&v11, 4, (&off_34160)[8 * (unsigned __int64)(*(_DWORD *)(v6 + 24) != 4)]);
      if ( s1 )
      {
        *(_QWORD *)&v13 = 0;
        qfree(s1);
      }
      return v14 - __readfsqword(0x28u);
    }
  }
  v8 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 120) = v5;
  v9 = &(&off_34160)[2 * (unsigned int)v5];
  if ( *((unsigned __int8 *)v9 + 9) != *(_DWORD *)(v8 + 24) )
  {
    if ( !v10 )
      v2 = (char *)&unk_2B040;
    sub_1F3B0((__int64)"ABI name '%s' is incompatible with IDA bitness, ignored\n", v2);
    goto LABEL_9;
  }
  if ( a2 )
  {
    setinf(64, *((unsigned __int8 *)v9 + 11));
    setinf(65, 8);
    setinf(66, 16);
    setinf_flag(67, 4, 1);
    v2 = s1;
  }
  if ( v2 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v2);
  }
  return v14 - __readfsqword(0x28u);
}

