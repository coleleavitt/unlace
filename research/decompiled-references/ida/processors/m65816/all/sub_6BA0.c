unsigned __int64 __fastcall sub_6BA0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  int v6; // r14d
  char *v7; // r12
  __int64 v8; // r8
  char *v9; // rdi
  __int64 v10; // rcx
  __int64 v12; // [rsp+30h] [rbp-478h]
  char v13[1023]; // [rsp+60h] [rbp-448h] BYREF
  char v14; // [rsp+45Fh] [rbp-49h] BYREF
  char v15; // [rsp+460h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+468h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)getseg();
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(v5 + 68);
  if ( v6 > *(_DWORD *)(v5 + 72) )
    return v16 - __readfsqword(0x28u);
  v7 = v13;
  do
  {
    while ( 1 )
    {
      if ( v6 == 4 )
        goto LABEL_5;
      if ( !(unsigned __int8)get_sreg_range() )
        goto LABEL_4;
      v8 = v12;
      if ( v4 == v3 )
        break;
      if ( !v3
        && (unsigned int)(v6 - 8) <= 1
        && (~*(_WORD *)(a2 + 720) & 0x600) == 0
        && (*(_QWORD *)(a2 + 720) & 0x10000000) != 0 )
      {
        goto LABEL_20;
      }
LABEL_4:
      v5 = *(_QWORD *)(a1 + 16);
LABEL_5:
      if ( *(_DWORD *)(v5 + 72) < ++v6 )
        goto LABEL_21;
    }
    if ( v4 )
    {
      get_sreg_range();
      v8 = v12;
    }
    if ( (unsigned int)(v6 - 8) > 1 )
    {
      if ( v7 == v13 )
      {
        v9 = v13;
      }
      else
      {
        if ( v7 >= &v15 )
        {
          if ( !under_debugger )
            interr();
          BUG();
        }
        v9 = v7 + 1;
        *v7 = 32;
        if ( v7 + 1 >= &v15 )
        {
          v14 = 0;
          v9 = &v14;
        }
      }
      v7 = &v9[(int)qsnprintf()];
      goto LABEL_4;
    }
LABEL_20:
    v10 = 8 * (unsigned int)(v6++ != 8) + 65;
    sub_57A0(a2, 0, (__int64)".%c%d", v10, v8 == 0 ? 16 : 8);
    v5 = *(_QWORD *)(a1 + 16);
  }
  while ( *(_DWORD *)(v5 + 72) >= v6 );
LABEL_21:
  if ( v7 != v13 )
    sub_5850(a2, (__int64)"%s", v13);
  return v16 - __readfsqword(0x28u);
}

