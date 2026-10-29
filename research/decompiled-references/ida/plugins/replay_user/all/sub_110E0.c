__int64 __fastcall sub_110E0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+8h] [rbp-30h]
  unsigned __int64 v20; // [rsp+18h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  if ( *(int *)(a1 + 1032) >= 0 && (unsigned __int8)sub_10780(a1, (__int64)&v18, 0, a4, a5, a6) )
  {
    v12 = v19;
    if ( v19 != -1 )
    {
      v13 = *(_QWORD *)(a1 + 680);
      if ( v13 )
      {
        v14 = 0;
        v15 = 0;
        do
        {
          v16 = 32 * v15;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 672) + v16 + 8) & 2) != 0 )
          {
            v17 = a4 + v16;
            if ( v19 != *(_QWORD *)(v17 + 8) )
              goto LABEL_16;
          }
          v15 = ++v14;
        }
        while ( v14 < v13 );
      }
    }
    while ( v18 > 4 )
    {
      if ( v18 - 5 <= 1 )
        goto LABEL_12;
      if ( under_debugger )
        BUG();
      v12 = 576;
      v17 = interr();
LABEL_16:
      *(_QWORD *)(v17 + 8) = v12;
    }
    if ( v18 != 1 )
      return 1;
LABEL_12:
    sub_11050(a1, a3, a4, *(_DWORD *)(a1 + 1032), v10, v11);
  }
  return 1;
}

