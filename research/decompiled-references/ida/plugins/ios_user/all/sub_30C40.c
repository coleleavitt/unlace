unsigned __int64 __fastcall sub_30C40(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  unsigned __int64 v8; // r13
  unsigned __int64 v10; // r15
  bool v11; // zf
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  _QWORD *v15; // r14
  __int64 v16; // r14
  __int64 v17; // r14
  __int64 v18; // [rsp+0h] [rbp-60h]
  __int64 v19; // [rsp+8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+10h] [rbp-50h] BYREF
  __int128 v21; // [rsp+18h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 12);
  if ( v6 )
  {
    v8 = *(unsigned int *)(a2 + 8);
    v10 = v6;
    v11 = *(_BYTE *)(a1 + 161) == 0;
    v12 = *(_QWORD **)(a1 + 512);
    if ( v11 )
    {
      v20 = 0;
      v21 = 0;
      if ( v12 )
      {
        v15 = sub_28FD0(v12, v8, (__int64 *)(a1 + 224), (__int64)&v19, a5, a6, v18, v19, v20);
        if ( v15 )
        {
          qlseek();
          sub_30AB0(&v20, (__int64)v15, -1, v10, v19, "symbol table size", 0);
        }
      }
      else
      {
        v16 = sub_28D00(a1, *(_DWORD *)(a1 + 128));
        sub_28D00(a1, v8);
        qlseek();
        sub_30AB0(&v20, *(_QWORD *)(a1 + 48), -1, v10, v16, "symbol table size", 0);
      }
      sub_2A9C0(a3, v20, v21, *(_BYTE *)(a1 + 160));
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree();
      }
    }
    else
    {
      if ( v12 )
      {
        v13 = sub_28FD0(v12, *(unsigned int *)(a2 + 8), (__int64 *)(a1 + 224), (__int64)&v20, a5, a6, v18, v19, v20);
        if ( v13 )
        {
          qlseek();
          sub_30890(a3, (__int64)v13, -1, v10, v20, "symbol table size", 0);
        }
      }
      else
      {
        v17 = sub_28D00(a1, *(_DWORD *)(a1 + 128));
        sub_28D00(a1, v8);
        qlseek();
        sub_30890(a3, *(_QWORD *)(a1 + 48), -1, v10, v17, "symbol table size", 0);
      }
      if ( *(_BYTE *)(a1 + 160) )
        return sub_26820(*a3, a3[1]);
    }
  }
  return v22 - __readfsqword(0x28u);
}

