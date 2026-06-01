unsigned __int64 __fastcall sub_1A3D0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r15
  bool v8; // zf
  _QWORD *v9; // rdi
  _QWORD *v10; // r14
  _QWORD *v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // [rsp+8h] [rbp-58h]
  __int64 v16; // [rsp+10h] [rbp-50h] BYREF
  __int128 v17; // [rsp+18h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]

  v18 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 )
  {
    v5 = *(unsigned int *)(a2 + 8);
    v7 = v3;
    v8 = *(_BYTE *)(a1 + 161) == 0;
    v9 = *(_QWORD **)(a1 + 512);
    if ( v8 )
    {
      v16 = 0;
      v17 = 0;
      if ( v9 )
      {
        v12 = sub_14BD0(v9, v5, (__int64 *)(a1 + 224));
        if ( v12 )
        {
          qlseek();
          sub_1A240(&v16, (__int64)v12, -1, v7, v15, "symbol table size", 0);
        }
      }
      else
      {
        v13 = sub_14A00(a1, *(_DWORD *)(a1 + 128));
        sub_14A00(a1, v5);
        qlseek();
        sub_1A240(&v16, *(_QWORD *)(a1 + 48), -1, v7, v13, "symbol table size", 0);
      }
      sub_15380(a3, v16, v17, *(_BYTE *)(a1 + 160));
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
    }
    else
    {
      if ( v9 )
      {
        v10 = sub_14BD0(v9, *(unsigned int *)(a2 + 8), (__int64 *)(a1 + 224));
        if ( v10 )
        {
          qlseek();
          sub_1A020(a3, (__int64)v10, -1, v7, v16, "symbol table size", 0);
        }
      }
      else
      {
        v14 = sub_14A00(a1, *(_DWORD *)(a1 + 128));
        sub_14A00(a1, v5);
        qlseek();
        sub_1A020(a3, *(_QWORD *)(a1 + 48), -1, v7, v14, "symbol table size", 0);
      }
      if ( *(_BYTE *)(a1 + 160) )
        return sub_13760(*a3, a3[1]);
    }
  }
  return v18 - __readfsqword(0x28u);
}

