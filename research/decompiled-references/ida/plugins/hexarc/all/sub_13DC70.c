bool __fastcall sub_13DC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  __int64 v7; // rbp
  int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v15; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  sub_13DA70((__int64 *)a1, nullptr, (unsigned __int64)&v15, a4, a5, a6);
  v6 = v15;
  if ( *(int *)(a1 + 64) > 1 )
  {
    v7 = 8;
    v8 = 1;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + v7);
        if ( (unsigned __int8)sub_16BCC0(v9) )
          break;
        ++v8;
        v7 += 8;
        if ( *(_DWORD *)(a1 + 64) <= v8 )
          return v6 > 0;
      }
      ++v6;
      ++v8;
      v7 += 8;
      sub_AF120(v9, 0, v10, v11, v12, v13);
      v15 = v6;
    }
    while ( *(_DWORD *)(a1 + 64) > v8 );
  }
  return v6 > 0;
}

