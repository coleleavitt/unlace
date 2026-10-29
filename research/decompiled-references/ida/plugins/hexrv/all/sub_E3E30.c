__int64 __fastcall sub_E3E30(__int64 *a1, _QWORD *a2, int a3, __int64 a4)
{
  unsigned int v4; // r13d
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rax
  _QWORD v12[2]; // [rsp+10h] [rbp-60h] BYREF
  __int64 v13; // [rsp+20h] [rbp-50h]
  __int128 v14; // [rsp+28h] [rbp-48h]
  unsigned __int64 v15; // [rsp+38h] [rbp-38h]

  v4 = 0;
  v15 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a4 + 4) == *(_DWORD *)(*(_QWORD *)(a1[2] + 112) + 80LL) )
  {
    v8 = *a1;
    v12[0] = 0;
    v12[1] = 0;
    v13 = 0;
    v14 = 0;
    sub_11F9E0(v8, v12, a4, 0, 4294901760LL);
    v9 = sub_124C90(*a1, (unsigned int)v12, a3, 0, 0, 0, 257);
    if ( v9 )
    {
      if ( *(_DWORD *)v9 == 4 )
      {
        v4 = sub_1216A0(v9 + 64, a4, 0);
        if ( (_BYTE)v4 && *(_BYTE *)(v9 + 32) == 10 && (v10 = *(_QWORD *)(v9 + 40), *(_BYTE *)v10 == 5) )
          *a2 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL);
        else
          v4 = sub_E3E30(a1, a2, *(_QWORD *)(v9 + 16), v9 + 32);
      }
    }
    else
    {
      v4 = 0;
    }
    if ( v13 )
    {
      *(_QWORD *)&v14 = 0;
      qfree();
    }
    qfree();
  }
  return v4;
}

