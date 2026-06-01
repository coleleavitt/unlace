__int64 __fastcall sub_BB030(__int64 a1, __int64 a2, __int64 a3, char a4, double a5)
{
  int v6; // edx
  __int64 v7; // rax
  __int64 *v8; // rbx
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v14; // [rsp+10h] [rbp-38h] BYREF
  __int128 v15; // [rsp+18h] [rbp-30h]
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 9 && *(_BYTE *)(a1 + 56) == a4 )
  {
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 != -1 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v8 = *(__int64 **)(a1 + 48);
      v13[0] = 0;
      v9 = *(_DWORD *)(v7 + 8) + 16 * *(_DWORD *)(v7 + 16);
      v10 = *(_QWORD *)(a1 + 8);
      v13[1] = 0;
      sub_63E80(v13, *(_DWORD *)(*(_QWORD *)(v10 + 1504) + 68LL) + v9, v6, a5);
      v14 = nullptr;
      v15 = 0;
      sub_64280(v8, v13, 0.0);
      sub_316CB0(v8 + 2, &v14, v11, v12);
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree((__int64)v14);
      }
      qfree(v13[0]);
    }
  }
  return 0;
}

