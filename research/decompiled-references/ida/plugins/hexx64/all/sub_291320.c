_BOOL8 __fastcall sub_291320(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v4; // r15
  _BOOL4 v5; // r14d
  __int64 v7; // rbx
  int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rbp
  int v12; // edx
  int v13; // eax
  unsigned int v14; // edx
  char v15; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v16[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a1 + 72);
  v4 = *(_QWORD *)(a2 + 24);
  v16[1] = __readfsqword(0x28u);
  v15 = 0;
  v5 = sub_280520(*(_QWORD *)(v3 + 112), v4, a2 + 48, &v15);
  if ( v5 )
  {
    v7 = v4;
    copy_tinfo_t();
    if ( *(_DWORD *)(v4 + 8) == 51 )
    {
      do
      {
        sub_32C540(v16, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (_QWORD *)(v7 + 48));
        copy_tinfo_t();
        clear_tinfo_t();
        v7 = *(_QWORD *)(v7 + 24);
      }
      while ( *(_DWORD *)(v7 + 8) == 51 );
    }
    if ( !v15 )
    {
      v8 = *(_DWORD *)(v7 + 56);
      v9 = v8 | 0x20;
      v10 = v8 & 0xFFFFFFDF;
      if ( (*(_BYTE *)(a2 + 56) & 0x20) == 0 )
        v9 = v10;
      *(_DWORD *)(v7 + 56) = v9;
LABEL_9:
      sub_255850((__int64 *)a2, v4, a3);
      return v5;
    }
    if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
    {
      if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 1u )
        goto LABEL_19;
      v11 = *(_QWORD *)(v7 + 32);
    }
    else
    {
      v11 = *(_QWORD *)(v7 + 24);
    }
    if ( v11 && *(_DWORD *)(v11 + 8) == 48 )
    {
      copy_tinfo_t();
      v12 = *(_DWORD *)(v11 + 56);
      v13 = v12 | 0x20;
      v14 = v12 & 0xFFFFFFDF;
      if ( (*(_BYTE *)(a2 + 56) & 0x20) == 0 )
        v13 = v14;
      *(_DWORD *)(v11 + 56) = v13;
      goto LABEL_9;
    }
LABEL_19:
    if ( !under_debugger )
      sub_383060(0xC616u, a3);
    BUG();
  }
  return v5;
}

