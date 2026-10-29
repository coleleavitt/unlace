__int64 __fastcall sub_38A720(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rbp
  __int64 v12; // rdi

  v4 = *(__int64 **)(a1 + 32);
  sub_2537B0((__int64)v4, 0, a3);
  v9 = *(_QWORD *)(v4[27] + 1008);
  v10 = *(__int64 **)(v9 + 40);
  v11 = &v10[*(_QWORD *)(v9 + 48)];
  while ( v11 != v10 )
  {
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 )
      {
        if ( v4 == *(__int64 **)(v12 + 32) )
          break;
      }
      if ( v11 == ++v10 )
        goto LABEL_7;
    }
    ++v10;
    sub_37F170(v12, v4, v5, v6, v7, v8);
  }
LABEL_7:
  sub_38A600(a1, a2, v5);
  return sub_386590(a1, 0);
}

