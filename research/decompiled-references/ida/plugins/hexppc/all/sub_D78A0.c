__int64 __fastcall sub_D78A0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  bool v5; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+10h] [rbp-38h] BYREF
  __int128 v16; // [rsp+18h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-20h]

  v5 = *(_BYTE *)a2 == 4;
  v17 = __readfsqword(0x28u);
  if ( v5 && (v8 = *(_QWORD *)(a2 + 8), (unsigned int)(*(_DWORD *)v8 - 56) <= 1) && *(_BYTE *)(v8 + 64) == 8 )
  {
    *(_BYTE *)(a1 + 96) = 1;
    *(_BYTE *)(a1 + 40) = 1;
  }
  else if ( a4 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v14[0] = 0;
    v14[1] = 0;
    v15 = 0;
    v16 = 0;
    sub_1245A0(v9, v14, a2, 1);
    sub_60C00((__int64 *)(a1 + 56), v14, v10, v11, v12, v13);
    sub_313AE0(a1 + 72, &v15);
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      qfree();
    }
    qfree();
  }
  return 0;
}

