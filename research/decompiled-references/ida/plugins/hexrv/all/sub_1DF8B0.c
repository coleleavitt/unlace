unsigned __int64 __fastcall sub_1DF8B0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 *v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( a2 >= *(_DWORD *)(*(_QWORD *)a1 + 64LL) )
    sub_1DA840(a1);
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 528LL) + 8LL * a2);
  *(_QWORD *)(v4 + 416) = *(_QWORD *)a3;
  if ( a3 + 8 != v4 + 424 )
  {
    sub_1DF690((__int64 *)&v9, a3 + 8);
    v5 = v10;
    v6 = *(unsigned __int64 **)(v4 + 424);
    *(_QWORD *)(v4 + 424) = v9;
    v7 = *(_QWORD *)(v4 + 432);
    v9 = v6;
    *(_QWORD *)(v4 + 432) = v5;
    v10 = v7;
    if ( v6 )
    {
      sub_13B7F0(&v9);
      if ( v9 )
        qfree();
    }
  }
  *(_BYTE *)(v4 + 440) = *(_BYTE *)(a3 + 24);
  sub_13B7F0((unsigned __int64 **)(v4 + 456));
  *(_BYTE *)(v4 + 472) = 1;
  return v11 - __readfsqword(0x28u);
}

