__int64 __fastcall sub_19F920(__int64 a1, double a2)
{
  unsigned __int8 (*v2)(void); // rax
  unsigned int v3; // r12d
  __int64 v5; // rbp
  int v6; // eax
  int v7; // r15d
  unsigned int v8; // edx
  unsigned int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rax

  v2 = *(unsigned __int8 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v2 == (char *)sub_194B60 )
  {
    if ( !*(_DWORD *)(a1 + 128) )
      return 0;
  }
  else if ( !v2() )
  {
    return 0;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 280LL);
  v6 = sub_19F880(a1, a2);
  v7 = v6;
  if ( v6 == -1 )
    return 0;
  v8 = *(_DWORD *)(v5 + 64);
  if ( v8 != 1 )
  {
    v9 = 1;
    v3 = 0;
    v10 = 104LL * v6;
    while ( 1 )
    {
      if ( v9 >= v8 )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, a2);
LABEL_32:
        BUG();
      }
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * v9) + 48LL);
      if ( v11 )
        break;
LABEL_18:
      if ( v8 == ++v9 )
        goto LABEL_19;
    }
    while ( 1 )
    {
      while ( (unsigned __int8)sub_19B9C0(v5, v11, nullptr, a2) )
      {
        v3 = 1;
LABEL_16:
        v11 = *(_QWORD *)(v11 + 8);
        if ( !v11 )
        {
LABEL_17:
          v8 = *(_DWORD *)(v5 + 64);
          goto LABEL_18;
        }
      }
      if ( *(_DWORD *)v11 == 56 )
      {
        v14 = *(_QWORD *)(v11 + 72);
        if ( *(_DWORD *)(v14 + 284) == 25 )
        {
          if ( *(_QWORD *)(v14 + 32) != 2 )
          {
            if ( !under_debugger )
              sub_383060(0xC8B5u, a2);
            goto LABEL_32;
          }
          v15 = *(_QWORD *)(v14 + 24);
          if ( (*(_BYTE *)(v15 + 80) & 0xFD) != 9 )
          {
            if ( !under_debugger )
              sub_383060(0xC8B7u, a2);
            goto LABEL_32;
          }
          *(_BYTE *)(v15 + 80) = 9;
          v16 = j__qalloc_or_throw(24, v11, v12, v13);
          *(_QWORD *)v16 = v5;
          *(_QWORD *)(v16 + 8) = 0;
          *(_DWORD *)(v16 + 16) = v7;
          *(_QWORD *)(v15 + 88) = v16;
          *(_DWORD *)(v15 + 84) = *(_DWORD *)(*(_QWORD *)(v5 + 432) + v10 + 88);
          v3 = 1;
          copy_tinfo_t();
          goto LABEL_16;
        }
      }
      v11 = *(_QWORD *)(v11 + 8);
      if ( !v11 )
        goto LABEL_17;
    }
  }
  v3 = 0;
LABEL_19:
  if ( !*(_BYTE *)(v5 + 320) )
    sub_195400(v5, a2);
  return v3;
}

