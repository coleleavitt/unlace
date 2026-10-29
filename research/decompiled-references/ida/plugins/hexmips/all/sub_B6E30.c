__int64 __fastcall sub_B6E30(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // edx
  __int64 v6; // rax
  __int64 *v7; // rbx
  int v8; // esi
  __int64 v9; // rax
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 9 && *(_BYTE *)(a1 + 56) == a4 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    if ( v5 != -1 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      v7 = *(__int64 **)(a1 + 48);
      v10[0] = 0;
      v8 = *(_DWORD *)(v6 + 8) + 16 * *(_DWORD *)(v6 + 16);
      v9 = *(_QWORD *)(a1 + 8);
      v10[1] = 0;
      sub_5FC80(v10, *(_DWORD *)(*(_QWORD *)(v9 + 1504) + 68LL) + v8, v5);
      v11 = 0;
      v12 = 0;
      sub_60080(v7, v10);
      sub_311F30(v7 + 2, &v11);
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree();
      }
      qfree();
    }
  }
  return 0;
}

