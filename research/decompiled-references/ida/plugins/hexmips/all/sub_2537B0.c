__int64 __fastcall sub_2537B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 i; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdi
  __int64 v13; // [rsp+10h] [rbp-98h] BYREF
  __int128 v14; // [rsp+18h] [rbp-90h]
  __int64 (__fastcall **v15)(int, int, int, int, int, int, char); // [rsp+30h] [rbp-78h] BYREF
  __int64 v16; // [rsp+38h] [rbp-70h]
  __int128 v17; // [rsp+40h] [rbp-68h]
  unsigned int v18; // [rsp+50h] [rbp-58h]
  __int64 v19; // [rsp+58h] [rbp-50h]
  char v20; // [rsp+60h] [rbp-48h]
  char v21; // [rsp+61h] [rbp-47h]
  __int64 *v22; // [rsp+68h] [rbp-40h]
  unsigned __int64 v23; // [rsp+78h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 136);
  v23 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = (_QWORD *)(*(_QWORD *)(a1 + 128) + 32 * i);
      if ( *v6 )
      {
        v6[1] = 0;
        qfree();
      }
    }
  }
  *(_QWORD *)(a1 + 136) = 0;
  v20 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v15 = &off_4C06F8;
  v21 = 1;
  v22 = &v13;
  v17 = 0;
  sub_264720(a1, &v15, a3);
  v7 = v18;
  *(_DWORD *)(a1 + 152) = v18;
  sub_32DC00(a1, &v13, v7, a1 + 128);
  *(_DWORD *)(a1 + 108) |= 2u;
  sub_339220(*(_QWORD *)(a1 + 216), 14, a1, v8, v9, v10);
  v11 = *(_QWORD *)(a1 + 216);
  if ( (*(_BYTE *)(v11 + 452) & 0xC0) == 0 )
    sub_3B0420(v11, a1);
  sub_3A0EF0(a1);
  v15 = &off_4C3D58;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return 1;
}

