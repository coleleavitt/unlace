__int64 __fastcall sub_361250(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        _DWORD *a6,
        double a7,
        _DWORD *a8)
{
  _DWORD *v9; // rdx
  __int64 v11; // rbx
  __int64 v12; // r12
  int v13; // r15d
  __int64 v14; // r14
  int v15; // ebx
  const char *v16; // r9
  int v17; // ecx
  unsigned int v18; // eax
  int v20; // esi
  __int64 v21; // [rsp+8h] [rbp-50h]

  v9 = a6;
  v11 = *(_QWORD *)(a1 + 176);
  v12 = v11 + 120LL * *(_QWORD *)(a1 + 184);
  if ( v11 == v12 )
  {
    v20 = 0;
    v13 = 0;
    goto LABEL_22;
  }
  v21 = a3;
  v13 = 0;
  v14 = *(_QWORD *)(a1 + 176);
  v15 = 0;
  do
  {
    v18 = *(_DWORD *)(v14 + 100);
    if ( v18 == 2 )
    {
      ++v15;
    }
    else
    {
      if ( v18 > 2 )
      {
        if ( v18 - 3 > 1 )
          goto LABEL_15;
        goto LABEL_11;
      }
      if ( v18 != 1 )
      {
        if ( !a5 )
        {
LABEL_15:
          if ( !under_debugger )
            sub_383060(0xC7F1u, a7);
          goto LABEL_26;
        }
        ++v15;
        ++v13;
LABEL_5:
        if ( *(_QWORD *)(v14 + 16) <= 1u )
          goto LABEL_11;
        goto LABEL_6;
      }
    }
    ++v13;
    if ( a5 )
      goto LABEL_5;
LABEL_6:
    v16 = (const char *)&unk_418793;
    v17 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 84LL);
    if ( v17 != 8 )
      v16 = "----";
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, const char *, _QWORD, _QWORD, const char *))(*(_QWORD *)a4 + 32LL))(
            a4,
            v21,
            "\n//----- (%0*a) ----------------------------------------------------%s\n",
            (unsigned int)(2 * v17),
            *(_QWORD *)(v14 + 32),
            v16) )
      return 0;
    if ( *(_QWORD *)(v14 + 16) <= 1u )
    {
      if ( !under_debugger )
        sub_383060(0xC7AAu, a7);
LABEL_26:
      BUG();
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, void *, _QWORD))(*(_QWORD *)a4 + 32LL))(
            a4,
            v21,
            &unk_4190BD,
            *(_QWORD *)(v14 + 8)) )
      return 0;
LABEL_11:
    v14 += 120;
  }
  while ( v14 != v12 );
  v9 = a6;
  v20 = v15;
LABEL_22:
  *v9 = v13;
  *a8 = v20;
  return 1;
}

