__int64 __fastcall sub_F0D30(__int64 a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int *v10; // rbx
  unsigned int *v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int128 v14; // [rsp+0h] [rbp-78h] BYREF
  __int128 v15; // [rsp+10h] [rbp-68h]
  __int128 v16; // [rsp+20h] [rbp-58h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v4 = *(__int64 **)(a1 + 72);
  v17 = __readfsqword(0x28u);
  v5 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 32LL);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  if ( !v4 )
  {
    result = sub_D24E0(v5, 0, (__int64 *)(a1 + 72));
    if ( (_DWORD)result )
      return result;
    v4 = *(__int64 **)(a1 + 72);
  }
  sub_C4140((__int64)v5, v4, *(_QWORD *)(a1 + 80) + *(int *)(a2 + 16) + 9LL);
  result = sub_F0B40((_QWORD *)a1, (unsigned int **)a2, (__int64 *)(a2 + 8));
  if ( !(_DWORD)result )
  {
    v7 = *(_QWORD *)(a1 + 80);
    v8 = *(_QWORD *)(a1 + 72);
    v9 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
    *(_QWORD *)&v14 = 0;
    v15 = 0;
    v16 = 0;
    *((_QWORD *)&v14 + 1) = sub_D1E10(v9, a2);
    if ( *((_QWORD *)&v14 + 1) )
    {
      LODWORD(v15) = v9;
      *((_QWORD *)&v16 + 1) = v8;
      DWORD1(v15) = v7 % v9;
      DWORD2(v15) = DWORD1(v15);
      *(_QWORD *)&v16 = v7 - v7 % v9;
    }
    else
    {
      LODWORD(v14) = 7;
    }
    ++*(_DWORD *)(a1 + 56);
    sub_CB710((__int64)&v14, *(int *)(a2 + 16));
    v10 = *(unsigned int **)a2;
    if ( *(_QWORD *)a2 )
    {
      do
      {
        while ( 1 )
        {
          v11 = *((unsigned int **)v10 + 1);
          sub_CB710((__int64)&v14, (int)*v10);
          v12 = (__int64)(v10 + 4);
          sub_C6FC0((__int64)&v14, (__int64)(v10 + 4), *v10);
          if ( !*(_QWORD *)(a2 + 8) )
            break;
          v10 = v11;
          if ( !v11 )
            goto LABEL_10;
        }
        v13 = (__int64)v10;
        v10 = v11;
        sub_C91C0(v13, v12);
      }
      while ( v11 );
    }
LABEL_10:
    *(_QWORD *)a2 = 0;
    return sub_C9F50((unsigned int *)&v14, a1 + 80);
  }
  return result;
}
