unsigned __int64 __fastcall sub_1E44B0(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 *v7; // rax
  __int64 v8; // rdx
  unsigned __int64 *v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+8h] [rbp-30h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  if ( a2 >= *(_DWORD *)(*(_QWORD *)a1 + 64LL) )
    sub_1DF460(a4);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 528LL) + 8LL * a2);
  *(_QWORD *)(v5 + 416) = *(_QWORD *)a3;
  if ( a3 + 8 != v5 + 424 )
  {
    sub_1E4290(&v10, a3 + 8);
    v6 = v11;
    v7 = *(unsigned __int64 **)(v5 + 424);
    *(_QWORD *)(v5 + 424) = v10;
    v8 = *(_QWORD *)(v5 + 432);
    v10 = v7;
    *(_QWORD *)(v5 + 432) = v6;
    v11 = v8;
    if ( v7 )
    {
      sub_13FCB0(&v10);
      if ( v10 )
        qfree((__int64)v10);
    }
  }
  *(_BYTE *)(v5 + 440) = *(_BYTE *)(a3 + 24);
  sub_13FCB0((unsigned __int64 **)(v5 + 456));
  *(_BYTE *)(v5 + 472) = 1;
  return v12 - __readfsqword(0x28u);
}

