__int64 __fastcall sub_1ECA00(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  char v8; // r13
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-60h]
  unsigned __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 14 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( *(_BYTE *)(v4 + 16) == 9 && *(_BYTE *)v4 == 9 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 24) + 16LL) == *(_DWORD *)(v5 + 16) )
      {
        v6 = v4 + 16;
        v7 = *(_QWORD *)(a2 + 8);
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL);
        v8 = sub_11CC50((unsigned __int8 *)v7, v17, *(_DWORD *)(v5 + 8), a3);
        v9 = sub_11CC50((unsigned __int8 *)(v4 + 16), v17, *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL), a3);
        if ( !v8 )
        {
          v7 = v4 + 16;
          v6 = v4;
        }
        if ( v8 == v9 )
        {
          v10 = *(_QWORD *)(v6 + 8);
          v11 = *(_QWORD *)(v7 + 8);
          if ( *(_QWORD *)(v11 + 8) == *(_QWORD *)(v10 + 8) + *(int *)(v6 + 4) )
          {
            v12 = *(_QWORD *)(a1 + 8);
            v18 = 0xFFFFFFFF00000000LL;
            v19 = 0;
            v13 = *(_QWORD *)(v6 + 8);
            LOWORD(v18) = 9;
            v14 = *(_QWORD *)(v13 + 8);
            v15 = *(_DWORD *)(v13 + 16);
            v16 = j__qalloc_or_throw(24, v17, v11, v10);
            *(_QWORD *)v16 = v12;
            *(_QWORD *)(v16 + 8) = v14;
            *(_DWORD *)(v16 + 16) = v15;
            v19 = v16;
            HIDWORD(v18) = *(_DWORD *)(a2 + 4);
            sub_11CA10((char *)a2, (char *)&v18);
            *(_BYTE *)(a1 + 40) = 1;
            sub_11CDA0((__int64)&v18);
          }
        }
      }
    }
  }
  return 0;
}

