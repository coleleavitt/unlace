unsigned __int64 __fastcall sub_49C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r15d
  __int64 v4; // rbp
  char *v5; // rbx
  char *v6; // r13
  __int64 v8; // [rsp+20h] [rbp-478h]
  __int64 v9; // [rsp+40h] [rbp-458h]
  char v10[1023]; // [rsp+50h] [rbp-448h] BYREF
  char v11; // [rsp+44Fh] [rbp-49h] BYREF
  char v12; // [rsp+450h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+458h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(v2 + 68);
  v13 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 16);
  if ( *(_DWORD *)(v2 + 72) < v3 )
    return v13 - __readfsqword(0x28u);
  v5 = v10;
  do
  {
    while ( 1 )
    {
      if ( (unsigned int)(v3 - 7) <= 1 )
        goto LABEL_10;
      get_sreg_range();
      if ( !v4 || !(unsigned __int8)get_sreg_range() || v9 != v8 )
      {
        if ( v3 == 9 )
          goto LABEL_18;
LABEL_4:
        if ( v5 == v10 )
        {
          v6 = v10;
        }
        else
        {
          if ( v5 >= &v12 )
          {
            if ( !under_debugger )
              interr();
            BUG();
          }
          v6 = v5 + 1;
          *v5 = 32;
          if ( v5 + 1 >= &v12 )
          {
            v11 = 0;
            v6 = &v11;
          }
        }
        v5 = &v6[(int)qsnprintf()];
        goto LABEL_9;
      }
      if ( (~*(_WORD *)(a2 + 720) & 0x600) == 0 && (*(_QWORD *)(a2 + 720) & 0x10000000) != 0 )
        break;
LABEL_9:
      v2 = *(_QWORD *)(a1 + 16);
LABEL_10:
      if ( *(_DWORD *)(v2 + 72) < ++v3 )
        goto LABEL_19;
    }
    if ( v3 != 9 )
      goto LABEL_4;
LABEL_18:
    ++v3;
    sub_4450(a2, (__int64)"P=%a", 0.0);
    v2 = *(_QWORD *)(a1 + 16);
  }
  while ( *(_DWORD *)(v2 + 72) >= v3 );
LABEL_19:
  if ( v5 != v10 )
    sub_4450(a2, (__int64)"%s", v10);
  return v13 - __readfsqword(0x28u);
}

