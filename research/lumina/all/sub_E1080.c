unsigned __int64 __fastcall sub_E1080(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned __int8 *i; // rdx
  unsigned __int8 *v13; // [rsp+10h] [rbp-38h] BYREF
  int v14; // [rsp+18h] [rbp-30h]
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(a1 + 336);
  v6 = *(_QWORD *)a1;
  v15 = __readfsqword(0x28u);
  if ( !v5
    || *(_BYTE *)(a1 + 292) == 1
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 32LL * *(unsigned __int8 *)(v6 + 196) + 8) + 8LL)
                 + 40LL)
      & 1) != 0 )
  {
    if ( a2 )
      sub_D7720(v6, a2);
  }
  else
  {
    v9 = sub_E0F20((__int64 *)a1, *(int **)(v5 + 32), a2);
    *(_QWORD *)(v5 + 32) = v9;
    v10 = a4;
    if ( *(_DWORD *)(a1 + 104) )
    {
      if ( v9 )
        sub_DCF40(a1, v9, a1 + 96, 1);
    }
    else
    {
      for ( i = (unsigned __int8 *)(a3 + 1); (byte_1BEF00[*i] & 1) != 0; ++i )
        ;
      if ( (byte_1BEF00[*(unsigned __int8 *)(a4 - 1)] & 1) != 0 )
      {
        do
          --v10;
        while ( (byte_1BEF00[*(unsigned __int8 *)(v10 - 1)] & 1) != 0 );
      }
      v13 = i;
      v14 = v10 - (_DWORD)i;
      if ( v9 )
        sub_DCF40(a1, v9, (__int64)&v13, 1);
    }
  }
  return __readfsqword(0x28u) ^ v15;
}
