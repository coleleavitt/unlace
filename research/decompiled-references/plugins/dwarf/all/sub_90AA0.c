unsigned __int64 __fastcall sub_90AA0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // eax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r15
  bool v8; // zf
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r14
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-58h]
  __int64 v20; // [rsp+10h] [rbp-50h] BYREF
  __int128 v21; // [rsp+18h] [rbp-48h]
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 )
  {
    v5 = *(unsigned int *)(a2 + 8);
    v7 = v3;
    v8 = *(_BYTE *)(a1 + 161) == 0;
    v9 = *(_QWORD **)(a1 + 512);
    if ( v8 )
    {
      v20 = 0;
      v21 = 0;
      if ( v9 )
      {
        v13 = sub_82BD0(v9, v5, (__int64 *)(a1 + 224));
        v14 = (__int64)v13;
        if ( v13 )
        {
          qlseek(v13, v5, 0);
          sub_90910(&v20, v14, -1, v7, v19, (__int64)"symbol table size", 0);
        }
      }
      else
      {
        v15 = sub_82960(a1, *(_DWORD *)(a1 + 128));
        v16 = sub_82960(a1, v5);
        qlseek(*(_QWORD *)(a1 + 48), v16, 0);
        sub_90910(&v20, *(_QWORD *)(a1 + 48), -1, v7, v15, (__int64)"symbol table size", 0);
      }
      sub_8E040(a3, v20, v21, *(_BYTE *)(a1 + 160));
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20);
      }
    }
    else
    {
      if ( v9 )
      {
        v10 = sub_82BD0(v9, *(unsigned int *)(a2 + 8), (__int64 *)(a1 + 224));
        v11 = (__int64)v10;
        if ( v10 )
        {
          qlseek(v10, v5, 0);
          sub_906F0(a3, v11, -1, v7, v20, (__int64)"symbol table size", 0);
        }
      }
      else
      {
        v17 = sub_82960(a1, *(_DWORD *)(a1 + 128));
        v18 = sub_82960(a1, v5);
        qlseek(*(_QWORD *)(a1 + 48), v18, 0);
        sub_906F0(a3, *(_QWORD *)(a1 + 48), -1, v7, v17, (__int64)"symbol table size", 0);
      }
      if ( *(_BYTE *)(a1 + 160) )
        return sub_809E0(*a3, a3[1]);
    }
  }
  return v22 - __readfsqword(0x28u);
}
