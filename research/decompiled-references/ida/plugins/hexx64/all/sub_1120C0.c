__int64 __fastcall sub_1120C0(__int64 a1, char a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 *j; // rax
  __int64 *v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 i; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v12 = nullptr;
  for ( i = 0; ; *(_QWORD *)&i = i + 1 )
  {
    if ( a2 && *(_DWORD *)(a1 + 352) != 1 )
    {
LABEL_21:
      v4 = (__int64)v12;
      goto LABEL_22;
    }
    if ( sub_330DE0(a1) == 1 && (v7 = *(_QWORD *)(a1 + 56), *(_DWORD *)v7 == 55) && *(_BYTE *)(v7 + 32) == 7 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      v9 = *(unsigned int *)(v7 + 40);
      if ( (unsigned int)v9 >= *(_DWORD *)(v8 + 64) )
      {
        if ( !under_debugger )
          sub_383060(0xCDEFu, 0.0);
LABEL_34:
        BUG();
      }
      a1 = *(_QWORD *)(*(_QWORD *)(v8 + 528) + 8 * v9);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 48) || *(_DWORD *)(a1 + 76) != 3 )
        goto LABEL_21;
      a1 = *(_QWORD *)(a1 + 8);
    }
    if ( !a1 )
    {
      if ( !under_debugger )
        sub_383060(0xCA90u, 0.0);
      goto LABEL_34;
    }
    v4 = (__int64)v12;
    v5 = &v12[i];
    if ( v12 != v5 )
    {
      v6 = v12;
      while ( *v6 != a1 )
      {
        if ( v5 == ++v6 )
          goto LABEL_14;
      }
      if ( v5 != v6 )
        break;
    }
LABEL_14:
    if ( *((_QWORD *)&i + 1) < (unsigned __int64)(i + 1) )
    {
      v12 = (__int64 *)qvector_reserve((__int64)&v12, (__int64)v12, i + 1, 8);
      v5 = &v12[i];
    }
    *v5 = a1;
  }
  for ( j = v6 + 1; v5 != j; ++j )
  {
    if ( *(_DWORD *)(*j + 72) < *(_DWORD *)(a1 + 72) )
      a1 = *j;
  }
LABEL_22:
  if ( v4 )
  {
    *(_QWORD *)&i = 0;
    qfree(v4);
  }
  return a1;
}

